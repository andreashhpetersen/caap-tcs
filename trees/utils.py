import time
import operator
import numpy as np

from copy import copy, deepcopy
from itertools import product
from collections import defaultdict

from trees.nodes import Leaf, State


###### Misc

class performance:
    def __enter__(self):
        self.start = time.perf_counter()
        return self

    def __exit__(self, *args):
        self.stop = time.perf_counter()
        self.time = self.stop - self.start


def time_it(alg, *args, **kwargs):
    tic = time.perf_counter()
    out = alg(*args, *kwargs)
    toc = time.perf_counter()
    # print(f'finished in {toc - tic:0.4f} seconds')
    return out, toc - tic


def in_box(b, s, inclusive=True):
    if not isinstance(b, np.ndarray):
        b = np.array(b).T

    if not b.shape[-1] == 2:
        b = b.T

    op = operator.le if inclusive else operator.lt
    for i in range(len(s)):
        if not (b[i][0] < s[i] and op(s[i], b[i][1])):
            return False

    return True


def in_list(ls, ms):
    for b in ls:
        if in_box(b.state.constraints, ms):
            return True
    return False


def make_state(p_state, bounds):
    return bounds[np.arange(len(bounds)), p_state].T


def make_leaf(action, variables, state, cost=0):
    return Leaf(action, cost=cost, state=State(variables, constraints=state))


def has_overlap(ps1, ps2):
    """
    Returns `True` if the K-dimensional cubes given by `ps1` and `ps2` are
    overlapping in any way (has a non-empty intersection).
    """
    pmin1, pmax1 = ps1
    pmin2, pmax2 = ps2
    K = len(pmin1)

    for i in range(K):
        if min(pmax1[i], pmax2[i]) - max(pmin1[i], pmin2[i]) <= 0:
            return False

    return True


def breaks_box(box, breaker):
    p_min, p_max = breaker
    n_pmin, n_pmax = box

    remainder = 0
    for i in range(len(p_max)):
        if n_pmin[i] < p_max[i] and p_max[i] < n_pmax[i]:
            remainder += 1

        if n_pmin[i] < p_min[i] and p_min[i] < n_pmax[i]:
            remainder += 1

        if remainder > 1:
            return True
    return False


def cut_overlaps(ps_main, ps_to_cut, allow_multiple=False):
    """
    If `ps_main` and `ps_to_cut` has any overlap, return a tuple with the min
    and max points of `ps_to_cut` after the overlap has been cut away. Throws
    an `AssertionError` if more than one cut is needed and `allow_multiple` is
    `False`.
    """
    pmin, pmax = ps_main
    n_pmin, n_pmax = ps_to_cut
    K = len(pmin)
    assert K == len(pmax) == len(n_pmin) == len(n_pmax)

    if not has_overlap(ps_main, ps_to_cut):
        return ps_to_cut

    cuts = 0
    out_pmin, out_pmax = [], []
    for i in range(K):
        if pmax[i] > n_pmin[i] >= pmin[i] and n_pmax[i] > pmax[i]:
            cuts += 1
            out_pmin.append(pmax[i])
            out_pmax.append(n_pmax[i])

        elif pmin[i] < n_pmax[i] <= pmax[i] and n_pmin[i] < pmin[i]:
            cuts += 1
            out_pmin.append(n_pmin[i])
            out_pmax.append(pmin[i])

        else:
            out_pmin.append(n_pmin[i])
            out_pmax.append(n_pmax[i])

    if not allow_multiple:
        assert cuts < 2

    return out_pmin, out_pmax


def get_bbox(bs, K):
    """
    Get bounding box of `bs`
    """
    bbox = np.ones((K,2)) * [np.inf, -np.inf]
    for b in bs:
        for i in range(K):
            bbox[i,0] = min(bbox[i,0], b[i,0])
            bbox[i,1] = max(bbox[i,1], b[i,1])

    return bbox


