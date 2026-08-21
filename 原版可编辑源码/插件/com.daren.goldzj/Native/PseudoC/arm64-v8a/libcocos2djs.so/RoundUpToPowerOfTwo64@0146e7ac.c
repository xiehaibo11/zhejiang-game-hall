
/* v8::base::bits::RoundUpToPowerOfTwo64(unsigned long) */

long v8::base::bits::RoundUpToPowerOfTwo64(ulong param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1 - 1;
  }
  return 1L << (-LZCOUNT(lVar1) & 0x3fU);
}

