import json
import pydot
import pathlib
import operator
import numpy as np

from copy import deepcopy
from random import shuffle
from numpy.typing import ArrayLike
from collections import defaultdict

from trees.encoders import NpEncoder
from trees.loaders import UppaalLoader
from trees.minimization import caap, leaves_to_root
from trees.nodes import Node, Leaf, State
from trees.visualize import draw_partitioning
from trees.utils import performance


class MpTree:
    def __init__(self, tree, FMIN=None, FMAX=None):
        self.variables = tree.variables
        self.actions = tree.actions

        self.children_low = []
        self.children_high = []
        self.features = []
        self.values = []
        self.thresholds = []

        self.n_leaves = 0
        self.n_features = len(tree.variables)

        ones = np.ones((self.n_features,))
        if FMIN is not None:
            try:
                self.FMIN = ones * np.array(FMIN)
            except ValueError:
                raise ValueError(
                    f'FMIN must either be scalar or list of size `n_features`'
                )
        else:
            self.FMIN = -ones * np.inf

        if FMAX is not None:
            try:
                self.FMAX = ones * np.array(FMAX)
            except ValueError:
                raise ValueError(
                    f'FMAX must either be scalar or list of size `n_features`'
                )
        else:
            self.FMAX = ones * np.inf

        self._build_tree(tree.root, 0)

    @property
    def size(self):
        return (self.n_leaves * 2) - 1

    def is_leaf(self, node_id):
        return self.children_low[node_id] == self.children_high[node_id]

    def leaves(self):
        return np.argwhere(np.array(self.children_low) < 0).flatten()

    def partitions(self):
        state = np.vstack((
            np.ones((self.n_features,)) * self.FMIN,
            np.ones((self.n_features,)) * self.FMAX
        )).T
        collect = []
        self._get_partitions(0, state, collect)
        return collect

    def _get_partitions(self, node_id, state, collect):
        if self.is_leaf(node_id):
            collect.append((node_id, state))
            return

        f = self.features[node_id]
        t = self.thresholds[node_id]

        lstate = state.copy()
        hstate = state.copy()

        lstate[f,1] = t
        hstate[f,0] = t

        self._get_partitions(self.children_low[node_id], lstate, collect)
        self._get_partitions(self.children_high[node_id], hstate, collect)

    def minimum_node_id(self):
        node = 0
        while not self.is_leaf(node):
            node = self.children_low[node]

        return node

    def predict(self, state):
        return self.values[self._predict(state, 0)]

    def predict_node_id(self, state, cheat=False):
        return self._predict(state, 0, cheat)

    def _predict(self, state, node_id, cheat=False):
        if self.is_leaf(node_id):
            return node_id

        op = operator.lt if cheat else operator.le
        if op(state[self.features[node_id]], self.thresholds[node_id]):
            return self._predict(state, self.children_low[node_id], cheat)
        else:
            return self._predict(state, self.children_high[node_id], cheat)

    def predict_for_region(self, min_state, max_state, node_ids=False):
        """
        Predict actions in the area defined by `]min_state, max_state]`. If
        `node_ids` is True, return the node ids in the region instead.

        Parameters
        ----------
        min_state : array_like
            The k-dimensional minimum state
        max_state : array_like
            The k-dimensional maximum state
        node_ids : bool
            Flag to determine wether to return actions or node ids

        Returns
        -------
        predictions : set
            Either a set of actions in the given region or a list of node ids
        """
        res = self._predict_for_region(min_state, max_state, 0, [])
        if node_ids:
            return res
        else:
            return set(self.values[node_id] for node_id in res)

    def _predict_for_region(self, min_state, max_state, node_id, collect):
        if self.is_leaf(node_id):
            collect.append(node_id)
            return collect

        if min_state[self.features[node_id]] < self.thresholds[node_id]:
            collect = self._predict_for_region(
                min_state,
                max_state,
                self.children_low[node_id],
                collect
            )

        if max_state[self.features[node_id]] > self.thresholds[node_id]:
            collect = self._predict_for_region(
                min_state,
                max_state,
                self.children_high[node_id],
                collect
            )

        return collect

    def _build_tree(self, node, node_id):
        self.children_low.append(-1)
        self.children_high.append(-1)
        self.features.append(-1)
        self.values.append(-1)
        self.thresholds.append(-1)

        if node.is_leaf:
            self.values[node_id] = int(node.action)
            self.n_leaves += 1
            return node_id, node_id
        else:
            self.features[node_id] = node.var_id
            self.thresholds[node_id] = node.bound

            low_id, max_id = self._build_tree(node.low, node_id + 1)
            self.children_low[node_id] = low_id

            high_id, max_id = self._build_tree(node.high, max_id + 1)
            self.children_high[node_id] = high_id

            return node_id, max_id


