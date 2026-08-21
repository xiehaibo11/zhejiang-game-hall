
ulong FT_FloorFix(ulong param_1)

{
  if (-1 < (long)param_1) {
    return param_1 & 0xffffffffffff0000;
  }
  return -(-param_1 & 0xffffffffffff0000);
}

