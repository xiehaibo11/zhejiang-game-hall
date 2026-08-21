
/* ClipperLib::GetLowermostRec(ClipperLib::OutRec*, ClipperLib::OutRec*) */

OutRec * ClipperLib::GetLowermostRec(OutRec *param_1,OutRec *param_2)

{
  ulong uVar1;
  OutPt *pOVar2;
  OutRec *pOVar3;
  OutPt *pOVar4;
  OutPt *pOVar5;
  OutPt *pOVar6;
  
  pOVar5 = *(OutPt **)(param_1 + 0x20);
  if (pOVar5 == (OutPt *)0x0) {
    pOVar6 = *(OutPt **)(param_1 + 0x18);
    pOVar2 = *(OutPt **)(pOVar6 + 0x18);
    pOVar5 = pOVar6;
    if (pOVar2 != pOVar6) {
      pOVar4 = (OutPt *)0x0;
      do {
                    /* catch() { ... } // from try @ 010367cc with catch @ 01036cd8 */
                    /* catch() { ... } // from try @ 010367bc with catch @ 01036cdc */
                    /* catch() { ... } // from try @ 0103682c with catch @ 01036ce0 */
        if (*(long *)(pOVar6 + 0x10) < *(long *)(pOVar2 + 0x10)) {
LAB_01036cc0:
          pOVar6 = pOVar2;
          pOVar4 = (OutPt *)0x0;
        }
        else if (*(long *)(pOVar2 + 0x10) == *(long *)(pOVar6 + 0x10)) {
          if (*(long *)(pOVar2 + 8) <= *(long *)(pOVar6 + 8)) {
            if (*(long *)(pOVar2 + 8) < *(long *)(pOVar6 + 8)) goto LAB_01036cc0;
            if ((*(OutPt **)(pOVar2 + 0x18) != pOVar6) && (*(OutPt **)(pOVar2 + 0x20) != pOVar6)) {
              pOVar4 = pOVar2;
            }
          }
        }
        pOVar2 = *(OutPt **)(pOVar2 + 0x18);
      } while (pOVar2 != pOVar6);
      pOVar5 = pOVar6;
      if (pOVar4 != (OutPt *)0x0) {
        while (pOVar4 != pOVar6) {
          uVar1 = FirstIsBottomPt(pOVar6,pOVar4);
          if ((uVar1 & 1) == 0) {
            pOVar5 = pOVar4;
          }
          do {
            do {
              pOVar4 = *(OutPt **)(pOVar4 + 0x18);
            } while (*(long *)(pOVar4 + 8) != *(long *)(pOVar5 + 8));
          } while (*(long *)(pOVar4 + 0x10) != *(long *)(pOVar5 + 0x10));
        }
      }
    }
    *(OutPt **)(param_1 + 0x20) = pOVar5;
    pOVar6 = *(OutPt **)(param_2 + 0x20);
  }
  else {
    pOVar6 = *(OutPt **)(param_2 + 0x20);
  }
  if (pOVar6 == (OutPt *)0x0) {
    pOVar5 = *(OutPt **)(param_2 + 0x18);
    pOVar2 = *(OutPt **)(pOVar5 + 0x18);
    pOVar6 = pOVar5;
    if (pOVar2 != pOVar5) {
      pOVar4 = (OutPt *)0x0;
      do {
        if (*(long *)(pOVar5 + 0x10) < *(long *)(pOVar2 + 0x10)) {
LAB_01036d94:
          pOVar5 = pOVar2;
          pOVar4 = (OutPt *)0x0;
        }
        else if (*(long *)(pOVar2 + 0x10) == *(long *)(pOVar5 + 0x10)) {
          if (*(long *)(pOVar2 + 8) <= *(long *)(pOVar5 + 8)) {
            if (*(long *)(pOVar2 + 8) < *(long *)(pOVar5 + 8)) goto LAB_01036d94;
            if ((*(OutPt **)(pOVar2 + 0x18) != pOVar5) && (*(OutPt **)(pOVar2 + 0x20) != pOVar5)) {
              pOVar4 = pOVar2;
            }
          }
        }
        pOVar2 = *(OutPt **)(pOVar2 + 0x18);
      } while (pOVar2 != pOVar5);
      pOVar6 = pOVar5;
      if (pOVar4 != (OutPt *)0x0) {
        while (pOVar4 != pOVar5) {
          uVar1 = FirstIsBottomPt(pOVar5,pOVar4);
          if ((uVar1 & 1) == 0) {
            pOVar6 = pOVar4;
          }
          do {
            do {
              pOVar4 = *(OutPt **)(pOVar4 + 0x18);
            } while (*(long *)(pOVar4 + 8) != *(long *)(pOVar6 + 8));
          } while (*(long *)(pOVar4 + 0x10) != *(long *)(pOVar6 + 0x10));
        }
      }
    }
    *(OutPt **)(param_2 + 0x20) = pOVar6;
    pOVar5 = *(OutPt **)(param_1 + 0x20);
  }
  pOVar3 = param_1;
  if ((*(long *)(pOVar5 + 0x10) <= *(long *)(pOVar6 + 0x10)) &&
     (pOVar3 = param_2, *(long *)(pOVar6 + 0x10) <= *(long *)(pOVar5 + 0x10))) {
    pOVar3 = param_1;
    if (((*(long *)(pOVar6 + 8) <= *(long *)(pOVar5 + 8)) &&
        (((pOVar3 = param_2, *(long *)(pOVar5 + 8) <= *(long *)(pOVar6 + 8) &&
          (*(OutPt **)(pOVar5 + 0x18) != pOVar5)) &&
         (pOVar3 = param_1, *(OutPt **)(pOVar6 + 0x18) != pOVar6)))) &&
       (uVar1 = FirstIsBottomPt(pOVar5,pOVar6), (uVar1 & 1) == 0)) {
      pOVar3 = param_2;
    }
  }
  return pOVar3;
}

