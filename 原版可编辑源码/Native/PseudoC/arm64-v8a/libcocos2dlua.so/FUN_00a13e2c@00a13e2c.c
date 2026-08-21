
undefined8 FUN_00a13e2c(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
                    /* catch() { ... } // from try @ 00a13c30 with catch @ 00a13e30 */
  if (param_3 < 0x80) {
                    /* catch() { ... } // from try @ 00a13d34 with catch @ 00a13e34 */
    *param_2 = (char)param_3;
    return 1;
  }
  uVar2 = param_3 - 0xa0;
  if (uVar2 < 0x60) {
    puVar3 = &DAT_013014e8;
  }
  else {
    if (param_3 == 0x153) {
      cVar1 = -0x31;
      goto LAB_00a13ed4;
    }
    uVar2 = param_3 - 0x380;
    if (uVar2 < 0x50) {
      puVar3 = &LAB_01301548;
    }
    else {
      uVar2 = param_3 - 0x2010;
      if (uVar2 < 0x28) {
        puVar3 = &DAT_01301598;
      }
      else {
        if (param_3 == 0x2122) {
                    /* try { // try from 00a13ea8 to 00b13edb has its CatchHandler @ 00a13ea8
                       catch() { ... } // from try @ 00a13ea8 with catch @ 00a13ea8
                       catch() { ... } // from try @ 00a13fbc with catch @ 00a13ea8 */
          cVar1 = -0x6d;
          goto LAB_00a13ed4;
        }
        uVar2 = param_3 - 0x2248;
        if (0x1f < uVar2) {
          return 0xffffffff;
        }
        puVar3 = &DAT_012fca94;
      }
    }
  }
  cVar1 = puVar3[uVar2];
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a13ed4:
  *param_2 = cVar1;
                    /* try { // try from 00a13edc to 00b13f2f has its CatchHandler @ 00a13fd4 */
  return 1;
}

