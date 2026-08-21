
ulong FT_CeilFix(long param_1)

{
  if (-1 < param_1) {
    return param_1 + 0xffffU & 0xffffffffffff0000;
  }
  return -(0xffffU - param_1 & 0xffffffffffff0000);
}

