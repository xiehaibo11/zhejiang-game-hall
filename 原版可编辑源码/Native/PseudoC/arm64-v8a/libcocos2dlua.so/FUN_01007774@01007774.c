
long FUN_01007774(long param_1,long param_2)

{
  param_1 = param_1 + 8;
                    /* try { // try from 01007784 to 011077bb has its CatchHandler @ 010077e8 */
  if (*(char **)(param_2 + 8) != "ZN7cocos2d17PhysicsJointLimit6setMinEfE3$_1") {
    param_1 = 0;
  }
  return param_1;
}

