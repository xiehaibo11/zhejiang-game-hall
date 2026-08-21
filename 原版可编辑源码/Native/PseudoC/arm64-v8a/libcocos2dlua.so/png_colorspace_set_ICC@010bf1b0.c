
undefined8
png_colorspace_set_ICC
          (undefined8 param_1,long param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  undefined8 uVar1;
  
  if (-1 < *(short *)(param_2 + 0x4a)) {
    if (0x83 < param_4) {
      uVar1 = png_icc_check_header(param_1,param_2,param_3,param_4,param_5);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      uVar1 = png_icc_check_tag_table(param_1,param_2,param_3,param_4,param_5);
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      png_icc_set_sRGB(param_1,param_2,param_5,0);
      return 1;
    }
    FUN_010be73c(param_1,param_2,param_3,param_4,"too short");
  }
  return 0;
}

