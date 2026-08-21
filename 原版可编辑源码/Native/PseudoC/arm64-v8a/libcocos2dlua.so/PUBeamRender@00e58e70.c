
/* cocos2d::PUBeamRender::PUBeamRender() */

void __thiscall cocos2d::PUBeamRender::PUBeamRender(PUBeamRender *this)

{
  Particle3DRender::Particle3DRender((Particle3DRender *)this);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined ***)this = &PTR__PURender_016f2a08;
  PUListener::PUListener((PUListener *)(this + 0x68));
  *(undefined8 *)(this + 0xe8) = 10;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xf8) = 2;
  *(undefined ***)this = &PTR__PUBeamRender_016f2b00;
  this[0xe0] = (PUBeamRender)0x0;
  this[0x100] = (PUBeamRender)0x0;
  *(undefined4 *)(this + 0x104) = 1;
  *(undefined ***)(this + 0x68) = &PTR__PUBeamRender_016f2b78;
  *(undefined8 *)(this + 0xf0) = 0x439600003dcccccd;
  this[0x4a] = (PUBeamRender)0x1;
  return;
}

