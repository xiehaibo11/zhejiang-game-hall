
int SSL_use_PrivateKey_ASN1(int pk,SSL *ssl,uchar *d,long len)

{
  int iVar1;
  EVP_PKEY *pkey;
  uchar *local_28;
  
  local_28 = d;
  pkey = d2i_PrivateKey(pk,(EVP_PKEY **)0x0,&local_28,len);
  if (pkey == (EVP_PKEY *)0x0) {
    ERR_put_error(0x14,0xca,0xd,"ssl/ssl_rsa.c",0x11f);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00acbc44(ssl->verify_callback,pkey);
    EVP_PKEY_free(pkey);
  }
  return iVar1;
}

