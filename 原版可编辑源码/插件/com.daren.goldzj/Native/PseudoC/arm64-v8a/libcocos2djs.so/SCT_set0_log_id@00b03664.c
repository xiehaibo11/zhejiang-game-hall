
undefined8 SCT_set0_log_id(int *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
                    /* catch() { ... } // from try @ 00b03444 with catch @ 00b03664 */
                    /* catch() { ... } // from try @ 00b034c8 with catch @ 00b0366c */
  if ((param_3 == 0x20) || (*param_1 != 0)) {
    CRYPTO_free(*(void **)(param_1 + 6));
    uVar1 = 1;
    *(undefined8 *)(param_1 + 6) = param_2;
    *(long *)(param_1 + 8) = param_3;
    param_1[0x18] = 0;
  }
  else {
    ERR_put_error(0x32,0x65,100,"crypto/ct/ct_sct.c",0x4d);
    uVar1 = 0;
  }
  return uVar1;
}

