
void FUN_0097dd00(undefined8 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)param_1[6];
  *param_1 = &PTR_FUN_01c69fd8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0097da30 with catch @ 0097dd1c
                        */
  if (param_1 + 2 == plVar1) {
                    /* WARNING: Could not recover jumptable at 0x0097dd38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))();
    return;
  }
                    /* catch() { ... } // from try @ 0097dd84 with catch @ 0097dd20
                       catch() { ... } // from try @ 0097ddf4 with catch @ 0097dd20
                       catch() { ... } // from try @ 0097de5c with catch @ 0097dd20 */
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0097dd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  return;
}

