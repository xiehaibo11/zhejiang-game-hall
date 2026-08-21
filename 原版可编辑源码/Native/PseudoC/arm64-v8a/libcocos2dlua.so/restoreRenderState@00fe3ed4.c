
/* cocos2d::RenderQueue::restoreRenderState() */

void __thiscall cocos2d::RenderQueue::restoreRenderState(RenderQueue *this)

{
  RenderQueue RVar1;
  
  RVar1 = this[0x78];
  if (RVar1 == (RenderQueue)0x0) {
    glDisable(0xb44);
  }
  else {
    glEnable(0xb44);
  }
  RenderState::StateBlock::setCullFace
            (RenderState::StateBlock::_defaultState,RVar1 != (RenderQueue)0x0);
  RVar1 = this[0x79];
  if (RVar1 == (RenderQueue)0x0) {
    glDisable(0xb71);
  }
  else {
    glEnable(0xb71);
  }
  RenderState::StateBlock::setDepthTest
            (RenderState::StateBlock::_defaultState,RVar1 != (RenderQueue)0x0);
  glDepthMask(this[0x7a]);
  RenderState::StateBlock::setDepthWrite(RenderState::StateBlock::_defaultState,(bool)this[0x79]);
  return;
}

