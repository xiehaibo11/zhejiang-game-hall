
undefined8 FUN_00adb414(long param_1,int param_2,long *param_3,ulong *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  
                    /* catch() { ... } // from try @ 00adb3d8 with catch @ 00adb41c */
  if (param_2 == 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x148) + 0x1c) & 0x30000;
                    /* try { // try from 00adb47c to 00bdb48b has its CatchHandler @ 00adb4c0 */
    puVar3 = &DAT_018a53cc;
    if (uVar1 == 0x10000) {
LAB_00adb4ac:
      uVar5 = 2;
    }
    else {
                    /* try { // try from 00adb48c to 00bdb4db has its CatchHandler @ 00adb438 */
      if (uVar1 == 0x20000) {
        puVar3 = &DAT_018a53ce;
        goto LAB_00adb4ac;
      }
      if (uVar1 == 0x30000) {
        puVar3 = &DAT_018a53cc;
        uVar5 = 4;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x2a0);
        *param_3 = lVar4;
        if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 00adb538 with catch @ 00adb4dc */
          uVar5 = *(ulong *)(param_1 + 0x298);
          goto joined_r0x00adb4e0;
        }
        puVar3 = &DAT_018a53d0;
        uVar5 = 8;
      }
    }
    *param_3 = (long)puVar3;
  }
  else {
    *param_3 = *(long *)(*(long *)(param_1 + 0x178) + 0x128);
                    /* catch() { ... } // from try @ 00adb48c with catch @ 00adb438 */
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x178) + 0x120);
joined_r0x00adb4e0:
    if ((uVar5 & 1) != 0) {
      ERR_put_error(0x14,0x152,0x44,"ssl/t1_lib.c",0x123);
      uVar5 = 0;
      uVar2 = 0;
      goto LAB_00adb4bc;
    }
  }
  uVar5 = uVar5 >> 1;
  uVar2 = 1;
LAB_00adb4bc:
  *param_4 = uVar5;
                    /* catch() { ... } // from try @ 00adb47c with catch @ 00adb4c0 */
  return uVar2;
}

