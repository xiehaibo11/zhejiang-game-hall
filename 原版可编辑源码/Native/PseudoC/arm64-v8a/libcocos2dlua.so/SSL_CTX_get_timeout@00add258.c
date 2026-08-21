
long SSL_CTX_get_timeout(SSL_CTX *ctx)

{
  long lVar1;
  
  lVar1 = 0;
  if (ctx != (SSL_CTX *)0x0) {
    lVar1 = ctx->session_timeout;
  }
  return lVar1;
}

