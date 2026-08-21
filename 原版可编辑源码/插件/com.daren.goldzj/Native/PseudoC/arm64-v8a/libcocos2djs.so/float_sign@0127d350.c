
/* v8::internal::float_sign(float) */

uint v8::internal::float_sign(float param_1)

{
  return (uint)param_1 >> 0x1f;
}