class DecisionTree:
    def __init__(self, root, variables, actions, meta={}):
        self.root = root
        self.variables = variables
        self.var2id = { v: i for i, v in enumerate(variables) }
        self.action_names = actions
        self.actions = [ i for i in range(len(actions)) ]
        self.act2id = { a: i for i, a in enumerate(actions) }
        self.meta = meta

        if not self.root is None:
            self.set_state()

    @property
    def size(self):
        if self.root is None:
            return 0

        return self.root.size

    @property
    def n_leaves(self):
        if self.root is None:
            return 0
        elif self.root.is_leaf:
            return 1

        return self.root.n_leaves

    @property
    def max_depth(self):
        return self.root._max_depth

    @property
    def min_depth(self):
        return self.root._min_depth

    def minimize(self, max_iter=10, verbose=False, early_stopping=True,
                 get_stats=False):
        if verbose:
            print('original tree: {} leaves'.format(self.n_leaves))

        smallest_root = self.root
        fewest_partitions = np.inf
        tree_to_minimize = self
        total_time = 0

        with performance() as total_p:
            for _ in range(max_iter):

                with performance() as p:
                    mp_tree = MpTree(tree_to_minimize)

                total_time += p.time
                if verbose:
                    print('auxiliary tree for maxparts created in {:0.2f}'.format(
                        p.time
                    ))

                # first run MaxPartitions
                with performance() as p:
                    track = DecisionTree.empty_tree(self.variables, self.actions)
                    partitions = caap(mp_tree, track)

                total_time += p.time
                if verbose:
                    print('found {} partitions'.format(len(partitions)))
                    print(f'in {p.time:0.2f} seconds')

                # then, convert paritions to a root node
                with performance() as p:
                    nroot = leaves_to_root(partitions, self.variables)

                total_time += p.time
                if verbose:
                    print('constructed tree {} leaves'.format(nroot.n_leaves))

                # update our best results
                fewest_partitions = min(fewest_partitions, len(partitions))
                if nroot.n_leaves < smallest_root.n_leaves:
                    smallest_root = nroot

                # break if no progress and early stopping is True
                elif fewest_partitions < len(partitions) and early_stopping:
                    break

                tree_to_minimize = DecisionTree(nroot, self.variables, self.actions)

                if verbose:
                    print()

        total_time = total_p.time

        if verbose:
            print('total minimization time: {:.2f}'.format(total_time))

        new_tree = DecisionTree(smallest_root, self.variables, self.actions)

        return new_tree

    def predict(self, state: ArrayLike, **kwargs) -> int:
        """
        Predict the best action based on a `state`.

        Parameters
        ----------
        state : array_like
            Input state

        Returns
        ------
        action_id : int
            The index of the preferred action
        """
        l = self.root.get(state)
        return l.action

    def path_to(self, state):
        path = self.root.path_to(state, [])
        return path

    def count_visits(self, data: list[ArrayLike]) -> None:
        """
        Count the number of visits to each leaf node when evaluating the states
        in `data` on the tree. Typically used as a preprocessing step before
        calling `Tree.emp_prune()`.

        Parameters
        ----------
        data : list of lists
            The sample states to evaluate.
        """
        leaves = self.leaves()
        for l in leaves:
            l.visits = 0

        for state in data:
            leaf = self.root.get(state)
            leaf.visits += 1

        for l in leaves:
            l.ratio = l.visits / len(data)

    def get_for_region(self, min_state, max_state, only_actions=False):
        """
        Return a list of all leaves in the region `[min_state, max_state]`. If
        `only_actions` is set to True, instead return a set of actions in the
        region.
        """
        collect = []
        self.root.get_for_region(min_state, max_state, collect)
        if only_actions:
            collect = set([l.action for l in collect])
        return collect

    def get_bounds(self):
        bounds = self.root.get_bounds([set() for _ in self.variables])
        return [sorted(list(vbounds)) for vbounds in bounds]

    def leaves(self) -> list[Leaf]:
        """
        Get a list of all leaves in the tree.
        """
        return self.root.get_leaves()

    def put_leaf_org(self, leaf, prune=False):
        self.root.put_leaf(leaf, State(self.variables), prune=prune)
        self.set_state()

    def put_leaf(self, leaf, prune=False):
        """
        Iterative implementation of put, which inserts a leaf by possibly
        splitting existing leaf nodes
        """
        stack = [self.root]
        while len(stack) > 0:
            node = stack.pop()
            if node.is_leaf:
                assert hasattr(node, 'parent')
                continue

            var_min, var_max = leaf.state.min_max(node.variable)
            if var_min < node.bound:
                if node.low.is_leaf:
                    node.low = self.split_leaf_node(node.low, leaf)
                    node.low.parent = node
                stack.append(node.low)

            if var_max > node.bound:
                if node.high.is_leaf:
                    node.high = self.split_leaf_node(node.high, leaf)
                    node.high.parent = node
                stack.append(node.high)

        self.root.prune()
        self.set_state()

    def prune(self):
        """
        Something is wrong here
        """
        stack = [self.root]
        while len(stack) > 0:
            node = stack.pop()
            if node.low.is_leaf and node.high.is_leaf:
                if node.low.action == node.high.action:
                    new_leaf = Leaf(node.low.action, cost=max(node.low.cost, node.high.cost))

                    if node.parent is None:
                        self.root = new_leaf
                    else:
                        if node.parent.low == node:
                            node.parent.low = new_leaf
                        else:
                            node.parent.high = new_leaf

                        stack.append(node.parent)

            else:
                if not node.low.is_leaf:
                    stack.append(node.low)

                if not node.high.is_leaf:
                    stack.append(node.high)

    def split_leaf_node(cls, old, new):
        """
        Make a branch node from a leaf node `old` through a split according to
        a randomly selected dimension in `new` leaf node. If no bound in `new`
        splits `old`, then return a leaf node with the same state as `old` but
        with action and cost value of `new`.
        """
        K = len(old.state.variables)
        for var in np.random.choice(range(K), size=(K,), replace=False):
            old_var_min, old_var_max = old.state.min_max(var)
            new_var_min, new_var_max = new.state.min_max(var)

            if old_var_min < new_var_min < old_var_max:
                new_node = old.split(var, new_var_min, old.state)
                new_node.low.parent = new_node
                new_node.high.parent = new_node
                return new_node

            if old_var_min < new_var_max < old_var_max:
                new_node = old.split(var, new_var_max, old.state)
                new_node.low.parent = new_node
                new_node.high.parent = new_node
                return new_node

        return Leaf(new.action, cost=new.cost, state=old.state.copy())

    def set_state(self):
        self.root.set_state(State(self.variables))

    def set_depth(self):
        self.root.set_depth()
        depths = np.array([l.depth for l in self.leaves()])
        self.max_depth = depths.max()
        self.avg_depth = depths.mean()

    def draw_partitioning(self, out_fp, xlim, ylim, flip_vars=False, lw=0.2, **kwargs):
        if len(self.variables) != 2:
            raise ValueError(
                f'cannot draw partitioning in other than 2 dimensions'
            )

        x, y = self.variables
        if flip_vars:
            x, y = y, x
        # x, y = (0, 1) if not flip_vars else (1, 0)
        draw_partitioning(
            self.leaves(), x, y, xlim, ylim,
            lw=lw, out_fp=out_fp, **kwargs
        )

    def save_as(self, filepath):
        """
        Save tree as json to a file at `filepath`.
        """
        data = {
            'variables': self.variables,
            'actions': self.actions,
            'root': self.root.as_dict(),
            'meta': self.meta
        }
        with open(filepath, 'w') as f:
            json.dump(data, f, indent=4)

    def get_uppaal_meta(self, loc='(1)'):
        roots = self.root.to_q_trees([self.act2id[a] for a in self.actions])
        meta = self.meta.copy()
        for action, root in roots:
            meta['regressors'][loc]['regressor'][action] = root.to_uppaal(
                self.var2id
            )

        return meta

    def export_to_uppaal(self, filepath, loc='(1)'):
        with open(filepath, 'w') as f:
            json.dump(self.get_uppaal_meta(loc=loc), f, indent=4)

    def export_to_c_code(self, signature='takeAction()', out_fp='tree.c'):
        s = 'int ' + signature + ' {\n '
        s += self.root.to_c_code(1)
        s += '\n}'

        with open(out_fp, 'w') as f:
            f.write(s)

    def copy(self):
        return deepcopy(self)

    def __copy__(self):
        return type(self)(
            self.root, self.variables, self.actions, self.size, self.meta
        )

    def __deepcopy__(self, memo):
        id_self = id(self)
        _copy = memo.get(id_self)
        if _copy is None:
            _copy = type(self)(
                deepcopy(self.root, memo),
                deepcopy(self.variables, memo),
                deepcopy(self.actions, memo),
                deepcopy(self.meta, memo),
            )
            memo[id_self] = _copy
        return _copy

    @classmethod
    def empty_tree(cls, variables, actions):
        """
        Initialize and return an empty tree with given `variables' and
        `actions'
        """
        return DecisionTree(None, variables, actions)

    @classmethod
    def load_from_file(cls, filepath):
        with open(filepath, 'r') as f:
            data = json.load(f)

        variables = data['variables']
        actions = data['actions']

        var2id = { v: i for i, v in enumerate(variables) }

        root = Node.build_from_dict(data['root'], var2id)
        root.set_state(State(variables))
        return DecisionTree(
            root,
            variables,
            actions,
            meta=data.get('meta', '')
        )

    @classmethod
    def parse_from_dot(cls, filepath, varmap):
        tree = DecisionTree.empty_tree(list(varmap.values()), [])

        graph = pydot.graph_from_dot_file(filepath)[0]

        nodes = []
        for node in graph.get_nodes():
            try:
                int(node.get_name())
            except ValueError:
                continue

            label = node.get_attributes()['label'].strip('"').split("<=")
            label = list(map(lambda x: x.strip(' '), label))
            if len(label) == 1:
                nodes.append(Leaf(int(float(label[0]))))
            else:
                var = varmap[label[0]]
                var_id = tree.var2id[var]
                bound = float(label[1])
                nodes.append(Node(var, var_id, bound))

        for edge in graph.get_edges():
            src = nodes[int(edge.get_source())]
            dst = nodes[int(edge.get_destination())]
            low = True if edge.get_label().strip('"') == 'True' else False

            if low:
                src.low = dst
            else:
                src.high = dst

        tree.root = nodes[0]
        tree.size = tree.root.size
        return tree

    @classmethod
    def from_grid(cls, grid, variables, actions, intervals, bounds, bvars=[]):
        root = DecisionTree._from_grid(grid, intervals, bounds, State(variables), bvars=bvars)
        return DecisionTree(root, variables, actions)

    @classmethod
    def _from_grid(cls, grid, intervals, bounds, state, bvars=[]):
        cut_dim = np.argmax(grid.shape)

        cut_idx = grid.shape[cut_dim] // 2

        if cut_idx == 0:
            return Leaf(grid.item(), state=state)

        if cut_dim in bvars:
            cut_val = 0.5
        else:
            blow, bhigh = bounds[cut_dim]
            smin, smax = state.min_max(cut_dim, min_limit=blow, max_limit=bhigh)
            cut_val = smin + cut_idx * intervals[cut_dim]

        low_state, high_state = state.split(cut_dim, cut_val)

        low_grid = np.take(grid, np.arange(cut_idx), axis=cut_dim)
        high_grid = np.take(grid, np.arange(cut_idx, grid.shape[cut_dim]), axis=cut_dim)

        low_node = DecisionTree._from_grid(low_grid, intervals, bounds, low_state, bvars=bvars)
        high_node = DecisionTree._from_grid(high_grid, intervals, bounds, high_state, bvars=bvars)

        node = Node(cut_dim, cut_dim, cut_val, low_node, high_node, state=state)
        return node


