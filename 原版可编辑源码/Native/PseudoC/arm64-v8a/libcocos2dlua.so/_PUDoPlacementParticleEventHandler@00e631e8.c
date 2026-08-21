
/* cocos2d::PUDoPlacementParticleEventHandler::~PUDoPlacementParticleEventHandler() */

void __thiscall
cocos2d::PUDoPlacementParticleEventHandler::~PUDoPlacementParticleEventHandler
          (PUDoPlacementParticleEventHandler *this)

{
  *(undefined ***)this = &PTR__PUDoPlacementParticleEventHandler_016f3448;
  *(undefined ***)(this + 0x70) = &PTR__PUDoPlacementParticleEventHandler_016f3490;
  if (((byte)this[0x78] & 1) != 0) {
    operator_delete(*(void **)(this + 0x88));
  }
  PUListener::~PUListener((PUListener *)(this + 0x70));
  PUEventHandler::~PUEventHandler((PUEventHandler *)this);
  operator_delete(this);
  return;
}

