
void FUN_010afa58(long *param_1,long param_2,long param_3)

{
  if (param_1 != (long *)0x0) {
    if ((param_2 != 0) && (0x119f < param_3)) {
      param_1[4] = param_2;
      *param_1 = param_2 + 0x9a0;
      param_1[1] = param_3 - 0x9a0U & 0xffffffffffffffe0;
      *(int *)(param_1 + 2) = (int)(param_3 - 0x9a0U >> 8);
      return;
    }
    param_1[4] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

