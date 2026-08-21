
void FUN_00d82da4(undefined8 *param_1,int param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    return;
  }
  lVar1 = param_1[0x3f];
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 0;
  *(int *)(lVar1 + 0x1c) = param_2;
  if (param_2 != 0) {
    param_1 = (undefined8 *)*param_1;
    *(undefined4 *)(param_1 + 5) = 3;
                    /* WARNING: Could not recover jumptable at 0x00d82dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)();
    return;
  }
  *(code **)(lVar1 + 8) = FUN_00d82de4;
  return;
}

