
undefined8 FUN_00a2e6f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 00a2e548 with catch @ 00a2e728 */
                    /* catch() { ... } // from try @ 00a2e53c with catch @ 00a2e72c */
                    /* catch() { ... } // from try @ 00a2e51c with catch @ 00a2e730 */
                    /* catch() { ... } // from try @ 00a2e554 with catch @ 00a2e740 */
  if ((((*(long *)(param_1 + 0x968) < 0) || (*(long *)(param_1 + 0x398) == 0)) ||
      (lVar1 = FUN_00a18f10(*(undefined8 *)(param_1 + 0xae0),*(undefined8 *)(param_1 + 0xae8)),
      lVar1 == 0)) || (*(long *)(param_1 + 0x390) <= *(long *)(param_1 + 0x968))) {
    *(undefined8 *)(param_1 + 0xae0) = param_2;
    *(undefined8 *)(param_1 + 0xae8) = param_3;
                    /* try { // try from 00a2e798 to 00b2e7eb has its CatchHandler @ 00a2e798
                       catch() { ... } // from try @ 00a2e798 with catch @ 00a2e798
                       catch() { ... } // from try @ 00a2e960 with catch @ 00a2e798 */
    if (*(long *)(param_1 + 0x390) == 0) {
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x398) * 1000;
  }
  else {
    lVar1 = FUN_00a18ea0(param_2,param_3,*(undefined8 *)(param_1 + 0xae0),
                         *(undefined8 *)(param_1 + 0xae8));
    lVar1 = *(long *)(param_1 + 0x398) * 1000 - lVar1;
    if (lVar1 < 1) {
      FUN_00a23020(param_1,
                   "Operation too slow. Less than %ld bytes/sec transferred the last %ld seconds",
                   *(undefined8 *)(param_1 + 0x390));
      return 0x1c;
    }
  }
  FUN_00a153f8(param_1,lVar1);
  return 0;
}

