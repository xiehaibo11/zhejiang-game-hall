
/* cocos2d::RenderState::StateBlock::setDepthFunction(cocos2d::RenderState::DepthFunction) */

void __thiscall cocos2d::RenderState::StateBlock::setDepthFunction(StateBlock *this,int param_2)

{
  ulong uVar1;
  
  *(int *)(this + 0x24) = param_2;
  uVar1 = *(ulong *)(this + 0x60) & 0xffffffdf;
  if (param_2 != 0x201) {
    uVar1 = *(ulong *)(this + 0x60) | 0x20;
  }
  *(ulong *)(this + 0x60) = uVar1;
  return;
}

