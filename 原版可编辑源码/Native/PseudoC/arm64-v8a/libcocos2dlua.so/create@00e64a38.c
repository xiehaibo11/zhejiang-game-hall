
/* cocos2d::PUDoStopSystemEventHandler::create() */

PUEventHandler * cocos2d::PUDoStopSystemEventHandler::create(void)

{
  PUEventHandler *this;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (PUEventHandler *)0x0) {
    PUEventHandler::PUEventHandler(this);
    *(undefined ***)this = &PTR__PUEventHandler_016f35f8;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

