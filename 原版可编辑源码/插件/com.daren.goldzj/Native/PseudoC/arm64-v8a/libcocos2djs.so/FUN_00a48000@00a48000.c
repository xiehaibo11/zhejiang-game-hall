
undefined8 FUN_00a48000(long param_1,uchar *param_2,undefined8 param_3)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00a47e48 with catch @ 00a48000 */
                    /* catch() { ... } // from try @ 00a47e28 with catch @ 00a48004 */
                    /* catch() { ... } // from try @ 00a47e60 with catch @ 00a48014 */
  if (param_1 == 0) {
    iVar1 = RAND_status();
    if (iVar1 != 0) goto LAB_00a48030;
  }
  else {
    iVar1 = FUN_00a48054();
    if (iVar1 == 0) {
LAB_00a48030:
      iVar1 = FUN_00a16cec(param_3);
      RAND_bytes(param_2,iVar1);
      return 0;
    }
  }
  return 1;
}

