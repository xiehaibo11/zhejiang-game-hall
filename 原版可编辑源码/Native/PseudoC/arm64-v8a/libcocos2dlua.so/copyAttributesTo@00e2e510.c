
/* cocos2d::PUSphereCollider::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUSphereCollider::copyAttributesTo(PUSphereCollider *this,PUAffector *param_1)

{
  undefined8 uVar1;
  
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(this + 0xc0);
  uVar1 = *(undefined8 *)(this + 0xc4);
  *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(this + 0xcc);
  *(undefined8 *)(param_1 + 0xc4) = uVar1;
                    /* try { // try from 00e2e53c to 00f2e5d7 has its CatchHandler @ 00e2e844 */
  *(PUSphereCollider *)(param_1 + 0xe0) = this[0xe0];
  return;
}

