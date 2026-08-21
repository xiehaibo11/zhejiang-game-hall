
void FUN_010abcb8(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 1) == 0) {
    uVar2 = *param_1;
    iVar1 = FUN_010ac2ec(param_1 + 3,param_2,uVar2);
    if (iVar1 == 0) {
      FUN_010ac2ec(param_1 + 9,param_2,uVar2);
      return;
    }
  }
  return;
}

