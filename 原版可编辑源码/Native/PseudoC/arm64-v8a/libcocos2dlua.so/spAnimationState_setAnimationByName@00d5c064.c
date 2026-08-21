
void spAnimationState_setAnimationByName
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
                    /* try { // try from 00d5c070 to 00e5c0b3 has its CatchHandler @ 00d5c1e4 */
  uVar1 = spSkeletonData_findAnimation(*(undefined8 *)*param_1,param_3);
  spAnimationState_setAnimation(param_1,param_2,uVar1,param_4);
  return;
}

