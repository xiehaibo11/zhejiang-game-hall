
/* cocos2d::PUForceFieldAffector::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUForceFieldAffector::copyAttributesTo(PUForceFieldAffector *this,PUAffector *param_1)

{
  undefined8 uVar1;
  
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(this + 0x100);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(this + 0x114);
  *(undefined2 *)(param_1 + 0x118) = *(undefined2 *)(this + 0x118);
  uVar1 = *(undefined8 *)(this + 0x120);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(this + 0x128);
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(this + 0x130);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(this + 0x138);
  uVar1 = *(undefined8 *)(this + 0x13c);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(this + 0x144);
  *(undefined8 *)(param_1 + 0x13c) = uVar1;
  *(PUForceFieldAffector *)(param_1 + 0x149) = this[0x149];
  *(PUForceFieldAffector *)(param_1 + 0x14a) = this[0x14a];
  *(PUForceFieldAffector *)(param_1 + 0x14b) = this[0x14b];
  *(PUForceFieldAffector *)(param_1 + 0x158) = this[0x158];
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(this + 0x15c);
  uVar1 = *(undefined8 *)(this + 0x14c);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(this + 0x154);
  *(undefined8 *)(param_1 + 0x14c) = uVar1;
  return;
}

