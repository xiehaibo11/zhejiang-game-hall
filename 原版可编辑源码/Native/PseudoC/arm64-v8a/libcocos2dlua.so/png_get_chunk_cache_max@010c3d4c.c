
undefined4 png_get_chunk_cache_max(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x49c);
  }
  return uVar1;
}

