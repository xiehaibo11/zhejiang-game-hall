
int DSO_free(DSO *dso)

{
  int iVar1;
  int line;
  _func_3875 *p_Var2;
  _func_3879 *p_Var3;
  int local_24;
  
  if (dso == (DSO *)0x0) {
LAB_00b09060:
    iVar1 = 1;
  }
  else {
    iVar1 = CRYPTO_atomic_add(&dso->references,0xffffffff,&local_24,dso->loaded_filename);
    if (0 < iVar1) {
      if (0 < local_24) goto LAB_00b09060;
      if (((((byte)dso->flags >> 2 & 1) == 0) &&
          (p_Var2 = dso->meth->dso_unload, p_Var2 != (_func_3875 *)0x0)) &&
         (iVar1 = (*p_Var2)(dso), iVar1 == 0)) {
        iVar1 = 0x6b;
        line = 0x4e;
      }
      else {
        p_Var3 = dso->meth->init;
        if ((p_Var3 == (_func_3879 *)0x0) || (iVar1 = (*p_Var3)(dso), iVar1 != 0)) {
          OPENSSL_sk_free(dso->meth_data);
          CRYPTO_free(dso->merger);
          CRYPTO_free(dso->filename);
          CRYPTO_THREAD_lock_free(dso->loaded_filename);
          CRYPTO_free(dso);
          goto LAB_00b09060;
        }
        iVar1 = 0x66;
        line = 0x54;
      }
      ERR_put_error(0x25,0x6f,iVar1,"crypto/dso/dso_lib.c",line);
    }
    iVar1 = 0;
  }
  return iVar1;
}

