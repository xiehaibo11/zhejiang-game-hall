
undefined8 FUN_00a11794(undefined8 param_1,char *param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_3 < 0xa0) {
    *param_2 = (char)param_3;
    return 1;
  }
  if (param_3 < 0x180) {
    iVar1 = -0xa0;
    puVar2 = &DAT_012fc7d4;
  }
  else {
    if ((param_3 & 0xffffffe0) != 0x2c0) {
      return 0xffffffff;
    }
    iVar1 = -0x2c0;
    puVar2 = &LAB_012fc8b4;
  }
  if (puVar2[param_3 + iVar1] == '\0') {
    return 0xffffffff;
  }
  *param_2 = puVar2[param_3 + iVar1];
  return 1;
}

