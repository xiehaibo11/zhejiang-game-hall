
undefined8 FUN_00a448ac(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1[0x8f] + 0x18) + *(long *)(param_1[0x90] + 0x18) == 0) &&
     (*(char *)(param_1 + 9) == '\0')) {
    if ((*(byte *)(param_1[0x80] + 0x7a) >> 2 & 1) == 0) {
                    /* try { // try from 00a448f0 to 00b448f3 has its CatchHandler @ 00a44928 */
                    /* try { // try from 00a448f4 to 00b4493b has its CatchHandler @ 00a448a4 */
      iVar1 = FUN_00a2b3d0(*(undefined4 *)(param_1 + 0x4c),0xffffffff,0xffffffff,0);
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
                    /* try { // try from 00a4493c to 00b44a3b has its CatchHandler @ 00a4493c
                       catch() { ... } // from try @ 00a4493c with catch @ 00a4493c
                       catch() { ... } // from try @ 00a44abc with catch @ 00a4493c */
      uVar2 = FUN_00a55d88(param_1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    *param_1 = param_2;
    FUN_00a38740(param_2,"Connection %ld seems to be dead!\n",param_1[10]);
    FUN_00a3fd90(param_1,1);
  }
                    /* catch() { ... } // from try @ 00a448f0 with catch @ 00a44928 */
  return 0;
}

