
/* cocos2d::PUOnRandomObserver::copyAttributesTo(cocos2d::PUObserver*) */

void __thiscall
cocos2d::PUOnRandomObserver::copyAttributesTo(PUOnRandomObserver *this,PUObserver *param_1)

{
  PUObserver::copyAttributesTo((PUObserver *)this,param_1);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(this + 0xa4);
  return;
}

