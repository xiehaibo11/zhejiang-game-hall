
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::PUBaseForceAffector::PUBaseForceAffector() */

void __thiscall cocos2d::PUBaseForceAffector::PUBaseForceAffector(PUBaseForceAffector *this)

{
  undefined8 uVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e4aa70 with catch @ 00e4aafc
                        */
  PUAffector::PUAffector((PUAffector *)this);
  *(undefined ***)this = &PTR__PUBaseForceAffector_016f2348;
  uVar1 = DEFAULT_FORCE_VECTOR;
  *(undefined4 *)(this + 0xb4) = _DAT_0178ef1c;
  *(undefined8 *)(this + 0xac) = uVar1;
  Vec3::Vec3((Vec3 *)(this + 0xb8));
  *(undefined4 *)(this + 0xc4) = 1;
  return;
}

