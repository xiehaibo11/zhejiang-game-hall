
/* btDbvtBroadphase::calculateOverlappingPairs(btDispatcher*) */

void __thiscall
btDbvtBroadphase::calculateOverlappingPairs(btDbvtBroadphase *this,btDispatcher *param_1)

{
  collide((btDispatcher *)this);
  performDeferredRemoval(this,param_1);
  return;
}

