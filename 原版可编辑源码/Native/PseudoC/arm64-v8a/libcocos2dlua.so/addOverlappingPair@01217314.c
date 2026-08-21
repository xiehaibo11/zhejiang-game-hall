
/* btSortedOverlappingPairCache::addOverlappingPair(btBroadphaseProxy*, btBroadphaseProxy*) */

undefined8 * __thiscall
btSortedOverlappingPairCache::addOverlappingPair
          (btSortedOverlappingPairCache *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  btBroadphaseProxy *pbVar3;
  int iVar4;
  uint uVar5;
  btBroadphaseProxy *pbVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  
  plVar7 = *(long **)(this + 0x30);
  if (plVar7 == (long *)0x0) {
    if (((*(ushort *)(param_2 + 10) & *(ushort *)(param_1 + 8)) != 0) &&
       ((*(ushort *)(param_1 + 10) & *(ushort *)(param_2 + 8)) != 0)) goto LAB_01217380;
  }
  else {
    uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,param_1,param_2);
    if ((uVar8 & 1) != 0) {
LAB_01217380:
      iVar10 = *(int *)(this + 0xc);
      lVar13 = (long)iVar10;
      if (iVar10 == *(int *)(this + 0x10)) {
        uVar5 = iVar10 << 1;
        if (iVar10 == 0) {
          uVar5 = 1;
        }
        if (iVar10 < (int)uVar5) {
          if (uVar5 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = btAlignedAllocInternal
                              (-(ulong)(uVar5 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar5 << 5,0x10
                              );
            iVar10 = *(int *)(this + 0xc);
          }
          if (0 < iVar10) {
            lVar11 = 0;
            lVar12 = (long)iVar10;
            do {
              puVar2 = (undefined8 *)(lVar9 + lVar11);
              lVar12 = lVar12 + -1;
              puVar1 = (undefined8 *)(*(long *)(this + 0x18) + lVar11);
              uVar14 = *puVar1;
              lVar11 = lVar11 + 0x20;
              puVar2[1] = puVar1[1];
              *puVar2 = uVar14;
              puVar2[2] = puVar1[2];
              puVar2[3] = puVar1[3];
            } while (lVar12 != 0);
          }
          if (*(void **)(this + 0x18) != (void *)0x0) {
            if (this[0x20] != (btSortedOverlappingPairCache)0x0) {
              btAlignedFreeInternal(*(void **)(this + 0x18));
              iVar10 = *(int *)(this + 0xc);
            }
            *(undefined8 *)(this + 0x18) = 0;
          }
          *(long *)(this + 0x18) = lVar9;
          this[0x20] = (btSortedOverlappingPairCache)0x1;
          *(uint *)(this + 0x10) = uVar5;
        }
      }
      *(int *)(this + 0xc) = iVar10 + 1;
      iVar10 = *(int *)(param_1 + 0x18);
      iVar4 = *(int *)(param_2 + 0x18);
      puVar2 = (undefined8 *)(*(long *)(this + 0x18) + lVar13 * 0x20);
      puVar2[2] = 0;
      puVar2[3] = 0;
      pbVar3 = param_2;
      pbVar6 = param_1;
      if (iVar4 <= iVar10) {
        pbVar3 = param_1;
        pbVar6 = param_2;
      }
      *puVar2 = pbVar6;
      puVar2[1] = pbVar3;
      gOverlappingPairs = gOverlappingPairs + 1;
      gAddedPairs = gAddedPairs + 1;
      plVar7 = *(long **)(this + 0x38);
      if (plVar7 == (long *)0x0) {
        return puVar2;
      }
      (**(code **)(*plVar7 + 0x10))(plVar7,param_1,param_2);
      return puVar2;
    }
  }
  return (undefined8 *)0x0;
}

