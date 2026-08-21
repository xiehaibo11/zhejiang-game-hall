
undefined4 gzeof(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) != 0x1c4f) {
      return 0;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x54);
  }
  return uVar1;
}

