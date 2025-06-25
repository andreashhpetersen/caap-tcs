import numpy as np
import gymnasium as gym


class CruiseControlEnv(gym.Env):
    DEC = -2
    NEU = 0
    ACC = 2

    def __init__(self, render_mode=None, unlucky=False, max_steps=120):
        self.unlucky = unlucky

        self.observation_space = gym.spaces.Box(
            low=np.array([-10., -8., -20], dtype=np.float32),
            high=np.array([20., 20., 220.], dtype=np.float32)
        )
        self.action_space = gym.spaces.Discrete(3)
        self.action_to_acceleration = [self.DEC, self.ACC, self.NEU]

        # dynamics
        self.v_ego_max = 20.
        self.v_ego_min = -10.

        self.v_front_max = 20.
        self.v_front_min = -8.

        self.max_sensor_distance = 200

        # state
        self.v_ego = 0.
        self.v_front = 0.
        self.distance = 10.

        # track total distance
        self.total_distance = 10.
        self.rDistance = 10.

        self.max_steps = max_steps
        self.n_steps = 0

    def _get_obs(self):
        return np.array(
            [self.v_ego, self.v_front, self.distance],
            dtype=np.float32
        )

    def _get_info(self):
        return {}

    def reset(self, seed=None, **kwargs):
        super().reset(seed=seed)

        self.v_ego = 0.
        self.v_front = 0.
        self.distance = 10.
        self.total_distance = 10.
        self.n_steps = 0

        return self._get_obs(), self._get_info()

    def is_safe(self, state):
        _, _, distance = state
        return distance > 0

    def allowed_actions(self, state):
        v_ego, _, _ = state

        if not self.is_safe(state):
            return []

        allowed_actions = [0]
        if v_ego > self.v_ego_min:
            allowed_actions.append(1)

        if v_ego < self.v_ego_max:
            allowed_actions.append(2)

        return allowed_actions

    def step_from(self, state, action):
        return self._step(state, action)

    def step(self, action):
        nstate, reward, terminated = self._step(self._get_obs(), action)
        v_ego, v_front, distance = nstate
        self.v_ego = v_ego
        self.v_front = v_front
        self.distance = distance

        self.n_steps += 1
        reward = -1000 if not self.is_safe(nstate) else -distance

        terminated = False
        if self.n_steps >= self.max_steps:
            terminated = True

        return self._get_obs(), reward, terminated, False, self._get_info()

    def _step(self, state, action):
        v_ego, v_front, distance = state

        old_vel = v_front - v_ego

        ego_change = self.speed_limit(
            self.v_ego_min,
            self.v_ego_max,
            v_ego,
            self.get_ego_acceleration(action)
        )
        v_ego += ego_change

        if distance <= self.max_sensor_distance:
            front_acc = self.get_front_acceleration(state)
            front_change = self.speed_limit(
                self.v_front_min,
                self.v_front_max,
                v_front,
                front_acc
            )
            v_front += front_change

            new_vel = v_front - v_ego
            distance += (old_vel + new_vel) / 2
            distance = min(distance, self.max_sensor_distance + 1)

        elif np.random.random() < 0.5 and v_ego > self.v_front_min:
            v_front = np.random.choice(
                np.arange(self.v_front_min, v_ego + 1)
            )
            distance = self.max_sensor_distance
        else:
            v_front = self.NEU
            distance = self.max_sensor_distance + 1

        # return values
        state = (v_ego, v_front, distance)
        terminated = not self.is_safe(state)
        reward = 0  # this is just to return something, but it is overwritten in step()

        return (v_ego, v_front, distance), reward, terminated

    def speed_limit(self, vmin, vmax, vcurr, acc):
        # if either already driving to slow or to fast, return neutral
        if (acc == self.DEC and vcurr <= vmin) or \
                (acc == self.ACC and vcurr >= vmax):
            return self.NEU

        # else return intended acceleration
        else:
            return acc

    def get_ego_acceleration(self, action):
        return self.action_to_acceleration[action]

    def get_front_acceleration(self, state):
        v_ego, v_front, distance = state

        # it's unlucky if the front car are always backing
        if self.unlucky:
            return self.DEC if v_front > self.v_front_min else self.NEU

        # otherwise just sample a random action
        if distance <= self.max_sensor_distance:
            return np.random.choice(self.action_to_acceleration)

        # this is from Asgers implementation, but I don't really get it..
        elif np.random.random() < 0.5 and v_ego > self.v_front_min:
            return np.random.choice(np.arange(self.v_front_min - 1, v_ego))
        else:
            return self.v_front_max
