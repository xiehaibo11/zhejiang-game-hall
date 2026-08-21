
/* ClipperLib::PointCount(ClipperLib::OutPt*) */

int ClipperLib::PointCount(OutPt *param_1)

{
  OutPt *pOVar1;
  int iVar2;
  OutPt *pOVar3;
  
  iVar2 = 0;
  pOVar3 = param_1;
  if (param_1 != (OutPt *)0x0) {
    do {
      pOVar1 = pOVar3 + 0x18;
      iVar2 = iVar2 + 1;
      pOVar3 = *(OutPt **)pOVar1;
    } while (*(OutPt **)pOVar1 != param_1);
  }
  return iVar2;
}

