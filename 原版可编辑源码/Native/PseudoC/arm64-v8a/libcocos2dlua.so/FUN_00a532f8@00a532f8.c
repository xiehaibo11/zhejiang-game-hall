
undefined8 FUN_00a532f8(long *param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  
                    /* catch() { ... } // from try @ 00a53188 with catch @ 00a53308
                       catch() { ... } // from try @ 00a532ec with catch @ 00a53308 */
  lVar4 = *param_1;
                    /* catch() { ... } // from try @ 00a53164 with catch @ 00a5330c */
  *(undefined1 *)(param_1 + 0x77) = 0;
                    /* catch() { ... } // from try @ 00a530e8 with catch @ 00a53310
                       catch() { ... } // from try @ 00a532d4 with catch @ 00a53310 */
                    /* catch() { ... } // from try @ 00a5325c with catch @ 00a53314 */
                    /* catch() { ... } // from try @ 00a5320c with catch @ 00a53318 */
  if ((*(char *)((long)param_1 + 0x3be) != '\0') && (*(char *)(lVar4 + 0x612) == '\0')) {
                    /* try { // try from 00a5336c to 00b53603 has its CatchHandler @ 00a5336c
                       catch() { ... } // from try @ 00a5336c with catch @ 00a5336c
                       catch() { ... } // from try @ 00a53684 with catch @ 00a5336c */
    ppuVar1 = &PTR_DAT_016a4620;
    if ((undefined **)param_1[0x80] != &PTR_DAT_016a44f0) {
      ppuVar1 = &PTR_s_SMTPS_016a46a0;
    }
    UNRECOVERED_JUMPTABLE = (code *)ppuVar1[1];
    param_1[0x80] = (long)ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x00a53398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)();
    return uVar3;
  }
                    /* catch() { ... } // from try @ 00a53148 with catch @ 00a53328 */
                    /* catch() { ... } // from try @ 00a530cc with catch @ 00a5332c */
  lVar2 = (*(code *)PTR_calloc_01769a18)(0x28,1);
  *(long *)(lVar4 + 0x218) = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x1b;
  }
  else {
    uVar3 = 0;
                    /* catch() { ... } // from try @ 00a53124 with catch @ 00a5334c */
    *(long *)(lVar4 + 0x8cc0) = *(long *)(lVar4 + 0x8cc0) + 1;
                    /* catch() { ... } // from try @ 00a530a8 with catch @ 00a53350 */
  }
  return uVar3;
}

