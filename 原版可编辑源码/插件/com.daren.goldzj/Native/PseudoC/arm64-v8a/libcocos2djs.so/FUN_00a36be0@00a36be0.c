
undefined8 FUN_00a36be0(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
                    /* catch() { ... } // from try @ 00a368cc with catch @ 00a36be0
                       catch() { ... } // from try @ 00a36a30 with catch @ 00a36be0 */
  uVar2 = FUN_00a36468();
                    /* catch() { ... } // from try @ 00a3687c with catch @ 00a36bf8 */
                    /* catch() { ... } // from try @ 00a36870 with catch @ 00a36bfc */
                    /* catch() { ... } // from try @ 00a36850 with catch @ 00a36c00 */
  if (((int)uVar2 == 0) && (*param_2 == '\0')) {
    iVar1 = FUN_00a1ace8(param_1);
    if (iVar1 == 0) {
      uVar2 = *param_1;
      auVar3 = FUN_00a18e40();
      uVar2 = FUN_00a2e6f8(uVar2,auVar3._0_8_,auVar3._8_8_);
      return uVar2;
    }
                    /* catch() { ... } // from try @ 00a36888 with catch @ 00a36c10
                       catch() { ... } // from try @ 00a36950 with catch @ 00a36c10
                       catch() { ... } // from try @ 00a36a10 with catch @ 00a36c10
                       catch() { ... } // from try @ 00a36b1c with catch @ 00a36c10 */
    uVar2 = 0x2a;
  }
  return uVar2;
}

