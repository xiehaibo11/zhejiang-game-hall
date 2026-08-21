
/* ClipperLib::PointIsVertex(ClipperLib::IntPoint const&, ClipperLib::OutPt*) */

undefined8 ClipperLib::PointIsVertex(IntPoint *param_1,OutPt *param_2)

{
  OutPt *pOVar1;
  
  pOVar1 = param_2;
  while ((*(long *)(pOVar1 + 8) != *(long *)param_1 ||
         (*(long *)(pOVar1 + 0x10) != *(long *)(param_1 + 8)))) {
    pOVar1 = *(OutPt **)(pOVar1 + 0x18);
    if (pOVar1 == param_2) {
      return 0;
    }
  }
  return 1;
}

