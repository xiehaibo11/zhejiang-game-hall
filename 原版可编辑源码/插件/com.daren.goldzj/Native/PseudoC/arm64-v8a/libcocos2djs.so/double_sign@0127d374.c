
/* v8::internal::double_sign(double) */

ulong v8::internal::double_sign(double param_1)

{
  return (ulong)param_1 >> 0x3f;
}

