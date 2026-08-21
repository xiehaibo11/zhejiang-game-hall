
undefined4 * policy_data_new(undefined8 *param_1,ASN1_OBJECT *param_2,int param_3)

{
  ASN1_OBJECT *a;
  long lVar1;
  undefined4 *ptr;
  
  if ((param_1 == (undefined8 *)0x0) && (param_2 == (ASN1_OBJECT *)0x0)) {
LAB_00b67a48:
    ptr = (undefined4 *)0x0;
  }
  else {
    if (param_2 == (ASN1_OBJECT *)0x0) {
      a = (ASN1_OBJECT *)0x0;
    }
    else {
      a = OBJ_dup(param_2);
      if (a == (ASN1_OBJECT *)0x0) goto LAB_00b67a48;
    }
    ptr = (undefined4 *)CRYPTO_zalloc(0x20,"crypto/x509v3/pcy_data.c",0x33);
    if (ptr != (undefined4 *)0x0) {
                    /* try { // try from 00b67a98 to 00c67ae3 has its CatchHandler @ 00b67a98
                       catch() { ... } // from try @ 00b67a98 with catch @ 00b67a98
                       catch() { ... } // from try @ 00b67b00 with catch @ 00b67a98 */
      lVar1 = OPENSSL_sk_new_null();
      *(long *)(ptr + 6) = lVar1;
      if (lVar1 == 0) {
        CRYPTO_free(ptr);
        ASN1_OBJECT_free(a);
        ptr = (undefined4 *)0x0;
      }
      else {
        if (param_3 != 0) {
          *ptr = 0x10;
        }
        if (a == (ASN1_OBJECT *)0x0) {
                    /* try { // try from 00b67ae4 to 00c67aff has its CatchHandler @ 00b67b5c */
          *(undefined8 *)(ptr + 2) = *param_1;
          *param_1 = 0;
        }
        else {
          *(ASN1_OBJECT **)(ptr + 2) = a;
        }
        if (param_1 != (undefined8 *)0x0) {
          *(undefined8 *)(ptr + 4) = param_1[1];
          param_1[1] = 0;
                    /* try { // try from 00b67b00 to 00c67b97 has its CatchHandler @ 00b67a98 */
        }
      }
    }
  }
                    /* catch() { ... } // from try @ 00b679e4 with catch @ 00b67a5c */
  return ptr;
}

