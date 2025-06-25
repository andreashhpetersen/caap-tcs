import os
import re
import sys
import json
import shutil
import pathlib
import tempfile
import subprocess
import numpy as np

import matplotlib.pyplot as plt
import gymnasium as gym
import uppaal_gym

from trees.models import QTree, DecisionTree
from trees.nodes import Node, Leaf
from trees.utils import performance


class Shield:
    def __init__(self, grid, meta):
        self.tree = None  # call self.make_tree() to set this

        self.grid = grid
        self.variables = meta['variables']
        self.env_kwargs = meta.get('env_kwargs', {})
        self.bounds = np.array(meta['bounds'])
        self.granularity = meta['granularity']
        self.n_actions = meta['n_actions']
        self.id_to_actionset = meta['id_to_actionset']
        self.env_id = meta['env_id']
        self.bvars = meta['bvars']
        self.amap = self.build_action_map()

    def build_action_map(self):
        """build action map (what shield action corresponds to which allowed
        policy actions?)"""
        amap = [0] * len(self.id_to_actionset)
        for i, acts in self.id_to_actionset.items():
            amap[int(i)] = tuple(np.argwhere(acts).T[0])

        return amap

    def make_tree(self, minimize=True, verbose=False, **kwargs):
        tree = DecisionTree.from_grid(
            self.grid,
            self.variables,
            np.arange(len(self.id_to_actionset)),
            self.granularity,
            self.bounds.T,
            bvars=self.bvars
        )
        if minimize:
            tree = tree.minimize(verbose=verbose, **kwargs)

        self.tree = tree

    def get_signature(self, function_name='shield'):
        params = ', '.join([f'double {v}' for v in self.variables])
        return f'int {function_name}({params})'

    def compile_so(self, so_path, c_path=None):
        with tempfile.TemporaryDirectory() as tmpdirname:
            if c_path is None:
                c_path, o_path = tmpdirname + '/s.c', tmpdirname + '/s.o'
            else:
                o_path = tmpdirname + '/s.o'

            self.tree.export_to_c_code(signature=self.get_signature(), out_fp=c_path)

            # make object
            args = ('gcc', '-c', '-fPIC', c_path, '-o', o_path)
            subprocess.run(args)

            # make shared object
            args = ('gcc', '-shared', '-o', so_path, o_path)
            subprocess.run(args)


def unpack_shield(path):
    with tempfile.TemporaryDirectory() as tmpdirname:
        shutil.unpack_archive(path, tmpdirname)
        with open(tmpdirname + '/meta.json', 'r') as f:
            shield_meta = json.load(f)

        grid = np.load(tmpdirname + '/grid.npy')

    return Shield(grid, shield_meta)


def train_uppaal_controller(model_dir, out_name='strategy.json'):
    out_path = pathlib.Path(model_dir, out_name)

    query_file = subprocess.run(
        ( f'{model_dir}/make_training_query.sh', out_path ),
        capture_output=True,
        encoding='utf-8'
    )

    evaluation_args = (
        os.environ['VERIFYTA_PATH'],
        f'{model_dir}/shielded_model.xml',
        query_file.stdout.strip('\n'),
        '--seed',
        str(np.random.randint(0, 10000)),
        '-sWqy'
    )
    subprocess.run(evaluation_args, capture_output=True)

    return out_path


def compile_shield(path, name):
    path = f'{path}/{name}'
    # make object
    args = (
        'gcc',
        '-c',
        '-fPIC',
        f'{path}.c',
        '-o',
        f'{path}.o'
    )
    subprocess.run(args)

    # make shared object
    args = (
        'gcc',
        '-shared',
        '-o',
        f'{path}.so',
        f'{path}.o'
    )
    subprocess.run(args)


def confidence(sample, z=1.96):
    return z * (sample.std() / np.sqrt(len(sample)))


def my_evaluate_policy(policy, env, n_eval_episodes=100, inspect=False, callback=None):
    all_rews = []
    all_obs = []
    all_deaths = []
    for episode in range(n_eval_episodes):
        obs, _ = env.reset()
        ep_rews, ep_obs, ep_deaths = [], [obs], 0

        terminated, trunc = False, False
        while not (terminated or trunc):
            action, _ = policy.predict(obs)
            if isinstance(action, list):
                action = action[0]
            nobs, reward, terminated, trunc, _ = env.step(action)
            ep_rews.append(reward)
            ep_obs.append(nobs)
            obs = nobs

            if terminated and not env.unwrapped.is_safe(obs):
                ep_deaths += 1
                if callback is not None:
                    terminated = callback(env.unwrapped)
                if inspect:
                    import ipdb; ipdb.set_trace()

        all_rews.append(np.sum(ep_rews))
        all_obs.append(np.vstack(ep_obs))
        all_deaths.append(ep_deaths)

    rews = np.array(all_rews)
    info = {
        'observations': all_obs,
        'deaths': np.array(all_deaths) ,
        'rewards': rews
    }
    return rews.mean(), confidence(rews), info


# callback functions for uppaal gym models

def bb_callback(env):
    env.p = 8 + np.random.uniform(0,2)
    env.v = 0
    terminated = False
    return terminated


def op_callback(env):
    env.v = 10
    terminated = False
    return terminated


def dc_callback(env):
    env.x1 = 0.35
    env.x2 = 15.0
    terminated = False
    return terminated
