
undefined8 FUN_00a1406c(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_3 < 0x80) {
                    /* try { // try from 00a14078 to 00b1408b has its CatchHandler @ 00a140cc */
    *param_2 = (char)param_3;
    return 1;
  }
  uVar2 = param_3 - 0xa0;
  if (uVar2 < 0x60) {
                    /* try { // try from 00a1408c to 00b140e7 has its CatchHandler @ 00a13ff0 */
    puVar3 = &DAT_01301930;
  }
  else {
    uVar2 = param_3 - 0x5b0;
    if (uVar2 < 0x40) {
      puVar3 = &DAT_01301990;
    }
    else {
      uVar2 = param_3 - 0x2010;
      if (uVar2 < 0x18) {
        puVar3 = &DAT_013019d0;
                    /* catch() { ... } // from try @ 00a1404c with catch @ 00a140c8 */
      }
      else {
                    /* catch() { ... } // from try @ 00a14024 with catch @ 00a140cc
                       catch() { ... } // from try @ 00a14078 with catch @ 00a140cc */
        if (param_3 == 0x20aa) {
          cVar1 = -0x5a;
          goto LAB_00a14104;
        }
        uVar2 = param_3 - 0xfb18;
                    /* try { // try from 00a140e8 to 00b1411b has its CatchHandler @ 00a140e8
                       catch() { ... } // from try @ 00a140e8 with catch @ 00a140e8
                       catch() { ... } // from try @ 00a1419c with catch @ 00a140e8 */
        if (0x37 < uVar2) {
          return 0xffffffff;
        }
        puVar3 = &DAT_013019e8;
      }
    }
  }
  cVar1 = puVar3[uVar2];
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a14104:
  *param_2 = cVar1;
  return 1;
}

