
/* btHashedOverlappingPairCache::cleanOverlappingPair(btBroadphasePair&, btDispatcher*) */

btHashedOverlappingPairCache * __thiscall
btHashedOverlappingPairCache::cleanOverlappingPair
          (btHashedOverlappingPairCache *this,btBroadphasePair *param_1,btDispatcher *param_2)

{
  if ((param_2 != (btDispatcher *)0x0) &&
     (this = (btHashedOverlappingPairCache *)0x0,
     *(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(param_1 + 0x10))();
    this = (btHashedOverlappingPairCache *)
           (**(code **)(*(long *)param_2 + 0x78))(param_2,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return this;
}

