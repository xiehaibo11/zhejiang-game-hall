
/* cocos2d::Particle3DRender::Particle3DRender() */

void __thiscall cocos2d::Particle3DRender::Particle3DRender(Particle3DRender *this)

{
  Ref *this_00;
  
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x28) = 0;
  this[0x38] = (Particle3DRender)0x1;
  *(undefined ***)this = &PTR__Particle3DRender_016f2f98;
  *(undefined2 *)(this + 0x48) = 1;
  *(undefined4 *)(this + 0x44) = 0x3f800000;
  *(undefined8 *)(this + 0x3c) = 0x3f8000003f800000;
  this_00 = (Ref *)RenderState::StateBlock::create();
  *(Ref **)(this + 0x30) = this_00;
  Ref::retain(this_00);
  RenderState::StateBlock::setCullFace(*(StateBlock **)(this + 0x30),false);
  RenderState::StateBlock::setCullFaceSide(*(StateBlock **)(this + 0x30),0x405);
  RenderState::StateBlock::setDepthTest(*(StateBlock **)(this + 0x30),false);
  RenderState::StateBlock::setDepthWrite(*(StateBlock **)(this + 0x30),false);
  RenderState::StateBlock::setBlend(*(StateBlock **)(this + 0x30),true);
  return;
}

