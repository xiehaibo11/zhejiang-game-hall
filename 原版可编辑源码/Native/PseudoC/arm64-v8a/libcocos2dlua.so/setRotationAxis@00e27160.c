
/* cocos2d::PUGeometryRotator::setRotationAxis(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUGeometryRotator::setRotationAxis(PUGeometryRotator *this,Vec3 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined8 *)param_1;
  this[0xdc] = (PUGeometryRotator)0x1;
  *(undefined4 *)(this + 0xd8) = uVar1;
  *(undefined8 *)(this + 0xd0) = uVar2;
  return;
}

