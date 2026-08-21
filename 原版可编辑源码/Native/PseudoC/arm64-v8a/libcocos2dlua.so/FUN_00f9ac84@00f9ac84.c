
/* WARNING: Type propagation algorithm not settling */

void FUN_00f9ac84(undefined1 param_1 [16],float param_2)

{
  long *plVar1;
  long *plVar2;
  Director *pDVar3;
  long unaff_x19;
  long *unaff_x20;
  Director *unaff_x21;
  long unaff_x23;
  long unaff_x24;
  long unaff_x29;
  float fVar4;
  float unaff_s8;
  undefined8 in_stack_00000008;
  byte in_stack_00000020;
  void *in_stack_00000030;
  byte in_stack_00000038;
  void *in_stack_00000048;
  byte in_stack_00000050;
  void *in_stack_00000060;
  
  cocos2d::Director::Director(unaff_x21);
  *(Director **)(unaff_x24 + 0xc40) = unaff_x21;
  cocos2d::Director::init(unaff_x21);
  plVar1 = *(long **)(*(long *)(unaff_x24 + 0xc40) + 0x108);
  if (plVar1 == (long *)0x0) {
    fVar4 = 0.0;
    param_2 = 0.0;
  }
  else {
    fVar4 = (float)(**(code **)(*plVar1 + 0xa8))();
  }
                    /* try { // try from 00f9ad08 to 0109ad0b has its CatchHandler @ 00f9adb0 */
                    /* try { // try from 00f9ad0c to 0109ad97 has its CatchHandler @ 00f9ab1c */
  param_2 = param_2 + (float)((int)(22.0 / unaff_s8) << 1);
  in_stack_00000008 = CONCAT44(param_2,fVar4 + 0.0);
  (**(code **)(*unaff_x20 + 0x98))();
  plVar1 = *(long **)(unaff_x19 + 0x138);
  if (*(long *)(unaff_x24 + 0xc40) == 0) {
    pDVar3 = operator_new(0x1e0,(nothrow_t *)&std::nothrow);
    if (pDVar3 != (Director *)0x0) {
      cocos2d::Director::Director(pDVar3);
    }
    *(Director **)(unaff_x24 + 0xc40) = pDVar3;
    cocos2d::Director::init(pDVar3);
    plVar2 = *(long **)(*(long *)(unaff_x24 + 0xc40) + 0x108);
  }
  else {
    plVar2 = *(long **)(*(long *)(unaff_x24 + 0xc40) + 0x108);
  }
  if (plVar2 == (long *)0x0) {
    fVar4 = 0.0;
    param_2 = 0.0;
  }
  else {
    fVar4 = (float)(**(code **)(*plVar2 + 0xa8))();
  }
                    /* try { // try from 00f9ad98 to 0109ad9f has its CatchHandler @ 00f9ada4 */
                    /* try { // try from 00f9ada0 to 0109ade7 has its CatchHandler @ 00f9ab1c */
  param_2 = param_2 + (float)(int)(22.0 / unaff_s8);
                    /* catch() { ... } // from try @ 00f9ad98 with catch @ 00f9ada4 */
  in_stack_00000008 = CONCAT44(param_2,fVar4 + 0.0);
                    /* catch() { ... } // from try @ 00f9acdc with catch @ 00f9ada8 */
                    /* catch() { ... } // from try @ 00f9ac80 with catch @ 00f9adac */
                    /* catch() { ... } // from try @ 00f9ad08 with catch @ 00f9adb0 */
  (**(code **)(*plVar1 + 0x98))(plVar1,&stack0x00000008);
  plVar1 = *(long **)(unaff_x19 + 0x130);
  if (*(long *)(unaff_x24 + 0xc40) == 0) {
    pDVar3 = operator_new(0x1e0,(nothrow_t *)&std::nothrow);
    if (pDVar3 != (Director *)0x0) {
      cocos2d::Director::Director(pDVar3);
    }
    *(Director **)(unaff_x24 + 0xc40) = pDVar3;
    cocos2d::Director::init(pDVar3);
    plVar2 = *(long **)(*(long *)(unaff_x24 + 0xc40) + 0x108);
  }
  else {
    plVar2 = *(long **)(*(long *)(unaff_x24 + 0xc40) + 0x108);
  }
  if (plVar2 == (long *)0x0) {
    fVar4 = 0.0;
    param_2 = 0.0;
  }
  else {
    fVar4 = (float)(**(code **)(*plVar2 + 0xa8))();
  }
  in_stack_00000008 = CONCAT44(param_2 + 0.0,fVar4 + 0.0);
  (**(code **)(*plVar1 + 0x98))(plVar1,&stack0x00000008);
  if ((in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
                    /* try { // try from 00f9acdc to 0109ace3 has its CatchHandler @ 00f9ada8 */
  }
  if ((in_stack_00000038 & 1) != 0) {
    operator_delete(in_stack_00000048);
  }
  if ((in_stack_00000050 & 1) != 0) {
    operator_delete(in_stack_00000060);
  }
  if (*(long *)(unaff_x23 + 0x28) == *(long *)(unaff_x29 + -0x48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