def leaves_to_state_constraints(leaves):
    return np.array([l.state.constraints.copy() for l in leaves])


def get_edge_vals(bs, pad=1, broadcast=True, leaves=False):
    """
    Calculate the edge values of the in each dimension from the boxes in `bs`.
    The edges are the lowest/highest finite value of any box in `bs`, possibly
    padded with `pad` if the actual limit is infinite.

    If `broadcast=True`, the returned np.ndarray will have the same shape as
    `bs`, otherwise it will have the shape of a single box in `bs`.
    """
    if leaves:
        bs = leaves_to_state_constraints(bs)

    K = bs.shape[1]
    edges = np.zeros((K,2))

    for i in range(K):
        finite = bs[:,i,:][np.isfinite(bs[:,i,:])]

        if len(finite) == 0:
            minv = 0.0
            maxv = 1.0
        else:
            minv = finite.min() - pad
            maxv = finite.max() + pad

        edges[i] = [minv, maxv]

    assert (edges[:,0] < edges[:,1]).all()
    if broadcast:
        edges = np.repeat(np.expand_dims(edges, axis=0), bs.shape[0], axis=0)
    return edges


def set_edges(bs, pad=1, edges=None, inline=False, leaves=False):
    """
    Replace infinite limits in `bs` with finite edge values.
    """
    if leaves:
        bs = leaves_to_state_constraints(bs)

    if not inline and not leaves:
        bs = bs.copy()

    if edges is None:
        edges = get_edge_vals(bs, pad=pad)

    if not bs.shape == edges.shape:
        edges = np.repeat(np.expand_dims(edges, axis=0), bs.shape[0], axis=0)

    infs = np.isinf(bs)
    bs[infs] = edges[infs]
    return bs


def calc_volume(bs, leaves=False):
    """
    Calculate the volume of the boxes in `bs`. If `leaves=True`, then `bs` is
    expected to be a list of `trees.nodes.Leaf` objects.
    """
    if leaves:
        bs = leaves_to_state_constraints(bs)
        bs = set_edges(bs)

    if len(bs.shape) == 2:
        bs = np.expand_dims(bs, axis=0)
    return np.prod(bs[:,:,1] - bs[:,:,0], axis=1).sum()


def compare_volumes(ls1, ls2):
    edges = get_edge_vals(ls1, leaves=True, broadcast=False)
    bs = set_edges(ls2, edges=edges, leaves=True)

    vol1 = calc_volume(ls1, leaves=True)
    vol2 = calc_volume(bs)

    return np.isclose(vol1, vol2), (vol1, vol2)


def is_consistent(tree, ntree, verbose=False):
    bad_leaves = []
    for leaf in ntree.leaves():
        s = leaf.state
        expected = set([leaf.action])
        if tree.get_for_region(s[:,0], s[:,1], only_actions=True) != expected:
            if verbose:
                bad_leaves.append(leaf)
            else:
                return False
    return (len(bad_leaves) == 0, bad_leaves) if verbose else True


def transform_bounds(tree, pad=1, inline=False):
    """
    Transform the bounds of `tree` to simple integer values in the range
    [0, N*`pad`], where N is the number of bounds in the dimension that has the
    most bounds. If `inline=True`, the transformation is performed on the
    provided tree, else a new tree is returned.
    """
    bounds = tree.get_bounds()
    bmap = [{} for _ in range(len(tree.variables))]
    upper = (max([len(bs) for bs in bounds])) * pad

    for v in range(len(bounds)):
        for i, b in enumerate(bounds[v]):
            bmap[v][b] = upper if i == len(bounds[v]) - 1 else i * pad

    def rec(n, bmap):
        n.bound = bmap[n.var_id][n.bound]

    if not inline:
        tree_copy = tree.copy()
        tree_copy.root.visitor(rec, bmap)
        tree.set_state()
        return tree_copy
    else:
        tree.root.visitor(rec, bmap)
        tree.set_state()
