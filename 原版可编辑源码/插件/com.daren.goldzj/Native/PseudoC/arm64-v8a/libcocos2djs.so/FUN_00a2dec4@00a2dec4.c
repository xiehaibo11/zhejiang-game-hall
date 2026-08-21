
undefined8 FUN_00a2dec4(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
                    /* try { // try from 00a2dec8 to 00b2dedf has its CatchHandler @ 00a2e12c */
                    /* try { // try from 00a2dee8 to 00b2def3 has its CatchHandler @ 00a2e128 */
                    /* try { // try from 00a2def4 to 00b2deff has its CatchHandler @ 00a2e124 */
  if ((*(long *)(param_1[0x8f] + 0x18) + *(long *)(param_1[0x90] + 0x18) == 0) &&
     (*(char *)(param_1 + 9) == '\0')) {
                    /* try { // try from 00a2df00 to 00b2e0a3 has its CatchHandler @ 00a2e13c */
    if ((*(byte *)(param_1[0x80] + 0x7a) >> 2 & 1) == 0) {
      iVar1 = FUN_00a159e8(*(undefined4 *)(param_1 + 0x4c),0xffffffff,0xffffffff,0);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      uVar2 = FUN_00a3f3a0(param_1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    *param_1 = param_2;
    FUN_00a22d58(param_2,"Connection %ld seems to be dead!\n",param_1[10]);
    FUN_00a293a8(param_1,1);
  }
  return 0;
}

