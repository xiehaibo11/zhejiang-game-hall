
undefined8 FUN_00a1430c(undefined8 param_1,char *param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  undefined *puVar3;
  
  if (param_3 < 0xa0) {
    *param_2 = (char)param_3;
    return 1;
  }
  if (param_3 < 0x100) {
    iVar1 = -0xa0;
    puVar3 = &DAT_01301e70;
LAB_00a14374:
                    /* catch() { ... } // from try @ 00a14400 with catch @ 00a1432c
                       catch() { ... } // from try @ 00a14520 with catch @ 00a1432c */
    cVar2 = puVar3[param_3 + iVar1];
  }
  else {
    if (0x37 < param_3 - 0x160) {
      if ((param_3 & 0xffffffe0) != 0x2c0) {
        if (param_3 == 0x2014) {
          cVar2 = -10;
        }
        else if (param_3 == 0x25a0) {
          cVar2 = -4;
        }
        else {
          if (param_3 != 0x20a4) {
            return 0xffffffff;
          }
          cVar2 = -0x51;
        }
        goto LAB_00a14380;
      }
      iVar1 = -0x2c0;
      puVar3 = &DAT_012fcb34;
      goto LAB_00a14374;
    }
    cVar2 = (&DAT_01301ed0)[param_3 - 0x160];
  }
  if (cVar2 == '\0') {
    return 0xffffffff;
  }
LAB_00a14380:
  *param_2 = cVar2;
  return 1;
}

