
/* cocos2d::RenderState::StateBlock::setBlend(bool) */

void __thiscall cocos2d::RenderState::StateBlock::setBlend(StateBlock *this,bool param_1)

{
  ulong uVar1;
  
  this[0x28] = (StateBlock)param_1;
  uVar1 = *(ulong *)(this + 0x60) & 0xfffffffe;
  if (!param_1) {
    uVar1 = *(ulong *)(this + 0x60) | 1;
  }
  *(ulong *)(this + 0x60) = uVar1;
  return;
}

