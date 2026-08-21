
/* ClipperLib::DisposeOutPts(ClipperLib::OutPt*&) */

void ClipperLib::DisposeOutPts(OutPt **param_1)

{
  OutPt *pOVar1;
  
  if (*param_1 != (OutPt *)0x0) {
    *(undefined8 *)(*(long *)(*param_1 + 0x20) + 0x18) = 0;
    pOVar1 = *param_1;
    while (pOVar1 != (OutPt *)0x0) {
      *param_1 = *(OutPt **)(pOVar1 + 0x18);
      operator_delete(pOVar1);
      pOVar1 = *param_1;
    }
  }
  return;
}

