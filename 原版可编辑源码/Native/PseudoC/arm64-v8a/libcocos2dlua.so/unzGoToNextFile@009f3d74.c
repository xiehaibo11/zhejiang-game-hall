
undefined8 unzGoToNextFile(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0xffffff9a;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
                    /* try { // try from 009f3da0 to 00af3def has its CatchHandler @ 009f3da0
                       catch() { ... } // from try @ 009f3da0 with catch @ 009f3da0
                       catch() { ... } // from try @ 009f3e18 with catch @ 009f3da0
                       catch() { ... } // from try @ 009f3e84 with catch @ 009f3da0 */
      lVar1 = *(long *)(param_1 + 0x60) + 1;
      if ((*(long *)(param_1 + 0x48) == 0xffff) || (lVar1 != *(long *)(param_1 + 0x48))) {
        *(long *)(param_1 + 0x60) = lVar1;
                    /* try { // try from 009f3df0 to 00af3e17 has its CatchHandler @ 009f3e8c */
        *(long *)(param_1 + 0x68) =
             *(long *)(param_1 + 0xd0) + *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0) +
             *(long *)(param_1 + 0x68) + 0x2e;
        uVar2 = FUN_009f34c0(param_1,param_1 + 0x90,param_1 + 0x118,0,0,0,0,0,0);
                    /* try { // try from 009f3e18 to 00af3e6f has its CatchHandler @ 009f3da0 */
        *(ulong *)(param_1 + 0x70) = (ulong)((int)uVar2 == 0);
        return uVar2;
      }
    }
    uVar2 = 0xffffff9c;
  }
  return uVar2;
}

