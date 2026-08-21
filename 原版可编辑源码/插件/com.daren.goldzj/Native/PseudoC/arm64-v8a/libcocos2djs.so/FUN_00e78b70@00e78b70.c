
void FUN_00e78b70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    FUN_00e139fc(uVar1,param_1[0xf]);
    param_1[0xf] = 0;
    FUN_00e139fc(uVar1,param_1[0x11]);
    param_1[0x11] = 0;
  }
  return;
}

