
/* cocos2d::PUParticle3DEntityRender::PUParticle3DEntityRender() */

void __thiscall
cocos2d::PUParticle3DEntityRender::PUParticle3DEntityRender(PUParticle3DEntityRender *this)

{
  Ref *this_00;
  StateBlock *this_01;
  
  Particle3DRender::Particle3DRender((Particle3DRender *)this);
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined ***)this = &PTR__PUParticle3DBoxRender_016f28d0;
  *(undefined8 *)(this + 0xd8) = 0;
  this_00 = (Ref *)RenderState::StateBlock::create();
  *(Ref **)(this + 0x70) = this_00;
  this_01 = (StateBlock *)0x0;
  if (this_00 != (Ref *)0x0) {
    Ref::retain(this_00);
    this_01 = *(StateBlock **)(this + 0x70);
  }
  RenderState::StateBlock::setCullFace(this_01,false);
  RenderState::StateBlock::setCullFaceSide(*(StateBlock **)(this + 0x70),0x405);
  RenderState::StateBlock::setDepthTest(*(StateBlock **)(this + 0x70),false);
  RenderState::StateBlock::setDepthWrite(*(StateBlock **)(this + 0x70),false);
  RenderState::StateBlock::setBlend(*(StateBlock **)(this + 0x70),true);
  return;
}

