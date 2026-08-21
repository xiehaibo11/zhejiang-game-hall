
undefined * FUN_010bb368(uint param_1)

{
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 010bb1e0 with catch @ 010bb374 */
  uVar1 = 0;
  if (param_1 < 0x102) {
    uVar1 = (ulong)param_1;
  }
                    /* catch() { ... } // from try @ 010bb1bc with catch @ 010bb388 */
  return &UNK_0147113e + (short)(&DAT_01471fae)[uVar1];
}

