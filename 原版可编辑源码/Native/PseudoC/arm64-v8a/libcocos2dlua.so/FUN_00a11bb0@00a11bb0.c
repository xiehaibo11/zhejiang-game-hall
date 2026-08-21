
undefined8 FUN_00a11bb0(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_3 < 0xa0) {
    *param_2 = (char)param_3;
    return 1;
  }
  if (param_3 < 0xf8) {
    cVar1 = (&DAT_012fd754)[param_3 - 0xa0];
  }
  else {
    uVar2 = param_3 - 0x5d0;
    if (uVar2 < 0x20) {
      puVar3 = &DAT_012fc914;
    }
    else {
      uVar2 = param_3 - 0x2008;
      if (0xf < uVar2) {
        return 0xffffffff;
      }
      puVar3 = &DAT_012fc5f4;
    }
    cVar1 = puVar3[uVar2];
  }
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
  *param_2 = cVar1;
  return 1;
}

