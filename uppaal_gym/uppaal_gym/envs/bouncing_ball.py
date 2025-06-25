import numpy as np
import gymnasium as gym


class BouncingBallEnv(gym.Env):
    metadata = { 'render_modes': ['rgb_array'] }

    def __init__(
        self, render_mode=None, ts_size=0.3,
        max_n_steps=400, unlucky=False
    ):

        self.observation_space = gym.spaces.Box(
            low=np.array([0, -20], dtype=np.float32),
            high=np.array([15, 20], dtype=np.float32),
        )
        self.action_space = gym.spaces.Discrete(2)
        self.unlucky = unlucky

        self.G = -9.81
        self.ts = ts_size
        self.max_n_steps = max_n_steps
        self.render_mode = render_mode

    @property
    def state(self):
        return np.array([self.p, self.v], dtype=np.float32)

    @state.setter
    def state(self, value):
        value = value.reshape(2,)
        p, v = value
        self.p = p
        self.v = v

    def _get_obs(self):
        return self.state

    def _get_info(self):
        return { 'time': self.time }

    def reset(self, seed=None, options={}):
        super().reset(seed=seed)

        self.time = 0.0
        self.steps_taken = 0

        self.p = 8 + self.np_random.uniform(0, 2)
        self.v = 0.0

        # for rendering
        self.positions = []
        self.velocities = []
        self.actions = []

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

    def step_from(self, s, a):
        return self._step(s, a)

    def step(self, action):
        new_state, reward, terminated = self._step(self._get_obs(), action)

        self.time += self.ts
        self.steps_taken += 1
        truncated = self.steps_taken >= self.max_n_steps
        terminated = terminated or truncated

        self.p, self.v = new_state

        self.positions.append(self.p)
        self.velocities.append(self.v)
        self.actions.append(action)

        obs = self._get_obs()
        info = self._get_info()

        return obs, reward, terminated, truncated, info

    def _step(self, state, action):
        p, v = state

        terminated = False

        # if an action is taken and position is at least 4
        if action == 1 and p >= 4.0:

            # hit when ball is going up
            if v >= 0.0:
                flip = -(0.9 + self._get_random(high=0.1))
                v = (flip * v) - 4.0

            # hit when ball is already falling
            elif v >= -4.0:
                v = -4.0

        # new candidate state
        new_v = v + (self.ts * self.G)
        new_p = p + (v * self.ts) + 0.5 * (self.G * np.square(self.ts))

        # ball bounces!
        if new_p <= 0.0:

            # solve for t when p == 0
            D = np.sqrt(np.square(v) - (2 * self.G * p))
            t = max((-v + D) / self.G, (-v - D) / self.G)

            # velocity when the ball hits the ground
            new_v = v + (t * self.G)

            # flip velocity at bounce and loose some momentum
            new_v *= -(0.85 + self._get_random(high=0.12))
            if new_v <= 1:
                terminated = True
                new_v, new_p = 0, 0

            else:
                # new position (starting from 0 as we have just bounced)
                dt = self.ts - t
                new_p = max(
                    0, new_v * dt + 0.5 * (self.G * np.square(dt))
                )

                # new velocity
                new_v = new_v + dt * self.G if new_p > 0 else 0

        reward = -1 * action - 1000 * terminated
        if isinstance(reward, np.ndarray):
            reward = reward.item()

        return (new_p, new_v), reward, terminated

    def _get_random(self, low=0, high=0.1):
        if self.unlucky:
            return 0
        else:
            return self.np_random.uniform(low, high)
