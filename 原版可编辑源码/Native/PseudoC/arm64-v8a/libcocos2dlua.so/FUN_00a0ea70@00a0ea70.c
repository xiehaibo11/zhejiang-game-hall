
undefined8 FUN_00a0ea70(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != (long *)0x0) && (*param_2 != 0)) {
    uVar1 = FUN_00a0ee04();
    return uVar1;
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return 0;
}

