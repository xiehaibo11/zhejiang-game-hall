
/* ClipperLib::PointInPolygon(ClipperLib::IntPoint const&, ClipperLib::OutPt*) */

int ClipperLib::PointInPolygon(IntPoint *param_1,OutPt *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  OutPt *pOVar5;
  OutPt *pOVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  
  lVar1 = *(long *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  iVar4 = 0;
  pOVar5 = param_2;
  do {
    pOVar6 = *(OutPt **)(pOVar5 + 0x18);
    lVar7 = *(long *)(pOVar6 + 0x10);
    iVar3 = iVar4;
    if (lVar7 - lVar2 == 0) {
      if (*(long *)(pOVar6 + 8) == lVar1) {
        return -1;
      }
      lVar8 = *(long *)(pOVar5 + 0x10);
      if (lVar8 != lVar2) goto LAB_01030de8;
      if (*(long *)(pOVar6 + 8) <= lVar1 != *(long *)(pOVar5 + 8) < lVar1) {
        return -1;
      }
      lVar8 = lVar2;
      if (lVar7 < lVar2) goto LAB_01030e00;
    }
    else {
      lVar8 = *(long *)(pOVar5 + 0x10);
LAB_01030de8:
      if (lVar7 < lVar2 != lVar8 < lVar2) {
LAB_01030e00:
        lVar9 = *(long *)(pOVar6 + 8);
        if (*(long *)(pOVar5 + 8) < lVar1) {
          lVar10 = lVar9 - lVar1;
          if (lVar10 != 0 && lVar1 <= lVar9) {
LAB_01030e24:
            dVar11 = (double)(lVar7 - lVar2) * (double)(*(long *)(pOVar5 + 8) - lVar1) -
                     (double)(lVar8 - lVar2) * (double)lVar10;
            if (dVar11 == 0.0) {
              return -1;
            }
            iVar3 = 1 - iVar4;
            if (lVar8 < lVar7 == dVar11 <= 0.0) {
              iVar3 = iVar4;
            }
          }
        }
        else {
          lVar10 = lVar9 - lVar1;
          if (lVar10 == 0 || lVar9 < lVar1) goto LAB_01030e24;
          iVar3 = 1 - iVar4;
        }
      }
    }
    iVar4 = iVar3;
    pOVar5 = pOVar6;
    if (pOVar6 == param_2) {
      return iVar4;
    }
  } while( true );
}

