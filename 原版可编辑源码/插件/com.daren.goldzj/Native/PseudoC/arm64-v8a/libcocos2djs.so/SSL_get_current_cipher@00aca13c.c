
SSL_CIPHER * SSL_get_current_cipher(SSL *s)

{
  SSL_CIPHER *pSVar1;
  
  if ((s->ctx != (SSL_CTX *)0x0) &&
     (pSVar1 = *(SSL_CIPHER **)&(s->ctx->ex_data).dummy, pSVar1 != (SSL_CIPHER *)0x0)) {
    return pSVar1;
  }
  return (SSL_CIPHER *)0x0;
}

