
void BIO_ssl_shutdown(BIO *ssl_bio)

{
  BIO *pBVar1;
  SSL *s;
  
  pBVar1 = BIO_find_type(ssl_bio,0x207);
  if (pBVar1 != (BIO *)0x0) {
    s = (SSL *)BIO_get_data();
    SSL_shutdown(s);
    return;
  }
  return;
}

