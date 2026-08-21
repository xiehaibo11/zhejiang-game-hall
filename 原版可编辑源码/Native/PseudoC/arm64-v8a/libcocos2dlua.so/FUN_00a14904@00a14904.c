
undefined8 FUN_00a14904(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
  if ((param_3 & 0xffffffe0) == 0xa0) {
    cVar1 = (&DAT_012fcbf4)[param_3 - 0xa0];
  }
  else {
    uVar2 = param_3 - 0x400;
    if (uVar2 < 0xf0) {
      puVar3 = &DAT_013025ae;
    }
    else {
      uVar2 = param_3 - 0x2010;
      if (0x17 < uVar2) {
        if (param_3 != 0x2116) {
          return 0xffffffff;
        }
        cVar1 = -0x47;
        goto LAB_00a14990;
      }
      puVar3 = &DAT_0130269e;
    }
    cVar1 = puVar3[uVar2];
  }
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a14990:
  *param_2 = cVar1;
  return 1;
}

