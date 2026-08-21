
int X509_STORE_set_default_paths(X509_STORE *ctx)

{
  int iVar1;
  X509_LOOKUP_METHOD *pXVar2;
  X509_LOOKUP *pXVar3;
  
  pXVar2 = X509_LOOKUP_file();
  pXVar3 = X509_STORE_add_lookup(ctx,pXVar2);
  iVar1 = 0;
  if (pXVar3 != (X509_LOOKUP *)0x0) {
    X509_LOOKUP_ctrl(pXVar3,1,(char *)0x0,3,(char **)0x0);
    pXVar2 = X509_LOOKUP_hash_dir();
    pXVar3 = X509_STORE_add_lookup(ctx,pXVar2);
    iVar1 = 0;
    if (pXVar3 != (X509_LOOKUP *)0x0) {
      X509_LOOKUP_ctrl(pXVar3,2,(char *)0x0,3,(char **)0x0);
      ERR_clear_error();
      iVar1 = 1;
    }
  }
  return iVar1;
}

