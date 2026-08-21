
void png_reset_crc(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = crc32(0,0,0);
  *(undefined4 *)(param_1 + 0x294) = uVar1;
  return;
}

