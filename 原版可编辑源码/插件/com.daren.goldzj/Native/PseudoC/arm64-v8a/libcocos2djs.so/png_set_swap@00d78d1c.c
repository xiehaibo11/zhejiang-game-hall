
void png_set_swap(long param_1)

{
  if ((param_1 != 0) && (*(char *)(param_1 + 0x2b0) == '\x10')) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x16c) | 0x10;
  }
  return;
}

