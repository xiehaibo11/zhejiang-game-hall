
undefined8 X509_VERIFY_PARAM_set1_email(long param_1,char *param_2,size_t param_3)

{
  long lVar1;
  
  if (param_2 == (char *)0x0) {
    param_3 = 0;
    lVar1 = 0;
  }
  else {
    if (param_3 == 0) {
      param_3 = strlen(param_2);
    }
    lVar1 = CRYPTO_memdup(param_2,param_3,"crypto/x509/x509_vpm.c",0x10a);
    if (lVar1 == 0) {
      return 0;
    }
  }
  CRYPTO_free(*(void **)(param_1 + 0x50));
  *(long *)(param_1 + 0x50) = lVar1;
  *(size_t *)(param_1 + 0x58) = param_3;
  return 1;
}

