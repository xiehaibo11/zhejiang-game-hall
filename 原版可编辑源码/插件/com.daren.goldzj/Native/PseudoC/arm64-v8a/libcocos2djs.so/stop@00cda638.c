
/* cocos2d::ParticleSimulator::stop() */

void __thiscall cocos2d::ParticleSimulator::stop(ParticleSimulator *this)

{
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(this + 0x120);
  *(undefined4 *)(this + 0x38) = 0;
  return;
}

