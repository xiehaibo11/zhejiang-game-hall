
/* cocos2d::EventListenerPhysicsContactWithBodies::hitTest(cocos2d::PhysicsShape*,
   cocos2d::PhysicsShape*) */

undefined8 __thiscall
cocos2d::EventListenerPhysicsContactWithBodies::hitTest
          (EventListenerPhysicsContactWithBodies *this,PhysicsShape *param_1,PhysicsShape *param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x28) == *(long *)(this + 400)) {
    lVar1 = *(long *)(this + 0x198);
    if (*(long *)(param_2 + 0x28) == lVar1) {
      return 1;
    }
  }
  else {
    lVar1 = *(long *)(this + 0x198);
  }
                    /* try { // try from 01002728 to 01102953 has its CatchHandler @ 01002564 */
  if ((*(long *)(param_1 + 0x28) == lVar1) && (*(long *)(param_2 + 0x28) == *(long *)(this + 400)))
  {
    return 1;
  }
  return 0;
}

