
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_STORE * X509_STORE_new(void)

{
  int iVar1;
  X509_STORE *obj;
  stack_st_X509_OBJECT *psVar2;
  stack_st_X509_LOOKUP *psVar3;
  X509_VERIFY_PARAM *pXVar4;
  long lVar5;
  
  obj = (X509_STORE *)CRYPTO_zalloc(0x98,"crypto/x509/x509_lu.c",0x92);
  if (obj != (X509_STORE *)0x0) {
    psVar2 = (stack_st_X509_OBJECT *)OPENSSL_sk_new(FUN_00b5be10);
    obj->objs = psVar2;
    if (psVar2 != (stack_st_X509_OBJECT *)0x0) {
      obj->cache = 1;
      psVar3 = (stack_st_X509_LOOKUP *)OPENSSL_sk_new_null();
      obj->get_cert_methods = psVar3;
      if (psVar3 != (stack_st_X509_LOOKUP *)0x0) {
        pXVar4 = X509_VERIFY_PARAM_new();
        obj->param = pXVar4;
        if ((pXVar4 != (X509_VERIFY_PARAM *)0x0) &&
           (iVar1 = CRYPTO_new_ex_data(4,obj,(CRYPTO_EX_DATA *)&(obj->ex_data).dummy), iVar1 != 0))
        {
          lVar5 = CRYPTO_THREAD_lock_new();
          *(long *)(obj + 1) = lVar5;
          if (lVar5 != 0) {
            obj->references = 1;
            return obj;
          }
        }
      }
    }
    X509_VERIFY_PARAM_free(obj->param);
    OPENSSL_sk_free(obj->objs);
    OPENSSL_sk_free(obj->get_cert_methods);
    CRYPTO_free(obj);
  }
  return (X509_STORE *)0x0;
}

