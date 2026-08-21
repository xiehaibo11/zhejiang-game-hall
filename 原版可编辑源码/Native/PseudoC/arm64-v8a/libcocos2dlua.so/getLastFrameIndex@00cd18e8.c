
/* cocostudio::ActionNode::getLastFrameIndex() */

int __thiscall cocostudio::ActionNode::getLastFrameIndex(ActionNode *this)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  
  iVar4 = *(int *)(this + 0x68);
  if (iVar4 < 1) {
    iVar7 = 0;
  }
  else {
    uVar6 = 0;
    bVar2 = false;
    iVar7 = -1;
    do {
      if ((ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar5 = *(long **)(*(long *)(this + 0x50) + uVar6 * 8);
      lVar1 = plVar5[1];
      if (*plVar5 != lVar1) {
        iVar3 = ActionFrame::getFrameIndex(*(ActionFrame **)(lVar1 + -8));
        iVar4 = *(int *)(this + 0x68);
        if (iVar3 <= iVar7) {
          iVar3 = iVar7;
        }
        bVar2 = true;
        iVar7 = iVar3;
      }
      uVar6 = uVar6 + 1;
    } while ((long)uVar6 < (long)iVar4);
    if (!bVar2) {
      iVar7 = 0;
    }
  }
  return iVar7;
}

