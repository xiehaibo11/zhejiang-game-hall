
/* void 
   btAlignedObjectArray<btPersistentManifold*>::quickSortInternal<btPersistentManifoldSortPredicate>(btPersistentManifoldSortPredicate
   const&, int, int) */

void __thiscall
btAlignedObjectArray<btPersistentManifold*>::quickSortInternal<btPersistentManifoldSortPredicate>
          (btAlignedObjectArray<btPersistentManifold*> *this,
          btPersistentManifoldSortPredicate *param_1,int param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  
LAB_012203ec:
  lVar8 = *(long *)(this + 0x10);
  iVar14 = param_2 + param_3;
  if (iVar14 < 0) {
    iVar14 = iVar14 + 1;
  }
  lVar7 = *(long *)(lVar8 + (long)(iVar14 >> 1) * 8);
  uVar5 = (ulong)(uint)param_3;
  iVar14 = param_2;
  do {
    lVar9 = *(long *)(lVar7 + 0x308);
    if (*(int *)(lVar9 + 0xe4) < 0) {
      lVar9 = *(long *)(lVar7 + 0x310);
    }
    plVar3 = (long *)(lVar8 + (long)iVar14 * 8);
    do {
      iVar15 = iVar14;
      plVar10 = plVar3;
      lVar11 = *plVar10;
      iVar14 = iVar15 + 1;
      lVar1 = *(long *)(lVar11 + 0x308);
      if (*(int *)(*(long *)(lVar11 + 0x308) + 0xe4) < 0) {
        lVar1 = *(long *)(lVar11 + 0x310);
      }
      plVar3 = plVar10 + 1;
    } while (*(int *)(lVar1 + 0xe4) < *(int *)(lVar9 + 0xe4));
    uVar12 = -(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3;
    do {
      uVar6 = uVar5;
      lVar13 = *(long *)(lVar8 + uVar12);
      uVar12 = uVar12 - 8;
      uVar4 = (uint)uVar6;
      uVar2 = uVar4 - 1;
      uVar5 = (ulong)uVar2;
      lVar1 = *(long *)(lVar13 + 0x308);
      if (*(int *)(*(long *)(lVar13 + 0x308) + 0xe4) < 0) {
        lVar1 = *(long *)(lVar13 + 0x310);
      }
    } while (*(int *)(lVar9 + 0xe4) < *(int *)(lVar1 + 0xe4));
    if ((int)uVar4 < iVar15) {
      uVar5 = uVar6;
      iVar14 = iVar15;
      if ((int)uVar4 < iVar15) break;
    }
    else {
      *plVar10 = lVar13;
      *(long *)(*(long *)(this + 0x10) + uVar12 + 8) = lVar11;
      uVar4 = uVar2;
      iVar15 = iVar14;
      if ((int)uVar2 < iVar14) break;
    }
    lVar8 = *(long *)(this + 0x10);
  } while( true );
  if (param_2 < (int)uVar4) {
    quickSortInternal<btPersistentManifoldSortPredicate>(this,param_1,param_2,uVar4);
  }
  param_2 = iVar15;
  if (param_3 <= iVar15) {
    return;
  }
  goto LAB_012203ec;
}

