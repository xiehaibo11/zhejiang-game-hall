
/* v8::internal::float_pack(unsigned int, unsigned int, unsigned int) */

uint v8::internal::float_pack(uint param_1,uint param_2,uint param_3)

{
  return param_2 << 0x17 | param_1 << 0x1f | param_3;
}

