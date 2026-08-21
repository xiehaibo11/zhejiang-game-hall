
/* cocos2d::ParticleSystem::isBlendAdditive() const */

bool __thiscall cocos2d::ParticleSystem::isBlendAdditive(ParticleSystem *this)

{
  if (*(int *)(this + 0x518) == 0x302) {
    return *(int *)(this + 0x51c) == 1;
  }
  return false;
}

