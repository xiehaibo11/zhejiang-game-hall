
/* cocos2d::Particle3DRender::setDepthWrite(bool) */

void __thiscall cocos2d::Particle3DRender::setDepthWrite(Particle3DRender *this,bool param_1)

{
  this[0x49] = (Particle3DRender)param_1;
  RenderState::StateBlock::setDepthWrite(*(StateBlock **)(this + 0x30),param_1);
  return;
}

