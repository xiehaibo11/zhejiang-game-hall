
/* cocos2d::PUOnEventFlagObserver::create() */

PUObserver * cocos2d::PUOnEventFlagObserver::create(void)

{
  PUObserver *this;
  
                    /* try { // try from 00e3ad14 to 00f3ad17 has its CatchHandler @ 00e3ad78 */
                    /* try { // try from 00e3ad18 to 00f3ad6f has its CatchHandler @ 00e3acc4 */
  this = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this != (PUObserver *)0x0) {
    PUObserver::PUObserver(this);
    *(undefined4 *)(this + 0xa4) = 0;
    *(undefined ***)this = &PTR__PUObserver_016f1448;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

