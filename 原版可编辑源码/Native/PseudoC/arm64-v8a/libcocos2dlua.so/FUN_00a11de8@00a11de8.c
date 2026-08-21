
undefined8 FUN_00a11de8(undefined8 param_1,char *param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_3 < 0xa0) {
    *param_2 = (char)param_3;
    return 1;
  }
  if (param_3 < 0x180) {
    iVar1 = -0xa0;
    puVar2 = &DAT_012fdab4;
  }
  else {
    if (param_3 >> 3 != 0x403) {
      return 0xffffffff;
    }
    iVar1 = -0x2018;
    puVar2 = &DAT_012fd114;
  }
  if (puVar2[param_3 + iVar1] == '\0') {
    return 0xffffffff;
  }
  *param_2 = puVar2[param_3 + iVar1];
  return 1;
}

