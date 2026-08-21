
void FUN_00e6acb4(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar2 = *param_1;
    iVar1 = FUN_00e6b2c8(param_1 + 3,param_2,uVar2);
    if (iVar1 == 0) {
      FUN_00e6b2c8(param_1 + 9,param_2 & 0xffffffff,uVar2);
      return;
    }
  }
  return;
}

