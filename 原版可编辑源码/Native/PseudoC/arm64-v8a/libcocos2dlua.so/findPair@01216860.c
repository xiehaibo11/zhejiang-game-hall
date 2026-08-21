
/* btHashedOverlappingPairCache::findPair(btBroadphaseProxy*, btBroadphaseProxy*) */

long __thiscall
btHashedOverlappingPairCache::findPair
          (btHashedOverlappingPairCache *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  long lVar1;
  btBroadphaseProxy *pbVar2;
  uint uVar3;
  
  gFindPairs = gFindPairs + 1;
  pbVar2 = param_1;
  if (*(int *)(param_1 + 0x18) <= *(int *)(param_2 + 0x18)) {
    pbVar2 = param_2;
    param_2 = param_1;
  }
  uVar3 = *(uint *)(param_2 + 0x18) | *(int *)(pbVar2 + 0x18) << 0x10;
  uVar3 = uVar3 + (uVar3 << 0xf ^ 0xffffffff);
  uVar3 = (uVar3 ^ (int)uVar3 >> 10) * 9;
  uVar3 = uVar3 ^ (int)uVar3 >> 6;
  uVar3 = uVar3 + (uVar3 << 0xb ^ 0xffffffff);
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x10) & *(int *)(this + 0x10) - 1U;
  if (((int)uVar3 < *(int *)(this + 0x3c)) &&
     (uVar3 = *(uint *)(*(long *)(this + 0x48) + (long)(int)uVar3 * 4), uVar3 != 0xffffffff)) {
    do {
      if ((*(uint *)(*(long *)(*(long *)(this + 0x18) +
                              (-(ulong)(uVar3 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar3 << 5)) +
                    0x18) == *(uint *)(param_2 + 0x18)) &&
         (lVar1 = *(long *)(this + 0x18) + (long)(int)uVar3 * 0x20,
         *(int *)(*(long *)(lVar1 + 8) + 0x18) == *(int *)(pbVar2 + 0x18))) {
        return lVar1;
      }
      uVar3 = *(uint *)(*(long *)(this + 0x68) + (long)(int)uVar3 * 4);
    } while (uVar3 != 0xffffffff);
  }
  return 0;
}

