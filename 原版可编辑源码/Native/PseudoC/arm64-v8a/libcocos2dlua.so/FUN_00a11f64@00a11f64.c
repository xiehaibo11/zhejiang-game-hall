
undefined8 FUN_00a11f64(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  byte bVar1;
  
  if (param_3 < 0xa0) goto LAB_00a11fcc;
  if (param_3 < 0xc0) {
    bVar1 = (&DAT_012fc954)[param_3 - 0xa0];
  }
  else {
    if (param_3 < 0x100) goto LAB_00a11fcc;
    if (0x2f < param_3 - 0x150) {
      if (param_3 != 0x20ac) {
        return 0xffffffff;
      }
      param_3 = 0xa4;
      goto LAB_00a11fcc;
    }
    bVar1 = (&DAT_012fdd7c)[param_3 - 0x150];
  }
  param_3 = (uint)bVar1;
  if (param_3 == 0) {
    return 0xffffffff;
  }
LAB_00a11fcc:
  *param_2 = (char)param_3;
  return 1;
}

