
undefined8 gzbuffer(long param_1,uint param_2)

{
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x18) != 0x79b1) && (*(int *)(param_1 + 0x18) != 0x1c4f)) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    return 0xffffffff;
  }
  if (param_2 < 3) {
    param_2 = 2;
  }
  *(uint *)(param_1 + 0x2c) = param_2;
  return 0;
}

