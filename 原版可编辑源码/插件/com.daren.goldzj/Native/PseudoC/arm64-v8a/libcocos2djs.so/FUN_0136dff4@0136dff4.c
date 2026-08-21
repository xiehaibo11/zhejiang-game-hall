
long FUN_0136dff4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 long param_5)

{
  undefined4 uVar1;
  long unaff_x26;
  
  *(undefined4 *)(param_5 + -1) = param_3;
  *(undefined4 *)(param_5 + 0xb) = 0;
  *(int *)(param_5 + 3) = (int)*(undefined8 *)(unaff_x26 + 0x168);
  *(int *)(param_5 + 7) = (int)param_5 + 0x10;
  *(int *)(param_5 + 0xf) = (int)*(undefined8 *)(unaff_x26 + 0xe0);
  *(undefined4 *)(param_5 + 0x13) = 8;
  uVar1 = (undefined4)*(undefined8 *)(unaff_x26 + 0xa8);
  *(undefined4 *)(param_5 + 0x23) = uVar1;
  *(undefined4 *)(param_5 + 0x1f) = uVar1;
  *(undefined4 *)(param_5 + 0x1b) = uVar1;
  *(undefined4 *)(param_5 + 0x17) = uVar1;
  return param_5;
}

