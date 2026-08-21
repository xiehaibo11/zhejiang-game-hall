
/* cocos2d::PUOnClearObserver::~PUOnClearObserver() */

void __thiscall cocos2d::PUOnClearObserver::~PUOnClearObserver(PUOnClearObserver *this)

{
  PUObserver::~PUObserver((PUObserver *)this);
  operator_delete(this);
  return;
}

