
/* v8::internal::HighestSetBitPosition(unsigned long) */

int v8::internal::HighestSetBitPosition(ulong param_1)

{
  return 0x3f - (int)LZCOUNT(param_1);
}

