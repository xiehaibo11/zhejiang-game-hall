
/* cocos2d::PUOnVelocityObserver::copyAttributesTo(cocos2d::PUObserver*) */

void __thiscall
cocos2d::PUOnVelocityObserver::copyAttributesTo(PUOnVelocityObserver *this,PUObserver *param_1)

{
  PUObserver::copyAttributesTo((PUObserver *)this,param_1);
  *(undefined8 *)(param_1 + 0xa4) = *(undefined8 *)(this + 0xa4);
  return;
}

