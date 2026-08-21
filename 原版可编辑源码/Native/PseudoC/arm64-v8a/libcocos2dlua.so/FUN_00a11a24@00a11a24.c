
undefined8 FUN_00a11a24(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  
  if (param_3 < 0xa0) {
    *param_2 = (char)param_3;
    return 1;
  }
  if (param_3 < 0xb0) {
    cVar1 = (&DAT_012fc5d4)[param_3 - 0xa0];
  }
  else {
    if (0x4f < param_3 - 0x608) {
      return 0xffffffff;
    }
    cVar1 = (&DAT_012fd52c)[param_3 - 0x608];
  }
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
  *param_2 = cVar1;
  return 1;
}

