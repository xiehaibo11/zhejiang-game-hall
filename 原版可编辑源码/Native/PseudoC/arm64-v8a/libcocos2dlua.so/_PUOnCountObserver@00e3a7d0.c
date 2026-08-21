
/* cocos2d::PUOnCountObserver::~PUOnCountObserver() */

void __thiscall cocos2d::PUOnCountObserver::~PUOnCountObserver(PUOnCountObserver *this)

{
  PUObserver::~PUObserver((PUObserver *)this);
  operator_delete(this);
  return;
}

