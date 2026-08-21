
undefined4 png_get_compression_buffer_size(long param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x1f0);
    if ((*(byte *)(param_1 + 0x165) & 0x80) != 0) {
      puVar1 = (undefined4 *)(param_1 + 0x4e0);
    }
    uVar2 = *puVar1;
  }
  return uVar2;
}

