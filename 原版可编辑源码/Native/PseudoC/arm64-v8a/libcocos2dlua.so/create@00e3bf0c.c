
/* cocos2d::PUOnRandomObserver::create() */

PUObserver * cocos2d::PUOnRandomObserver::create(void)

{
  PUObserver *this;
  
  this = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this != (PUObserver *)0x0) {
    PUObserver::PUObserver(this);
    *(undefined4 *)(this + 0xa4) = 0x3f000000;
    *(undefined ***)this = &PTR__PUObserver_016f1828;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

