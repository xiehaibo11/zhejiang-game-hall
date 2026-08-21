
/* cocos2d::PURandomiser::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall cocos2d::PURandomiser::copyAttributesTo(PURandomiser *this,PUAffector *param_1)

{
  undefined4 uVar1;
  
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(this + 0xac);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(this + 0xb4);
  uVar1 = *(undefined4 *)(this + 0xbc);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  *(PURandomiser *)(param_1 + 0xc0) = this[0xc0];
                    /* try { // try from 00e2b538 to 00f2b5eb has its CatchHandler @ 00e2b538
                       catch() { ... } // from try @ 00e2b538 with catch @ 00e2b538
                       catch() { ... } // from try @ 00e2b5f8 with catch @ 00e2b538
                       catch() { ... } // from try @ 00e2b6bc with catch @ 00e2b538 */
  return;
}

