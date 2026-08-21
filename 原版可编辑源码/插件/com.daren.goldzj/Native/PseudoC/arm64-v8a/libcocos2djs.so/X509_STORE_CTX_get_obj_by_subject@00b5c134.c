
int * X509_STORE_CTX_get_obj_by_subject(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  int *ptr;
  
  ptr = (int *)CRYPTO_zalloc(0x10,"crypto/x509/x509_lu.c",0x19b);
  if (ptr == (int *)0x0) {
    ERR_put_error(0xb,0x96,0x41,"crypto/x509/x509_lu.c",0x19e);
  }
  else {
    *ptr = 0;
    iVar1 = X509_STORE_CTX_get_by_subject(param_1,param_2,param_3,ptr);
    if (iVar1 == 0) {
      if (*ptr == 2) {
        X509_CRL_free(*(X509_CRL **)(ptr + 2));
      }
      else if (*ptr == 1) {
        X509_free(*(X509 **)(ptr + 2));
      }
      CRYPTO_free(ptr);
      ptr = (int *)0x0;
    }
  }
  return ptr;
}

