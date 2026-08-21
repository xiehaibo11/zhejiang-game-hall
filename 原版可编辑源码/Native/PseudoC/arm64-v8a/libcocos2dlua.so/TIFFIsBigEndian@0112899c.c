
bool TIFFIsBigEndian(long param_1)

{
  return *(short *)(param_1 + 0x268) == 0x4d4d;
}

