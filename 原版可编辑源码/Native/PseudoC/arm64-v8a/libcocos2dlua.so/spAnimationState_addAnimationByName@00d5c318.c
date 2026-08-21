
void spAnimationState_addAnimationByName
               (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
               undefined4 param_5)

{
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 00d5b3f8 with catch @ 00d5c324 */
                    /* catch() { ... } // from try @ 00d5b374 with catch @ 00d5c328 */
                    /* catch() { ... } // from try @ 00d5b278 with catch @ 00d5c32c
                       catch() { ... } // from try @ 00d5b350 with catch @ 00d5c32c
                       catch() { ... } // from try @ 00d5b830 with catch @ 00d5c32c */
                    /* catch() { ... } // from try @ 00d5b2b4 with catch @ 00d5c330 */
  uVar1 = spSkeletonData_findAnimation(*(undefined8 *)*param_2,param_4);
                    /* try { // try from 00d5c34c to 00e5c3a7 has its CatchHandler @ 00d5c34c
                       catch() { ... } // from try @ 00d5c34c with catch @ 00d5c34c
                       catch() { ... } // from try @ 00d5c3b4 with catch @ 00d5c34c */
  spAnimationState_addAnimation(param_1,param_2,param_3,uVar1,param_5);
  return;
}

