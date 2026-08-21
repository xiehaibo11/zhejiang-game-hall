
/* btHashedOverlappingPairCache::processAllOverlappingPairs(btOverlapCallback*, btDispatcher*) */

void __thiscall
btHashedOverlappingPairCache::processAllOverlappingPairs
          (btHashedOverlappingPairCache *this,btOverlapCallback *param_1,btDispatcher *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  
  if (0 < *(int *)(this + 0xc)) {
    lVar3 = 0;
    do {
      while( true ) {
        puVar1 = (undefined8 *)(*(long *)(this + 0x18) + lVar3 * 0x20);
        uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1,puVar1);
        if ((uVar2 & 1) == 0) break;
        (**(code **)(*(long *)this + 0x18))(this,*puVar1,puVar1[1],param_2);
        gOverlappingPairs = gOverlappingPairs + -1;
        if (*(int *)(this + 0xc) <= lVar3) {
          return;
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(this + 0xc));
  }
  return;
}

