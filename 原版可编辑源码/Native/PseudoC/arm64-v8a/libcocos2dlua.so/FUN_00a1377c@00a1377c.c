
undefined8 FUN_00a1377c(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_3 < 0x80) {
                    /* try { // try from 00a13784 to 00b1378b has its CatchHandler @ 00a137a8 */
    *param_2 = (char)param_3;
                    /* catch() { ... } // from try @ 00a13310 with catch @ 00a1378c
                       try { // try from 00a1378c to 00b137d7 has its CatchHandler @ 00a1329c */
    return 1;
  }
  uVar2 = param_3 - 0xa0;
  if (uVar2 < 0xe0) {
    puVar4 = &DAT_01300818;
  }
  else {
                    /* catch() { ... } // from try @ 00a13334 with catch @ 00a137a8
                       catch() { ... } // from try @ 00a1339c with catch @ 00a137a8
                       catch() { ... } // from try @ 00a13784 with catch @ 00a137a8 */
    if (param_3 == 0x2c7) {
      cVar1 = -1;
      goto LAB_00a137dc;
    }
    uVar2 = param_3 - 0x2010;
    if (0x2f < uVar2) {
      if (param_3 == 0x2122) {
        cVar1 = -0x56;
      }
      else {
        if (param_3 >> 5 == 0x110) {
          iVar3 = -0x2200;
          puVar4 = &DAT_012fca14;
        }
        else {
          if (param_3 >> 3 != 0x44c) {
            if (param_3 != 0x25ca) {
              return 0xffffffff;
            }
            cVar1 = -0x29;
            goto LAB_00a137dc;
          }
          iVar3 = -0x2260;
          puVar4 = &DAT_012fd154;
        }
        cVar1 = puVar4[param_3 + iVar3];
        if (cVar1 == '\0') {
          return 0xffffffff;
        }
      }
      goto LAB_00a137dc;
    }
    puVar4 = &DAT_013008f8;
  }
  cVar1 = puVar4[uVar2];
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a137dc:
  *param_2 = cVar1;
  return 1;
}

