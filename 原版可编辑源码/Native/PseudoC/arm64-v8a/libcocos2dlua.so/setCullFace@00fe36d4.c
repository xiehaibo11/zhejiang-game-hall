
/* cocos2d::RenderState::StateBlock::setCullFace(bool) */

void __thiscall cocos2d::RenderState::StateBlock::setCullFace(StateBlock *this,bool param_1)

{
  ulong uVar1;
  
  this[0x21] = (StateBlock)param_1;
  uVar1 = *(ulong *)(this + 0x60) | 4;
  if (!param_1) {
    uVar1 = *(ulong *)(this + 0x60) & 0xfffffffb;
  }
  *(ulong *)(this + 0x60) = uVar1;
  return;
}

