
int SSL_CTX_get_verify_mode(SSL_CTX *ctx)

{
  return *(int *)&ctx->msg_callback;
}

