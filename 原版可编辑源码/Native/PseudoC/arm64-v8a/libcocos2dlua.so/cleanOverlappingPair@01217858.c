
/* btSortedOverlappingPairCache::cleanOverlappingPair(btBroadphasePair&, btDispatcher*) */

void __thiscall
btSortedOverlappingPairCache::cleanOverlappingPair
          (btSortedOverlappingPairCache *this,btBroadphasePair *param_1,btDispatcher *param_2)

{
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x10))();
    (**(code **)(*(long *)param_2 + 0x78))(param_2,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    gRemovePairs = gRemovePairs + -1;
  }
  return;
}

