
void png_handle_gAMA(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint local_24;
  
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) & 6) == 0) {
    if (param_3 == 4) {
      png_read_data(param_1,&local_24,4);
      png_calculate_crc(param_1,&local_24,4);
      iVar2 = png_crc_finish(param_1,0);
      if (iVar2 != 0) {
        return;
      }
      uVar1 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      if ((int)uVar1 < 0) {
        uVar1 = 0xffffffff;
      }
      png_colorspace_set_gamma(param_1,param_1 + 0x510,uVar1);
      png_colorspace_sync(param_1,param_2);
      return;
    }
    png_crc_finish(param_1,param_3);
    pcVar3 = "invalid";
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar3 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar3);
  return;
}

