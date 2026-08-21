
/* cocos2d::PUOnPositionObserver::copyAttributesTo(cocos2d::PUObserver*) */

void __thiscall
cocos2d::PUOnPositionObserver::copyAttributesTo(PUOnPositionObserver *this,PUObserver *param_1)

{
  PUObserver::copyAttributesTo((PUObserver *)this,param_1);
                    /* catch() { ... } // from try @ 00e3b2a0 with catch @ 00e3b324 */
  *(undefined8 *)(param_1 + 0xa4) = *(undefined8 *)(this + 0xa4);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(this + 0xac);
  *(undefined8 *)(param_1 + 0xb4) = *(undefined8 *)(this + 0xb4);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(this + 0xbc);
  *(PUOnPositionObserver *)(param_1 + 0xb0) = this[0xb0];
                    /* catch() { ... } // from try @ 00e3b284 with catch @ 00e3b34c
                       catch() { ... } // from try @ 00e3b2ac with catch @ 00e3b34c */
  *(PUOnPositionObserver *)(param_1 + 0xb1) = this[0xb1];
  *(PUOnPositionObserver *)(param_1 + 0xb2) = this[0xb2];
  return;
}

