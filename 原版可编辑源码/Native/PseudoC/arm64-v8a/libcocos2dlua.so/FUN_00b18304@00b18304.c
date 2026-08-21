
DSO * FUN_00b18304(void)

{
  DSO_METHOD *pDVar1;
  DSO *dso;
  stack_st_void *psVar2;
  char *pcVar3;
  DSO_MERGER_FUNC pDVar4;
  undefined1 auVar5 [16];
  
  if (DAT_01782e70 == (DSO_METHOD *)0x0) {
    DAT_01782e70 = DSO_METHOD_openssl();
  }
  pcVar3 = &DAT_0000001a;
  dso = (DSO *)CRYPTO_zalloc(0x48,"crypto/dso/dso_lib.c");
  if (dso == (DSO *)0x0) {
    ERR_put_error(0x25,0x71,0x41,"crypto/dso/dso_lib.c",0x1c);
    return (DSO *)0x0;
  }
  psVar2 = (stack_st_void *)OPENSSL_sk_new_null();
  dso->meth_data = psVar2;
  pDVar1 = DAT_01782e70;
  if (psVar2 == (stack_st_void *)0x0) {
    ERR_put_error(0x25,0x71,0x41,"crypto/dso/dso_lib.c",0x22);
  }
  else {
    dso->references = 1;
    dso->meth = pDVar1;
    auVar5 = CRYPTO_THREAD_lock_new();
    dso->loaded_filename = auVar5._0_8_;
    if (auVar5._0_8_ != (char *)0x0) {
      pDVar4 = dso->meth->dso_merger;
      if (pDVar4 == (DSO_MERGER_FUNC)0x0) {
        return dso;
      }
      pcVar3 = (*pDVar4)(dso,auVar5._8_8_,pcVar3);
      if ((int)pcVar3 == 0) {
        DSO_free(dso);
        return (DSO *)0x0;
      }
      return dso;
    }
    ERR_put_error(0x25,0x71,0x41,"crypto/dso/dso_lib.c",0x2a);
    OPENSSL_sk_free(dso->meth_data);
  }
  CRYPTO_free(dso);
  return (DSO *)0x0;
}

