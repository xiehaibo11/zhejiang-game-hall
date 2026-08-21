
undefined8 FUN_00a145f8(undefined8 param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  
                    /* try { // try from 00a145f8 to 00b14603 has its CatchHandler @ 00a146c8 */
  if (param_3 < 0x80) goto LAB_00a1469c;
                    /* try { // try from 00a14604 to 00b1462b has its CatchHandler @ 00a14564 */
  if (param_3 < 0xa0) {
    uVar1 = param_3 - 0x80;
    puVar2 = &DAT_012fcb94;
LAB_00a14690:
    param_3 = (uint)(byte)puVar2[uVar1];
  }
  else if ((0xbf < param_3) && (0x18 < param_3 - 0xe7)) {
                    /* try { // try from 00a1462c to 00b14633 has its CatchHandler @ 00a146c4 */
    uVar1 = param_3 - 0x150;
                    /* try { // try from 00a14634 to 00b14653 has its CatchHandler @ 00a14564 */
    if (uVar1 < 0x48) {
      puVar2 = &DAT_013022ce;
    }
    else if ((param_3 & 0xffffffe0) == 0x2c0) {
                    /* try { // try from 00a14654 to 00b1465b has its CatchHandler @ 00a146c4 */
      uVar1 = param_3 - 0x2c0;
      puVar2 = &DAT_012fcbb4;
                    /* try { // try from 00a1465c to 00b1467b has its CatchHandler @ 00a14564 */
    }
    else {
      if (param_3 - 0x10d0 < 0x27) {
        param_3 = param_3 - 0x10;
        goto LAB_00a1469c;
      }
                    /* try { // try from 00a1467c to 00b14687 has its CatchHandler @ 00a146c4 */
      uVar1 = param_3 - 0x2010;
      if (0x2f < uVar1) {
        if (param_3 != 0x2122) {
          return 0xffffffff;
        }
        param_3 = 0x99;
        goto LAB_00a1469c;
      }
                    /* try { // try from 00a14688 to 00b146cb has its CatchHandler @ 00a14564 */
      puVar2 = &DAT_013028a6;
    }
    goto LAB_00a14690;
  }
  if ((param_3 & 0xff) == 0) {
    return 0xffffffff;
  }
LAB_00a1469c:
  *param_2 = (char)param_3;
  return 1;
}

