
undefined8 FUN_00a12594(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  undefined *puVar3;
  
  uVar1 = param_3;
                    /* catch() { ... } // from try @ 00a126c0 with catch @ 00a1259c */
  if ((param_3 < 0x80) || (param_3 - 0xa0 < 0x60)) goto LAB_00a12608;
  uVar1 = param_3 - 0x150;
  if (uVar1 < 0x48) {
    puVar3 = &DAT_012fea2c;
LAB_00a125f8:
    pbVar2 = puVar3 + uVar1;
  }
  else {
    if ((param_3 & 0xffffffe0) != 0x2c0) {
      uVar1 = param_3 - 0x2010;
                    /* try { // try from 00a125e8 to 00b125f3 has its CatchHandler @ 00a12774 */
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
        goto LAB_00a12608;
      }
      puVar3 = &DAT_013028a6;
      goto LAB_00a125f8;
    }
    pbVar2 = &DAT_012fcbb4 + (param_3 - 0x2c0);
  }
  uVar1 = (uint)*pbVar2;
  if (uVar1 == 0) {
    return 0xffffffff;
  }
LAB_00a12608:
  *param_2 = (char)uVar1;
                    /* try { // try from 00a12610 to 00b12617 has its CatchHandler @ 00a12784 */
  return 1;
}

