
int SSL_use_RSAPrivateKey(SSL *ssl,RSA *rsa)

{
  int iVar1;
  EVP_PKEY *pkey;
  
                    /* try { // try from 00adaa40 to 00bdaa47 has its CatchHandler @ 00adaaa8 */
  if (rsa == (RSA *)0x0) {
                    /* catch() { ... } // from try @ 00adaa40 with catch @ 00adaaa8 */
    ERR_put_error(0x14,0xcc,0x43,"ssl/ssl_rsa.c",100);
  }
  else {
                    /* try { // try from 00adaa48 to 00bdaaf7 has its CatchHandler @ 00ada9ac */
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_put_error(0x14,0xcc,6,"ssl/ssl_rsa.c",0x68);
    }
    else {
      RSA_up_ref(rsa);
      iVar1 = EVP_PKEY_assign(pkey,6,rsa);
      if (0 < iVar1) {
        iVar1 = FUN_00adaaf8(ssl->verify_callback,pkey);
        EVP_PKEY_free(pkey);
        return iVar1;
      }
                    /* catch() { ... } // from try @ 00adaa14 with catch @ 00adaad8 */
      RSA_free(rsa);
                    /* catch() { ... } // from try @ 00ada9f8 with catch @ 00adaadc */
      EVP_PKEY_free(pkey);
    }
  }
  return 0;
}

