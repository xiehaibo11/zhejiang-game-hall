
undefined8 FUN_00a2cc00(undefined8 param_1)

{
  long *plVar1;
  undefined1 auStack_28 [24];
  
                    /* catch() { ... } // from try @ 00a2cbcc with catch @ 00a2cc04 */
  FUN_00a4b33c(param_1,auStack_28);
  do {
                    /* try { // try from 00a2cc18 to 00b2cccb has its CatchHandler @ 00a2cc18
                       catch() { ... } // from try @ 00a2cc18 with catch @ 00a2cc18
                       catch() { ... } // from try @ 00a2cd4c with catch @ 00a2cc18 */
    plVar1 = (long *)FUN_00a4b34c(auStack_28);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
  } while ((undefined8 *)**(undefined8 **)(*plVar1 + 0x10) == (undefined8 *)0x0);
  return *(undefined8 *)**(undefined8 **)(*plVar1 + 0x10);
}

