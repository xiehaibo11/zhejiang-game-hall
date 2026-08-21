
long SSL_CTX_set_timeout(SSL_CTX *ctx,long t)

{
  long lVar1;
  
  lVar1 = 0;
  if (ctx != (SSL_CTX *)0x0) {
    lVar1 = ctx->session_timeout;
    ctx->session_timeout = t;
  }
  return lVar1;
}

