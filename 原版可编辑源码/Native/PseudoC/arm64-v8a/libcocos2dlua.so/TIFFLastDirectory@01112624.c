
bool TIFFLastDirectory(long param_1)

{
  return *(long *)(param_1 + 0x20) == 0;
}

