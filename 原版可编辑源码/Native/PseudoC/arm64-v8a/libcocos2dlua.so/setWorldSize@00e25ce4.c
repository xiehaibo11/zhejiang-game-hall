
/* cocos2d::PUForceFieldAffector::setWorldSize(cocos2d::Vec3 const&) */

void __thiscall
cocos2d::PUForceFieldAffector::setWorldSize(PUForceFieldAffector *this,Vec3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x13c) = uVar1;
  if (this[0x17c] != (PUForceFieldAffector)0x0) {
    return;
  }
  PUForceField::setWorldSize((PUForceField *)(this + 0xb0),param_1);
  return;
}

