
/* cocos2d::RenderState::StateBlock::setBlendSrc(cocos2d::RenderState::Blend) */

void __thiscall cocos2d::RenderState::StateBlock::setBlendSrc(StateBlock *this,int param_2)

{
  *(int *)(this + 0x2c) = param_2;
  if ((param_2 == 1) && (*(int *)(this + 0x30) == 0)) {
    *(ulong *)(this + 0x60) = *(ulong *)(this + 0x60) & 0xfffffffd;
    return;
  }
  *(ulong *)(this + 0x60) = *(ulong *)(this + 0x60) | 2;
  return;
}

