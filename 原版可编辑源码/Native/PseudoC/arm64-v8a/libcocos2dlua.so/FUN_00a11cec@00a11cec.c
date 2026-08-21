
undefined8 FUN_00a11cec(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  
  if (param_3 < 0xa0) {
    *param_2 = (char)param_3;
    return 1;
  }
  if (param_3 < 0x180) {
    cVar1 = (&DAT_012fd914)[param_3 - 0xa0];
    if (cVar1 != '\0') {
LAB_00a11d30:
      *param_2 = cVar1;
      return 1;
    }
  }
  else if (param_3 == 0x2015) {
    cVar1 = -0x43;
    goto LAB_00a11d30;
  }
  return 0xffffffff;
}

