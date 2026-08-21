
/* cocos2d::ParticleSystem::stop() */

void __thiscall cocos2d::ParticleSystem::stop(ParticleSystem *this)

{
  this[0x474] = (ParticleSystem)0x0;
  *(undefined4 *)(this + 0x458) = 0;
  *(undefined4 *)(this + 0x328) = *(undefined4 *)(this + 0x47c);
  return;
}

