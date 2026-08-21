
/* cocos2d::PhysicsWorldCallback::collisionSeparateCallbackFunc(cpArbiter*, cpSpace*,
   cocos2d::PhysicsWorld*) */

void cocos2d::PhysicsWorldCallback::collisionSeparateCallbackFunc
               (cpArbiter *param_1,cpSpace *param_2,PhysicsWorld *param_3)

{
  long *plVar1;
  
  plVar1 = (long *)cpArbiterGetUserData();
  (**(code **)(*(long *)param_3 + 0x70))(param_3,plVar1);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0100bcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1);
    return;
  }
  return;
}

