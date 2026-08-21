
/* btHashedOverlappingPairCache::internalAddPair(btBroadphaseProxy*, btBroadphaseProxy*) */

long * __thiscall
btHashedOverlappingPairCache::internalAddPair
          (btHashedOverlappingPairCache *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  btBroadphaseProxy *pbVar5;
  btBroadphaseProxy *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  undefined8 uVar19;
  
  uVar7 = *(uint *)(this + 0x10);
  pbVar5 = param_1;
  if (*(int *)(param_1 + 0x18) <= *(int *)(param_2 + 0x18)) {
    pbVar5 = param_2;
    param_2 = param_1;
  }
  uVar10 = *(uint *)(param_2 + 0x18) | *(int *)(pbVar5 + 0x18) << 0x10;
  uVar10 = uVar10 + (uVar10 << 0xf ^ 0xffffffff);
  uVar10 = (uVar10 ^ (int)uVar10 >> 10) * 9;
  uVar10 = uVar10 ^ (int)uVar10 >> 6;
  uVar10 = uVar10 + (uVar10 << 0xb ^ 0xffffffff);
  uVar10 = uVar10 ^ (int)uVar10 >> 0x10;
  uVar4 = uVar10 & uVar7 - 1;
  uVar8 = *(uint *)(*(long *)(this + 0x48) + (long)(int)uVar4 * 4);
  if (uVar8 != 0xffffffff) {
    do {
      if ((*(uint *)(*(long *)(*(long *)(this + 0x18) +
                              (-(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar8 << 5)) +
                    0x18) == *(uint *)(param_2 + 0x18)) &&
         (plVar1 = (long *)(*(long *)(this + 0x18) + (long)(int)uVar8 * 0x20),
         *(int *)(plVar1[1] + 0x18) == *(int *)(pbVar5 + 0x18))) {
        if (plVar1 != (long *)0x0) {
          return plVar1;
        }
        break;
      }
      uVar8 = *(uint *)(*(long *)(this + 0x68) + (long)(int)uVar8 * 4);
    } while (uVar8 != 0xffffffff);
  }
  uVar8 = *(uint *)(this + 0xc);
  lVar17 = (long)(int)uVar8;
  uVar13 = uVar8;
  uVar18 = uVar7;
  if (uVar8 == uVar7) {
    uVar9 = uVar7 << 1;
    if (uVar7 == 0) {
      uVar9 = 1;
    }
    uVar13 = uVar7;
    if ((int)uVar7 < (int)uVar9) {
      if (uVar9 == 0) {
        lVar11 = 0;
      }
      else {
        lVar11 = btAlignedAllocInternal
                           (-(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar9 << 5,0x10);
        uVar13 = *(uint *)(this + 0xc);
      }
      if (0 < (int)uVar13) {
        lVar14 = 0;
        lVar16 = (long)(int)uVar13;
        do {
          puVar2 = (undefined8 *)(lVar11 + lVar14);
          lVar16 = lVar16 + -1;
          puVar3 = (undefined8 *)(*(long *)(this + 0x18) + lVar14);
          uVar19 = *puVar3;
          lVar14 = lVar14 + 0x20;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar19;
          puVar2[2] = puVar3[2];
          puVar2[3] = puVar3[3];
        } while (lVar16 != 0);
      }
      if (*(void **)(this + 0x18) != (void *)0x0) {
        if (this[0x20] != (btHashedOverlappingPairCache)0x0) {
          btAlignedFreeInternal(*(void **)(this + 0x18));
          uVar13 = *(uint *)(this + 0xc);
        }
        *(undefined8 *)(this + 0x18) = 0;
      }
      *(long *)(this + 0x18) = lVar11;
      this[0x20] = (btHashedOverlappingPairCache)0x1;
      *(uint *)(this + 0x10) = uVar9;
      uVar18 = uVar9;
    }
  }
  lVar11 = *(long *)(this + 0x18);
  plVar12 = *(long **)(this + 0x78);
  *(uint *)(this + 0xc) = uVar13 + 1;
  plVar1 = (long *)(lVar11 + lVar17 * 0x20);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x10))(plVar12,param_2,pbVar5);
    uVar18 = *(uint *)(this + 0x10);
  }
  if ((int)uVar7 < (int)uVar18) {
    growTables(this);
    uVar4 = *(int *)(this + 0x10) - 1U & uVar10;
  }
  lVar11 = lVar11 + lVar17 * 0x20;
  pbVar6 = pbVar5;
  if (*(int *)(pbVar5 + 0x18) <= *(int *)(param_2 + 0x18)) {
    pbVar6 = param_2;
    param_2 = pbVar5;
  }
  *plVar1 = (long)param_2;
  *(undefined8 *)(lVar11 + 0x10) = 0;
  *(undefined8 *)(lVar11 + 0x18) = 0;
  *(btBroadphaseProxy **)(lVar11 + 8) = pbVar6;
  lVar11 = *(long *)(this + 0x48);
  uVar15 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
  *(undefined4 *)(*(long *)(this + 0x68) + lVar17 * 4) = *(undefined4 *)(lVar11 + uVar15);
  *(uint *)(lVar11 + uVar15) = uVar8;
  return plVar1;
}

