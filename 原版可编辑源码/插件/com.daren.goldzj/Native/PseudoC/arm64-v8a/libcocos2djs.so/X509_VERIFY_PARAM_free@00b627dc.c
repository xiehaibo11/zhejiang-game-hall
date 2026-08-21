
void X509_VERIFY_PARAM_free(X509_VERIFY_PARAM *param)

{
  char *pcVar1;
  
  if (param != (X509_VERIFY_PARAM *)0x0) {
    param->name = (char *)0x0;
    param->inh_flags = 0;
    param->flags = 0;
    param->purpose = 0;
    param->trust = 0;
    *(undefined8 *)&param->depth = 0xffffffffffffffff;
    OPENSSL_sk_pop_free(param->policies,ASN1_OBJECT_free);
    pcVar1 = param[1].name;
    param->policies = (stack_st_ASN1_OBJECT *)0x0;
    OPENSSL_sk_pop_free(pcVar1,&LAB_00b62c20);
    param[1].name = (char *)0x0;
    CRYPTO_free((void *)param[1].inh_flags);
    param[1].inh_flags = 0;
    CRYPTO_free((void *)param[1].flags);
    param[1].flags = 0;
    param[1].purpose = 0;
    param[1].trust = 0;
    CRYPTO_free(*(void **)&param[1].depth);
    *(undefined8 *)&param[1].depth = 0;
    param[1].policies = (stack_st_ASN1_OBJECT *)0x0;
    CRYPTO_free(param);
    return;
  }
  return;
}

