
/* cocos2d::PUDoFreezeEventHandler::create() */

PUEventHandler * cocos2d::PUDoFreezeEventHandler::create(void)

{
  PUEventHandler *this;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (PUEventHandler *)0x0) {
    PUEventHandler::PUEventHandler(this);
    *(undefined ***)this = &PTR__PUEventHandler_016f33a0;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

