
void png_set_gAMA(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = png_fixed(param_1,"png_set_gAMA");
  if ((param_1 != 0) && (param_2 != 0)) {
    png_colorspace_set_gamma(param_1,param_2 + 0x34,uVar1);
    png_colorspace_sync_info(param_1,param_2);
    return;
  }
  return;
}

