
void png_set_packing(long param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x2b0) < 8)) {
    *(undefined1 *)(param_1 + 0x2b1) = 8;
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 4;
  }
  return;
}

