
void FUN_014654a0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x29;
  
  uVar1 = *(undefined8 *)(unaff_x29 + (long)*(int *)(unaff_x20 + unaff_x19 + 1) * 8);
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  FUN_0136a720(uVar1,param_1,2);
                    /* WARNING: Could not recover jumptable at 0x01465520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) + unaff_x19 + 5) * 8))();
  return;
}

