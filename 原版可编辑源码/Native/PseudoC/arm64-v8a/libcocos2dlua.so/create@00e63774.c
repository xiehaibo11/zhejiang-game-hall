
/* cocos2d::PUDoPlacementParticleEventHandler::create() */

PUEventHandler * cocos2d::PUDoPlacementParticleEventHandler::create(void)

{
  PUEventHandler *this;
  
  this = operator_new(200,(nothrow_t *)&std::nothrow);
  if (this != (PUEventHandler *)0x0) {
    PUEventHandler::PUEventHandler(this);
    PUListener::PUListener((PUListener *)(this + 0x70));
    *(undefined2 *)(this + 0xa8) = 0x100;
    *(undefined4 *)(this + 0x90) = 1;
    this[0xb8] = (PUEventHandler)0x1;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0xb0) = 0;
    *(undefined8 *)(this + 0xb9) = 0;
    *(undefined ***)this = &PTR__PUDoPlacementParticleEventHandler_016f3448;
    *(undefined ***)(this + 0x70) = &PTR__PUDoPlacementParticleEventHandler_016f3490;
    *(undefined8 *)(this + 0x78) = 0;
    this[0xc1] = (PUEventHandler)0x0;
  }
  Ref::autorelease((Ref *)this);
  return this;
}

