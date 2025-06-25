import numpy as np

from collections import defaultdict
from trees.nodes import Node, Leaf, State
from trees.visualize import draw_partitioning, draw_graph, plot_voxels
from trees.utils import has_overlap, cut_overlaps, make_state,\
    make_leaf, breaks_box, leaves_to_state_constraints, performance


def init_bounds(regions, K):
    """
    Create a matrix that stores all the constituent bounds of `regions' in
    rows (one per K dimensions), sorted in increasing order. Returns a
    dictionary, `lmap', that maps node ids to their min and max bounds,
    the matrix itself and the total number of bounds.
    """
    lmap = defaultdict(list)
    bound_to_nodes = [defaultdict(list) for _ in range(K)]

    # create mapping from a bound value to a list of node (ids) that has
    # that bound as part of its state
    # K x N operation
    for node_id, state in regions:
        for i in range(K):
            lmap[node_id].append([None, None])
            bound_to_nodes[i][state[i,0]].append(node_id)
            bound_to_nodes[i][state[i,1]].append(node_id)

    # sort bounds in each dimension i
    # K x M operation (where M is the max number of bounds in any dimension)
    sorted_bounds = [sorted(list(bound_to_nodes[i].keys())) for i in range(K)]

    # make lmap map from a node_id to an index pointer representation of the
    # state of the node. Also get number of bounds in each dimension.
    # K x M x 2 operation
    n_bounds = np.zeros((K,), dtype=np.int32)
    for i in range(K):
        n_bounds[i] = len(sorted_bounds[i]) - 1
        for idx, bound in enumerate(sorted_bounds[i]):
            for node_id in bound_to_nodes[i][bound]:
                node_bounds = lmap[node_id]

                # check wether to set min or max bound
                m = 0 if node_bounds[i][0] is None else 1
                node_bounds[i][m] = idx

    for k, v in lmap.items():
        lmap[k] = np.array(v).T

    M = n_bounds.max()
    for i in range(K):
        sorted_bounds[i] = np.pad(
            sorted_bounds[i],
            (0, int(M - n_bounds[i])),
            mode='empty'
        )

    return lmap, np.array(sorted_bounds), n_bounds


def update_track_tree(track, state):
    """
    Make a leaf node from `state' and add it to the `track' tree
    """
    leaf = make_leaf(1, track.variables, state)
    if track.root is None:
        track.root = Node.make_node_from_leaf(leaf, track.variables, sentinel=0)
    else:
        track.put_leaf(leaf, prune=True)


def update_region_bounds(p_state, state, tree, lmap):
    """
    Update the mapping from node ids to index vectors
    """
    parts = tree.predict_for_region(state[:,0], state[:,1], node_ids=True)
    for nid in parts:
        lmap[nid] = cut_overlaps(p_state, lmap[nid])


def is_explored(min_state, max_state, tree):
    """
    Returns `True` if any leaf in `tree` intersecting with the region given by
    `min_state` and `max_state` is assigned the action 1
    """
    root = tree.root
    if root is None:
        return False

    stack = [root]
    while len(stack) > 0:
        node = stack.pop()
        if node.is_leaf:
            if node.action == 1:
                return True
        else:

            # is this numerically sound? is it an issue?
            if min_state[node.var_id] < node.bound:
                stack.append(node.low)

            if max_state[node.var_id] > node.bound:
                stack.append(node.high)

    return False


def find_unexplored_state(node):
    """
    Explore children of `node` in a left-leaning depth-first manner until a
    leaf with action 0 is found and returned
    """
    stack = [node]
    while len(stack) > 0:
        node = stack.pop()
        if node.is_leaf:
            if node.action == 0:
                return node.state
        else:
            stack.append(node.high)
            stack.append(node.low)
    return None


def get_next_node_id(tree, track):
    """
    Finds the id of the next node in `tree` with action == 1 in the `track`
    tree (which means that it is not explored)
    """
    if track.root is None:
        return tree.minimum_node_id()

    state = find_unexplored_state(track.root)
    if state is None:
        return None
    else:
        return tree.predict_node_id(state[:,0], cheat=True)


def caap(tree, track):
    """
    Return a list with a coarser partitioning than that which `tree' induces
    """
    K = tree.n_features

    partitions = tree.partitions()

    lmap, bounds, n_bounds = init_bounds(partitions, K)

    regions = []
    node_id = get_next_node_id(tree, track)

    while node_id is not None:

        # pointers to bounds
        pmin, pmax = lmap[node_id]

        # make state and check if it is explored
        state = make_state((pmin, pmax), bounds)
        min_state, max_state = state[:,0], state[:,1]

        # predict action
        action = tree.predict(max_state)

        # init array to keep track of exhausted dimensions and exhaust where
        # we are already on the edge of the state space
        exhausted = np.zeros((K,), dtype=np.bool)
        exhausted[np.array(pmax) == n_bounds] = 1

        # main loop
        healing = False
        cand_pmax = pmax.copy()
        while exhausted.sum() < K:

            # if we aren't healing, do an incremental expansion
            if not healing:
                dim = np.random.choice(np.flatnonzero(~exhausted))
                cand_pmax[dim] += 1

                diff_state = min_state.copy()
                diff_state[dim] = bounds[dim][pmax[dim]]

            # make candidate state
            cand_state = make_state(cand_pmax, bounds)

            # get partitions intersecting with current state (diff_state, cand_state)
            parts = tree.predict_for_region(diff_state, cand_state, node_ids=True)

            # invariants to be checked
            explored = is_explored(diff_state, cand_state, track)

            actions = set([tree.values[nid] for nid in parts])
            broken = [nid for nid in parts if breaks_box(lmap[nid], (pmin, cand_pmax))]

            # we either encountered explored territory or different actions
            if explored or set([action]) != actions:
                healing = False
                exhausted[dim] = 1
                cand_pmax[dim] = pmax[dim]

            # we broke one or more regions in more than 2 pieces
            elif len(broken) > 0:

                healing = True
                cand_update = max([lmap[nid][1][dim] for nid in broken])

                # terminal case, where no expansion in dim can heal the broken
                if cand_update <= cand_pmax[dim]:
                    healing = False
                    cand_pmax[dim] = pmax[dim]
                    exhausted[dim] = 1
                else:
                    cand_pmax[dim] = cand_update

            # we made a completely legit expansion in dim
            else:
                healing = False
                pmax = cand_pmax.copy()

                # we have reached the edge of dim
                if cand_pmax[dim] == n_bounds[dim]:
                    exhausted[dim] = 1

        # make new region and add it to the list
        reg = make_state((pmin, pmax), bounds)
        regions.append(make_leaf(action, tree.variables, reg))

        # update the track tree and the list of bounds
        update_track_tree(track, reg)
        update_region_bounds((pmin, pmax), reg, tree, lmap)

        # get the next node_id to explore from
        node_id = get_next_node_id(tree, track)

    return regions


