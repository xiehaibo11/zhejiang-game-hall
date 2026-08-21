
/* cocos2d::PUFlockCenteringAffector::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUFlockCenteringAffector::copyAttributesTo
          (PUFlockCenteringAffector *this,PUAffector *param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 00e259cc to 00f259db has its CatchHandler @ 00e25de4 */
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  uVar1 = *(undefined8 *)(this + 0xac);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(this + 0xb4);
  *(undefined8 *)(param_1 + 0xac) = uVar1;
  uVar1 = *(undefined8 *)(this + 0xb8);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(this + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(this + 0xc4);
  return;
}

