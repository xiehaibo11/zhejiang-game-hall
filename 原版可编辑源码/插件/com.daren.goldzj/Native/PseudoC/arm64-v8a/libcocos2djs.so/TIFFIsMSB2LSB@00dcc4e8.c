
uint TIFFIsMSB2LSB(long param_1)

{
  return *(uint *)(param_1 + 0x10) & 1;
}

