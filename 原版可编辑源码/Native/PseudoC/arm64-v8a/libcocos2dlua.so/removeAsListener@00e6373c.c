
/* cocos2d::PUDoPlacementParticleEventHandler::removeAsListener() */

void __thiscall
cocos2d::PUDoPlacementParticleEventHandler::removeAsListener
          (PUDoPlacementParticleEventHandler *this)

{
  PUParticleSystem3D *this_00;
  
  this_00 = *(PUParticleSystem3D **)(this + 0x98);
  if (this_00 != (PUParticleSystem3D *)0x0) {
    PUParticleSystem3D::removeListener(this_00,(PUListener *)(this + 0x70));
  }
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  this[0xa8] = (PUDoPlacementParticleEventHandler)0x0;
  return;
}

