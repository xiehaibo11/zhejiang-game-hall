
int SSL_use_PrivateKey(SSL *ssl,EVP_PKEY *pkey)

{
  int iVar1;
  
  if (pkey != (EVP_PKEY *)0x0) {
    iVar1 = FUN_00adaaf8(ssl->verify_callback);
    return iVar1;
  }
  ERR_put_error(0x14,0xc9,0x43,"ssl/ssl_rsa.c",0xe7);
  return 0;
}

