
/* cocos2d::Particle3DRender::setDepthTest(bool) */

void __thiscall cocos2d::Particle3DRender::setDepthTest(Particle3DRender *this,bool param_1)

{
  this[0x48] = (Particle3DRender)param_1;
  RenderState::StateBlock::setDepthTest(*(StateBlock **)(this + 0x30),param_1);
  return;
}

