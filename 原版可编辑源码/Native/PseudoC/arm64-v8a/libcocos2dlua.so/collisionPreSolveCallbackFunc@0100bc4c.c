
/* cocos2d::PhysicsWorldCallback::collisionPreSolveCallbackFunc(cpArbiter*, cpSpace*,
   cocos2d::PhysicsWorld*) */

uint cocos2d::PhysicsWorldCallback::collisionPreSolveCallbackFunc
               (cpArbiter *param_1,cpSpace *param_2,PhysicsWorld *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = cpArbiterGetUserData();
  uVar1 = (**(code **)(*(long *)param_3 + 0x60))(param_3,uVar2);
  return uVar1 & 1;
}

