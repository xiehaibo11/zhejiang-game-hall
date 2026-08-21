
undefined8 png_get_user_chunk_ptr(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x428);
  }
  return uVar1;
}

