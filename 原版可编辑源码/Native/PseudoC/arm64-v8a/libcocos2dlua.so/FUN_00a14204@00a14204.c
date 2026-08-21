
undefined8 FUN_00a14204(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
  if ((param_3 & 0xffffffe0) == 0xa0) {
    iVar2 = -0xa0;
    puVar3 = &DAT_012fcad4;
LAB_00a14230:
    cVar1 = puVar3[param_3 + iVar2];
  }
  else {
    uVar4 = param_3 - 0xe00;
    if (uVar4 < 0x60) {
      puVar3 = &DAT_01301d50;
    }
    else {
      uVar4 = param_3 - 0x2008;
      if (0x1f < uVar4) {
        if (param_3 == 0x2122) {
          cVar1 = -0x12;
          goto LAB_00a142c8;
        }
        if ((param_3 & 0xffffffe0) != 0xf880) {
          if (param_3 != 0xfeff) {
            return 0xffffffff;
          }
          cVar1 = -0x25;
          goto LAB_00a142c8;
        }
        iVar2 = -0xf880;
        puVar3 = &DAT_012fcb14;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a141ec with catch @ 00a142b4
                        */
        goto LAB_00a14230;
      }
      puVar3 = &DAT_012fcaf4;
    }
    cVar1 = puVar3[uVar4];
  }
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a142c8:
  *param_2 = cVar1;
  return 1;
}

