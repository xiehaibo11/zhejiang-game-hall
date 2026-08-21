
/* v8::base::bits::SignedMulHighAndAdd32(int, int, int) */

int v8::base::bits::SignedMulHighAndAdd32(int param_1,int param_2,int param_3)

{
  return (int)((ulong)((long)param_2 * (long)param_1) >> 0x20) + param_3;
}

