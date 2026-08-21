
/* cocos2d::PUSphereRender::PUSphereRender() */

void __thiscall cocos2d::PUSphereRender::PUSphereRender(PUSphereRender *this)

{
  PUParticle3DEntityRender::PUParticle3DEntityRender((PUParticle3DEntityRender *)this);
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xe0) = 0x100010;
  *(undefined ***)this = &PTR__PUSphereRender_016f29a0;
  this[0x4a] = (PUSphereRender)0x0;
  return;
}

