
void png_set_compression_mem_level(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x200) = param_2;
  }
  return;
}

