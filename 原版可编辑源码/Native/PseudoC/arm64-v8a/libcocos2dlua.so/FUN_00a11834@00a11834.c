
undefined8 FUN_00a11834(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_3 < 0xa0) {
    *param_2 = (char)param_3;
    return 1;
  }
  if (param_3 < 0x100) {
    iVar2 = -0xa0;
    puVar3 = &DAT_012fd034;
  }
  else {
    if (param_3 - 0x108 < 0x78) {
      cVar1 = (&DAT_012fd094)[param_3 - 0x108];
      goto joined_r0x00a1187c;
    }
    if ((param_3 & 0xfffffff8) != 0x2d8) {
      return 0xffffffff;
    }
    iVar2 = -0x2d8;
    puVar3 = &DAT_012fd10c;
  }
  cVar1 = puVar3[param_3 + iVar2];
joined_r0x00a1187c:
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
  *param_2 = cVar1;
  return 1;
}

