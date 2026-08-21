
int SSL_use_PrivateKey_ASN1(int pk,SSL *ssl,uchar *d,long len)

{
  int iVar1;
  EVP_PKEY *pkey;
  uchar *local_28;
  
  local_28 = d;
  pkey = d2i_PrivateKey(pk,(EVP_PKEY **)0x0,&local_28,len);
  if (pkey == (EVP_PKEY *)0x0) {
                    /* try { // try from 00adaf7c to 00bdaf93 has its CatchHandler @ 00adafd4 */
    ERR_put_error(0x14,0xca,0xd,"ssl/ssl_rsa.c",0x11f);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00adaaf8(ssl->verify_callback,pkey);
    EVP_PKEY_free(pkey);
  }
                    /* try { // try from 00adaf94 to 00bdafef has its CatchHandler @ 00adaf00 */
  return iVar1;
}

