
void FUN_00137ef8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[8] = 0;
  param_1[9] = param_2;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  uVar1 = FUN_00136de0();
  *param_1 = uVar1;
  uVar1 = FUN_0013740c();
  param_1[1] = uVar1;
  uVar1 = FUN_0013740c();
  param_1[2] = uVar1;
  return;
}

