
int SSL_get_servername_type(SSL *s)

{
  if (s->ctx != (SSL_CTX *)0x0) {
    if (s->tlsext_ecpointformatlist != (uchar *)0x0) {
      return 0;
    }
    if (s->ctx->info_callback != (_func_3094 *)0x0) {
      return 0;
    }
  }
  return -1;
}

