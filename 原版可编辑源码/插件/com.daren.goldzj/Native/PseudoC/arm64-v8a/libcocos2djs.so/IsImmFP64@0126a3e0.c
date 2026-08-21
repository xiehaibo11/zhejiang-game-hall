
/* v8::internal::Assembler::IsImmFP64(double) */

ulong v8::internal::Assembler::IsImmFP64(double param_1)

{
  if ((((ulong)param_1 & 0xffffffffffff) == 0) &&
     ((((ushort)((ulong)param_1 >> 0x30) & 0x3fc0) == 0x3fc0 ||
      (((ulong)param_1 & 0x3fc0000000000000) == 0)))) {
    return ((ulong)param_1 ^ (long)param_1 << 1) >> 0x3e & 1;
  }
  return 0;
}

