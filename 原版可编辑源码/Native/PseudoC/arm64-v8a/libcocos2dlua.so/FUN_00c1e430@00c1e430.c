
void FUN_00c1e430(ulong param_1,double *param_2,int param_3,int param_4)

{
  ulong uVar1;
  ulong uVar2;
  double __x;
  
  if (((param_3 < -0x432) && (param_1 != 0)) &&
     (((uint)LZCOUNT(param_1) ^ 0x3f) + param_3 + 0x433 < 0x35)) {
    uVar2 = 1L << ((ulong)(-param_3 - 0x433) & 0x3f);
    uVar1 = param_1;
    if (((uVar2 & param_1) != 0) && (uVar1 = param_1 + uVar2 * 2, (uVar2 * 3 - 1 & param_1) == 0)) {
      uVar1 = param_1;
    }
    param_1 = uVar1 & uVar2 * -2;
  }
  __x = (double)(long)param_1;
  if (param_4 != 0) {
    __x = -__x;
  }
  if (param_3 != 0) {
    __x = ldexp(__x,param_3);
  }
  *param_2 = __x;
  return;
}

