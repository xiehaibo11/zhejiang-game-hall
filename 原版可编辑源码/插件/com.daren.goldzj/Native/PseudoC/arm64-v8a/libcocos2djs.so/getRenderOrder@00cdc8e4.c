
/* cocos2d::ParticleSimulator::getRenderOrder() const */

undefined4 __thiscall cocos2d::ParticleSimulator::getRenderOrder(ParticleSimulator *this)

{
  if (*(long *)(this + 0xb0) != 0) {
    return *(undefined4 *)(*(long *)(this + 0xb0) + 0x110);
  }
  return 0;
}

