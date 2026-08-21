
undefined8 FUN_00a13330(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
                    /* try { // try from 00a13334 to 00b13343 has its CatchHandler @ 00a137a8 */
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
                    /* try { // try from 00a13344 to 00b1339b has its CatchHandler @ 00a1329c */
  uVar2 = param_3 - 0xa0;
  if (uVar2 < 0x60) {
    puVar3 = &DAT_013000c8;
  }
  else {
    if (param_3 == 0x192) {
      cVar1 = -0x61;
      goto LAB_00a1338c;
    }
    uVar2 = param_3 - 0x390;
    if (uVar2 < 0x38) {
      puVar3 = &DAT_01300128;
    }
    else {
                    /* try { // try from 00a1339c to 00b13713 has its CatchHandler @ 00a137a8 */
      if (param_3 - 0x5d0 < 0x1b) {
        cVar1 = (char)param_3 + -0x50;
        goto LAB_00a1338c;
      }
      if (param_3 == 0x207f) {
        cVar1 = -4;
        goto LAB_00a1338c;
      }
      if (param_3 == 0x20a7) {
        cVar1 = -0x62;
        goto LAB_00a1338c;
      }
      uVar2 = param_3 - 0x2218;
      if (uVar2 < 0x50) {
        puVar3 = &DAT_01300160;
      }
      else {
        if (param_3 == 0x2310) {
          cVar1 = -0x57;
          goto LAB_00a1338c;
        }
        if (param_3 >> 1 == 0x1190) {
          cVar1 = (char)(param_3 - 0x2c);
          if ((param_3 - 0x2c & 0xff) == 0) {
            return 0xffffffff;
          }
          goto LAB_00a1338c;
        }
        uVar2 = param_3 - 0x2500;
        if (0xa7 < uVar2) {
          return 0xffffffff;
        }
        puVar3 = &DAT_013002c8;
      }
    }
  }
  cVar1 = puVar3[uVar2];
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a1338c:
  *param_2 = cVar1;
  return 1;
}

