
/* cocos2d::PUDoAffectorEventHandler::create() */

PUEventHandler * cocos2d::PUDoAffectorEventHandler::create(void)

{
  PUEventHandler *this;
  
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (PUEventHandler *)0x0) {
    PUEventHandler::PUEventHandler(this);
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    this[0x88] = (PUEventHandler)0x0;
    *(undefined ***)this = &PTR__PUDoAffectorEventHandler_016f31a8;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

