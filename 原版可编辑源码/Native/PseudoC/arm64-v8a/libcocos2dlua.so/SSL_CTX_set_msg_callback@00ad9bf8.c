
void SSL_CTX_set_msg_callback(SSL_CTX *ctx,cb *cb)

{
  ctx->cert = (cert_st *)cb;
  return;
}

