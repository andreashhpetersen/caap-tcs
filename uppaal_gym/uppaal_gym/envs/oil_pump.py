import numpy as np
import gymnasium as gym


class OilPumpEnv(gym.Env):
    metadata = { 'render_modes': ['rgb_array'] }

    OFF = 0
    ON = 1

    def __init__(self, render_mode=None, unlucky=False):

        self.observation_space = gym.spaces.Box(
            low=np.array([0, 0, 0, -20], dtype=np.float32),
            high=np.array([20, 30, 1, 2], dtype=np.float32)
        )
        self.action_space = gym.spaces.Discrete(2)
        self.unlucky = unlucky

        # mechanics
        self.v_min = 4.9
        self.v_max = 25.1
        self.period = 20
        self.time_step = 0.2
        self.inflow = 2.2
        self.fluctuation = 0.1
        self.latency = 2

        # track the time that has elapsed and total accumulated oil volume
        self.elapsed = 0.
        self.accumulated_v = 0.

        # state is tuple (t, v, p, l) where
            # t is  the time in the consumption cycle
            # v is the volume of oil in the tank
            # p is the pump status ('on' or 'off')
            # l is th latency timer controlling how often the pump can switch
            # state

        self.reset()

    def reset(self, seed=None, **kwargs):
        super().reset(seed=seed)

        self.t = 0.
        self.v = 10.
        self.p = 0.
        self.l = 0.

        return self._get_obs(), self._get_info()

    def is_safe(self, state):
        _, v, _, _ = state
        return self.v_min <= v <= self.v_max

    def allowed_actions(self, state):
        return [0, 1] if self.is_safe(state) else []

    def reward(self, state=None):
        if state is None:
            state = self._get_obs()

        _, v, _, _ = state
        # return -v
        return -(1000 if (v < self.v_min or v > self.v_max) else v)

    def step(self, action):
        nstate = self._step(self._get_obs(), action)

        t, v, p, l = nstate
        self.t = t
        self.v = v
        self.p = p
        self.l = l

        self.accumulated_v += v
        self.elapsed += self.time_step

        reward = self.reward()
        terminated = not self.is_safe(nstate)

        return self._get_obs(), reward, terminated, False, self._get_info()

    def step_from(self, state, action):
        nstate = self._step(state, action)
        return nstate, self.reward(nstate), not self.is_safe(nstate)

    def _step(self, state, action):
        t, v, p, l = state
        p = round(p)

        if action != p and l <= 0.0:
            p = action
            l = self.latency

        td = t

        fluct1, fluct2 = self._get_random(), self._get_random()
        while td < t + self.time_step / 2:
            time_step = min(t + self.time_step/2 - td, self.next_rate_change(td) -td)
            consumption = self.consumption_rate(td)
            if consumption > 0:
                consumption += fluct1

            v = v - consumption * time_step
            td += time_step

        while td < t + self.time_step:
            time_step = min(t + self.time_step - td, self.next_rate_change(td) -td)
            consumption = self.consumption_rate(td)
            if consumption > 0:
                consumption += fluct2

            v = v - consumption * time_step
            td += time_step


        # fluctuation_updated = False
        # fluctuation = self._get_random()
        # while td < t + self.time_step:

        #     # update fluctuation if we are over halway there
        #     if td >= t + self.time_step / 2:
        #         if not fluctuation_updated:
        #             fluctuation = self._get_random()
        #             fluctuation_updated = True

        #     time_step = min(
        #         t + self.time_step - td,
        #         self.next_rate_change(td) - td
        #     )
        #     consumption = self.consumption_rate(td)
        #     if consumption > 0:
        #         consumption += fluctuation

        #     v = v - consumption * time_step
        #     td += time_step

        td = td % 20
        l = l - self.time_step
        if p == self.ON:
            v += self.inflow * self.time_step

        return td, v, p, l

    def next_rate_change(self, t):
        return t - (t % 2) + 2

    def consumption_rate(self, t):
        if t < 2:
            return 0
        if t < 4:
            return 1.2
        if t < 8:
            return 0
        if t < 10:
            return 1.2
        if t < 12:
            return 2.5
        if t < 14:
            return 0
        if t < 16:
            return 1.7
        if t < 18:
            return 0.5
        return 0

    def _get_random(self):
        if self.unlucky:
            middle = self.v_min + ((self.v_max - self.v_min) / 2)
            if self.v <= middle:
                return self.fluctuation
            else:
                return -self.fluctuation

        return np.random.random() * (self.fluctuation * 2) - self.fluctuation

    def _get_obs(self):
        return np.array([self.t, self.v, self.p, self.l], dtype=np.float32)

    def _get_info(self):
        return {}
