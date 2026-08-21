
undefined8 FUN_00a14bb4(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  
  if (param_3 < 0xa0) {
    *param_2 = (char)param_3;
    return 1;
  }
  if (param_3 < 0xb0) {
    cVar1 = (&DAT_012fc614)[param_3 - 0xa0];
  }
  else {
    if (0x5f < param_3 - 0xe80) {
      if (param_3 != 0x20ad) {
        return 0xffffffff;
      }
      cVar1 = -0x21;
      goto LAB_00a14c20;
    }
    cVar1 = (&DAT_01302a8e)[param_3 - 0xe80];
  }
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a14c20:
  *param_2 = cVar1;
  return 1;
}

