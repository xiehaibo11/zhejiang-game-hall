
/* v8::internal::MutableBigInt::digit_pow(unsigned long, unsigned long) */

long v8::internal::MutableBigInt::digit_pow(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = 1;
    do {
      uVar1 = param_1;
      if ((param_2 & 1) == 0) {
        uVar1 = 1;
      }
      param_2 = param_2 >> 1;
      lVar2 = uVar1 * lVar2;
      param_1 = param_1 * param_1;
    } while (param_2 != 0);
    return lVar2;
  }
  return 1;
}

