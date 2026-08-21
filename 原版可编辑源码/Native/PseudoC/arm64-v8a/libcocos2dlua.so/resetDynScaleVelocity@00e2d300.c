
/* cocos2d::PUScaleVelocityAffector::resetDynScaleVelocity(bool) */

void __thiscall
cocos2d::PUScaleVelocityAffector::resetDynScaleVelocity(PUScaleVelocityAffector *this,bool param_1)

{
  PUDynamicAttributeFixed *this_00;
  
  if (param_1) {
    if (*(long **)(this + 0xb0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0xb0) + 8))();
    }
    *(undefined8 *)(this + 0xb0) = 0;
                    /* catch() { ... } // from try @ 00e2d284 with catch @ 00e2d338 */
    this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
    if (this_00 != (PUDynamicAttributeFixed *)0x0) {
      PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
    }
                    /* catch() { ... } // from try @ 00e2d2a8 with catch @ 00e2d34c */
    *(PUDynamicAttributeFixed **)(this + 0xb0) = this_00;
                    /* WARNING: Could not recover jumptable at 0x00e2d368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this_00 + 0x28))(0x3f800000,this_00);
    return;
  }
  return;
}

