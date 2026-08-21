
int SSL_CTX_use_PrivateKey_ASN1(int pk,SSL_CTX *ctx,uchar *d,long len)

{
  int iVar1;
  EVP_PKEY *pkey;
  uchar *local_28;
  
  local_28 = d;
  pkey = d2i_PrivateKey(pk,(EVP_PKEY **)0x0,&local_28,len);
  if (pkey == (EVP_PKEY *)0x0) {
    ERR_put_error(0x14,0xaf,0xd,"ssl/ssl_rsa.c",0x23b);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00acbc44(ctx->mode,pkey);
    EVP_PKEY_free(pkey);
  }
  return iVar1;
}

