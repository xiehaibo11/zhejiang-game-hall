
/* non-virtual thunk to
   cocos2d::PUDoPlacementParticleEventHandler::~PUDoPlacementParticleEventHandler() */

void __thiscall
cocos2d::PUDoPlacementParticleEventHandler::~PUDoPlacementParticleEventHandler
          (PUDoPlacementParticleEventHandler *this)

{
  PUEventHandler *this_00;
  
  this_00 = (PUEventHandler *)(this + -0x70);
  *(undefined ***)this_00 = &PTR__PUDoPlacementParticleEventHandler_016f3448;
  *(undefined ***)this = &PTR__PUDoPlacementParticleEventHandler_016f3490;
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  PUListener::~PUListener((PUListener *)this);
  PUEventHandler::~PUEventHandler(this_00);
  operator_delete(this_00);
  return;
}

