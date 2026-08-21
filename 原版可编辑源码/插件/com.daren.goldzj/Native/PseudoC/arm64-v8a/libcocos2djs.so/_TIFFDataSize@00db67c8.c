
undefined4 _TIFFDataSize(int param_1)

{
  if (param_1 - 1U < 0x12) {
    return *(undefined4 *)(&DAT_019522e0 + (long)(int)(param_1 - 1U) * 4);
  }
  return 0;
}

