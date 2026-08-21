
/* WARNING: Type propagation algorithm not settling */
/* ClipperLib::Clipper::IntersectEdges(ClipperLib::TEdge*, ClipperLib::TEdge*, ClipperLib::IntPoint
   const&, bool) */

void __thiscall
ClipperLib::Clipper::IntersectEdges
          (Clipper *this,TEdge *param_1,TEdge *param_2,IntPoint *param_3,bool param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  TEdge *pTVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  Clipper *pCVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  
  if (param_4) {
    bVar6 = false;
LAB_010366b0:
    bVar7 = false;
  }
  else {
    if ((*(long *)(param_1 + 0x70) != 0) || (*(long *)(param_1 + 0x20) != *(long *)param_3)) {
      bVar6 = false;
      if (*(long *)(param_2 + 0x70) == 0) goto LAB_0103668c;
      goto LAB_010366b0;
    }
    bVar6 = *(long *)(param_1 + 0x28) == *(long *)(param_3 + 8);
    if (*(long *)(param_2 + 0x70) != 0) goto LAB_010366b0;
LAB_0103668c:
    if (*(long *)(param_2 + 0x20) != *(long *)param_3) goto LAB_010366b0;
                    /* try { // try from 010366a4 to 011367bb has its CatchHandler @ 010366a4
                       catch() { ... } // from try @ 010366a4 with catch @ 010366a4
                       catch() { ... } // from try @ 01036840 with catch @ 010366a4 */
    bVar7 = *(long *)(param_2 + 0x28) == *(long *)(param_3 + 8);
  }
  iVar9 = *(int *)(param_1 + 0x48);
  iVar10 = *(int *)(param_2 + 0x48);
  uVar2 = *(uint *)(param_1 + 0x5c);
  uVar3 = *(uint *)(param_2 + 0x5c);
  if (iVar9 == iVar10) {
    lVar11 = 0xa0;
    if (iVar9 != 0) {
      lVar11 = 0x9c;
    }
    iVar4 = *(int *)(param_1 + 0x54);
    pCVar14 = this + 0xa0;
    if (iVar9 != 0) {
      pCVar14 = this + 0x9c;
    }
    if (*(int *)(this + lVar11) == 0) {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
      *(int *)(param_2 + 0x54) = iVar4;
    }
    else {
      iVar1 = *(int *)(param_2 + 0x50) + iVar4;
      if (iVar1 == 0) {
        iVar1 = -iVar4;
      }
      *(int *)(param_1 + 0x54) = iVar1;
      iVar4 = *(int *)(param_2 + 0x54) - *(int *)(param_1 + 0x50);
      if (iVar4 == 0) {
        *(int *)(param_2 + 0x54) = -*(int *)(param_2 + 0x54);
      }
      else {
        *(int *)(param_2 + 0x54) = iVar4;
      }
    }
  }
  else {
    lVar11 = 0xa0;
    if (iVar10 != 0) {
      lVar11 = 0x9c;
    }
    if (*(int *)(this + lVar11) == 0) {
      uVar16 = (uint)(*(int *)(param_1 + 0x58) == 0);
    }
    else {
      uVar16 = *(int *)(param_1 + 0x58) + *(int *)(param_2 + 0x50);
    }
    *(uint *)(param_1 + 0x58) = uVar16;
    lVar11 = 0xa0;
    if (iVar9 != 0) {
      lVar11 = 0x9c;
    }
    pCVar14 = this + 0xa0;
    if (iVar9 != 0) {
      pCVar14 = this + 0x9c;
    }
    if (*(int *)(this + lVar11) == 0) {
      uVar16 = (uint)(*(int *)(param_2 + 0x58) == 0);
    }
    else {
      uVar16 = *(int *)(param_2 + 0x58) - *(int *)(param_1 + 0x50);
    }
    *(uint *)(param_2 + 0x58) = uVar16;
  }
  lVar11 = 0x9c;
  if (iVar9 != 0) {
    lVar11 = 0xa0;
  }
                    /* try { // try from 010367bc to 011367cb has its CatchHandler @ 01036cdc */
  lVar12 = 0xa0;
  if (iVar10 != 0) {
    lVar12 = 0x9c;
  }
  lVar13 = 0x9c;
  if (iVar10 != 0) {
    lVar13 = 0xa0;
  }
                    /* try { // try from 010367cc to 011367d3 has its CatchHandler @ 01036cd8 */
  iVar4 = *(int *)(this + lVar13);
  iVar1 = *(int *)(this + lVar12);
  if (*(int *)pCVar14 == 3) {
    uVar15 = -(long)*(int *)(param_1 + 0x54);
joined_r0x01036800:
    if (iVar1 != 3) goto LAB_0103682c;
LAB_01036804:
    uVar17 = -(long)*(int *)(param_2 + 0x54);
joined_r0x01036810:
    if ((int)(uVar3 | uVar2) < 0) goto LAB_01036840;
LAB_0103686c:
    if (((!bVar6 && !bVar7) && ((uVar17 | uVar15) < 2)) &&
       ((iVar9 == iVar10 || (*(int *)(this + 0x68) == 3)))) {
      AddOutPt(this,param_1,param_3);
      pTVar8 = param_2;
      goto LAB_010368ac;
    }
    AddOutPt(this,param_1,param_3);
    if (*(int *)(param_2 + 0x50) == 0) {
      AddOutPt(this,param_2,param_3);
    }
    if (*(int *)(param_1 + 0x5c) == *(int *)(param_2 + 0x5c)) {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
      *(undefined4 *)(param_2 + 0x5c) = 0xffffffff;
    }
    else if (*(int *)(param_1 + 0x5c) < *(int *)(param_2 + 0x5c)) {
      AppendPolygon(this,param_1,param_2);
    }
    else {
      AppendPolygon(this,param_2,param_1);
    }
  }
  else {
    if (*(int *)pCVar14 != 2) {
      uVar17 = (ulong)*(int *)(param_1 + 0x54);
      uVar15 = -uVar17;
      if (-1 < (long)uVar17) {
        uVar15 = uVar17;
      }
      goto joined_r0x01036800;
    }
    uVar15 = (ulong)*(int *)(param_1 + 0x54);
    if (iVar1 == 3) goto LAB_01036804;
LAB_0103682c:
                    /* try { // try from 0103682c to 0113683f has its CatchHandler @ 01036ce0 */
    if (iVar1 == 2) {
      uVar17 = (ulong)*(int *)(param_2 + 0x54);
      goto joined_r0x01036810;
    }
    uVar18 = (ulong)*(int *)(param_2 + 0x54);
    uVar17 = -uVar18;
    if (-1 < (long)uVar18) {
      uVar17 = uVar18;
    }
    if (-1 < (int)(uVar3 | uVar2)) goto LAB_0103686c;
LAB_01036840:
                    /* try { // try from 01036840 to 01136cf3 has its CatchHandler @ 010366a4 */
    pTVar8 = param_1;
    uVar18 = uVar17;
    if (((int)uVar2 < 0) && (pTVar8 = param_2, uVar18 = uVar15, (int)uVar3 < 0)) {
      if ((uVar15 < 2) && (!bVar7 && (!bVar6 && uVar17 < 2))) {
        if (*(int *)(this + lVar11) == 3) {
          lVar11 = -(long)*(int *)(param_1 + 0x58);
joined_r0x010369e8:
          if (iVar4 != 3) goto LAB_0103699c;
LAB_010369c4:
          lVar12 = -(long)*(int *)(param_2 + 0x58);
        }
        else {
          if (*(int *)(this + lVar11) != 2) {
            lVar12 = (long)*(int *)(param_1 + 0x58);
            lVar11 = -lVar12;
            if (-1 < lVar12) {
              lVar11 = lVar12;
            }
            goto joined_r0x010369e8;
          }
          lVar11 = (long)*(int *)(param_1 + 0x58);
          if (iVar4 == 3) goto LAB_010369c4;
LAB_0103699c:
          if (iVar4 == 2) {
            lVar12 = (long)*(int *)(param_2 + 0x58);
          }
          else {
            lVar13 = (long)*(int *)(param_2 + 0x58);
            lVar12 = -lVar13;
            if (-1 < lVar13) {
              lVar12 = lVar13;
            }
          }
        }
        if (iVar9 != iVar10) goto switchD_01036a34_caseD_3;
        if ((uVar15 == 1) && (uVar17 == 1)) {
          switch(*(undefined4 *)(this + 0x68)) {
          case 0:
            if ((0 < lVar11) && (0 < lVar12)) goto switchD_01036a34_caseD_3;
            break;
          case 1:
switchD_01036a34_caseD_1:
            if ((lVar11 < 1) && (lVar12 < 1)) goto switchD_01036a34_caseD_3;
            break;
          case 2:
            if (((iVar9 == 1) && (0 < lVar11)) && (0 < lVar12)) goto switchD_01036a34_caseD_3;
            if (iVar9 == 0) goto switchD_01036a34_caseD_1;
            break;
          case 3:
switchD_01036a34_caseD_3:
            AddLocalMinPoly(this,param_1,param_2,param_3);
          }
        }
        else {
          uVar5 = *(undefined4 *)(param_1 + 0x4c);
          *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
          *(undefined4 *)(param_2 + 0x4c) = uVar5;
        }
      }
    }
    else if (uVar18 < 2) {
LAB_010368ac:
      AddOutPt(this,pTVar8,param_3);
      uVar5 = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
      *(undefined4 *)(param_2 + 0x4c) = uVar5;
      uVar5 = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
      *(undefined4 *)(param_2 + 0x5c) = uVar5;
    }
  }
  if ((bool)(bVar6 ^ bVar7)) {
    if ((bVar6) && (iVar9 = *(int *)(param_1 + 0x5c), -1 < iVar9)) {
      iVar10 = *(int *)(param_2 + 0x5c);
    }
    else {
      if ((!bVar7) || (iVar10 = *(int *)(param_2 + 0x5c), iVar10 < 0)) goto joined_r0x01036af0;
      iVar9 = *(int *)(param_1 + 0x5c);
    }
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_2 + 0x4c) = uVar5;
    *(int *)(param_1 + 0x5c) = iVar10;
    *(int *)(param_2 + 0x5c) = iVar9;
  }
joined_r0x01036af0:
  if (bVar6) {
    lVar11 = *(long *)(param_1 + 0x78);
    lVar12 = *(long *)(param_1 + 0x80);
    if ((lVar12 != 0 || lVar11 != 0) || (*(TEdge **)(this + 0x88) == param_1)) {
      pCVar14 = (Clipper *)(lVar12 + 0x78);
      if (lVar12 == 0) {
        pCVar14 = this + 0x88;
      }
      *(long *)pCVar14 = lVar11;
      if (lVar11 != 0) {
        *(long *)(lVar11 + 0x80) = lVar12;
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
  }
  if (bVar7) {
    lVar11 = *(long *)(param_2 + 0x78);
    lVar12 = *(long *)(param_2 + 0x80);
    if ((lVar12 != 0 || lVar11 != 0) || (*(TEdge **)(this + 0x88) == param_2)) {
      pCVar14 = (Clipper *)(lVar12 + 0x78);
      if (lVar12 == 0) {
        pCVar14 = this + 0x88;
      }
      *(long *)pCVar14 = lVar11;
      if (lVar11 != 0) {
        *(long *)(lVar11 + 0x80) = lVar12;
      }
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
    }
  }
  return;
}

