
/* cocos2d::PUOnEmissionObserver::~PUOnEmissionObserver() */

void __thiscall cocos2d::PUOnEmissionObserver::~PUOnEmissionObserver(PUOnEmissionObserver *this)

{
  PUObserver::~PUObserver((PUObserver *)this);
  operator_delete(this);
  return;
}

