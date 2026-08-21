
int SSL_use_RSAPrivateKey(SSL *ssl,RSA *rsa)

{
  int iVar1;
  EVP_PKEY *pkey;
  
                    /* try { // try from 00acbb80 to 00bcbb87 has its CatchHandler @ 00acbc7c */
                    /* try { // try from 00acbb88 to 00bcbbab has its CatchHandler @ 00acbb18 */
  if (rsa == (RSA *)0x0) {
                    /* try { // try from 00acbbe0 to 00bcbbe7 has its CatchHandler @ 00acbc78 */
                    /* try { // try from 00acbbe8 to 00bcbc07 has its CatchHandler @ 00acbb18 */
    ERR_put_error(0x14,0xcc,0x43,"ssl/ssl_rsa.c",100);
  }
  else {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
                    /* try { // try from 00acbc08 to 00bcbc0f has its CatchHandler @ 00acbc78 */
                    /* try { // try from 00acbc10 to 00bcbc2f has its CatchHandler @ 00acbb18 */
      ERR_put_error(0x14,0xcc,6,"ssl/ssl_rsa.c",0x68);
    }
    else {
      RSA_up_ref(rsa);
                    /* try { // try from 00acbbac to 00bcbbb7 has its CatchHandler @ 00acbc7c */
      iVar1 = EVP_PKEY_assign(pkey,6,rsa);
                    /* try { // try from 00acbbb8 to 00bcbbdf has its CatchHandler @ 00acbb18 */
      if (0 < iVar1) {
        iVar1 = FUN_00acbc44(ssl->verify_callback,pkey);
        EVP_PKEY_free(pkey);
        return iVar1;
      }
      RSA_free(rsa);
      EVP_PKEY_free(pkey);
    }
  }
                    /* try { // try from 00acbc30 to 00bcbc3b has its CatchHandler @ 00acbc78 */
                    /* try { // try from 00acbc3c to 00bcbc7f has its CatchHandler @ 00acbb18 */
  return 0;
}

