
/* btCollisionDispatcher::dispatchAllCollisionPairs(btOverlappingPairCache*, btDispatcherInfo
   const&, btDispatcher*) */

void __thiscall
btCollisionDispatcher::dispatchAllCollisionPairs
          (btCollisionDispatcher *this,btOverlappingPairCache *param_1,btDispatcherInfo *param_2,
          btDispatcher *param_3)

{
  undefined **local_28;
  btDispatcherInfo *pbStack_20;
  btCollisionDispatcher *local_18;
  
  local_28 = &PTR__btOverlapCallback_017319e8;
  pbStack_20 = param_2;
  local_18 = this;
  (**(code **)(*(long *)param_1 + 0x60))(param_1,&local_28,param_3);
  return;
}

