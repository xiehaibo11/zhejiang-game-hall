
/* cocos2d::RenderState::StateBlock::bind() */

void __thiscall cocos2d::RenderState::StateBlock::bind(StateBlock *this)

{
  restore(*(long *)(this + 0x60));
  bindNoRestore(this);
  return;
}

