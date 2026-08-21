
/* void btAlignedObjectArray<btConvexHullInternal::Point32>::quickSortInternal<pointCmp>(pointCmp
   const&, int, int) */

void __thiscall
btAlignedObjectArray<btConvexHullInternal::Point32>::quickSortInternal<pointCmp>
          (btAlignedObjectArray<btConvexHullInternal::Point32> *this,pointCmp *param_1,int param_2,
          int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar6 = (ulong)(uint)param_3;
  lVar7 = *(long *)(this + 0x10);
  iVar10 = param_3 + param_2;
  if (iVar10 < 0) {
    iVar10 = iVar10 + 1;
  }
  piVar8 = (int *)(lVar7 + (long)(iVar10 >> 1) * 0x10);
  iVar1 = *piVar8;
  iVar2 = piVar8[1];
  iVar3 = piVar8[2];
  iVar10 = param_2;
  while( true ) {
    for (piVar8 = (int *)(lVar7 + (long)iVar10 * 0x10);
        (piVar8[1] < iVar2 ||
        ((piVar8[1] == iVar2 && ((*piVar8 < iVar1 || ((*piVar8 == iVar1 && (piVar8[2] < iVar3)))))))
        ); piVar8 = piVar8 + 4) {
      iVar10 = iVar10 + 1;
    }
    uVar9 = -(uVar6 >> 0x1f) & 0xfffffff000000000 | uVar6 << 4;
    while( true ) {
      iVar5 = *(int *)(lVar7 + uVar9 + 4);
      iVar4 = (int)uVar6;
      if ((iVar5 <= iVar2) &&
         ((iVar2 != iVar5 ||
          ((*(int *)(lVar7 + uVar9) <= iVar1 &&
           ((iVar1 != *(int *)(lVar7 + uVar9) || (*(int *)(lVar7 + uVar9 + 8) <= iVar3))))))))
      break;
      uVar6 = (ulong)(iVar4 - 1);
      uVar9 = uVar9 - 0x10;
    }
    if (iVar10 <= iVar4) {
      uVar13 = *(undefined8 *)(piVar8 + 2);
      uVar11 = *(undefined8 *)piVar8;
      iVar10 = iVar10 + 1;
      uVar6 = (ulong)(iVar4 - 1);
      uVar12 = *(undefined8 *)(lVar7 + uVar9);
      *(undefined8 *)(piVar8 + 2) = ((undefined8 *)(lVar7 + uVar9))[1];
      *(undefined8 *)piVar8 = uVar12;
      lVar7 = *(long *)(this + 0x10);
      ((undefined8 *)(lVar7 + uVar9))[1] = uVar13;
      *(undefined8 *)(lVar7 + uVar9) = uVar11;
    }
    iVar5 = (int)uVar6;
    if (iVar5 < iVar10) break;
    lVar7 = *(long *)(this + 0x10);
  }
  if (param_2 < iVar5) {
    quickSortInternal<pointCmp>(this,param_1,param_2,iVar5);
  }
  if (iVar10 < param_3) {
    quickSortInternal<pointCmp>(this,param_1,iVar10,param_3);
    return;
  }
  return;
}

