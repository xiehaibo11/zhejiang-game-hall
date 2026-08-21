
void png_set_chunk_cache_max(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x49c) = param_2;
  }
  return;
}

