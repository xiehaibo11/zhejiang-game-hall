
/* cocos2d::PUBaseForceAffector::setForceVector(cocos2d::Vec3 const&) */

void __thiscall
cocos2d::PUBaseForceAffector::setForceVector(PUBaseForceAffector *this,Vec3 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
                    /* try { // try from 00e4aba0 to 00f4ac7f has its CatchHandler @ 00e4aba0
                       catch() { ... } // from try @ 00e4aba0 with catch @ 00e4aba0
                       catch() { ... } // from try @ 00e4ad84 with catch @ 00e4aba0
                       catch() { ... } // from try @ 00e4ae88 with catch @ 00e4aba0
                       catch() { ... } // from try @ 00e4aed4 with catch @ 00e4aba0 */
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0xac) = uVar1;
  return;
}

