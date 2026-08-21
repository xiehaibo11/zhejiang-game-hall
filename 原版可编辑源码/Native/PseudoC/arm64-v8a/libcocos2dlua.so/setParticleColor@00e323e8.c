
/* cocos2d::PUEmitter::setParticleColor(cocos2d::Vec4 const&) */

void __thiscall cocos2d::PUEmitter::setParticleColor(PUEmitter *this,Vec4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x1b4) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x1ac) = uVar1;
  return;
}

