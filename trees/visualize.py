import pydot
import numpy as np
import matplotlib
import matplotlib.pyplot as plt
import matplotlib.colors as mcolors
import matplotlib.patches as mpatches
import matplotlib.animation as animation

from matplotlib.patches import Rectangle
from matplotlib.collections import PatchCollection

####### Functions to add color gradients #######


def hex_to_RGB(hex):
    """
    #FFFFFF -> [255,255,255]
    """

    # Pass 16 to the integer function for change of base
    return [int(hex[i:i+2], 16) for i in range(1,6,2)]


def RGB_to_hex(RGB):
    """
    [255,255,255] -> #FFFFFF
    """
    # Components need to be integers for hex to make sense
    RGB = [int(x) for x in RGB]
    return "#"+"".join(["0{0:x}".format(v) if v < 16 else
              "{0:x}".format(v) for v in RGB])


def color_gradient(weight, start="#FFFFFF", end="#000000"):
    s = hex_to_RGB(start)
    f = hex_to_RGB(end)
    return RGB_to_hex([
        int(s[j] + (weight * (f[j] - s[j]))) for j in range(3)
    ])


####### Functions to draw a tree and save it to png #######


def draw_leaf(
    graph, leaf, n,
    print_action=False, print_cost=False, print_ratio=False
):
    label = ''
    font_color = 'black'
    color = 'white'

    if print_action:
        if hasattr(leaf, 'verbose_action'):
            label += f'{leaf.verbose_action}\n'
        else:
            label += f'{leaf.action}\n'
    if print_cost:
        label += f'Cost: {round(leaf.cost, 2)}'
    if print_ratio and hasattr(leaf, 'ratio'):
        label += f'\nFreq: {round(leaf.ratio * 100, 2)}'
        color = color_gradient(leaf.ratio, start="#FFFFFF", end="#FF0000")
        if leaf.ratio == 0:
            color = 'black'
    if hasattr(leaf, 'best_ratio'):
        label += f'\nbest: {round(leaf.best_ratio * 100, 2)}'

    node = pydot.Node(
        str(n), label=label,
        shape='circle', fillcolor=color, fontcolor=font_color, style='filled'
    )
    graph.add_node(node)
    return node, n


def draw_node(graph, root, n, print_action=False, print_cost=False):
    if root.is_leaf:
        return draw_leaf(
            graph, root, n, print_action=print_action, print_cost=print_cost
        )

    low_node, low_n = draw_node(
        graph, root.low, n, print_action=print_action, print_cost=print_cost
    )
    high_node, high_n = draw_node(
        graph, root.high, low_n + 1, print_action=print_action,
        print_cost=print_cost
    )

    new_n = high_n + 1
    label = f'{root.variable} <= {root.bound:0.2f}'
    node = graph.add_node(
        pydot.Node(str(new_n), label=label, shape='square')
    )


    graph.add_edge(pydot.Edge(str(new_n), str(low_n), label='true'))
    graph.add_edge(pydot.Edge(str(new_n), str(high_n), label='false'))
    return node, new_n


def draw_graph(
    trees, labels=None, out_fp='graph_drawing.png', print_action=True,
    print_cost=False
):
    graph = pydot.Dot(graph_type='digraph')
    root = pydot.Node('root')
    iterator = zip(labels, trees) if labels is not None else enumerate(trees)

    n = 0
    for label, tree in iterator:
        node, n = draw_node(
            graph, tree, n, print_action=print_action, print_cost=print_cost
        )
        if len(trees) > 1:
            graph.add_edge(pydot.Edge('action', str(n), label=label))
            n += 1

    if out_fp.endswith('.dot'):
        graph.write_dot(out_fp)
    elif out_fp.endswith('.png'):
        graph.write_png(out_fp)
    elif out_fp.endswith('.svg'):
        graph.write_svg(out_fp)
    else:
        suffix = out_fp.split('.')[-1]
        raise ValueError(f'{suffix} format not supported')


