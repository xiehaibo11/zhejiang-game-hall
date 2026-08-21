
undefined8 FUN_00a12688(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined *puVar3;
  
  uVar1 = param_3;
  if (0x7f < param_3) {
    if ((param_3 & 0xffffffe0) == 0xa0) {
      pbVar2 = &DAT_012fc994 + (param_3 - 0xa0);
    }
    else {
      if (param_3 == 0x192) {
                    /* try { // try from 00a126b8 to 00b126bf has its CatchHandler @ 00a1273c */
        uVar1 = 0x83;
        goto LAB_00a12700;
      }
                    /* try { // try from 00a126c0 to 00b127f3 has its CatchHandler @ 00a1259c */
      uVar1 = param_3 - 0x380;
      if (uVar1 < 0x50) {
        puVar3 = &DAT_012feb74;
      }
      else {
        uVar1 = param_3 - 0x2010;
        if (0x2f < uVar1) {
          uVar1 = 0xffffff99;
          if (param_3 != 0x2122) {
            uVar1 = 0;
          }
          if (param_3 == 0x20ac) {
            uVar1 = 0x80;
          }
          else if ((uVar1 & 0xff) == 0) {
            return 0xffffffff;
          }
          goto LAB_00a12700;
        }
        puVar3 = &DAT_012febc4;
      }
      pbVar2 = puVar3 + uVar1;
    }
    uVar1 = (uint)*pbVar2;
    if (uVar1 == 0) {
                    /* catch() { ... } // from try @ 00a126b8 with catch @ 00a1273c */
                    /* catch() { ... } // from try @ 00a12668 with catch @ 00a12740 */
      return 0xffffffff;
    }
  }
LAB_00a12700:
  *param_2 = (char)uVar1;
  return 1;
}

