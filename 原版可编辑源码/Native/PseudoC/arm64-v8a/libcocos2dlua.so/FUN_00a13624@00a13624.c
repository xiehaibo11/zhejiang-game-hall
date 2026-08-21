
undefined8 FUN_00a13624(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
  uVar2 = param_3 - 0xa0;
  if (uVar2 < 0x60) {
    puVar4 = &DAT_013006b8;
LAB_00a13664:
    cVar1 = puVar4[uVar2];
  }
  else {
    uVar2 = param_3 - 0x130;
    if (uVar2 < 0x68) {
      puVar4 = &DAT_01300a88;
      goto LAB_00a13664;
    }
    if ((param_3 & 0xffffffe0) == 0x2c0) {
      uVar3 = (ulong)(param_3 - 0x2c0);
      puVar4 = &DAT_012fcab4;
      goto LAB_00a13694;
    }
    if (param_3 == 0x3c0) {
      cVar1 = -0x47;
      goto LAB_00a13670;
    }
    uVar2 = param_3 - 0x2010;
    if (uVar2 < 0x38) {
      puVar4 = &DAT_01300fb8;
      goto LAB_00a13664;
    }
    if ((param_3 & 0xfffffff8) == 0x2120) {
      uVar3 = (ulong)(param_3 - 0x2120);
      puVar4 = &DAT_012fd15c;
LAB_00a13694:
      cVar1 = puVar4[uVar3];
    }
    else {
      if (0x67 < param_3 - 0x2200) {
        if (param_3 == 0x25ca) {
          cVar1 = -0x29;
          goto LAB_00a13670;
        }
        if ((param_3 & 0xfffffff8) != 0xfb00) {
          return 0xffffffff;
        }
        uVar3 = (ulong)(param_3 - 0xfb00);
        puVar4 = &DAT_012fd14c;
        goto LAB_00a13694;
      }
                    /* try { // try from 00a13714 to 00b13783 has its CatchHandler @ 00a1329c */
      cVar1 = (&DAT_013017c8)[param_3 - 0x2200];
    }
  }
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a13670:
  *param_2 = cVar1;
  return 1;
}

