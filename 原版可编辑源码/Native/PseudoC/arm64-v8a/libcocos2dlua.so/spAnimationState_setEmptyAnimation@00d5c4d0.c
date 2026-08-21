
void spAnimationState_setEmptyAnimation(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 00d5c444 with catch @ 00d5c4d0 */
                    /* catch() { ... } // from try @ 00d5c464 with catch @ 00d5c4d8 */
  lVar1 = spAnimationState_setAnimation(param_2,param_3,DAT_017875f0,0);
  *(undefined4 *)(lVar1 + 100) = param_1;
  *(undefined4 *)(lVar1 + 0x54) = param_1;
  return;
}

