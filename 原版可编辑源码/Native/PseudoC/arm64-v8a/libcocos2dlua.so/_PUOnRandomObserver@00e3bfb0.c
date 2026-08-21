
/* cocos2d::PUOnRandomObserver::~PUOnRandomObserver() */

void __thiscall cocos2d::PUOnRandomObserver::~PUOnRandomObserver(PUOnRandomObserver *this)

{
  PUObserver::~PUObserver((PUObserver *)this);
  operator_delete(this);
  return;
}

