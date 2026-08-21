
ulong FT_CeilFix(long param_1)

{
  return param_1 + 0xffffU & 0xffffffffffff0000;
}

