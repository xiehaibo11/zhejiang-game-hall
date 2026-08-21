
/* v8::internal::float_mantissa(float) */

uint v8::internal::float_mantissa(float param_1)

{
  return (uint)param_1 & 0x7fffff;
}

