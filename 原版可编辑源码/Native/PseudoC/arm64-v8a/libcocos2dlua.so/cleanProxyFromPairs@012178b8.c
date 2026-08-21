
/* btSortedOverlappingPairCache::cleanProxyFromPairs(btBroadphaseProxy*, btDispatcher*) */

void __thiscall
btSortedOverlappingPairCache::cleanProxyFromPairs
          (btSortedOverlappingPairCache *this,btBroadphaseProxy *param_1,btDispatcher *param_2)

{
  undefined **local_30;
  btBroadphaseProxy *pbStack_28;
  btSortedOverlappingPairCache *local_20;
  btDispatcher *pbStack_18;
  
  local_30 = &PTR__btOverlapCallback_01731888;
  pbStack_28 = param_1;
  local_20 = this;
  pbStack_18 = param_2;
  (**(code **)(*(long *)this + 0x60))(this,&local_30);
  return;
}

