
/* v8::base::bits::SignedSaturatedSub64(long, long) */

long v8::base::bits::SignedSaturatedSub64(long param_1,long param_2)

{
  if (param_2 < 1) {
    if (param_2 + 0x7fffffffffffffff < param_1) {
      return 0x7fffffffffffffff;
    }
  }
  else if (param_1 < (long)(param_2 | 0x8000000000000000U)) {
    return -0x8000000000000000;
  }
  return param_1 - param_2;
}

