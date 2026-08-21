
/* v8::internal::Assembler::FPToImm8(double) */

uint v8::internal::Assembler::FPToImm8(double param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_1 >> 0x20);
  return uVar1 >> 0x17 & 0x40 | (uVar1 >> 0x1f) << 7 | (ushort)((ulong)param_1 >> 0x30) & 0x3f;
}

