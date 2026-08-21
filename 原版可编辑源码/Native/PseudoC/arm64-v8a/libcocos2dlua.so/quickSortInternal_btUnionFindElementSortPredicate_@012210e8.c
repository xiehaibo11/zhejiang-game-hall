
/* void 
   btAlignedObjectArray<btElement>::quickSortInternal<btUnionFindElementSortPredicate>(btUnionFindElementSortPredicate
   const&, int, int) */

void __thiscall
btAlignedObjectArray<btElement>::quickSortInternal<btUnionFindElementSortPredicate>
          (btAlignedObjectArray<btElement> *this,btUnionFindElementSortPredicate *param_1,
          int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  
LAB_01221108:
  iVar11 = param_2 + param_3;
  lVar7 = *(long *)(this + 0x10);
  if (iVar11 < 0) {
    iVar11 = iVar11 + 1;
  }
  iVar2 = *(int *)(lVar7 + (-(ulong)((uint)(iVar11 >> 1) >> 0x1f) & 0xfffffff800000000 |
                           (ulong)(uint)(iVar11 >> 1) << 3));
  uVar5 = (ulong)(uint)param_3;
  iVar11 = param_2;
  do {
    piVar8 = (int *)(lVar7 + (long)iVar11 * 8 + -8);
    do {
      iVar12 = iVar11;
      piVar8 = piVar8 + 2;
      iVar11 = iVar12 + 1;
    } while (*piVar8 < iVar2);
    lVar9 = (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3) + 8;
    do {
      uVar6 = uVar5;
      lVar1 = lVar7 + lVar9;
      lVar9 = lVar9 + -8;
      uVar4 = (uint)uVar6;
      uVar3 = uVar4 - 1;
      uVar5 = (ulong)uVar3;
    } while (iVar2 < *(int *)(lVar1 + -8));
    if ((int)uVar4 < iVar12) {
      uVar5 = uVar6;
      iVar11 = iVar12;
      if ((int)uVar4 < iVar12) break;
    }
    else {
      uVar10 = *(undefined8 *)piVar8;
      *(undefined8 *)piVar8 = *(undefined8 *)(lVar7 + lVar9);
      *(undefined8 *)(*(long *)(this + 0x10) + lVar9) = uVar10;
      uVar4 = uVar3;
      iVar12 = iVar11;
      if ((int)uVar3 < iVar11) break;
    }
    lVar7 = *(long *)(this + 0x10);
  } while( true );
  if (param_2 < (int)uVar4) {
    quickSortInternal<btUnionFindElementSortPredicate>(this,param_1,param_2,uVar4);
  }
  param_2 = iVar12;
  if (param_3 <= iVar12) {
    return;
  }
  goto LAB_01221108;
}

