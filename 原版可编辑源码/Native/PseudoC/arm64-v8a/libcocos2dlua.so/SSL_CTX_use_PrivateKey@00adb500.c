
int SSL_CTX_use_PrivateKey(SSL_CTX *ctx,EVP_PKEY *pkey)

{
  int iVar1;
  
  if (pkey != (EVP_PKEY *)0x0) {
                    /* try { // try from 00adb508 to 00bdb517 has its CatchHandler @ 00adb5e0 */
    iVar1 = FUN_00adaaf8(ctx->mode);
    return iVar1;
  }
                    /* try { // try from 00adb520 to 00bdb52f has its CatchHandler @ 00adb5a8 */
  ERR_put_error(0x14,0xae,0x43,"ssl/ssl_rsa.c",0x205);
                    /* try { // try from 00adb530 to 00bdb61b has its CatchHandler @ 00adb494 */
  return 0;
}

