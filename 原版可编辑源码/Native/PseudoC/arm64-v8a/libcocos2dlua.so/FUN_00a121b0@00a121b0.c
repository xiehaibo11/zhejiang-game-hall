
undefined8 FUN_00a121b0(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
  uVar2 = param_3 - 0xa0;
  if (uVar2 < 0x58) {
    puVar3 = &DAT_012fe48c;
  }
  else {
    uVar2 = param_3 - 0x400;
                    /* try { // try from 00a121e0 to 00b121eb has its CatchHandler @ 00a124b8 */
    if (uVar2 < 0x98) {
      puVar3 = &DAT_012fe24c;
    }
    else {
      uVar2 = param_3 - 0x2218;
      if (uVar2 < 0x50) {
        puVar3 = &DAT_012fe57c;
      }
      else {
        if (param_3 >> 3 == 0x464) {
          cVar1 = (&DAT_012fd134)[param_3 - 0x2320];
          goto joined_r0x00a12234;
        }
                    /* try { // try from 00a1223c to 00b1224b has its CatchHandler @ 00a124b4 */
        uVar2 = param_3 - 0x2500;
        if (0xa7 < uVar2) {
          return 0xffffffff;
        }
        puVar3 = &DAT_012fe2e4;
      }
    }
  }
                    /* try { // try from 00a12254 to 00b1225f has its CatchHandler @ 00a1249c */
  cVar1 = puVar3[uVar2];
joined_r0x00a12234:
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
  *param_2 = cVar1;
  return 1;
}

