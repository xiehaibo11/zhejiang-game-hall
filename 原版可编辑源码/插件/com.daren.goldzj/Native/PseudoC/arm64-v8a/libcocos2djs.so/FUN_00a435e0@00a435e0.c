
undefined4 FUN_00a435e0(long param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    return 0;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x260);
  if (*(long *)(param_1 + 0x650) != 0) {
    return 0x10000;
  }
  uVar1 = 0x10000;
  if (*(long *)(param_1 + 0x648) == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

