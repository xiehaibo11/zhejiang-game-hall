
/* cocos2d::PUScaleVelocityAffector::PUScaleVelocityAffector() */

void __thiscall
cocos2d::PUScaleVelocityAffector::PUScaleVelocityAffector(PUScaleVelocityAffector *this)

{
  PUDynamicAttributeFixed *this_00;
  
  PUAffector::PUAffector((PUAffector *)this);
  *(undefined2 *)(this + 0xb9) = 0;
                    /* try { // try from 00e2d0a8 to 00f2d0af has its CatchHandler @ 00e2d1b4 */
  *(undefined ***)this = &PTR__PUScaleVelocityAffector_016efd90;
                    /* try { // try from 00e2d0b0 to 00f2d0eb has its CatchHandler @ 00e2d020 */
  this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (this_00 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
  }
  *(PUDynamicAttributeFixed **)(this + 0xb0) = this_00;
  (**(code **)(*(long *)this_00 + 0x28))(0x3f800000,this_00);
                    /* try { // try from 00e2d0ec to 00f2d0f3 has its CatchHandler @ 00e2d1c4 */
  return;
}

