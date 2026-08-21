
undefined8 FUN_00a14414(undefined8 param_1,char *param_2,uint param_3)

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
    puVar4 = &DAT_01302008;
  }
  else {
    uVar2 = param_3 - 0x130;
    if (0x67 < uVar2) {
      if ((param_3 & 0xffffffe0) == 0x2c0) {
        iVar3 = -0x2c0;
        puVar4 = &DAT_012fcb54;
      }
      else {
        uVar2 = param_3 - 0x2010;
        if (uVar2 < 0x38) {
          puVar4 = &DAT_013020d0;
          goto LAB_00a1448c;
        }
        if (param_3 >> 3 != 0x1f60) {
          return 0xffffffff;
        }
        iVar3 = -0xfb00;
        puVar4 = &DAT_012fd164;
      }
      cVar1 = puVar4[param_3 + iVar3];
      goto joined_r0x00a144c8;
    }
    puVar4 = &DAT_01302068;
  }
LAB_00a1448c:
  cVar1 = puVar4[uVar2];
joined_r0x00a144c8:
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
  *param_2 = cVar1;
  return 1;
}

