
/* cocos2d::PUOnTimeObserver::~PUOnTimeObserver() */

void __thiscall cocos2d::PUOnTimeObserver::~PUOnTimeObserver(PUOnTimeObserver *this)

{
  PUObserver::~PUObserver((PUObserver *)this);
                    /* try { // try from 00e3c414 to 00f3c417 has its CatchHandler @ 00e3c4a0 */
  operator_delete(this);
  return;
}

