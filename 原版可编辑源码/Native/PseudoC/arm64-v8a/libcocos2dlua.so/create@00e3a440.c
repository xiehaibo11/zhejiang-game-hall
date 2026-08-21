
/* cocos2d::PUOnClearObserver::create() */

PUObserver * cocos2d::PUOnClearObserver::create(void)

{
  PUObserver *this;
  
  this = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this != (PUObserver *)0x0) {
    PUObserver::PUObserver(this);
    this[0xa1] = (PUObserver)0x0;
    *(undefined ***)this = &PTR__PUObserver_016f1068;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

