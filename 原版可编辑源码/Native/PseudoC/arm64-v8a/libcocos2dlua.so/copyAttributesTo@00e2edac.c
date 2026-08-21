
/* cocos2d::PUTextureAnimator::copyAttributesTo(cocos2d::PUAffector*) */

void __thiscall
cocos2d::PUTextureAnimator::copyAttributesTo(PUTextureAnimator *this,PUAffector *param_1)

{
                    /* try { // try from 00e2edb4 to 00f2ee0f has its CatchHandler @ 00e2edb4
                       catch() { ... } // from try @ 00e2edb4 with catch @ 00e2edb4
                       catch() { ... } // from try @ 00e2ee58 with catch @ 00e2edb4
                       catch() { ... } // from try @ 00e2eea4 with catch @ 00e2edb4 */
  PUAffector::copyAttributesTo((PUAffector *)this,param_1);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(this + 0xac);
  *(PUTextureAnimator *)(param_1 + 0xb5) = this[0xb5];
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(this + 0xb8);
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(this + 0xbc);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(this + 0xbe);
  *(PUTextureAnimator *)(param_1 + 0xb4) = this[0xb4];
  return;
}

