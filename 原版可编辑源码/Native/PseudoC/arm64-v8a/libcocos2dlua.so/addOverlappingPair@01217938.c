
/* btHashedOverlappingPairCache::addOverlappingPair(btBroadphaseProxy*, btBroadphaseProxy*) */

undefined8 __thiscall
btHashedOverlappingPairCache::addOverlappingPair
          (btHashedOverlappingPairCache *this,btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  gAddedPairs = gAddedPairs + 1;
  plVar1 = *(long **)(this + 0x28);
  if (plVar1 == (long *)0x0) {
    if (((*(ushort *)(param_2 + 10) & *(ushort *)(param_1 + 8)) != 0) &&
       ((*(ushort *)(param_1 + 10) & *(ushort *)(param_2 + 8)) != 0)) goto LAB_012179b4;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
    if ((uVar2 & 1) != 0) {
LAB_012179b4:
      uVar3 = internalAddPair(this,param_1,param_2);
      return uVar3;
    }
  }
  return 0;
}

