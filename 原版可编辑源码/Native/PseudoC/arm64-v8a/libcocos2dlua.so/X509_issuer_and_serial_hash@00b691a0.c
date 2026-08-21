
ulong X509_issuer_and_serial_hash(X509 *a)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  char *__s;
  EVP_MD *type;
  size_t cnt;
  ulong uVar2;
  uint local_40 [4];
  
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx != (EVP_MD_CTX *)0x0) {
    __s = X509_NAME_oneline(*(X509_NAME **)&(a->ex_data).dummy,(char *)0x0,0);
    type = EVP_md5();
    iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
    if (iVar1 != 0) {
      cnt = strlen(__s);
      iVar1 = EVP_DigestUpdate(ctx,__s,cnt);
      if (iVar1 != 0) {
        CRYPTO_free(__s);
        iVar1 = EVP_DigestUpdate(ctx,a->signature,(long)*(int *)&a->sig_alg);
        if ((iVar1 != 0) &&
           (iVar1 = EVP_DigestFinal_ex(ctx,(uchar *)local_40,(uint *)0x0), iVar1 != 0)) {
          uVar2 = (ulong)local_40[0];
          goto LAB_00b6926c;
        }
      }
    }
  }
  uVar2 = 0;
LAB_00b6926c:
  EVP_MD_CTX_free(ctx);
  return uVar2;
}

