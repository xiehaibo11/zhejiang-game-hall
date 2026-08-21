
/* cocos2d::RenderState::StateBlock::setFrontFace(cocos2d::RenderState::FrontFace) */

void __thiscall cocos2d::RenderState::StateBlock::setFrontFace(StateBlock *this,int param_2)

{
  ulong uVar1;
  
  *(int *)(this + 0x38) = param_2;
  uVar1 = *(ulong *)(this + 0x60) & 0xfffff7ff;
  if (param_2 != 0x901) {
    uVar1 = *(ulong *)(this + 0x60) | 0x800;
  }
  *(ulong *)(this + 0x60) = uVar1;
  return;
}

