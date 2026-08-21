
undefined8 FUN_00a1355c(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
  uVar2 = param_3 - 0xa0;
  if (uVar2 < 0x18) {
    puVar3 = &DAT_01300470;
  }
  else {
    uVar2 = param_3 - 0x400;
    if (uVar2 < 0x98) {
      puVar3 = &DAT_01300488;
    }
    else {
      if (param_3 == 0x2219) {
        cVar1 = -2;
        goto LAB_00a135d8;
      }
      uVar2 = param_3 - 0x2500;
      if (0x97 < uVar2) {
        return 0xffffffff;
      }
      puVar3 = &DAT_01300520;
    }
  }
  cVar1 = puVar3[uVar2];
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a135d8:
  *param_2 = cVar1;
  return 1;
}

