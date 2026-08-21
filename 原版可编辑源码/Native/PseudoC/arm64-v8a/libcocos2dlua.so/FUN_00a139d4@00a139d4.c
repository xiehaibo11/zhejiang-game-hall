
undefined8 FUN_00a139d4(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
  uVar2 = param_3 - 0xa0;
  if (uVar2 < 0xf8) {
    puVar4 = &DAT_01300c28;
LAB_00a139fc:
    cVar1 = puVar4[uVar2];
  }
  else {
    if ((param_3 & 0xffffffe0) != 0x2c0) {
      if (param_3 == 0x3c0) {
        cVar1 = -7;
        goto LAB_00a13a44;
      }
      uVar2 = param_3 - 0x2010;
      if (uVar2 < 0x38) {
        puVar4 = &DAT_01300d20;
      }
      else {
        if (param_3 >> 3 == 0x424) {
          iVar3 = -0x2120;
          puVar4 = &DAT_012fd15c;
          goto LAB_00a13a24;
        }
        uVar2 = param_3 - 0x2200;
        if (0x67 < uVar2) {
          if (param_3 != 0x25ca) {
            return 0xffffffff;
          }
          cVar1 = -0x29;
          goto LAB_00a13a44;
        }
        puVar4 = &DAT_01300d58;
      }
      goto LAB_00a139fc;
    }
    iVar3 = -0x2c0;
    puVar4 = &DAT_012fca34;
LAB_00a13a24:
    cVar1 = puVar4[param_3 + iVar3];
  }
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a13a44:
  *param_2 = cVar1;
  return 1;
}

