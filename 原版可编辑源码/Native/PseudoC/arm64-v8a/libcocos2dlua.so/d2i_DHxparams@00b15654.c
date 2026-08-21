
DH * d2i_DHxparams(undefined8 *param_1,uchar **param_2,long param_3)

{
  DH *dh;
  ASN1_VALUE *ptr;
  ASN1_STRING *a;
  undefined8 *puVar1;
  
  dh = DH_new();
  if (dh != (DH *)0x0) {
    ptr = ASN1_item_d2i((ASN1_VALUE **)0x0,param_2,param_3,(ASN1_ITEM *)&DAT_016af2f8);
    if (ptr == (ASN1_VALUE *)0x0) {
      DH_free(dh);
      dh = (DH *)0x0;
    }
    else {
      if (param_1 != (undefined8 *)0x0) {
        DH_free((DH *)*param_1);
        *param_1 = dh;
      }
      dh->p = *(BIGNUM **)ptr;
      dh->q = *(BIGNUM **)(ptr + 8);
      dh->g = *(BIGNUM **)(ptr + 0x10);
      dh->j = *(BIGNUM **)(ptr + 0x18);
      puVar1 = *(undefined8 **)(ptr + 0x20);
      if (puVar1 != (undefined8 *)0x0) {
        a = (ASN1_STRING *)*puVar1;
        dh->seed = a->data;
        dh->seedlen = a->length;
        dh->counter = (BIGNUM *)puVar1[1];
        a->data = (uchar *)0x0;
        ASN1_BIT_STRING_free(a);
        CRYPTO_free(*(void **)(ptr + 0x20));
        *(undefined8 *)(ptr + 0x20) = 0;
      }
      CRYPTO_free(ptr);
    }
  }
  return dh;
}

