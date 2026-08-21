
undefined8 unzGoToNextFile(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
                    /* catch() { ... } // from try @ 00a0b804 with catch @ 00a0b8f0 */
    uVar2 = 0xffffff9a;
                    /* catch() { ... } // from try @ 00a0b7e4 with catch @ 00a0b8f4 */
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar1 = *(long *)(param_1 + 0x60) + 1;
      if ((*(long *)(param_1 + 0x48) == 0xffff) || (lVar1 != *(long *)(param_1 + 0x48))) {
                    /* catch() { ... } // from try @ 00a0b81c with catch @ 00a0b904 */
        *(long *)(param_1 + 0x60) = lVar1;
        *(long *)(param_1 + 0x68) =
             *(long *)(param_1 + 0xd0) + *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0) +
             *(long *)(param_1 + 0x68) + 0x2e;
        uVar2 = FUN_00a0aff0(param_1,param_1 + 0x90,param_1 + 0x118,0,0,0,0,0,0);
        *(ulong *)(param_1 + 0x70) = (ulong)((int)uVar2 == 0);
        return uVar2;
      }
    }
    uVar2 = 0xffffff9c;
                    /* catch() { ... } // from try @ 00a0b810 with catch @ 00a0b8ec */
  }
                    /* try { // try from 00a0b95c to 00b0b9af has its CatchHandler @ 00a0b95c
                       catch() { ... } // from try @ 00a0b95c with catch @ 00a0b95c
                       catch() { ... } // from try @ 00a0ba44 with catch @ 00a0b95c */
  return uVar2;
}

