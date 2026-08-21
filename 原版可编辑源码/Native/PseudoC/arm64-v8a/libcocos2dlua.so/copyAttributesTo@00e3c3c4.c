
/* cocos2d::PUOnTimeObserver::copyAttributesTo(cocos2d::PUObserver*) */

void __thiscall
cocos2d::PUOnTimeObserver::copyAttributesTo(PUOnTimeObserver *this,PUObserver *param_1)

{
  PUObserver::copyAttributesTo((PUObserver *)this,param_1);
  *(undefined8 *)(param_1 + 0xa4) = *(undefined8 *)(this + 0xa4);
  *(PUOnTimeObserver *)(param_1 + 0xac) = this[0xac];
                    /* try { // try from 00e3c3ec to 00f3c3ef has its CatchHandler @ 00e3c4a4 */
  return;
}

