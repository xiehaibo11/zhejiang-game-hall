
undefined8 FUN_00a11c5c(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  
  if (param_3 < 0xd0) {
    *param_2 = (char)param_3;
    return 1;
  }
  if (param_3 < 0x100) {
    cVar1 = (&DAT_012fec34)[param_3 - 0xd0];
  }
  else {
    if (0x47 < param_3 - 0x118) {
      return 0xffffffff;
    }
    cVar1 = (&DAT_012fd80c)[param_3 - 0x118];
  }
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
  *param_2 = cVar1;
  return 1;
}

