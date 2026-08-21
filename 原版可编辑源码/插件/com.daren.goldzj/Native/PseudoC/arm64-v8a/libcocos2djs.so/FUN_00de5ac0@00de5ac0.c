
undefined4 FUN_00de5ac0(long param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      return 0;
    }
    uVar1 = 0;
    if (0x1ff < param_3) {
      uVar1 = 2;
    }
  }
  return uVar1;
}

