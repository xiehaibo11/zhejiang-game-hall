
/* cocos2d::Renderer::clear() */

void __thiscall cocos2d::Renderer::clear(Renderer *this)

{
  glDepthMask(1);
  glClearColor(*(undefined4 *)this,*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
               *(undefined4 *)(this + 0xc));
  glClear(0x4100);
  glDepthMask(0);
  RenderState::StateBlock::setDepthWrite(RenderState::StateBlock::_defaultState,false);
  return;
}

