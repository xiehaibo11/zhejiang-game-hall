
/* v8::internal::Assembler::ImmNEONFP(double) */

uint v8::internal::Assembler::ImmNEONFP(double param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_1 >> 0x20);
  uVar1 = uVar1 >> 0x17 & 0x40 | (uVar1 >> 0x1f) << 7 | (ushort)((ulong)param_1 >> 0x30) & 0x3f;
  return (uVar1 << 0xb | uVar1 << 5) & 0x703e0;
}

