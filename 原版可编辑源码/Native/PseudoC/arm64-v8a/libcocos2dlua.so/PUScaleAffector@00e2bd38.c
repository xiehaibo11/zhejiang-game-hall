
/* cocos2d::PUScaleAffector::PUScaleAffector() */

void __thiscall cocos2d::PUScaleAffector::PUScaleAffector(PUScaleAffector *this)

{
  PUDynamicAttributeFixed *pPVar1;
  
  PUAffector::PUAffector((PUAffector *)this);
  this[0xd5] = (PUScaleAffector)0x0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined ***)this = &PTR__PUScaleAffector_016efc90;
  pPVar1 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar1 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar1);
  }
  *(PUDynamicAttributeFixed **)(this + 0xb0) = pPVar1;
  pPVar1 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar1 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar1);
  }
  *(PUDynamicAttributeFixed **)(this + 0xb8) = pPVar1;
  pPVar1 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar1 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar1);
  }
  *(PUDynamicAttributeFixed **)(this + 0xc0) = pPVar1;
  pPVar1 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar1 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar1);
  }
                    /* try { // try from 00e2bdf4 to 00f2be73 has its CatchHandler @ 00e2c0b8 */
  *(PUDynamicAttributeFixed **)(this + 200) = pPVar1;
  (**(code **)(**(long **)(this + 0xb0) + 0x28))(0x3f800000);
  (**(code **)(**(long **)(this + 0xb8) + 0x28))(0x3f800000);
  (**(code **)(**(long **)(this + 0xc0) + 0x28))(0x3f800000);
  (**(code **)(**(long **)(this + 200) + 0x28))(0x3f800000);
  *(undefined4 *)(this + 0xd8) = 0x3f800000;
  return;
}

