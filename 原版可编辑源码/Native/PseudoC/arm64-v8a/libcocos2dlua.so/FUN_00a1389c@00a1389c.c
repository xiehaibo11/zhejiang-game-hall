
undefined8 FUN_00a1389c(undefined8 param_1,char *param_2,uint param_3)

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
  if (uVar2 < 0x60) {
    puVar4 = &DAT_01300a28;
LAB_00a138dc:
    cVar1 = puVar4[uVar2];
  }
  else {
    uVar2 = param_3 - 0x130;
    if (uVar2 < 0x68) {
      puVar4 = &DAT_01300a88;
      goto LAB_00a138dc;
    }
    if ((param_3 & 0xffffffe0) != 0x2c0) {
      if (param_3 == 0x3c0) {
        cVar1 = -0x47;
        goto LAB_00a138e8;
      }
      uVar2 = param_3 - 0x2010;
      if (uVar2 < 0x38) {
        puVar4 = &DAT_01300af0;
      }
      else {
        if (param_3 >> 3 == 0x424) {
          iVar3 = -0x2120;
          puVar4 = &DAT_012fd15c;
          goto LAB_00a1390c;
        }
        uVar2 = param_3 - 0x2200;
        if (0x67 < uVar2) {
          if (param_3 != 0x25ca) {
            return 0xffffffff;
          }
          cVar1 = -0x29;
          goto LAB_00a138e8;
        }
        puVar4 = &DAT_013017c8;
      }
      goto LAB_00a138dc;
    }
    iVar3 = -0x2c0;
    puVar4 = &DAT_012fcab4;
LAB_00a1390c:
    cVar1 = puVar4[param_3 + iVar3];
  }
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a138e8:
  *param_2 = cVar1;
  return 1;
}

