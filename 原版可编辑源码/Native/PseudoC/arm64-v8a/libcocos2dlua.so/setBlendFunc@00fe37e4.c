
/* cocos2d::RenderState::StateBlock::setBlendFunc(cocos2d::BlendFunc const&) */

void __thiscall cocos2d::RenderState::StateBlock::setBlendFunc(StateBlock *this,BlendFunc *param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  iVar2 = *(int *)param_1;
  *(int *)(this + 0x2c) = iVar2;
  if ((iVar2 == 1) && (*(int *)(this + 0x30) == 0)) {
    uVar3 = *(ulong *)(this + 0x60) & 0xfffffffd;
  }
  else {
    uVar3 = *(ulong *)(this + 0x60) | 2;
  }
  *(ulong *)(this + 0x60) = uVar3;
                    /* try { // try from 00fe3818 to 010e381f has its CatchHandler @ 00fe3898 */
                    /* try { // try from 00fe3820 to 010e38b3 has its CatchHandler @ 00fe37dc */
  uVar1 = uVar3 & 0xfffffffd;
  if (*(int *)(param_1 + 4) != 0 || iVar2 != 1) {
    uVar1 = uVar3 | 2;
  }
  *(int *)(this + 0x30) = *(int *)(param_1 + 4);
  *(ulong *)(this + 0x60) = uVar1;
  return;
}

