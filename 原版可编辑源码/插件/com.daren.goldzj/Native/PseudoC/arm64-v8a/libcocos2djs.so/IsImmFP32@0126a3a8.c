
/* v8::internal::Assembler::IsImmFP32(float) */

uint v8::internal::Assembler::IsImmFP32(float param_1)

{
  uint uVar1;
  
  if ((((uint)param_1 & 0x7ffff) == 0) &&
     ((uVar1 = (uint)param_1 >> 0x10 & 0x3e00, uVar1 == 0x3e00 || (uVar1 == 0)))) {
    return ((uint)param_1 ^ (int)param_1 << 1) >> 0x1e & 1;
  }
  return 0;
}

