
undefined8 FUN_00a11968(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  
  if (param_3 < 0xa0) {
    *param_2 = (char)param_3;
    return 1;
  }
  if (param_3 < 0xb0) {
    cVar1 = (&DAT_012fc5c4)[param_3 - 0xa0];
  }
  else {
    if (0x5f < param_3 - 0x400) {
      if (param_3 != 0x2116) {
        return 0xffffffff;
      }
      cVar1 = -0x10;
      goto LAB_00a119d4;
    }
    cVar1 = (&DAT_012fd40c)[param_3 - 0x400];
  }
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a119d4:
  *param_2 = cVar1;
  return 1;
}

