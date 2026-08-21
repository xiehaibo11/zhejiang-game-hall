
void FUN_0143e438(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,long param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x26;
  
  *(undefined4 *)(param_6 + -1) = param_4;
  param_2 = param_2 + -1;
  uVar1 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
  *(undefined4 *)(param_6 + 3) = uVar1;
  *(undefined4 *)(param_6 + 7) = uVar1;
  if (param_2 != 0xb) {
    uVar2 = *(undefined8 *)(unaff_x26 + 0xa0);
    do {
      param_2 = param_2 + -4;
      *(int *)(param_6 + param_2) = (int)uVar2;
    } while (param_2 != 0xb);
  }
                    /* WARNING: Could not recover jumptable at 0x0143e47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x21 + (ulong)*(byte *)(unaff_x20 + unaff_x19 + 1) * 8))(param_6);
  return;
}

