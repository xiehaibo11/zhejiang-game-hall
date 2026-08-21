
/* v8::internal::float_exp(float) */

uint v8::internal::float_exp(float param_1)

{
  return (uint)param_1 >> 0x17 & 0xff;
}

