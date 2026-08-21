
/* cocos2d::PUOnCountObserver::create() */

PUObserver * cocos2d::PUOnCountObserver::create(void)

{
  PUObserver *this;
  
  this = operator_new(0xb0,(nothrow_t *)&std::nothrow);
  if (this != (PUObserver *)0x0) {
    PUObserver::PUObserver(this);
    *(undefined4 *)(this + 0xac) = 0;
    *(undefined8 *)(this + 0xa4) = 1;
    *(undefined ***)this = &PTR__PUObserver_016f1258;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

