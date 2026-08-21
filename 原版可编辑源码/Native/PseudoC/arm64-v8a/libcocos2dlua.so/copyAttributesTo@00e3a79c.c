
/* cocos2d::PUOnCountObserver::copyAttributesTo(cocos2d::PUObserver*) */

void __thiscall
cocos2d::PUOnCountObserver::copyAttributesTo(PUOnCountObserver *this,PUObserver *param_1)

{
                    /* try { // try from 00e3a79c to 00f3a7f3 has its CatchHandler @ 00e3a79c
                       catch() { ... } // from try @ 00e3a79c with catch @ 00e3a79c
                       catch() { ... } // from try @ 00e3a874 with catch @ 00e3a79c */
  PUObserver::copyAttributesTo((PUObserver *)this,param_1);
  *(undefined8 *)(param_1 + 0xa4) = *(undefined8 *)(this + 0xa4);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(this + 0xac);
  return;
}

