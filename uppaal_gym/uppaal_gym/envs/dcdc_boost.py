import math
import numpy as np

import gymnasium as gym
from gymnasium import logger, spaces
from gymnasium.envs.classic_control import utils


class DCDCBoostConverterEnv(gym.Env):
    metadata = { 'render_modes': [] }

    # hybrid states
    D1U1 = 0
    D1U0 = 1
    D0U0 = 2
    PU0D0 = 3
    PD1U1 = 4
    PD1U0 = 5

    def __init__(self, render_mode=None, unlucky=False):
        self.observation_space = gym.spaces.Box(
            low=np.array([0, 5, 30], dtype=np.float32),
            high=np.array([14, 16, 200], dtype=np.float32)
        )
        self.action_space = gym.spaces.Discrete(2)

        # state variables
        self.x1 = 0.35
        self.x2 = 15.0
        self.R = 73.

        # hybrid state
        self.hybrid_state = self.PU0D0

        # target values
        self.x1_ref = 0.35
        self.x2_ref = 15.

        # minimize this (distance from x1,x2 to target values)
        self.dist = 0

        # safety constraints
        self.x1_min = 0
        self.x1_max = 4
        self.x2_min = 14.5
        self.x2_max = 15.5

        # constants
        self.L = 450e-6             # Inductors inductance
        self.RL = 0.3               # Inductors resistance
        self.Co = 220e-6            # Capacitators capacitance
        self.vs = 10.0              # Input voltage
        self.scale = 1.0 / 0.00005  # time scale

        self.R_fluct= 30.  # Output consumption
        self.R_min = 30.
        self.R_max = 200.

        # euler method step size
        self.h = 0.1

    def is_safe(self, state):
        x1, x2, _ = state
        return self.x1_min <= x1 <= self.x1_max and \
            self.x2_min <= x2 <= self.x2_max

    def is_terminal(self, state):
        return False if self.is_safe(state) else True

    def allowed_actions(self, state):
        return [0,1] if self.is_safe(state) else []

    def reset(self, seed=None, **kwargs):
        super().reset(seed=seed)

        self.dist = 0.
        self.x1 = 0.35
        self.x2 = 15.0
        self.R = 73.  # Output consumption
        self.hybrid_state = self.PU0D0

        return self._get_obs(), self._get_info()

    def step(self, action):
        nstate = self._step(self._get_obs(), action)
        reward = self.reward(nstate)
        terminated = self.is_terminal(nstate)

        x1, x2, R = nstate
        self.x1 = x1
        self.x2 = x2
        self.R = R
        self.dist += self.get_dist(nstate)

        return self._get_obs(), reward, terminated, False, self._get_info()

    def step_from(self, state, action):
        nstate = self._step(state, action)
        return nstate, self.reward(nstate), self.is_terminal(nstate)

    def _step(self, state, action):
        x1, x2, R = state

        R_update = self._get_random_R()
        while not self.R_min <= R + R_update <= self.R_max:
            R_update = self._get_random_R()
        R += R_update

        L, RL, Co, vs, s = self._get_constants()

        for _ in range(int(1 / self.h)):
            # on
            if action == 1:
                self.hybrid_state = self.PD1U1
                x1 += self.h * ((((-RL / L) * x1) + (vs / L)) / s)
                x2 += self.h * ((-(1.0 / (Co * R)) * x2) / s)
                # x1 += self.h * (-RL * x1 / L + vs / L) / s
                # x2 += self.h * (-x2 / (Co * R)) / s

            # off
            elif action == 0 and x1 > 0:
                self.hybrid_state = self.PD1U0
                x1 += self.h * (((-RL / L) * x1 + (-1.0 / L) * x2 + (vs / L)) / s)
                # x1 += self.h * (-RL * x1 / L + -x2 / L + vs / L) / s
                x1 = max(x1, 0)
                x2 += self.h * (((1.0 / Co) * x1 + (-1.0 / (Co * R)) * x2) / s)
                # x2 += self.h * (x1 / Co + -x2 / (Co * R)) / s

            # off but x1 is negative
            elif action == 0 and x1 <= 0:
                self.hybrid_state = self.PU0D0
                x1 += 0
                x2 += self.h * (((-1.0 / (Co * R)) * x2) / s)
                # x2 += self.h * (-x2 / (Co * R)) / s

        return (x1, x2, R)

    def get_dist(self, state):
        x1, x2, R = state
        r1 = abs(x1 - self.x1_ref)
        r2 = (x2 - self.x2_ref)**2
        return r2 + r1 / 3.0

    def reward(self, state):
        return -self.get_dist(state)

    def _get_obs(self):
        return np.array([self.x1, self.x2, self.R], dtype=np.float32)

    def _get_info(self):
        return { 'hybrid_state': self.hybrid_state }

    def _get_random_R(self):
        return np.random.randint(-self.R_fluct, self.R_fluct + 1)

    def _get_constants(self):
        return self.L, self.RL, self.Co, self.vs, self.scale
