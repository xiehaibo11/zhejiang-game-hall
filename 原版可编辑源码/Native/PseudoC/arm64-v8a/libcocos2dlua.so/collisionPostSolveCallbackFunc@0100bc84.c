
/* cocos2d::PhysicsWorldCallback::collisionPostSolveCallbackFunc(cpArbiter*, cpSpace*,
   cocos2d::PhysicsWorld*) */

void cocos2d::PhysicsWorldCallback::collisionPostSolveCallbackFunc
               (cpArbiter *param_1,cpSpace *param_2,PhysicsWorld *param_3)

{
  undefined8 uVar1;
  
  uVar1 = cpArbiterGetUserData();
                    /* WARNING: Could not recover jumptable at 0x0100bcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_3 + 0x68))(param_3,uVar1);
  return;
}

