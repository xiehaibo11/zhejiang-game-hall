
/* cocos2d::PUEmitter::setParticleColorRangeEnd(cocos2d::Vec4 const&) */

void __thiscall cocos2d::PUEmitter::setParticleColorRangeEnd(PUEmitter *this,Vec4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1d4) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1cc) = uVar1;
  this[0x1dc] = (PUEmitter)0x1;
  return;
}

