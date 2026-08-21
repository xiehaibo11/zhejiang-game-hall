
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::PUVortexAffector::PUVortexAffector() */

void __thiscall cocos2d::PUVortexAffector::PUVortexAffector(PUVortexAffector *this)

{
  undefined8 uVar1;
  PUDynamicAttributeFixed *this_00;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e3077c with catch @ 00e30818
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e307d8 with catch @ 00e3081c
                        */
  PUAffector::PUAffector((PUAffector *)this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e30724 with catch @ 00e30830
                        */
  *(undefined ***)this = &PTR__PUVortexAffector_016f0390;
  uVar1 = DEFAULT_ROTATION_VECTOR;
  *(undefined4 *)(this + 0xb4) = _DAT_01788de4;
  *(undefined8 *)(this + 0xac) = uVar1;
  Quaternion::Quaternion((Quaternion *)(this + 0xb8));
  this_00 = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (this_00 != (PUDynamicAttributeFixed *)0x0) {
    PUDynamicAttributeFixed::PUDynamicAttributeFixed(this_00);
  }
  *(PUDynamicAttributeFixed **)(this + 200) = this_00;
  (**(code **)(*(long *)this_00 + 0x28))(0x3f800000,this_00);
  return;
}

