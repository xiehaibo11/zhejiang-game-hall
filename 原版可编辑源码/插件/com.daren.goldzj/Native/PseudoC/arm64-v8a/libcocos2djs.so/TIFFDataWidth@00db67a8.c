
undefined4 TIFFDataWidth(uint param_1)

{
  if (param_1 < 0x13) {
    return *(undefined4 *)(&DAT_01952290 + (long)(int)param_1 * 4);
  }
  return 0;
}

