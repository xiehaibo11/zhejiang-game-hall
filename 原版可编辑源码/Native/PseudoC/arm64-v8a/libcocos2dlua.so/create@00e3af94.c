
/* cocos2d::PUOnExpireObserver::create() */

PUObserver * cocos2d::PUOnExpireObserver::create(void)

{
  PUObserver *this;
  
  this = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this != (PUObserver *)0x0) {
    PUObserver::PUObserver(this);
    *(undefined ***)this = &PTR__PUObserver_016f1540;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

