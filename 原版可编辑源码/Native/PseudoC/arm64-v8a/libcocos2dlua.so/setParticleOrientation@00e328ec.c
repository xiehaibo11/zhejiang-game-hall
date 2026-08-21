
/* cocos2d::PUEmitter::setParticleOrientation(cocos2d::Quaternion const&) */

void __thiscall cocos2d::PUEmitter::setParticleOrientation(PUEmitter *this,Quaternion *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 200) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xc0) = uVar1;
  return;
}

