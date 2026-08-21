
/* cocos2d::PUOnPositionObserver::~PUOnPositionObserver() */

void __thiscall cocos2d::PUOnPositionObserver::~PUOnPositionObserver(PUOnPositionObserver *this)

{
  PUObserver::~PUObserver((PUObserver *)this);
  operator_delete(this);
  return;
}

