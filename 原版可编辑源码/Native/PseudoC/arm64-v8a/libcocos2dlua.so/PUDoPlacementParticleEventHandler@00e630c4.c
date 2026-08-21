
/* cocos2d::PUDoPlacementParticleEventHandler::PUDoPlacementParticleEventHandler() */

void __thiscall
cocos2d::PUDoPlacementParticleEventHandler::PUDoPlacementParticleEventHandler
          (PUDoPlacementParticleEventHandler *this)

{
  PUEventHandler::PUEventHandler((PUEventHandler *)this);
  PUListener::PUListener((PUListener *)(this + 0x70));
  *(undefined2 *)(this + 0xa8) = 0x100;
  *(undefined4 *)(this + 0x90) = 1;
  this[0xb8] = (PUDoPlacementParticleEventHandler)0x1;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb9) = 0;
  *(undefined ***)this = &PTR__PUDoPlacementParticleEventHandler_016f3448;
  *(undefined ***)(this + 0x70) = &PTR__PUDoPlacementParticleEventHandler_016f3490;
  *(undefined8 *)(this + 0x78) = 0;
  this[0xc1] = (PUDoPlacementParticleEventHandler)0x0;
  return;
}

