
/* non-virtual thunk to cocos2d::ParticleSystem::stop() */

void __thiscall cocos2d::ParticleSystem::stop(ParticleSystem *this)

{
  this[0x174] = (ParticleSystem)0x0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x17c);
  return;
}

