
/* cocos2d::PUDoEnableComponentEventHandler::create() */

PUEventHandler * cocos2d::PUDoEnableComponentEventHandler::create(void)

{
  PUEventHandler *this;
  
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (PUEventHandler *)0x0) {
    PUEventHandler::PUEventHandler(this);
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0x88) = 3;
    *(undefined ***)this = &PTR__PUDoEnableComponentEventHandler_016f3250;
    this[0x8c] = (PUEventHandler)0x1;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

