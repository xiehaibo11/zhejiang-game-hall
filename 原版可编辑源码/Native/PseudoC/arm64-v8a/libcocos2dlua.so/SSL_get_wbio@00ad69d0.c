
BIO * SSL_get_wbio(SSL *s)

{
  BIO *pBVar1;
  
  if (s->bbio != (BIO *)0x0) {
    pBVar1 = BIO_next(s->bbio);
    return pBVar1;
  }
  return s->wbio;
}

