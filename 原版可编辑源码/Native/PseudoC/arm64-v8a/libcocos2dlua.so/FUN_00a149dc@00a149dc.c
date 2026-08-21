
undefined8 FUN_00a149dc(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
  if ((param_3 & 0xffffffe0) == 0xa0) {
    cVar1 = (&DAT_012fcc14)[param_3 - 0xa0];
  }
  else {
    uVar2 = param_3 - 0x400;
                    /* try { // try from 00a14a20 to 00b14a23 has its CatchHandler @ 00a14b10 */
    if (uVar2 < 0xf0) {
      puVar3 = &DAT_013027b6;
    }
    else {
      uVar2 = param_3 - 0x2010;
      if (uVar2 < 0x30) {
        puVar3 = &DAT_013028a6;
      }
      else {
                    /* try { // try from 00a14a4c to 00b14a57 has its CatchHandler @ 00a14b28 */
        if (param_3 == 0x20ac) {
                    /* try { // try from 00a14a58 to 00b14a77 has its CatchHandler @ 00a14b18 */
          cVar1 = -0x78;
          goto LAB_00a14a84;
        }
        uVar2 = param_3 - 0x2110;
        if (0x17 < uVar2) {
          return 0xffffffff;
        }
        puVar3 = &DAT_013028d6;
      }
    }
    cVar1 = puVar3[uVar2];
  }
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a14a84:
  *param_2 = cVar1;
  return 1;
}