def draw_partitioning(
    leaves, x_var, y_var, xlim, ylim, cmap=None,
    xticks=None, yticks=None, extra_patches=None,
    labels={}, dpi=600, lw=0, bounds=False, show=False,
    grid=False, out_fp='./tmp.svg'
):
    min_x, max_x = xlim
    min_y, max_y = ylim

    matplotlib.rc('xtick', labelsize=14)
    matplotlib.rc('ytick', labelsize=14)
    fig, ax = plt.subplots(figsize=(5,4), dpi=dpi)

    if cmap is None:
        cmap = plt.get_cmap('tab10').colors[:10]

    bounds_data = []

    actions = []
    patches = []
    for l in leaves:
        s = l.state
        actions.append(l.action)
        x_start, x_end = s.min_max(x_var, min_limit=min_x, max_limit=max_x)
        y_start, y_end = s.min_max(y_var, min_limit=min_y, max_limit=max_y)

        if bounds:
            bounds_data.append((
                ([x_end, x_end], [min_y, max_y]),
                { 'linestyle': (0,(5,20)), 'c': 'black', 'lw': 0.2 }
            ))
            bounds_data.append((
                ([y_end, y_end], [min_x, max_x]),
                { 'linestyle': (0,(5,20)), 'c': 'black', 'lw': 0.2 }
            ))

        width = x_end - x_start
        height = y_end - y_start
        c = cmap[l.action]
        patches.append(
            Rectangle(
                (x_start, y_start), width, height, color=c, ec='black', lw=lw,
                zorder=0
            )
        )

    # patches.append(Rectangle((0,0), 2, 2, fill=None, hatch='//'))

    # rule 1
    # patches.extend([
    #     Rectangle((0,2), 2, 2, color='white', alpha=.5, lw=0),
    #     Rectangle((0,2), 2, 2, fill=None, edgecolor='black', lw=2, linestyle='dashed'),
    # ])

    # rule 2
    # patches.extend([
    #     Rectangle((0,2), 3, 1, color=cmap[0], lw=0),
    #     Rectangle((0,2), 3, 1, fill=None, hatch='\\\\'),

    #     Rectangle((0,3), 2, 1, color=cmap[1], lw=0),
    #     Rectangle((0,3), 2, 1, fill=None, hatch='//'),

    #     Rectangle((2,0), 1, 3, color='white', alpha=.5, lw=0),
    #     Rectangle((2,0), 1, 3, fill=None, edgecolor='black', lw=2, linestyle='dashed'),
    # ])

    # rule 3
    # patches.extend([
    #     # Rectangle((0,2), 4, 1, color=cmap[0], lw=0),
    #     Rectangle((0,2), 4, 1, color='white', alpha=.5, lw=0),
    #     Rectangle((0,2), 4, 1, fill=None, edgecolor='black', lw=2, linestyle='dashed'),
    # ])

    if extra_patches is not None:
        patches.extend(extra_patches)
        for p in patches:
            cp = copy(p)
            ax.add_patch(cp)

    else:
        ax.add_collection(PatchCollection(patches, match_original=True))
        for args, kwargs in bounds_data:
            ax.plot(*args, **kwargs)

    proxies = []
    if isinstance(labels, dict) and len(labels) > 0:
        for k, v in labels.items():
            proxies.append(mpatches.Patch(label=v, color=cmap[k]))
        plt.legend(handles=proxies, fontsize=12)

    plt.xticks(xticks)
    plt.yticks(yticks)

    plt.xlim(xlim)
    plt.ylim(ylim)

    plt.xlabel(x_var, fontsize=16)
    plt.ylabel(y_var, fontsize=16)

    if grid:
        plt.grid(None)

    plt.tight_layout()

    if show:
        plt.show()

    if out_fp is not None:
        plt.savefig(out_fp, dpi=600)

    plt.close('all')


def plot_voxels(bs, actions, points=[], max_v=10, animate=False):
    plt.style.use('_mpl-gallery')

    colormap = ['#B8000050',  '#26DC2650', '#4A90E260']

    # Prepare the coordinates
    shape = (max_v, max_v, max_v)
    x, y, z = np.indices(shape)

    cubes = []
    colors = np.empty(shape, dtype=object)
    for i in range(bs.shape[0]):
        cube = (bs[i,0,0] <= x) & (x < bs[i,0,1]) & \
            (bs[i,1,0] <= y) & (y < bs[i,1,1]) & \
            (bs[i,2,0] <= z) & (z < bs[i,2,1])
        cubes.append(cube)
        colors[cube] = colormap[actions[i]]
        # colors[cube] = '#B8000050' if actions[i] == 0 else '#26DC2650'

    # Plot
    fig = plt.figure(figsize=(8,6))
    ax = fig.add_subplot(projection='3d')
    ax.set(xlabel='cart_pos', ylabel='pole_ang', zlabel='pole_vel')

    def update_vox(num):
        voxels = np.full(shape, False, dtype=bool)
        for cube in cubes[:num+1]:
            voxels = voxels | cube
        ax.voxels(voxels, facecolors=colors)

    if len(points) > 0:
        for (point, c) in points:
            x,y,z = point
            ax.scatter(x,y,z, marker='o', s=120, c=c)

    if animate:
        ani = animation.FuncAnimation(fig, update_vox, len(cubes), interval=1000)
        ani.save('animation.gif', dpi=500, writer='pillow')
    else:
        update_vox(len(cubes) + 1)
        plt.show()


def visualize_strategy(tree, *args, **kwargs):
    K = len(tree.variables)
    colors = ['b', 'r', 'g', 'c', 'm', 'y', 'k', 'w']
    cmap = { a: c for a, c in zip(tree.actions, colors) }
    leaves = tree.leaves()

    if K == 2:
        bounds = tree.get_bounds()
        x, y = tree.variables

        xlim = kwargs.pop('xlim', (bounds[0][0] - 1, bounds[0][-1] + 1))
        ylim = kwargs.pop('ylim', (bounds[1][0] - 1, bounds[1][-1] + 1))

        draw_partitioning(leaves, x, y, xlim, ylim, cmap, *args, **kwargs)
    elif K == 3:
        raise NotImplementedError(f'visualization not implemented for 3 dims')
    else:
        raise ValueError(f'can only visualize 2 or 3 dimensions (tree has {K})')
