
/* cocos2d::PUEmitter::setParticleOrientationRangeEnd(cocos2d::Quaternion const&) */

void __thiscall
cocos2d::PUEmitter::setParticleOrientationRangeEnd(PUEmitter *this,Quaternion *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  this[0xf0] = (PUEmitter)0x1;
  *(undefined8 *)(this + 0xe8) = uVar2;
  *(undefined8 *)(this + 0xe0) = uVar1;
  return;
}

