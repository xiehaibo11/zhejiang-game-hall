
/* cocos2d::PUGeometryRotator::resetRotationAxis() */

void __thiscall cocos2d::PUGeometryRotator::resetRotationAxis(PUGeometryRotator *this)

{
  PUDynamicAttributeFixed *this_00;
  
  this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (this_00 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
  }
  *(PUDynamicAttributeFixed **)(this + 0xb8) = this_00;
  (**(code **)(*(long *)this_00 + 0x28))(0x41200000,this_00);
  this[0xdc] = (PUGeometryRotator)0x0;
  return;
}

