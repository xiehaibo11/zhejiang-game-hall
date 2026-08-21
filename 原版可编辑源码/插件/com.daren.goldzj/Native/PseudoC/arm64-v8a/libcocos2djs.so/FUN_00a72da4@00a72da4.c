
undefined8 * FUN_00a72da4(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  
                    /* catch() { ... } // from try @ 00a72bd0 with catch @ 00a72db0 */
  puVar1 = operator_new(0x40);
                    /* catch() { ... } // from try @ 00a72bb4 with catch @ 00a72dc0 */
  *puVar1 = &PTR_FUN_01c6ed70;
                    /* catch() { ... } // from try @ 00a72ba4 with catch @ 00a72dd0 */
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 == (long *)0x0) {
                    /* catch() { ... } // from try @ 00a72b84 with catch @ 00a72df8 */
    puVar1[6] = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00a72b90 with catch @ 00a72de0 */
    if ((long *)(param_1 + 0x10) == plVar2) {
                    /* catch() { ... } // from try @ 00a72b70 with catch @ 00a72e00 */
      puVar1[6] = puVar1 + 2;
                    /* catch() { ... } // from try @ 00a72b5c with catch @ 00a72e04 */
                    /* catch() { ... } // from try @ 00a72b64 with catch @ 00a72e0c */
      (**(code **)(*plVar2 + 0x18))();
    }
    else {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
      puVar1[6] = uVar3;
    }
  }
  return puVar1;
}

