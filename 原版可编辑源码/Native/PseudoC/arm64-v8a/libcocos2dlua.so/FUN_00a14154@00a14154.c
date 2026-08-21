
undefined8 FUN_00a14154(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
  uVar2 = param_3 - 0xa0;
  if (uVar2 < 0x60) {
    puVar3 = &DAT_01301b20;
  }
  else {
    uVar2 = param_3 - 0x608;
    if (0xcf < uVar2) {
                    /* catch() { ... } // from try @ 00a1411c with catch @ 00a141a4 */
      if (param_3 != 0x2026) {
        return 0xffffffff;
      }
      cVar1 = -0x6d;
      goto LAB_00a141b4;
    }
    puVar3 = &DAT_01301b80;
  }
  cVar1 = puVar3[uVar2];
                    /* try { // try from 00a1419c to 00b141bf has its CatchHandler @ 00a140e8 */
  if (cVar1 == '\0') {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a141f0 with catch @ 00a141c0
                        */
    return 0xffffffff;
  }
LAB_00a141b4:
  *param_2 = cVar1;
  return 1;
}

