
/* cocos2d::ParticleSystem::start() */

void __thiscall cocos2d::ParticleSystem::start(ParticleSystem *this)

{
  this[0x474] = (ParticleSystem)0x1;
  *(undefined4 *)(this + 0x328) = 0;
  if (0 < (int)*(uint *)(this + 0x478)) {
    memset(*(void **)(this + 1000),0,(ulong)*(uint *)(this + 0x478) << 2);
    return;
  }
  return;
}

