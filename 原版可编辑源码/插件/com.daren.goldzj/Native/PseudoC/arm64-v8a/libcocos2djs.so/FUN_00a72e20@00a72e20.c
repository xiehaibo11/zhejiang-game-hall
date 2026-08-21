
void FUN_00a72e20(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 00a72b40 with catch @ 00a72e24 */
                    /* catch() { ... } // from try @ 00a72b34 with catch @ 00a72e28
                       catch() { ... } // from try @ 00a72ce0 with catch @ 00a72e28 */
  *param_2 = &PTR_FUN_01c6ed70;
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00a72acc with catch @ 00a72e68 */
    param_2[6] = 0;
  }
  else {
    if ((long *)(param_1 + 0x10) == plVar2) {
                    /* catch() { ... } // from try @ 00a72b04 with catch @ 00a72e78
                       catch() { ... } // from try @ 00a72c1c with catch @ 00a72e78
                       catch() { ... } // from try @ 00a72d14 with catch @ 00a72e78 */
      param_2[6] = param_2 + 2;
                    /* WARNING: Could not recover jumptable at 0x00a72e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
      return;
    }
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* catch() { ... } // from try @ 00a72af8 with catch @ 00a72e60 */
    param_2[6] = uVar1;
                    /* catch() { ... } // from try @ 00a72aec with catch @ 00a72e64 */
  }
  return;
}

