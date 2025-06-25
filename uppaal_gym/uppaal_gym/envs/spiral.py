import numpy as np
import gymnasium as gym
import matplotlib.pyplot as plt

from scipy.linalg import expm


class SpiralEnv(gym.Env):
    metadata = { 'render_modes': ['human', 'polar'] }

    def __init__(
        self, max_n_steps=2000, polar=False, render_mode=None, unlucky=False
    ):

        self.observation_space = gym.spaces.Box(
            low=np.array([-2.5, -2.5, -2.5, -2.5], dtype=np.float32),
            high=np.array([2.5, 2.5, 2.5, 2.5], dtype=np.float32),
        )
        self.action_space = gym.spaces.Discrete(3)
        self.unlucky = unlucky
        self.max_n_steps = max_n_steps
        self.render_mode = render_mode
        self.polar = polar
        self.max_stack_size = 5

        self.speed = 0.2
        self.delta = 0.05
        self.x1 = 1.5
        self.x2 = 0

        self.A = np.array([
            [0.0, 1],
            [-1, 0.0]
        ])
        self.exp_A_delta = expm(self.A * self.delta)

        self._rocks = [
            [0, 0],
            [1.2, 1.2],
            [-0.5, 0.7],
            [1.4, -0.7],
            [-1.2, -0.4]
        ]

        self.destination_radius = 0.15
        self.rock_radius = 0.1

        # for rendering
        if render_mode in ['human', 'polar']:
            self.fig, self.ax = plt.subplots(figsize=(6,6))

    @property
    def state(self):
        if self.polar:
            x1, x2 = self.to_polar(self.x1, self.x2)
            # d1, d2 = self.to_polar(self.destination[0], self.destination[1])
        else:
            x1, x2 = self.x1, self.x2

        d1, d2 = self.destination[0], self.destination[1]
        return np.array([x1, x2, d1, d2], dtype=np.float32)

    @state.setter
    def state(self, value):
        value = np.array(value).reshape(4,)
        x1, x2, destx, desty = value
        self.x1 = x1
        self.x2 = x2
        self.destination = [destx, desty]

    @property
    def rocks(self):
        if self.polar:
            return [self.to_polar(x, y) for x,y in self._rocks]
        else:
            return self._rocks

    def time_elapsed(self):
        return self.steps_taken * self.delta

    def _get_obs(self):
        return self.state

    def _get_info(self):
        return { 'time_elapsed': self.time_elapsed() }

    def generate_destination(self):
        candidate = np.random.random((2,)) * 4 - 2
        while self.hit_rock(candidate):
            candidate = np.random.random((2,)) * 4 - 2

        return candidate.tolist()

    def reset(self, seed=None, options={}):
        super().reset(seed=seed)

        self.x1 = 1.5
        self.x2 = 0
        self.destination = self.generate_destination()
        self.stack = [None] * self.max_stack_size
        self.stack_pointer = -1
        self.stack_size = 0

        self.steps_taken = 0

        obs = self._get_obs()
        info = self._get_info()

        return obs, info

    def allowed_actions(self, s):
        p, v = s
        if not self.is_safe(s):
            return []

        return [0, 1]

    def is_safe(self, s):
        p, v = s
        return not (p <= 0.01 and abs(v) <= 1)

    def update_stack(self, pos):
        self.stack_pointer += 1
        if self.stack_pointer == self.max_stack_size:
            self.stack_pointer = 0

        self.stack_size = min(self.stack_size + 1, self.max_stack_size)
        self.stack[self.stack_pointer] = pos

    def get_stack_elements(self):
        org_pointer = self.stack_pointer
        n, sp = min(self.stack_size, self.max_stack_size), self.stack_pointer
        return [self.stack[i % n] for i in range(n + sp, sp, -1)]

    def step_from(self, s, a):
        return self._step(s, a)

    def step(self, action):
        new_state, reward, terminated = self._step(self._get_obs(), action)

        # add position to stack
        self.update_stack(new_state[:2])

        self.steps_taken += 1
        truncated = self.steps_taken >= self.max_n_steps
        terminated = terminated or truncated

        self.state = new_state

        obs = self._get_obs()
        info = self._get_info()

        return obs, reward, terminated, truncated, info

    def _step(self, state, action):
        x, y, _, _ = state

        if not self.polar:
            angle, radius = self.to_polar(x, y)
        else:
            angle, radius = x, y

        # angle = np.arctan2(y, x)
        # radius = np.sqrt(x**2 + y**2)

        if action == 0:    # move outwards
            radius = (1 + (self.speed * self.delta)) * radius
        elif action == 1:  # move inwards
            radius = (1 - (self.speed * self.delta)) * radius
        else:              # stay course
            radius = radius

        x = radius * np.cos(angle)
        y = radius * np.sin(angle)

        state = np.dot(self.exp_A_delta, np.array([x, y]))
        terminated = self.hit_rock(state)
        if terminated:
            reward = -1000
        else:
            reward = 0
            if self.reached_destination(state):
                reward += 1000
                terminated = True
                # self.destination = self.generate_destination()

        return state.tolist() + self.destination, reward, terminated

    def distance(self, p1, p2, q1, q2):
        x1 = p1 - q1
        x2 = p2 - q2
        return np.sqrt(x1**2 + x2**2)

    def check_collision(self, p1, p2, q1, q2, r):
        if self.polar:
            p1, p2 = self.to_polar(p1, p2)
        return self.distance(p1, p2, q1, q2) < r

    def hit_rock(self, state):
        p1, p2 = state
        for q1, q2 in self._rocks:
            if self.check_collision(p1, p2, q1, q2, self.rock_radius):
                return True

        return False

    def reached_destination(self, state):
        p1, p2 = state
        q1, q2 = self.destination
        return self.check_collision(p1, p2, q1, q2, self.destination_radius)

    def to_polar(self, x, y):
        r = np.sqrt(x**2 + y**2)
        angle = np.arctan2(y, x)
        return angle, r

    def render(self):
        if not self.render_mode in ['human', 'polar']:
            return

        self.ax.clear()

        # plot the rocks
        for x1, x2 in self.rocks:
            if self.render_mode == 'polar':
                x1, x2 = self.to_polar(x1, x2)
            self.ax.add_patch(
                plt.Circle((x1,x2), radius=self.rock_radius, color='grey')
            )

        x1, x2, destx, desty = self.state

        if self.render_mode == 'polar':
            x1, x2 = self.to_polar(x1, x2)
            destx, desty = self.to_polar(destx, desty)

        # plot the destination
        self.ax.add_patch(
            plt.Circle((destx,desty), radius=self.destination_radius, color='purple')
        )

        # plot the agent
        r, a = 0.05, 1
        for x1, x2 in self.get_stack_elements():
            if self.render_mode == 'polar':
                x1, x2 = self.to_polar(x1, x2)

            self.ax.add_patch(plt.Circle((x1,x2), radius=r, color='red', alpha=a))
            r -= 0.005
            a -= 0.15

        if self.render_mode == 'human':
            lim, xlabel, ylabel = 2.5, 'x1', 'x2'
        else:
            lim, xlabel, ylabel = np.pi, 'θ', 'r'

        # set limits and labels
        self.ax.set_xlim(-lim, lim)
        self.ax.set_ylim(-lim, lim)
        self.ax.set_xlabel(xlabel)
        self.ax.set_ylabel(ylabel)
        self.ax.set_title('Spiral')

        plt.pause(0.01)

    def close(self):
        if hasattr(self, 'fig'):
            plt.close(self.fig)


if __name__ == '__main__':
    env = SpiralEnv(render_mode='human')
    env.reset()

    done = False
    while not done:
        action = env.action_space.sample()
        _, _, done, _, _ = env.step(action)
        env.render()

    env.close()
