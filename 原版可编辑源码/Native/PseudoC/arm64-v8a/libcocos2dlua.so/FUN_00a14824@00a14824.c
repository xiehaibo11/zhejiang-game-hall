
undefined8 FUN_00a14824(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_3 < 0x80) {
    *param_2 = (char)param_3;
    return 1;
  }
  if ((param_3 & 0xffffffe0) == 0xa0) {
                    /* try { // try from 00a14848 to 00b1484f has its CatchHandler @ 00a149c4 */
                    /* try { // try from 00a14850 to 00b149c7 has its CatchHandler @ 00a147fc */
    cVar1 = (&DAT_012fcbd4)[param_3 - 0xa0];
  }
  else {
    uVar2 = param_3 - 0x400;
    if (uVar2 < 0xf0) {
      puVar3 = &DAT_0130243e;
    }
    else {
      uVar2 = param_3 - 0x2010;
      if (uVar2 < 0x30) {
        puVar3 = &DAT_013028a6;
      }
      else {
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
  *param_2 = cVar1;
  return 1;
}

