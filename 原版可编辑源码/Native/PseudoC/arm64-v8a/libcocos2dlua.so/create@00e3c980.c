
/* cocos2d::PUOnVelocityObserver::create() */

PUObserver * cocos2d::PUOnVelocityObserver::create(void)

{
  PUObserver *this;
  
  this = operator_new(0xb0,(nothrow_t *)&std::nothrow);
  if (this != (PUObserver *)0x0) {
    PUObserver::PUObserver(this);
    *(undefined8 *)(this + 0xa4) = 0;
    *(undefined ***)this = &PTR__PUObserver_016f1a18;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

