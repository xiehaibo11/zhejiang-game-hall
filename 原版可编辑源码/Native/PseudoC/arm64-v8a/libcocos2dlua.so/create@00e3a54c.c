
/* cocos2d::PUOnCollisionObserver::create() */

PUObserver * cocos2d::PUOnCollisionObserver::create(void)

{
  PUObserver *this;
  
  this = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this != (PUObserver *)0x0) {
    PUObserver::PUObserver(this);
    *(undefined ***)this = &PTR__PUObserver_016f1160;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

