import pathlib
import subprocess
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

import gymnasium as gym
import uppaal_gym

from stable_baselines3.common.evaluation import evaluate_policy
from stable_baselines3.common.env_util import make_vec_env

from viper.viper import viper
from viper.wrappers import ShieldOracleWrapper, SB3Wrapper

from experiments.utils import compile_shield, unpack_shield, train_uppaal_controller, my_evaluate_policy

from trees.loaders import SklearnLoader
from trees.models import QTree, DecisionTree
from trees.wrappers import ShieldedTree


def make_viper(env_id, oracle, variables, actions, env_kwargs, verbose=1):
    """
    Set `verbose=2' to get VIPER status info
    """

    policy = viper(
        oracle, env_id, n_iter=10, env_kwargs=env_kwargs, verbose=verbose > 1
    )
    loader = SklearnLoader(policy.tree, variables, actions)
    tree = DecisionTree(loader.root, loader.variables, loader.actions)

    return tree


def make_wrapped_shield(sdata, store_path, try_load=False):
    if try_load:
        try:
            shield = DecisionTree.load_from_file(store_path)
        except FileNotFoundError:
            pass
    else:
        tree = DecisionTree.from_grid(
            sdata.grid,
            sdata.variables,
            np.arange(sdata.n_actions),
            sdata.granularity,
            np.array(sdata.bounds).T,
            bvars=sdata.bvars
        )

        shield = tree.minimize(max_iter=20, verbose=True)
        shield.save_as(store_path)

    # build action map (what shield action corresponds to which allowed
    # policy actions?)
    amap = [0] * len(sdata.id_to_actionset)
    for i, acts in sdata.id_to_actionset.items():
        amap[int(i)] = tuple(np.argwhere(acts).T[0])

    return ShieldOracleWrapper(shield, amap, sdata.n_actions)


def shield_experiment(model_dir, env_kwargs={}, callback=None, verbose=False):
    results = []

    # load shield
    sdata = unpack_shield(model_dir + 'shields/synthesized.zip')

    # construct shield
    wrapped_shield = make_wrapped_shield(
        sdata, model_dir + 'shields/mp_shield.json', try_load=False
    )

    # construct viper shield
    viper_tree = make_viper(
        sdata.env_id, wrapped_shield, sdata.variables,
        np.arange(sdata.n_actions), env_kwargs, verbose=verbose
    )

    # evaluate viper
    _, _, v_info = my_evaluate_policy(
        SB3Wrapper(viper_tree),
        gym.make(sdata.env_id, **env_kwargs),
        n_eval_episodes=1000,
        callback=callback
    )

    # evaluate maxpartitions
    _, _, mp_info = my_evaluate_policy(
        wrapped_shield,
        gym.make(sdata.env_id, **env_kwargs),
        callback=callback
    )

    # store results
    results = [
        np.prod(sdata.grid.shape),       # org size
        wrapped_shield.shield.n_leaves,     # maxparts size
        mp_info['deaths'].sum() == 0,       # maxparts safe?
        (mp_info['deaths'] > 0).sum(),      # maxparts unsafe runs
        mp_info['deaths'].sum(),            # maxparts deaths
        viper_tree.n_leaves,                # viper size
        v_info['deaths'].sum() == 0,        # viper safe?
        (v_info['deaths'] > 0).sum(),       # viper unsafe runs
        v_info['deaths'].sum(),             # viper deaths

    ]
    return results, wrapped_shield, sdata


def cont_exp(
    wrapped_shield, model_dir, sdata, strat_name,
    env_kwargs={}, callback=None, verbose=False
):

    # shield as tree
    stree = wrapped_shield.shield

    # get path to oracle strategy from UPPAAL
    if pathlib.Path(model_dir + strat_name).is_file():
        oracle_path = model_dir + strat_name
    else:
        params = ', '.join([f'double {v}' for v in stree.variables])
        c_path = model_dir + '/shields/shield.c'
        stree.export_to_c_code(signature=f'shield({params})', out_fp=c_path)
        compile_shield(model_dir + '/shields/', 'shield')
        oracle_path = train_uppaal_controller(
            model_dir, out_name=strat_name
        )

    # convert UPPAAL oracle to decision tree
    qtree = QTree(oracle_path)
    tree = qtree.to_decision_tree()

    # minimize with CAAP
    ntree = tree.minimize(max_iter=20)

    # minimize with VIPER
    v_tree = make_viper(
        sdata.env_id, SB3Wrapper(qtree),
        stree.variables, stree.actions, env_kwargs, verbose=verbose
    )

    # evaluate VIPER
    v_perf, v_conf, v_info = my_evaluate_policy(
        SB3Wrapper(v_tree),
        gym.make(sdata.env_id, **env_kwargs),
        n_eval_episodes=1000,
        callback=callback
    )

    # evaluate caap
    mp_perf, mp_conf, mp_info = my_evaluate_policy(
        SB3Wrapper(ntree),
        gym.make(sdata.env_id),
        callback=callback
    )

    # store results
    results = [
        tree.n_leaves,                  # size of oracle

        ntree.n_leaves,                 # maxparts size
        (mp_info['deaths'] > 0).sum(),  # maxparts unsafe runs
        mp_info['deaths'].sum(),        # maxparts violations
        mp_perf,                        # maxparts performance
        mp_conf,                        # maxparts confidence

        v_tree.n_leaves,                # viper size
        (v_info['deaths'] > 0).sum(),   # viper unsafe runs
        v_info['deaths'].sum(),         # viper violations
        v_perf,                         # viper performance
        v_conf,                         # viper confidence
    ]

    return results, v_tree


def combined_exp(strategy, wrapped_shield, sdata):

    # combine strategy and shield
    shielded_strat = ShieldedTree(
        strategy, wrapped_shield.shield, wrapped_shield.act_map
    )

    # evaluate on antagonistic environment
    evil_perf, evil_conf, evil_info = my_evaluate_policy(
        SB3Wrapper(shielded_strat), gym.make(sdata.env_id, unlucky=True),
    )

    # store corrections and reset
    evil_corrections = shielded_strat.corrections
    shielded_strat.corrections = 0

    # evaluate on normal environment
    norm_perf, norm_conf, norm_info = my_evaluate_policy(
        SB3Wrapper(shielded_strat), gym.make(sdata.env_id)
    )
    norm_corrections = shielded_strat.corrections

    return [
        evil_perf, evil_conf, evil_corrections, evil_info['deaths'].sum(),
        norm_perf, norm_conf, norm_corrections, norm_info['deaths'].sum(),
    ]
