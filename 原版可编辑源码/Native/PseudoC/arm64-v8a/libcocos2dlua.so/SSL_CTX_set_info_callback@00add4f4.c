
void SSL_CTX_set_info_callback(SSL_CTX *ctx,cb *cb)

{
  ctx->extra_certs = (stack_st_X509 *)cb;
  return;
}

