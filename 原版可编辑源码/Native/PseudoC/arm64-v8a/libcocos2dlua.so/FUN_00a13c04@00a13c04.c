
undefined8 FUN_00a13c04(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
                    /* try { // try from 00a13c20 to 00b13c2f has its CatchHandler @ 00a13e20 */
  if ((param_3 & 0xffffffe0) == 0xa0) {
                    /* try { // try from 00a13c30 to 00b13c67 has its CatchHandler @ 00a13e30 */
    cVar1 = (&DAT_012fca54)[param_3 - 0xa0];
  }
  else {
    if (param_3 == 0xf7) {
      cVar1 = -0x2a;
      goto LAB_00a13cd4;
    }
    if (param_3 == 0x192) {
      cVar1 = -0x3c;
      goto LAB_00a13cd4;
    }
    uVar2 = param_3 - 0x400;
    if (uVar2 < 0x60) {
      puVar3 = &DAT_013010f0;
    }
    else {
      uVar2 = param_3 - 0x2010;
      if (uVar2 < 0x18) {
        puVar3 = &DAT_01301350;
      }
      else {
        uVar2 = param_3 - 0x2110;
        if (uVar2 < 0x18) {
          puVar3 = &DAT_01301368;
        }
        else {
          uVar2 = param_3 - 0x2200;
          if (0x67 < uVar2) {
            return 0xffffffff;
          }
          puVar3 = &DAT_01301150;
        }
      }
    }
    cVar1 = puVar3[uVar2];
  }
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a13cd4:
  *param_2 = cVar1;
  return 1;
}

