
/* cocostudio::ActionNode::getFirstFrameIndex() */

int __thiscall cocostudio::ActionNode::getFirstFrameIndex(ActionNode *this)

{
  undefined8 *puVar1;
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
    iVar7 = 99999;
    do {
      if ((ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar5 = *(long **)(*(long *)(this + 0x50) + uVar6 * 8);
      puVar1 = (undefined8 *)*plVar5;
      if (puVar1 != (undefined8 *)plVar5[1]) {
        iVar3 = ActionFrame::getFrameIndex((ActionFrame *)*puVar1);
        iVar4 = *(int *)(this + 0x68);
        if (iVar7 <= iVar3) {
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

