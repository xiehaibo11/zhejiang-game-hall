
/* ClipperLib::Clipper::AppendPolygon(ClipperLib::TEdge*, ClipperLib::TEdge*) */

void __thiscall ClipperLib::Clipper::AppendPolygon(Clipper *this,TEdge *param_1,TEdge *param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  OutRec *pOVar4;
  OutRec *pOVar5;
  OutRec *pOVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  OutRec *pOVar13;
  OutRec *pOVar14;
  
  pOVar14 = *(OutRec **)(*(long *)(this + 8) + (long)*(int *)(param_1 + 0x5c) * 8);
  pOVar13 = *(OutRec **)(*(long *)(this + 8) + (long)*(int *)(param_2 + 0x5c) * 8);
  pOVar5 = pOVar14;
  do {
    pOVar5 = *(OutRec **)(pOVar5 + 8);
    pOVar4 = pOVar13;
    if (pOVar5 == pOVar13) goto LAB_01036224;
    pOVar6 = pOVar13;
  } while (pOVar5 != (OutRec *)0x0);
  do {
    pOVar6 = *(OutRec **)(pOVar6 + 8);
    pOVar4 = pOVar14;
    if (pOVar6 == pOVar14) goto LAB_01036224;
  } while (pOVar6 != (OutRec *)0x0);
  pOVar4 = (OutRec *)GetLowermostRec(pOVar14,pOVar13);
LAB_01036224:
  lVar8 = *(long *)(pOVar14 + 0x18);
  lVar11 = *(long *)(lVar8 + 0x20);
  lVar10 = *(long *)(pOVar13 + 0x18);
  lVar9 = *(long *)(lVar10 + 0x20);
  if (*(int *)(param_1 + 0x4c) == 1) {
    if (*(int *)(param_2 + 0x4c) == 1) {
      lVar12 = lVar10;
      if (lVar10 != 0) {
        do {
          lVar1 = *(long *)(lVar12 + 0x18);
          *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar12 + 0x20);
          *(long *)(lVar12 + 0x20) = lVar1;
          lVar12 = lVar1;
        } while (lVar1 != lVar10);
      }
      *(long *)(lVar10 + 0x18) = lVar8;
      *(long *)(lVar8 + 0x20) = lVar10;
      *(long *)(lVar11 + 0x18) = lVar9;
      *(long *)(lVar9 + 0x20) = lVar11;
      lVar10 = lVar9;
    }
    else {
      *(long *)(lVar9 + 0x18) = lVar8;
      *(long *)(lVar8 + 0x20) = lVar9;
      *(long *)(lVar10 + 0x20) = lVar11;
      *(long *)(lVar11 + 0x18) = lVar10;
    }
    *(long *)(pOVar14 + 0x18) = lVar10;
    uVar7 = 1;
  }
  else {
    if (*(int *)(param_2 + 0x4c) == 2) {
      lVar12 = lVar10;
      if (lVar10 != 0) {
        do {
          lVar1 = *(long *)(lVar12 + 0x18);
          *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar12 + 0x20);
          *(long *)(lVar12 + 0x20) = lVar1;
          lVar12 = lVar1;
        } while (lVar1 != lVar10);
      }
      *(long *)(lVar11 + 0x18) = lVar9;
      *(long *)(lVar9 + 0x20) = lVar11;
      *(long *)(lVar10 + 0x18) = lVar8;
      *(long *)(lVar8 + 0x20) = lVar10;
    }
    else {
      *(long *)(lVar11 + 0x18) = lVar10;
      *(long *)(lVar10 + 0x20) = lVar11;
      *(long *)(lVar8 + 0x20) = lVar9;
      *(long *)(lVar9 + 0x18) = lVar8;
    }
    uVar7 = 2;
  }
  *(undefined8 *)(pOVar14 + 0x20) = 0;
  if (pOVar4 == pOVar13) {
    if (*(OutRec **)(pOVar13 + 8) != pOVar14) {
      *(OutRec **)(pOVar14 + 8) = *(OutRec **)(pOVar13 + 8);
    }
    pOVar14[4] = pOVar13[4];
  }
  *(long *)(pOVar13 + 0x18) = 0;
  *(undefined8 *)(pOVar13 + 0x20) = 0;
  *(OutRec **)(pOVar13 + 8) = pOVar14;
  uVar2 = *(undefined4 *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x5c) = 0xffffffff;
  lVar10 = *(long *)(this + 0x88);
  do {
    if (lVar10 == 0) {
LAB_01036354:
      *(undefined4 *)pOVar13 = *(undefined4 *)pOVar14;
      return;
    }
    if (*(int *)(lVar10 + 0x5c) == iVar3) {
      *(undefined4 *)(lVar10 + 0x5c) = uVar2;
      *(undefined4 *)(lVar10 + 0x4c) = uVar7;
      goto LAB_01036354;
    }
    lVar10 = *(long *)(lVar10 + 0x78);
  } while( true );
}

