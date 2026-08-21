
undefined8 FUN_00a120c4(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
                    /* catch() { ... } // from try @ 00a12338 with catch @ 00a120d4 */
    return 1;
  }
  uVar2 = param_3 - 0xa0;
  if (uVar2 < 0x58) {
    puVar3 = &DAT_012fe48c;
  }
  else {
    uVar2 = param_3 - 0x400;
    if (uVar2 < 0x58) {
      puVar3 = &DAT_012fe04c;
    }
    else {
      uVar2 = param_3 - 0x2218;
      if (uVar2 < 0x50) {
        puVar3 = &DAT_012fe57c;
      }
      else {
        if (param_3 >> 3 == 0x464) {
          cVar1 = (&DAT_012fd134)[param_3 - 0x2320];
          goto joined_r0x00a12148;
        }
        uVar2 = param_3 - 0x2500;
        if (0xa7 < uVar2) {
          return 0xffffffff;
        }
        puVar3 = &DAT_012fe0a4;
      }
    }
  }
  cVar1 = puVar3[uVar2];
joined_r0x00a12148:
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
  *param_2 = cVar1;
  return 1;
}

