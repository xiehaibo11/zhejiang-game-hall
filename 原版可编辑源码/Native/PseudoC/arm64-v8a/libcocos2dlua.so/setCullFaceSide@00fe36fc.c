
/* cocos2d::RenderState::StateBlock::setCullFaceSide(cocos2d::RenderState::CullFaceSide) */

void __thiscall cocos2d::RenderState::StateBlock::setCullFaceSide(StateBlock *this,int param_2)

{
  ulong uVar1;
  
  *(int *)(this + 0x34) = param_2;
  uVar1 = *(ulong *)(this + 0x60) & 0xffffffbf;
  if (param_2 != 0x405) {
    uVar1 = *(ulong *)(this + 0x60) | 0x40;
  }
  *(ulong *)(this + 0x60) = uVar1;
  return;
}

