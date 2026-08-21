
/* cocos2d::PUTextureRotator::PUTextureRotator() */

void __thiscall cocos2d::PUTextureRotator::PUTextureRotator(PUTextureRotator *this)

{
  PUDynamicAttributeFixed *pPVar1;
  
  PUAffector::PUAffector((PUAffector *)this);
  this[0xac] = (PUTextureRotator)0x0;
  *(undefined ***)this = &PTR__PUTextureRotator_016f0190;
  *(undefined8 *)(this + 0xb0) = 0x40c90fdb00000000;
  pPVar1 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar1 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar1);
  }
  *(PUDynamicAttributeFixed **)(this + 0xb8) = pPVar1;
  (**(code **)(*(long *)pPVar1 + 0x28))(0,pPVar1);
  pPVar1 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (pPVar1 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(pPVar1);
  }
  *(PUDynamicAttributeFixed **)(this + 0xc0) = pPVar1;
  (**(code **)(*(long *)pPVar1 + 0x28))(0x41200000,pPVar1);
  return;
}

