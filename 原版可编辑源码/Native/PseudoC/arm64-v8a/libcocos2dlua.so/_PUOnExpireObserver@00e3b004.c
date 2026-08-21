
/* cocos2d::PUOnExpireObserver::~PUOnExpireObserver() */

void __thiscall cocos2d::PUOnExpireObserver::~PUOnExpireObserver(PUOnExpireObserver *this)

{
  PUObserver::~PUObserver((PUObserver *)this);
  operator_delete(this);
  return;
}

