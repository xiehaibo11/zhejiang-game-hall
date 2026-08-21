
/* btSortedOverlappingPairCache::removeOverlappingPair(btBroadphaseProxy*, btBroadphaseProxy*,
   btDispatcher*) */

undefined8 __thiscall
btSortedOverlappingPairCache::removeOverlappingPair
          (btSortedOverlappingPairCache *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2,
          btDispatcher *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  btBroadphaseProxy *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  btBroadphaseProxy *pbVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar8 = (**(code **)(*(long *)this + 0x70))();
  if ((uVar8 & 1) == 0) {
    iVar6 = *(int *)(this + 0xc);
    pbVar3 = param_2;
    pbVar7 = param_1;
    if (*(int *)(param_2 + 0x18) <= *(int *)(param_1 + 0x18)) {
      pbVar3 = param_1;
      pbVar7 = param_2;
    }
    if (0 < iVar6) {
      lVar12 = 0;
      lVar10 = 0;
      do {
        if ((*(btBroadphaseProxy **)(*(long *)(this + 0x18) + 8 + lVar12 + -8) == pbVar7) &&
           (*(btBroadphaseProxy **)(*(long *)(this + 0x18) + 8 + lVar12) == pbVar3)) {
          if (iVar6 <= (int)lVar10) {
            return 0;
          }
          gOverlappingPairs = gOverlappingPairs + -1;
          uVar11 = *(undefined8 *)(*(long *)(this + 0x18) + lVar12 + 0x18);
          (**(code **)(*(long *)this + 0x40))(this,*(long *)(this + 0x18) + lVar12,param_3);
          plVar9 = *(long **)(this + 0x38);
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x18))(plVar9,param_1,param_2,param_3);
          }
          lVar10 = (long)*(int *)(this + 0x10) * 0x20 + -0x20;
          puVar1 = (undefined8 *)(*(long *)(this + 0x18) + lVar10);
          uVar13 = puVar1[2];
          puVar2 = (undefined8 *)(*(long *)(this + 0x18) + lVar12);
          uVar4 = puVar2[2];
          uVar5 = puVar2[3];
          uVar15 = puVar2[1];
          uVar14 = *puVar2;
          puVar2[3] = puVar1[3];
          puVar2[2] = uVar13;
          uVar13 = *puVar1;
          puVar2[1] = puVar1[1];
          *puVar2 = uVar13;
          puVar1 = (undefined8 *)(*(long *)(this + 0x18) + lVar10);
          puVar1[1] = uVar15;
          *puVar1 = uVar14;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
          return uVar11;
        }
        lVar10 = lVar10 + 1;
        lVar12 = lVar12 + 0x20;
      } while (lVar10 < iVar6);
    }
  }
  return 0;
}

