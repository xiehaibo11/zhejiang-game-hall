
undefined4 FUN_00a550c0(long param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    *param_2 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0x260);
    uVar1 = 0x10000;
    if (*(long *)(param_1 + 0x30) == 0) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0;
}

