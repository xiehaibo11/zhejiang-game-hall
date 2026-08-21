
ulong FT_RoundFix(long param_1)

{
  return param_1 + (param_1 >> 0x3f) + 0x8000U & 0xffffffffffff0000;
}

