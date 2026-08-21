
/* cocos2d::PUScaleAffector::resetDynScaleX(bool) */

void __thiscall cocos2d::PUScaleAffector::resetDynScaleX(PUScaleAffector *this,bool param_1)

{
  PUDynamicAttributeFixed *this_00;
  PUScaleAffector PVar1;
  
  if (param_1) {
    if (*(long **)(this + 0xb0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xb0) + 8))();
    }
    *(undefined8 *)(this + 0xb0) = 0;
    this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
    if (this_00 != (PUDynamicAttributeFixed *)0x0) {
                    /* try { // try from 00e2c048 to 00f2c0cb has its CatchHandler @ 00e2bd04 */
      PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
    }
    *(PUDynamicAttributeFixed **)(this + 0xb0) = this_00;
    (**(code **)(*(long *)this_00 + 0x28))(0x3f800000,this_00);
    PVar1 = (PUScaleAffector)0x0;
  }
  else {
    PVar1 = (PUScaleAffector)0x1;
  }
  this[0xd0] = PVar1;
  return;
}