class QTree:
    def __init__(self, path: str):
        roots, actions, variables, meta = UppaalLoader.load(path)
        self.variables = variables
        self.meta = meta

        self.actions = [ int(a) for a in actions ]
        self.act2id = { a: i for i, a in enumerate(actions) }
        self.roots = roots

        for r, a in zip(roots, actions):
            if r.is_leaf:
                r.action = self.act2id[a]

            else:
                for leaf in r.get_leaves():
                    leaf.action = self.act2id[a]

        self._size = sum([r.size for r in self.roots])

    @property
    def size(self):
        """Get size of the tree in the number of leaves"""
        if not hasattr(self, '_size') or self._size is None:
            self._size = sum([r.size for r in self.roots])
        return self._size

    @property
    def n_leaves(self):
        """Get the combined number of leaves of all roots in the QTree"""
        return sum([r.n_leaves for r in self.roots])

    def predict(self, state: ArrayLike, maximize=False) -> int:
        """
        Predict the best action based on a `state`.

        Parameters
        ----------
        state : array_like
            Input state
        maximize : bool, optional
            If set to True, return the action with the largest Q value

        Returns
        ------
        action_id : int
            The index of the preferred action
        """
        state = np.array(state)
        a = len(state.shape) - 1

        qs = self.predict_qs(state)
        return np.argmax(qs, axis=a) if maximize else np.argmin(qs, axis=a)

    def predict_qs(self, state: ArrayLike) -> np.ndarray:
        """
        Predict the Q values for each action given `state`.

        Parameters
        ----------
        state : array_like
            Input state

        Returns
        -------
        q_values : numpy.ndarry
            An array of Q values for each action
        """
        squeeze = False
        state = np.array(state)
        if len(state.shape) == 1:
            squeeze = True
            state = np.array([state])

        qs = []
        for obs in state:
            qs.append([r.get(obs).cost for r in self.roots])

        qs = np.array(qs)
        if squeeze:
            qs = qs.squeeze()

        return qs

    def to_decision_tree(self) -> DecisionTree:
        """
        Create a decision tree representing a strategy equivalent to greedily
        selecting the smallest Q value for any state on this Q tree.

        Returns
        -------
        dt : DecisionTree
            A decision tree instance.
        """
        leaves = self.leaves()
        leaves.sort(key=lambda x: x.cost)
        root = Node.make_node_from_leaf(leaves[0], self.variables)
        for leaf in leaves[1:]:
            root = root.put_leaf(leaf, State(self.variables), prune=True)

        return DecisionTree(root, self.variables, self.actions, meta=self.meta)

    def leaves(self, sort='min') -> list[Leaf]:
        """
        Get all the leaves of the roots of this Q tree.

        Parameters
        ----------
        sort : str
            If set to `'min'` (default), sort the leaves ascendingly according
            to cost. If set to `'max'` sort descendingly. Otherwise, no sorting
            is applied.

        Returns
        -------
        leaves : list
            The list of all leaves in the Q tree.
        """
        leaves = [l for ls in [r.get_leaves() for r in self.roots] for l in ls]
        if sort == 'min':
            leaves.sort(key=lambda x: x.cost)
        elif sort == 'max':
            leaves.sort(key=lambda x: -x.cost)
        return leaves


