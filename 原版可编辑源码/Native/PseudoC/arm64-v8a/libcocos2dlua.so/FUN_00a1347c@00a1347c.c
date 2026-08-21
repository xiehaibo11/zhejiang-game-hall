
undefined8 FUN_00a1347c(undefined8 param_1,char *param_2,uint param_3)

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
    puVar3 = &DAT_01300250;
  }
  else {
    uVar2 = param_3 - 0x400;
    if (uVar2 < 0x60) {
      puVar3 = &LAB_01300268;
    }
    else {
      if (param_3 == 0x2116) {
        cVar1 = -4;
        goto LAB_00a1350c;
      }
      if (param_3 >> 3 == 0x443) {
        cVar1 = (&DAT_012fd144)[param_3 - 0x2218];
        if (cVar1 == '\0') {
          return 0xffffffff;
        }
        goto LAB_00a1350c;
      }
      uVar2 = param_3 - 0x2500;
      if (0xa7 < uVar2) {
        return 0xffffffff;
      }
      puVar3 = &DAT_013002c8;
    }
  }
  cVar1 = puVar3[uVar2];
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a1350c:
  *param_2 = cVar1;
  return 1;
}

