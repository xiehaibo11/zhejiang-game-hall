
/* cocos2d::PUOnCollisionObserver::~PUOnCollisionObserver() */

void __thiscall cocos2d::PUOnCollisionObserver::~PUOnCollisionObserver(PUOnCollisionObserver *this)

{
  PUObserver::~PUObserver((PUObserver *)this);
  operator_delete(this);
  return;
}

