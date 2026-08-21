
/* cocos2d::PUOnCountObserver::notifyStart() */

void __thiscall cocos2d::PUOnCountObserver::notifyStart(PUOnCountObserver *this)

{
  PUObserver::notifyStart((PUObserver *)this);
  *(undefined4 *)(this + 0xa4) = 1;
  return;
}

