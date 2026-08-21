
int X509_VERIFY_PARAM_set1_name(X509_VERIFY_PARAM *param,char *name)

{
  char *pcVar1;
  
  CRYPTO_free(param->name);
  pcVar1 = CRYPTO_strdup(name,"crypto/x509/x509_vpm.c",0x11b);
  param->name = pcVar1;
  return (int)(pcVar1 != (char *)0x0);
}

