
/* cocos2d::RenderState::StateBlock::setBlendDst(cocos2d::RenderState::Blend) */

void __thiscall cocos2d::RenderState::StateBlock::setBlendDst(StateBlock *this,int param_2)

{
  ulong uVar1;
  
  *(int *)(this + 0x30) = param_2;
  uVar1 = *(ulong *)(this + 0x60) & 0xfffffffd;
  if (*(int *)(this + 0x2c) != 1 || param_2 != 0) {
    uVar1 = *(ulong *)(this + 0x60) | 2;
  }
  *(ulong *)(this + 0x60) = uVar1;
  return;
}

