
/* v8::base::bits::SignedMulHigh32(int, int) */

ulong v8::base::bits::SignedMulHigh32(int param_1,int param_2)

{
  return (ulong)((long)param_2 * (long)param_1) >> 0x20;
}

