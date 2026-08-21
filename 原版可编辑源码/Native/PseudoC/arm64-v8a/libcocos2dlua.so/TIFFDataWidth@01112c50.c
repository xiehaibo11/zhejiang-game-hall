
undefined4 TIFFDataWidth(uint param_1)

{
  if (param_1 < 0x13) {
    return *(undefined4 *)(&DAT_0147ae50 + (long)(int)param_1 * 4);
  }
  return 0;
}

