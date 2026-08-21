
/* cocos2d::PUJetAffector::PUJetAffector() */

void __thiscall cocos2d::PUJetAffector::PUJetAffector(PUJetAffector *this)

{
  PUDynamicAttributeFixed *this_00;
  
                    /* try { // try from 00e28b10 to 00f28b23 has its CatchHandler @ 00e293e0 */
  PUAffector::PUAffector((PUAffector *)this);
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined ***)this = &PTR__PUJetAffector_016ef590;
                    /* try { // try from 00e28b3c to 00f28b43 has its CatchHandler @ 00e293c4 */
  this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00e28b44 to 00f28b4f has its CatchHandler @ 00e293c0 */
  if (this_00 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
  }
  *(PUDynamicAttributeFixed **)(this + 0xb0) = this_00;
                    /* try { // try from 00e28b58 to 00f28b6b has its CatchHandler @ 00e293a8 */
  (**(code **)(*(long *)this_00 + 0x28))(0x3f800000,this_00);
  return;
}

