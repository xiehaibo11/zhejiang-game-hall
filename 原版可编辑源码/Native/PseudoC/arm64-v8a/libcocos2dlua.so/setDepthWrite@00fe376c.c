
/* cocos2d::RenderState::StateBlock::setDepthWrite(bool) */

void __thiscall cocos2d::RenderState::StateBlock::setDepthWrite(StateBlock *this,bool param_1)

{
  ulong uVar1;
  
  this[0x23] = (StateBlock)param_1;
  uVar1 = *(ulong *)(this + 0x60) | 0x10;
  if (!param_1) {
    uVar1 = *(ulong *)(this + 0x60) & 0xffffffef;
  }
  *(ulong *)(this + 0x60) = uVar1;
  return;
}

