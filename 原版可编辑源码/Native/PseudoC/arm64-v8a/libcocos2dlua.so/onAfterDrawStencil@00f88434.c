
/* cocos2d::StencilStateManager::onAfterDrawStencil() */

void __thiscall cocos2d::StencilStateManager::onAfterDrawStencil(StencilStateManager *this)

{
  glDepthMask(this[0x24]);
  RenderState::StateBlock::setDepthWrite
            (RenderState::StateBlock::_defaultState,this[0x24] != (StencilStateManager)0x0);
  glStencilFunc(0x202,*(undefined4 *)(this + 0x30),*(undefined4 *)(this + 0x30));
  glStencilOp(0x1e00,0x1e00,0x1e00);
  return;
}

