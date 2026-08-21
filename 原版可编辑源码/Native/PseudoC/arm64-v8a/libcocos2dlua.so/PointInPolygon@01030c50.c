
/* ClipperLib::PointInPolygon(ClipperLib::IntPoint const&, std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > const&) */

int ClipperLib::PointInPolygon(IntPoint *param_1,vector *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  double dVar15;
  
  plVar2 = *(long **)param_2;
  uVar11 = *(long *)(param_2 + 8) - (long)plVar2 >> 4;
  if (uVar11 < 3) {
    return 0;
  }
  lVar3 = *(long *)param_1;
  lVar5 = *(long *)(param_1 + 8);
  uVar13 = 1;
  lVar9 = *plVar2;
  lVar14 = plVar2[1];
  plVar12 = plVar2;
  iVar8 = 0;
  do {
    plVar12 = plVar12 + 2;
    plVar1 = plVar2;
    if (uVar11 != uVar13) {
      plVar1 = plVar12;
    }
    lVar4 = *plVar1;
    lVar6 = plVar1[1];
    if (lVar6 == lVar5) {
      if (lVar4 == lVar3) {
        return -1;
      }
      if ((lVar14 == lVar5) && (lVar9 < lVar3 != lVar4 <= lVar3)) {
        return -1;
      }
    }
    iVar7 = iVar8;
    if (lVar14 < lVar5 != lVar6 < lVar5) {
      if (lVar9 < lVar3) {
        lVar10 = lVar4 - lVar3;
        if (lVar10 != 0 && lVar3 <= lVar4) {
LAB_01030d18:
          dVar15 = (double)(lVar6 - lVar5) * (double)(lVar9 - lVar3) -
                   (double)(lVar14 - lVar5) * (double)lVar10;
          if (dVar15 == 0.0) {
            return -1;
          }
          iVar7 = 1 - iVar8;
          if (lVar14 < lVar6 == dVar15 <= 0.0) {
            iVar7 = iVar8;
          }
        }
      }
      else {
        lVar10 = lVar4 - lVar3;
        if (lVar10 == 0 || lVar4 < lVar3) goto LAB_01030d18;
        iVar7 = 1 - iVar8;
      }
    }
    uVar13 = uVar13 + 1;
    lVar9 = lVar4;
    lVar14 = lVar6;
    iVar8 = iVar7;
    if (uVar11 < uVar13) {
      return iVar7;
    }
  } while( true );
}

