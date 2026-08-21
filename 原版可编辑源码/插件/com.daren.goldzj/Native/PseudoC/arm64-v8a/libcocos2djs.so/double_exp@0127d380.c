
/* v8::internal::double_exp(double) */

ulong v8::internal::double_exp(double param_1)

{
  return (ulong)param_1 >> 0x34 & 0x7ff;
}

