
void SSL_CTX_set_verify(SSL_CTX *ctx,int mode,callback *callback)

{
  *(int *)&ctx->msg_callback = mode;
  *(callback **)(ctx->sid_ctx + 0x10) = callback;
  return;
}

