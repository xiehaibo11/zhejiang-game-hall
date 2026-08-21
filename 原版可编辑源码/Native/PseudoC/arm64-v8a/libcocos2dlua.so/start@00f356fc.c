
/* non-virtual thunk to cocos2d::ParticleSystem::start() */

void __thiscall cocos2d::ParticleSystem::start(ParticleSystem *this)

{
  this[0x174] = (ParticleSystem)0x1;
  *(undefined4 *)(this + 0x28) = 0;
  if (0 < (int)*(uint *)(this + 0x178)) {
    memset(*(void **)(this + 0xe8),0,(ulong)*(uint *)(this + 0x178) << 2);
    return;
  }
  return;
}

