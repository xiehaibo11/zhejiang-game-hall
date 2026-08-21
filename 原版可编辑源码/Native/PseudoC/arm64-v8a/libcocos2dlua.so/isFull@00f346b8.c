
/* cocos2d::ParticleSystem::isFull() */

bool __thiscall cocos2d::ParticleSystem::isFull(ParticleSystem *this)

{
  return *(int *)(this + 0x478) == *(int *)(this + 0x508);
}