class Shield:
    def __init__(
        self, grid, var_names, act_names, amap, bounds, granularity,
        bvars=[], **kwargs
    ):
        self.tree = None  # call self.make_tree() to set this

        self.grid = grid
        self.var_names = var_names
        self.act_names = act_names

        self.amap = amap
        self.bounds = bounds
        self.granularity = granularity
        self.bvars = bvars

        self.export_data = kwargs

    def make_tree(self, minimize=False, **kwargs):
        tree = DecisionTree.from_grid(
            self.grid,
            np.arange(len(self.var_names)),
            np.arange(len(self.amap)),
            self.granularity,
            self.bounds.T,
            bvars=self.bvars
        )

        if minimize:
            tree = tree.minimize(**kwargs)

        self.tree = tree

    def export_to_uppaal(self, out_fp):
        data = self.export_data
        data.update({
            'type': 'state->actionset',
            'variables': { i: name for i, name in enumerate(self.var_names) },
            'actions': { i: name for i, name in enumerate(self.act_names) },
            'id_to_actionset': { i: list(aset) for i, aset in enumerate(self.amap) },
            'tree': self.tree.root.as_dict(),
        })

        with open(out_fp, 'w') as f:
            json.dump(data, f, cls=NpEncoder)

    def draw_partitioning(self, out_fp):
        self.tree.draw_partitioning(out_fp, self.bounds[:,0], self.bounds[:,1])

    @classmethod
    def from_hypa_file(cls, fp):
        with open(fp, 'r') as f:
            data = json.load(f)

        # maps from id to string names
        var_dict = data['variables']
        act_dict = data['actions']

        # get names of variables and actions
        var_names = list(var_dict.values())
        act_names = list(act_dict.values())

        # number of variables and number of actions
        n_vars = len(var_dict)
        n_acts = data['n_actions']

        # we need to flip the dimensions because of how the hypa file is built
        size = np.array(data['size'], dtype=np.uint64)[::-1]
        bounds = np.array(data['bounds'], dtype=np.float64)
        granularity = np.array(data['granularity'], dtype=np.float64)

        # this is the grid that form the basis of the tree
        grid = np.array(data['cells']).reshape(size).T

        # find binary variables
        discrete = data['discrete_variables']
        bvars = [i for i in map(int, discrete) if grid.shape[i] == 2]

        # build action map here
        id2actionset = data['id_to_actionset']
        amap = [None] * len(id2actionset)
        for i, acts in id2actionset.items():
            amap[int(i)] = tuple(acts)

        # ekstra data needed for export
        version = data['version']
        state_mapping = data['state_mapping']

        return Shield(
            grid, var_names, act_names, amap, bounds, granularity,
            bvars=bvars, version=version, state_mapping=state_mapping
        )
