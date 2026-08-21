
/* ClipperLib::Poly2ContainsPoly1(ClipperLib::OutPt*, ClipperLib::OutPt*) */

bool ClipperLib::Poly2ContainsPoly1(OutPt *param_1,OutPt *param_2)

{
  int iVar1;
  OutPt *pOVar2;
  
  pOVar2 = param_1;
  do {
    iVar1 = PointInPolygon((IntPoint *)(pOVar2 + 8),param_2);
    if (-1 < iVar1) {
      return iVar1 != 0;
    }
    pOVar2 = *(OutPt **)(pOVar2 + 0x18);
  } while (pOVar2 != param_1);
  return true;
}

