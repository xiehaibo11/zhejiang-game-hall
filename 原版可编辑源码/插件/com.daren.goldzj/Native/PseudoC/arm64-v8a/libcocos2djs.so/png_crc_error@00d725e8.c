
bool png_crc_error(long param_1)

{
  uint uVar1;
  uint local_24;
  
  uVar1 = *(uint *)(param_1 + 0x168);
  if ((*(byte *)(param_1 + 0x253) >> 5 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x4e4) = 0x81;
    png_read_data(param_1,&local_24,4);
    if ((uVar1 >> 0xb & 1) == 0) {
LAB_00d72650:
      uVar1 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
      return (uVar1 >> 0x10 | uVar1 << 0x10) != *(uint *)(param_1 + 0x294);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4e4) = 0x81;
    png_read_data(param_1,&local_24,4);
    if ((~uVar1 & 0x300) != 0) goto LAB_00d72650;
  }
  return false;
}

