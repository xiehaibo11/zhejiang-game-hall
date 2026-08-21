
void png_set_packswap(long param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x2b0) < 8)) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x10000;
  }
  return;
}

