
void png_set_compression_strategy(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x204) = param_2;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 1;
  }
  return;
}

