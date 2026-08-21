
void FUN_010aced4(long *param_1,long param_2,long param_3)

{
  if (param_1 != (long *)0x0) {
    if ((param_2 != 0) && (0xf97 < param_3)) {
      *param_1 = param_2 + 0x798;
      param_1[1] = param_3 + -0x798;
      param_1[3] = param_2;
      return;
    }
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

