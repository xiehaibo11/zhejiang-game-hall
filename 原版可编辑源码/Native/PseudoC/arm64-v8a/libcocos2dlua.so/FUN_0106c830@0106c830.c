
undefined8 FUN_0106c830(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 0106c73c with catch @ 0106c830 */
                    /* catch() { ... } // from try @ 0106c6e4 with catch @ 0106c834 */
                    /* catch() { ... } // from try @ 0106c694 with catch @ 0106c838 */
  lVar1 = TT_New_Context();
  if (lVar1 == 0) {
    uVar2 = 0x99;
  }
  else {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x80) = 0x23;
  }
  return uVar2;
}

