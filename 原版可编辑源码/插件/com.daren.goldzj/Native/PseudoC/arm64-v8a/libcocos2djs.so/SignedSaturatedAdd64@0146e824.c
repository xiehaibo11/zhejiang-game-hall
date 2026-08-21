
/* v8::base::bits::SignedSaturatedAdd64(long, long) */

long v8::base::bits::SignedSaturatedAdd64(long param_1,long param_2)

{
  if (param_2 < 0) {
    if (param_1 < -0x8000000000000000 - param_2) {
      return -0x8000000000000000;
    }
  }
  else if (0x7fffffffffffffff - param_2 < param_1) {
    return 0x7fffffffffffffff;
  }
  return param_2 + param_1;
}

