
undefined8 FUN_00a5e9e8(long param_1,uchar *param_2,undefined8 param_3)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00a5e9dc with catch @ 00a5e9f0 */
  if (param_1 == 0) {
    iVar1 = RAND_status();
    if (iVar1 != 0) goto LAB_00a5ea18;
  }
  else {
    iVar1 = FUN_00a5ea3c();
    if (iVar1 == 0) {
LAB_00a5ea18:
      iVar1 = FUN_00a2c6d4(param_3);
      RAND_bytes(param_2,iVar1);
      return 0;
    }
  }
  return 1;
}

