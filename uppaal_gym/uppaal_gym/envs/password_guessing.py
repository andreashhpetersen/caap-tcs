import numpy as np
import gymnasium as gym

from typing import Optional


class PasswordEnv(gym.Env):
    metadata = { 'render_modes': ['rgb_array'] }

    def __init__(self, words, options, word_len=7, max_tries=4, render_mode=None):
        self.words = words
        self.options = options

        self.max_tries = max_tries
        self.n_options = len(options)
        self.word_len = word_len

        self.observation_space = gym.spaces.Box(
            low=np.array([-1.0]*self.max_tries*2),
            high=np.array([self.n_options, self.word_len]*self.max_tries),
            dtype=int
        )
        self.action_space = gym.spaces.Discrete(self.n_options)

    def _get_obs(self):
        return self._state.copy()

    def _get_info(self):
        return { 'correct': self.correct }

    def reset(self, seed: Optional[int] = None, options: Optional[dict] = None):
        super().reset(seed=seed)

        self.correct = np.random.randint(len(self.options))
        self.ntries = 0
        self._state = np.array([-1] * self.max_tries * 2)

        return self._get_obs(), self._get_info()

    def step(self, guess):
        matches = self.count_matches(guess, self.correct)
        self._state[(self.ntries*2)] = guess
        self._state[(self.ntries*2)+1] = matches
        self.ntries += 1

        success = guess == self.correct
        final_guess = self.ntries == self.max_tries
        if success:
            reward = 0
        else:
            reward = -1 if not final_guess else -10

        done = success or final_guess
        return self._get_obs(), reward, done, False, self._get_info()

    def opt2word(self, opt):
        """Convert an option index (0-9) to a word"""
        return self.words[self.options[opt]]

    def opts2words(self, opts):
        """Convert a list of options to a list of words"""
        return [self.opt2word(w) for w in opts]

    def count_matches(self, opt1, opt2):
        """
        Count number of matching letters between two words (given as option
        indicies)
        """
        matches = 0
        w1, w2 = self.opt2word(opt1), self.opt2word(opt2)
        for i in range(len(w1)):
            if w1[i] == w2[i]:
                matches += 1
        return matches

    def update_options(self, options, state):
        """Return a list of options that are still legal given the current state"""
        new_options = []
        for opt in options:
            if all([r == self.count_matches(opt, g) for g, r in state]):
                new_options.append(opt)
        return new_options

    def choose(self, options):
        """Choose a random option from a list of options"""
        return options[np.random.randint(0, len(options))]
