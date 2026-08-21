
void png_set_sRGB(long param_1,long param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    png_colorspace_set_sRGB(param_1,param_2 + 0x34);
    png_colorspace_sync_info(param_1,param_2);
    return;
  }
  return;
}

