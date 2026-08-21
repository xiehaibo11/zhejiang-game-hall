
BIO * BIO_new_buffer_ssl_connect(SSL_CTX *ctx)

{
  BIO_METHOD *type;
  BIO *b;
  BIO *append;
  BIO *pBVar1;
  
  type = BIO_f_buffer();
  b = BIO_new(type);
  pBVar1 = (BIO *)0x0;
  if ((b != (BIO *)0x0) &&
     ((append = BIO_new_ssl_connect(ctx), append == (BIO *)0x0 ||
      (pBVar1 = BIO_push(b,append), pBVar1 == (BIO *)0x0)))) {
    BIO_free(b);
    BIO_free(append);
    pBVar1 = (BIO *)0x0;
  }
  return pBVar1;
}

