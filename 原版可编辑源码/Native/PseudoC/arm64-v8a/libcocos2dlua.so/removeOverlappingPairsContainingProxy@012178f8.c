
/* btSortedOverlappingPairCache::removeOverlappingPairsContainingProxy(btBroadphaseProxy*,
   btDispatcher*) */

void btSortedOverlappingPairCache::removeOverlappingPairsContainingProxy
               (btBroadphaseProxy *param_1,btDispatcher *param_2)

{
  undefined **local_20;
  btDispatcher *pbStack_18;
  
  local_20 = &PTR__btOverlapCallback_017318c8;
  pbStack_18 = param_2;
  (**(code **)(*(long *)param_1 + 0x60))(param_1,&local_20);
  return;
}

