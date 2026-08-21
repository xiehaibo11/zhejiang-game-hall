
/* cocos2d::PUScaleAffector::resetDynScaleXYZ(bool) */

void __thiscall cocos2d::PUScaleAffector::resetDynScaleXYZ(PUScaleAffector *this,bool param_1)

{
  PUDynamicAttributeFixed *this_00;
  PUScaleAffector PVar1;
  
  if (param_1) {
    if (*(long **)(this + 200) != (long *)0x0) {
      (**(code **)(**(long **)(this + 200) + 8))();
    }
    *(undefined8 *)(this + 200) = 0;
    this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
    if (this_00 != (PUDynamicAttributeFixed *)0x0) {
      PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
    }
    *(PUDynamicAttributeFixed **)(this + 200) = this_00;
    (**(code **)(*(long *)this_00 + 0x28))(0x3f800000,this_00);
    PVar1 = (PUScaleAffector)0x0;
  }
  else {
    PVar1 = (PUScaleAffector)0x1;
  }
  this[0xd3] = PVar1;
  return;
}

