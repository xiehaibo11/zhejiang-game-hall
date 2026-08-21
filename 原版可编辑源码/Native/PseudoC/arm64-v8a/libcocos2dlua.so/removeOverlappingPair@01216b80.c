
/* btHashedOverlappingPairCache::removeOverlappingPair(btBroadphaseProxy*, btBroadphaseProxy*,
   btDispatcher*) */

undefined8 __thiscall
btHashedOverlappingPairCache::removeOverlappingPair
          (btHashedOverlappingPairCache *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2,
          btDispatcher *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  btBroadphaseProxy *pbVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  
  gRemovePairs = gRemovePairs + 1;
  pbVar3 = param_1;
  if (*(int *)(param_1 + 0x18) <= *(int *)(param_2 + 0x18)) {
    pbVar3 = param_2;
    param_2 = param_1;
  }
  uVar5 = *(uint *)(param_2 + 0x18) | *(int *)(pbVar3 + 0x18) << 0x10;
  uVar5 = uVar5 + (uVar5 << 0xf ^ 0xffffffff);
  uVar5 = (uVar5 ^ (int)uVar5 >> 10) * 9;
  uVar5 = uVar5 ^ (int)uVar5 >> 6;
  uVar5 = uVar5 + (uVar5 << 0xb ^ 0xffffffff);
  uVar5 = (uVar5 ^ (int)uVar5 >> 0x10) & *(int *)(this + 0x10) - 1U;
  uVar4 = *(uint *)(*(long *)(this + 0x48) + (long)(int)uVar5 * 4);
  if (uVar4 != 0xffffffff) {
    lVar13 = *(long *)(this + 0x18);
    do {
      lVar17 = (long)(int)uVar4;
      if ((*(uint *)(*(long *)(lVar13 + (-(ulong)(uVar4 >> 0x1f) & 0xffffffe000000000 |
                                        (ulong)uVar4 << 5)) + 0x18) == *(uint *)(param_2 + 0x18)) &&
         (lVar8 = lVar13 + lVar17 * 0x20,
         *(int *)(*(long *)(lVar8 + 8) + 0x18) == *(int *)(pbVar3 + 0x18))) {
        if (lVar8 == 0) {
          return 0;
        }
        (**(code **)(*(long *)this + 0x40))(this,lVar8,param_3);
        uVar14 = *(undefined8 *)(lVar13 + lVar17 * 0x20 + 0x18);
        piVar7 = (int *)(*(long *)(this + 0x48) + (long)(int)uVar5 * 4);
        lVar13 = *(long *)(this + 0x68);
        uVar9 = lVar8 - *(long *)(this + 0x18);
        iVar15 = (int)(uVar9 >> 5);
        iVar16 = *piVar7;
        if (*piVar7 == iVar15) {
          iVar16 = *(int *)(lVar13 + ((long)(uVar9 * 0x8000000) >> 0x1e));
          lVar17 = (long)(uVar9 * 0x8000000) >> 0x20;
        }
        else {
          do {
            iVar10 = iVar16;
            iVar16 = *(int *)(lVar13 + (long)iVar10 * 4);
          } while (iVar16 != iVar15);
          iVar16 = *(int *)(lVar13 + ((long)(uVar9 * 0x8000000) >> 0x1e));
          lVar17 = (long)(uVar9 * 0x8000000) >> 0x20;
          if (iVar10 != -1) {
            piVar7 = (int *)(lVar13 + (long)iVar10 * 4);
          }
        }
        *piVar7 = iVar16;
        plVar6 = *(long **)(this + 0x78);
        lVar13 = (long)*(int *)(this + 0xc) + -1;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))(plVar6,param_2,pbVar3,param_3);
        }
        iVar16 = (int)lVar13;
        if (iVar16 != iVar15) {
          lVar8 = *(long *)(this + 0x18);
          plVar6 = (long *)(lVar8 + lVar13 * 0x20);
          uVar5 = *(uint *)(*plVar6 + 0x18) | *(int *)(plVar6[1] + 0x18) << 0x10;
          uVar5 = uVar5 + (uVar5 << 0xf ^ 0xffffffff);
          uVar5 = (uVar5 ^ (int)uVar5 >> 10) * 9;
          uVar5 = uVar5 ^ (int)uVar5 >> 6;
          uVar5 = uVar5 + (uVar5 << 0xb ^ 0xffffffff);
          uVar5 = (uVar5 ^ (int)uVar5 >> 0x10) & *(int *)(this + 0x10) - 1U;
          piVar7 = (int *)(*(long *)(this + 0x48) + (long)(int)uVar5 * 4);
          lVar11 = *(long *)(this + 0x68);
          iVar10 = *piVar7;
          if (*piVar7 == iVar16) {
            iVar16 = *(int *)(lVar11 + lVar13 * 4);
          }
          else {
            do {
              iVar12 = iVar10;
              iVar10 = *(int *)(lVar11 + (long)iVar12 * 4);
            } while (iVar10 != iVar16);
            iVar16 = *(int *)(lVar11 + lVar13 * 4);
            if (iVar12 != -1) {
              piVar7 = (int *)(lVar11 + (long)iVar12 * 4);
            }
          }
          *piVar7 = iVar16;
          puVar1 = (undefined8 *)(lVar8 + lVar13 * 0x20);
          uVar18 = puVar1[2];
          puVar2 = (undefined8 *)(lVar8 + lVar17 * 0x20);
          lVar8 = (long)(int)uVar5 * 4;
          puVar2[3] = puVar1[3];
          puVar2[2] = uVar18;
          uVar18 = *puVar1;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar18;
          lVar13 = *(long *)(this + 0x48);
          *(undefined4 *)(*(long *)(this + 0x68) + lVar17 * 4) = *(undefined4 *)(lVar13 + lVar8);
          *(int *)(lVar13 + lVar8) = iVar15;
        }
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
        return uVar14;
      }
      uVar4 = *(uint *)(*(long *)(this + 0x68) + lVar17 * 4);
    } while (uVar4 != 0xffffffff);
  }
  return 0;
}

