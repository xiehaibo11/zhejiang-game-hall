
/* cocos2d::RenderState::StateBlock::setDepthTest(bool) */

void __thiscall cocos2d::RenderState::StateBlock::setDepthTest(StateBlock *this,bool param_1)

{
  ulong uVar1;
  
  this[0x22] = (StateBlock)param_1;
  uVar1 = *(ulong *)(this + 0x60) & 0xfffffff7;
  if (!param_1) {
    uVar1 = *(ulong *)(this + 0x60) | 8;
  }
  *(ulong *)(this + 0x60) = uVar1;
  return;
}

