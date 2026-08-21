
/* cocos2d::LabelRenderer::render() */

void __thiscall cocos2d::LabelRenderer::render(LabelRenderer *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  byte local_58;
  ulong local_50;
  void *local_48;
  byte local_40;
  ulong local_38;
  void *local_30;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  getString();
  getFontPath();
  if (*(long *)(this + 0x38) != 0) {
    uVar1 = (ulong)(local_40 >> 1);
    if ((local_40 & 1) != 0) {
      uVar1 = local_38;
    }
    if (uVar1 != 0) {
      uVar1 = (ulong)(local_58 >> 1);
      if ((local_58 & 1) != 0) {
        uVar1 = local_50;
      }
      if (uVar1 != 0) {
        genStringLayout(this);
        renderIfChange(this);
      }
    }
  }
  if ((local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

