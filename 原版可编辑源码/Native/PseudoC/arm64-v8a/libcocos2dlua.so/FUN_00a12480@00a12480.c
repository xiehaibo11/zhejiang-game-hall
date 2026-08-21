
undefined8 FUN_00a12480(undefined8 param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_3 < 0x80) {
                    /* catch() { ... } // from try @ 00a12308 with catch @ 00a12488 */
    *param_2 = (char)param_3;
    return 1;
  }
                    /* catch() { ... } // from try @ 00a122fc with catch @ 00a12498 */
                    /* catch() { ... } // from try @ 00a12254 with catch @ 00a1249c */
  if ((param_3 & 0xffffffe0) == 0xa0) {
    cVar1 = (&DAT_012fcc14)[param_3 - 0xa0];
                    /* catch() { ... } // from try @ 00a1223c with catch @ 00a124b4 */
  }
  else {
    uVar2 = param_3 - 0x400;
                    /* catch() { ... } // from try @ 00a1214c with catch @ 00a124c0 */
    if (uVar2 < 0x98) {
                    /* catch() { ... } // from try @ 00a122a4 with catch @ 00a124c8 */
      puVar3 = &DAT_012fe954;
    }
    else {
      uVar2 = param_3 - 0x2010;
      if (0x2f < uVar2) {
        if (param_3 == 0x20ac) {
          cVar1 = -0x78;
        }
        else if (param_3 == 0x2122) {
          cVar1 = -0x67;
        }
        else {
          if (param_3 != 0x2116) {
            return 0xffffffff;
          }
          cVar1 = -0x47;
        }
        goto LAB_00a124f8;
      }
      puVar3 = &DAT_013028a6;
    }
    cVar1 = puVar3[uVar2];
  }
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
LAB_00a124f8:
  *param_2 = cVar1;
  return 1;
}

