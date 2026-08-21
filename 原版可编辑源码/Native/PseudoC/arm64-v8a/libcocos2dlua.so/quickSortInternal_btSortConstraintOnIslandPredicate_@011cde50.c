
/* void 
   btAlignedObjectArray<btTypedConstraint*>::quickSortInternal<btSortConstraintOnIslandPredicate>(btSortConstraintOnIslandPredicate
   const&, int, int) */

void __thiscall
btAlignedObjectArray<btTypedConstraint*>::quickSortInternal<btSortConstraintOnIslandPredicate>
          (btAlignedObjectArray<btTypedConstraint*> *this,btSortConstraintOnIslandPredicate *param_1
          ,int param_2,int param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  
LAB_011cde70:
  lVar9 = *(long *)(this + 0x10);
  iVar14 = param_2 + param_3;
  if (iVar14 < 0) {
    iVar14 = iVar14 + 1;
  }
  lVar8 = *(long *)(lVar9 + (long)(iVar14 >> 1) * 8);
  uVar6 = (ulong)(uint)param_3;
  iVar14 = param_2;
  do {
    lVar2 = *(long *)(lVar8 + 0x28);
    if (*(int *)(lVar2 + 0xe4) < 0) {
      lVar2 = *(long *)(lVar8 + 0x30);
    }
    plVar4 = (long *)(lVar9 + (long)iVar14 * 8);
    do {
      iVar15 = iVar14;
      plVar10 = plVar4;
      lVar11 = *plVar10;
      iVar14 = iVar15 + 1;
      lVar1 = *(long *)(lVar11 + 0x28);
      if (*(int *)(*(long *)(lVar11 + 0x28) + 0xe4) < 0) {
        lVar1 = *(long *)(lVar11 + 0x30);
      }
      plVar4 = plVar10 + 1;
    } while (*(int *)(lVar1 + 0xe4) < *(int *)(lVar2 + 0xe4));
    uVar12 = -(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3;
    do {
      uVar7 = uVar6;
      lVar13 = *(long *)(lVar9 + uVar12);
      uVar12 = uVar12 - 8;
      uVar5 = (uint)uVar7;
      uVar3 = uVar5 - 1;
      uVar6 = (ulong)uVar3;
      lVar1 = *(long *)(lVar13 + 0x28);
      if (*(int *)(*(long *)(lVar13 + 0x28) + 0xe4) < 0) {
        lVar1 = *(long *)(lVar13 + 0x30);
      }
    } while (*(int *)(lVar2 + 0xe4) < *(int *)(lVar1 + 0xe4));
    if ((int)uVar5 < iVar15) {
      uVar6 = uVar7;
      iVar14 = iVar15;
      if ((int)uVar5 < iVar15) break;
    }
    else {
      *plVar10 = lVar13;
      *(long *)(*(long *)(this + 0x10) + uVar12 + 8) = lVar11;
      uVar5 = uVar3;
      iVar15 = iVar14;
      if ((int)uVar3 < iVar14) break;
    }
    lVar9 = *(long *)(this + 0x10);
  } while( true );
  if (param_2 < (int)uVar5) {
    quickSortInternal<btSortConstraintOnIslandPredicate>(this,param_1,param_2,uVar5);
  }
  param_2 = iVar15;
  if (param_3 <= iVar15) {
    return;
  }
  goto LAB_011cde70;
}

