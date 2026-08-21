
long FUN_01007cf0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) != "ZN7cocos2d18PhysicsJointSpring10setDampingEfE4$_10") {
    param_1 = 0;
  }
                    /* try { // try from 01007d08 to 01107d2f has its CatchHandler @ 01007d08
                       catch() { ... } // from try @ 01007d08 with catch @ 01007d08
                       catch() { ... } // from try @ 01007d40 with catch @ 01007d08 */
  return param_1;
}

