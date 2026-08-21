
BIO * BIO_new_buffer_ssl_connect(SSL_CTX *ctx)

{
  BIO_METHOD *type;
  BIO *b;
  BIO *append;
  BIO *pBVar1;
  
                    /* try { // try from 00ab6fd4 to 00bb6fdb has its CatchHandler @ 00ab73c0 */
  type = BIO_f_buffer();
  b = BIO_new(type);
  pBVar1 = (BIO *)0x0;
                    /* try { // try from 00ab6ff0 to 00bb6ffb has its CatchHandler @ 00ab73c8 */
                    /* try { // try from 00ab7000 to 00bb71c3 has its CatchHandler @ 00ab73cc */
  if ((b != (BIO *)0x0) &&
     ((append = BIO_new_ssl_connect(ctx), append == (BIO *)0x0 ||
      (pBVar1 = BIO_push(b,append), pBVar1 == (BIO *)0x0)))) {
    BIO_free(b);
    BIO_free(append);
    pBVar1 = (BIO *)0x0;
  }
  return pBVar1;
}

