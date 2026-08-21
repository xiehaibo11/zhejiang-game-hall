
/* v8::internal::double_mantissa(double) */

ulong v8::internal::double_mantissa(double param_1)

{
  return (ulong)param_1 & 0xfffffffffffff;
}

