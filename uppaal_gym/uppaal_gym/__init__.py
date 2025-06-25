from gymnasium.envs.registration import register
from .envs import *


register(
    id='PasswordGuessing-v0',
    entry_point='uppaal_gym.envs:PasswordEnv',
    max_episode_steps=10, # this is pretty arbitrary
)


register(
    id='BouncingBall-v0',
    entry_point='uppaal_gym.envs:BouncingBallEnv',
    max_episode_steps=400,
)

register(
    id='RandomWalk-v0',
    entry_point='uppaal_gym.envs:RandomWalkEnv',
    max_episode_steps=None,
)

register(
    id='CruiseControl-v0',
    entry_point='uppaal_gym.envs:CruiseControlEnv',
    max_episode_steps=120,
)

register(
    id='DCDCBoostConverter-v0',
    entry_point='uppaal_gym.envs:DCDCBoostConverterEnv',
    max_episode_steps=120,
)

register(
    id='OilPump-v0',
    entry_point='uppaal_gym.envs:OilPumpEnv',
    max_episode_steps=120,
)

register(
    id='Spiral-v0',
    entry_point='uppaal_gym.envs:SpiralEnv',
    max_episode_steps=2000,
)
