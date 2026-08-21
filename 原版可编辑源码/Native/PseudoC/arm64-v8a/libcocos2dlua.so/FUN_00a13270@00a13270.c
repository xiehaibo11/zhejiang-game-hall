
undefined8 FUN_00a13270(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
                    /* catch() { ... } // from try @ 00a13240 with catch @ 00a13280 */
    return 1;
  }
  uVar2 = param_3 - 0xa0;
  if (uVar2 < 0x60) {
    puVar3 = &DAT_012ffec0;
  }
  else {
    if (param_3 == 0x131) {
      cVar1 = -0x2b;
      goto LAB_00a132d8;
    }
    if (param_3 == 0x2017) {
      cVar1 = -0xe;
      goto LAB_00a132d8;
    }
    if (param_3 == 0x192) {
      cVar1 = -0x61;
      goto LAB_00a132d8;
    }
    uVar2 = param_3 - 0x2500;
    if (0xa7 < uVar2) {
      return 0xffffffff;
    }
    puVar3 = &DAT_012fff20;
  }
                    /* try { // try from 00a1329c to 00b1330f has its CatchHandler @ 00a1329c
                       catch() { ... } // from try @ 00a1329c with catch @ 00a1329c
                       catch() { ... } // from try @ 00a13344 with catch @ 00a1329c
                       catch() { ... } // from try @ 00a13714 with catch @ 00a1329c
                       catch() { ... } // from try @ 00a1378c with catch @ 00a1329c */
  cVar1 = puVar3[uVar2];
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a132d8:
  *param_2 = cVar1;
  return 1;
}

