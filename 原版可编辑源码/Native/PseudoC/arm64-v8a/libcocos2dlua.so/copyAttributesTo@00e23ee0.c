
/* cocos2d::PUBoxCollider::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall cocos2d::PUBoxCollider::copyAttributesTo(PUBoxCollider *this,PUAffector *param_1)

{
  PUBaseCollider::copyAttributesTo((PUBaseCollider *)this,param_1);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(this + 0xc0);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(this + 200);
  *(PUBoxCollider *)(param_1 + 0x108) = this[0x108];
                    /* try { // try from 00e23f18 to 00f23f67 has its CatchHandler @ 00e241e8 */
  return;
}