### Functions for reconstructing a DecisionTree from a list of leaves ###


def split_leaf(leaf, v, c):
    """
    Split `leaf' into two new leaves in dimension `v' at bound `c'
    """
    vmin, vmax = leaf.state.min_max(v)

    if vmin < c < vmax:
        lstate = leaf.state.copy()
        hstate = leaf.state.copy()

        lstate.less_than(v, c)
        hstate.greater_than(v, c)

        low = Leaf(leaf.action, state=lstate)
        high = Leaf(leaf.action, state=hstate)

    elif vmax <= c:
        low, high = leaf, None

    else:  # vmin > c
        low, high = None, leaf

    return low, high


def split_leaves_list(leaves, variables):
    """
    Split a list of leaves into two non-intersecting lists by a heuristic, that
    tries to balance making the split as equal as possible while not having to
    cut to many leaves in two.
    """

    # map each variable to a sorted list of indicies of the leaves in `leaves'
    # where the sorting is done according to maximum value of the respective
    # variable for that leaf
    max_sorted = {
        # the variable is key, the list is the value
        v: sorted(
            # this just generates indicies from [0, 1, ..., len(leaves) - 1]
            range(len(leaves)),

            # this sorts the above indicies in ascending order according to the
            # maximum value of v in the box that the index corresponds to
            key=lambda x: list(leaves[x].state.min_max(v))[::-1]
        )

        # iterate the variables
        for v in variables
    }

    # store potential cuts here
    cuts = []

    # go through each variable
    for v in variables:

        # list of indicies of entries in `leaves' sorted according to their max
        # value for the variable `v'
        curr_l = max_sorted[v]

        # go through each index in the sorted list
        for i in range(len(curr_l) - 1):

            # this is the lowest max value for v in the rest of the list (ie.
            # leaves[curr_l[i]].state.max(v) <= leaves[curr_l[j]].state.max(v)
            # for all j > i)
            max_v = leaves[curr_l[i]].state.max(v)

            if max_v == leaves[curr_l[i+1]].state.max(v):
                continue

            # ideally, we'd split at i == len(leaves) / 2, so we start by
            # defining impurity as the difference between `i' and the optimal
            # value (the halfway point)
            impurity = abs((len(leaves) / 2) - (i + 1))

            # look at the rest of curr_l (with large max values for v)
            for j in range(i + 1, len(curr_l)):

                # if the min value for v in curr_l[j] is less that max_v, we
                # know that the box will be cut in 2, since it's max value for
                # v by design must be greater than max_v
                if leaves[curr_l[j]].state.min(v) < max_v:
                    impurity += 1

            # add the triplet to our list of possible cuts
            cuts.append((v, i, impurity))

    # all leaves had same action
    if len(cuts) == 0:
        return Leaf(leaves[0].action)

    # sort according to impurity and take the 'most pure' cut
    v, b_id, _ = sorted(cuts, key=lambda x: x[2])[0]

    # grab that optimal value
    max_val = leaves[max_sorted[v][b_id]].state.max(v)

    # separate the leaves into list of those that are lower than our cut, those
    # that are higher or both if it falls on both sides of the cut
    low, high = [], []
    for b in leaves:
        l, h = split_leaf(b, v, max_val)
        if l is not None:
            low.append(l)
        if h is not None:
            high.append(h)

    # something went wrong if we end up here
    assert not (len(low) == 0 or len(high) == 0)

    # create the new branch node with a cut on v <= max_val
    return (v, max_val), low, high


def make_branch_node(leaves, variables, vmap):

    # only one leaf, return it
    if len(leaves) == 1:
        return Leaf(leaves[0].action)

    split = split_leaves_list(leaves, variables)

    # all leaves had same action, so just return leaf
    if isinstance(split, Leaf):
        return split

    # split on v <= bound
    (v, bound), low_ls, high_ls = split

    # make child nodes
    low = make_branch_node(low_ls, variables, vmap)
    high = make_branch_node(high_ls, variables, vmap)

    # return branch node
    return Node(v, vmap[v], bound, low, high)


def leaves_to_root(leaves, variables):
    """
    Arrange the leaves in `leaves' into a tree and return the root
    """
    vmap = leaves[0].state.var2id
    root = make_branch_node(leaves, variables, vmap)
    return root.prune()
