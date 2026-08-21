
/* cocos2d::PUDoScaleEventHandler::create() */

PUEventHandler * cocos2d::PUDoScaleEventHandler::create(void)

{
  PUEventHandler *this;
  
  this = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this != (PUEventHandler *)0x0) {
    PUEventHandler::PUEventHandler(this);
    *(undefined8 *)(this + 0x6c) = 0x3e4ccccd;
    *(undefined ***)this = &PTR__PUEventHandler_016f3550;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

