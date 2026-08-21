
int X509_REQ_set_pubkey(X509_REQ *x,EVP_PKEY *pkey)

{
  int iVar1;
  
  if (x != (X509_REQ *)0x0) {
    *(undefined4 *)&x->signature = 1;
    iVar1 = X509_PUBKEY_set((X509_PUBKEY **)&x[1].sig_alg,pkey);
    return iVar1;
  }
  return 0;
}

