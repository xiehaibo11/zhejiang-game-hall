
/* ClipperLib::GetBottomPt(ClipperLib::OutPt*) */

OutPt * ClipperLib::GetBottomPt(OutPt *param_1)

{
  ulong uVar1;
  OutPt *pOVar2;
  OutPt *pOVar3;
  OutPt *pOVar4;
  
  pOVar2 = *(OutPt **)(param_1 + 0x18);
  pOVar4 = param_1;
  if (pOVar2 != param_1) {
    pOVar3 = (OutPt *)0x0;
    do {
                    /* catch() { ... } // from try @ 010317a8 with catch @ 01031778 */
      if (*(long *)(param_1 + 0x10) < *(long *)(pOVar2 + 0x10)) {
LAB_01031760:
        param_1 = pOVar2;
        pOVar3 = (OutPt *)0x0;
      }
      else if (*(long *)(pOVar2 + 0x10) == *(long *)(param_1 + 0x10)) {
        if (*(long *)(pOVar2 + 8) <= *(long *)(param_1 + 8)) {
          if (*(long *)(pOVar2 + 8) < *(long *)(param_1 + 8)) goto LAB_01031760;
                    /* try { // try from 010317a0 to 011317a7 has its CatchHandler @ 010317f0 */
                    /* try { // try from 010317a8 to 0113180b has its CatchHandler @ 01031778 */
          if ((*(OutPt **)(pOVar2 + 0x18) != param_1) && (*(OutPt **)(pOVar2 + 0x20) != param_1)) {
            pOVar3 = pOVar2;
          }
        }
      }
      pOVar2 = *(OutPt **)(pOVar2 + 0x18);
    } while (pOVar2 != param_1);
    pOVar4 = param_1;
    if (pOVar3 != (OutPt *)0x0) {
      while (pOVar3 != param_1) {
        uVar1 = FirstIsBottomPt(param_1,pOVar3);
        if ((uVar1 & 1) == 0) {
          pOVar4 = pOVar3;
        }
        do {
          do {
            pOVar3 = *(OutPt **)(pOVar3 + 0x18);
          } while (*(long *)(pOVar3 + 8) != *(long *)(pOVar4 + 8));
                    /* catch() { ... } // from try @ 010317a0 with catch @ 010317f0 */
        } while (*(long *)(pOVar3 + 0x10) != *(long *)(pOVar4 + 0x10));
      }
    }
  }
  return pOVar4;
}

