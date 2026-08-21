
/* cocos2d::PUOnEventFlagObserver::~PUOnEventFlagObserver() */

void __thiscall cocos2d::PUOnEventFlagObserver::~PUOnEventFlagObserver(PUOnEventFlagObserver *this)

{
  PUObserver::~PUObserver((PUObserver *)this);
  operator_delete(this);
  return;
}

