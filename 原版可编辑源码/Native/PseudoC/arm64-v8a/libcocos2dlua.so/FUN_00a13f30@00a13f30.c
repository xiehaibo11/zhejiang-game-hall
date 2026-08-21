
undefined8 FUN_00a13f30(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
                    /* try { // try from 00a13f34 to 00b13f3b has its CatchHandler @ 00a13fd0 */
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
  uVar2 = param_3 - 0xa0;
  if (uVar2 < 0x60) {
                    /* try { // try from 00a13f54 to 00b13f67 has its CatchHandler @ 00a13fd4 */
    puVar4 = &DAT_013016c0;
LAB_00a13f70:
    cVar1 = puVar4[uVar2];
  }
  else {
    uVar2 = param_3 - 0x118;
    if (uVar2 < 0x80) {
      puVar4 = &DAT_01301720;
      goto LAB_00a13f70;
    }
    if ((param_3 & 0xffffffe0) != 0x2c0) {
      if (param_3 == 0x3c0) {
                    /* try { // try from 00a13fbc to 00b13fef has its CatchHandler @ 00a13ea8 */
        cVar1 = -0x47;
        goto LAB_00a13f7c;
      }
      uVar2 = param_3 - 0x2010;
                    /* catch() { ... } // from try @ 00a13f34 with catch @ 00a13fd0
                       catch() { ... } // from try @ 00a13fa4 with catch @ 00a13fd0 */
      if (uVar2 < 0x28) {
                    /* catch() { ... } // from try @ 00a13edc with catch @ 00a13fd4
                       catch() { ... } // from try @ 00a13f54 with catch @ 00a13fd4 */
        puVar4 = &DAT_013017a0;
      }
      else {
        if (param_3 >> 3 == 0x424) {
                    /* try { // try from 00a13ff0 to 00b14023 has its CatchHandler @ 00a13ff0
                       catch() { ... } // from try @ 00a13ff0 with catch @ 00a13ff0
                       catch() { ... } // from try @ 00a1408c with catch @ 00a13ff0 */
          iVar3 = -0x2120;
          puVar4 = &DAT_012fd15c;
          goto LAB_00a13fa0;
        }
        uVar2 = param_3 - 0x2200;
        if (0x67 < uVar2) {
                    /* try { // try from 00a14024 to 00b1403f has its CatchHandler @ 00a140cc */
          if (param_3 != 0x25ca) {
            return 0xffffffff;
          }
          cVar1 = -0x29;
          goto LAB_00a13f7c;
        }
        puVar4 = &DAT_013017c8;
      }
      goto LAB_00a13f70;
    }
    iVar3 = -0x2c0;
    puVar4 = &DAT_012fcab4;
LAB_00a13fa0:
                    /* try { // try from 00a13fa4 to 00b13fbb has its CatchHandler @ 00a13fd0 */
    cVar1 = puVar4[param_3 + iVar3];
  }
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a13f7c:
  *param_2 = cVar1;
  return 1;
}

