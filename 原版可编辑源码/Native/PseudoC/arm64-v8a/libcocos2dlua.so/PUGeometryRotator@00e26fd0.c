
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::PUGeometryRotator::PUGeometryRotator() */

void __thiscall cocos2d::PUGeometryRotator::PUGeometryRotator(PUGeometryRotator *this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  PUDynamicAttributeFixed *this_00;
  
  PUAffector::PUAffector((PUAffector *)this);
  *(undefined4 *)(this + 0xac) = 0;
  this[0xb0] = (PUGeometryRotator)0x0;
  *(undefined ***)this = &PTR__PUGeometryRotator_016ef290;
  Quaternion::Quaternion((Quaternion *)(this + 0xc0));
  uVar2 = _DAT_01788d44;
  uVar1 = DEFAULT_ROTATION_AXIS;
  this[0xdc] = (PUGeometryRotator)0x0;
  *(undefined4 *)(this + 0xd8) = uVar2;
  *(undefined8 *)(this + 0xd0) = uVar1;
  this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (this_00 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
  }
  *(PUDynamicAttributeFixed **)(this + 0xb8) = this_00;
  (**(code **)(*(long *)this_00 + 0x28))(0x41200000,this_00);
  return;
}

