
void png_set_chunk_malloc_max(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x4a0) = param_2;
  }
  return;
}

