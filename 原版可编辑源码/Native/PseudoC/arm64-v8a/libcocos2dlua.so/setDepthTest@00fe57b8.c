
/* cocos2d::Renderer::setDepthTest(bool) */

void __thiscall cocos2d::Renderer::setDepthTest(Renderer *this,bool param_1)

{
  if (param_1) {
    glClearDepthf(0x3f800000);
    glEnable(0xb71);
    glDepthFunc(0x203);
    RenderState::StateBlock::setDepthTest(RenderState::StateBlock::_defaultState,true);
    RenderState::StateBlock::setDepthFunction(RenderState::StateBlock::_defaultState,0x203);
  }
  else {
    glDisable(0xb71);
    RenderState::StateBlock::setDepthTest(RenderState::StateBlock::_defaultState,false);
  }
  this[0x1b00b1] = (Renderer)param_1;
  return;
}

