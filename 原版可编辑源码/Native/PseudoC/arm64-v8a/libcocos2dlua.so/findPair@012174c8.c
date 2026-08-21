
/* btSortedOverlappingPairCache::findPair(btBroadphaseProxy*, btBroadphaseProxy*) */

long __thiscall
btSortedOverlappingPairCache::findPair
          (btSortedOverlappingPairCache *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  btBroadphaseProxy *pbVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  plVar3 = *(long **)(this + 0x30);
  if (plVar3 == (long *)0x0) {
    if ((*(ushort *)(param_2 + 10) & *(ushort *)(param_1 + 8)) == 0) {
      return 0;
    }
    if ((*(ushort *)(param_1 + 10) & *(ushort *)(param_2 + 8)) == 0) {
      return 0;
    }
  }
  else {
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,param_1,param_2);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  iVar2 = *(int *)(this + 0xc);
  pbVar1 = param_2;
  if (*(int *)(param_2 + 0x18) <= *(int *)(param_1 + 0x18)) {
    pbVar1 = param_1;
    param_1 = param_2;
  }
  if (0 < iVar2) {
    lVar5 = 0;
    lVar6 = 0;
    do {
      if ((*(btBroadphaseProxy **)(*(long *)(this + 0x18) + lVar5) == param_1) &&
         (*(btBroadphaseProxy **)(*(long *)(this + 0x18) + lVar5 + 8) == pbVar1)) {
        if (iVar2 <= (int)lVar6) {
          return 0;
        }
        return *(long *)(this + 0x18) + lVar5;
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar6 < iVar2);
  }
  return 0;
}

