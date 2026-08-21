
undefined8 FUN_00a14ce4(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
                    /* catch() { ... } // from try @ 00a14c64 with catch @ 00a14cfc */
  if (param_3 == 0xa0) {
    cVar1 = -0x60;
  }
  else {
    uVar2 = param_3 - 0xe00;
    if (uVar2 < 0x60) {
      puVar3 = &DAT_01302bee;
    }
    else {
      uVar2 = param_3 - 0x2010;
      if (0x17 < uVar2) {
        if (param_3 != 0x20ac) {
          return 0xffffffff;
        }
        cVar1 = -0x80;
        goto LAB_00a14d58;
      }
      puVar3 = &DAT_01302c4e;
    }
    cVar1 = puVar3[uVar2];
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
  }
LAB_00a14d58:
  *param_2 = cVar1;
  return 1;
}

