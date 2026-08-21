
undefined8 unzSetOffset(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 00a0c6fc with catch @ 00a0c984 */
                    /* catch() { ... } // from try @ 00a0c730 with catch @ 00a0c988 */
                    /* catch() { ... } // from try @ 00a0c76c with catch @ 00a0c98c
                       catch() { ... } // from try @ 00a0c7f0 with catch @ 00a0c98c */
                    /* catch() { ... } // from try @ 00a0c6d0 with catch @ 00a0c9a4 */
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x68) = param_2;
    uVar1 = FUN_00a0aff0(param_1,param_1 + 0x90,param_1 + 0x118,0,0,0,0,0,0);
    *(ulong *)(param_1 + 0x70) = (ulong)((int)uVar1 == 0);
                    /* catch() { ... } // from try @ 00a0c640 with catch @ 00a0c9d8 */
    return uVar1;
  }
                    /* catch() { ... } // from try @ 00a0c414 with catch @ 00a0c9e8 */
  return 0xffffff9a;
}

