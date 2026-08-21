
undefined8 png_get_chunk_malloc_max(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x4a0);
  }
  return uVar1;
}

