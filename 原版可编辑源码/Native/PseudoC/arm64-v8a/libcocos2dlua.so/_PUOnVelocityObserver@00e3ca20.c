
/* cocos2d::PUOnVelocityObserver::~PUOnVelocityObserver() */

void __thiscall cocos2d::PUOnVelocityObserver::~PUOnVelocityObserver(PUOnVelocityObserver *this)

{
                    /* try { // try from 00e3ca24 to 00f3caeb has its CatchHandler @ 00e3ca24
                       catch() { ... } // from try @ 00e3ca24 with catch @ 00e3ca24
                       catch() { ... } // from try @ 00e3cb38 with catch @ 00e3ca24 */
  PUObserver::~PUObserver((PUObserver *)this);
  operator_delete(this);
  return;
}

