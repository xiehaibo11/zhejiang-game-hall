
void png_set_sRGB_gAMA_and_cHRM(long param_1,long param_2)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = png_colorspace_set_sRGB(param_1,param_2 + 0x34);
    if (iVar1 != 0) {
      *(ushort *)(param_2 + 0x7e) = *(ushort *)(param_2 + 0x7e) | 0x18;
    }
    png_colorspace_sync_info(param_1,param_2);
    return;
  }
  return;
}

