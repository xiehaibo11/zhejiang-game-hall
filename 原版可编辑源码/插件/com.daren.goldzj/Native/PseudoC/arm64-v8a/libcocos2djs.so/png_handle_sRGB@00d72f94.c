
void png_handle_sRGB(long param_1,undefined8 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_24 [4];
  
  if ((*(uint *)(param_1 + 0x164) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"missing IHDR");
  }
  if ((*(uint *)(param_1 + 0x164) & 6) == 0) {
    if (param_3 == 1) {
      png_read_data(param_1,local_24,1);
      png_calculate_crc(param_1,local_24,1);
      iVar2 = png_crc_finish(param_1,0);
      if (iVar2 != 0) {
        return;
      }
      uVar1 = *(ushort *)(param_1 + 0x55a);
      if ((short)uVar1 < 0) {
        return;
      }
      if ((uVar1 >> 2 & 1) == 0) {
        png_colorspace_set_sRGB(param_1,param_1 + 0x510,local_24[0]);
        png_colorspace_sync(param_1,param_2);
        return;
      }
      *(ushort *)(param_1 + 0x55a) = uVar1 | 0x8000;
      png_colorspace_sync(param_1,param_2);
      pcVar3 = "too many profiles";
    }
    else {
      png_crc_finish(param_1,param_3);
      pcVar3 = "invalid";
    }
  }
  else {
    png_crc_finish(param_1,param_3);
    pcVar3 = "out of place";
  }
  png_chunk_benign_error(param_1,pcVar3);
  return;
}

