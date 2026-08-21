
void * i2s_ASN1_IA5STRING(undefined8 param_1,int *param_2)

{
  void *__dest;
  
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    __dest = (void *)0x0;
  }
  else {
    __dest = CRYPTO_malloc(*param_2 + 1,"crypto/x509v3/v3_ia5.c",0x22);
    if (__dest == (void *)0x0) {
      ERR_put_error(0x22,0x95,0x41,"crypto/x509v3/v3_ia5.c",0x23);
    }
    else {
      memcpy(__dest,*(void **)(param_2 + 2),(long)*param_2);
      *(undefined1 *)((long)__dest + (long)*param_2) = 0;
    }
  }
  return __dest;
}

