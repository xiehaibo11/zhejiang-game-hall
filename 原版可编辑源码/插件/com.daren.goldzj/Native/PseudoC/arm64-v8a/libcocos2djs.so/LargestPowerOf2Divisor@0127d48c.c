
/* v8::internal::LargestPowerOf2Divisor(unsigned long) */

ulong v8::internal::LargestPowerOf2Divisor(ulong param_1)

{
  return -param_1 & param_1;
}

