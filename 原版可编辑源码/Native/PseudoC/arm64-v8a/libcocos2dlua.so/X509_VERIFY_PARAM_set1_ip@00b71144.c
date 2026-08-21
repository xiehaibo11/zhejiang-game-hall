
undefined8 X509_VERIFY_PARAM_set1_ip(long param_1,char *param_2,size_t param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if ((param_3 < 0x11) && ((1L << (param_3 & 0x3f) & 0x10011U) != 0)) {
    if (param_2 == (char *)0x0) {
      param_3 = 0;
      lVar2 = 0;
    }
    else {
      if (param_3 == 0) {
        param_3 = strlen(param_2);
      }
      lVar2 = CRYPTO_memdup(param_2,param_3,"crypto/x509/x509_vpm.c",0x10a);
      if (lVar2 == 0) {
        return 0;
      }
    }
    CRYPTO_free(*(void **)(param_1 + 0x60));
    uVar1 = 1;
    *(long *)(param_1 + 0x60) = lVar2;
    *(size_t *)(param_1 + 0x68) = param_3;
  }
  return uVar1;
}

