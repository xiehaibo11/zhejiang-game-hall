
/* fairygui::GTreeNode::removeChildren(int, int) */

void __thiscall fairygui::GTreeNode::removeChildren(GTreeNode *this,int param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  
                    /* catch() { ... } // from try @ 00a8f358 with catch @ 00a8f458 */
  if (param_2 < 0) {
    uVar1 = *(long *)(this + 0x60) - *(long *)(this + 0x58);
  }
  else {
    uVar1 = *(long *)(this + 0x60) - *(long *)(this + 0x58);
    if ((long)param_2 < (long)uVar1 >> 3) goto joined_r0x00a8f498;
  }
  param_2 = (int)(uVar1 >> 3) + -1;
joined_r0x00a8f498:
  if (param_1 <= param_2) {
    iVar2 = param_1 + -1;
    do {
      removeChildAt(this,param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}

