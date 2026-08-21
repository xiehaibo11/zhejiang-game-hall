
int SSL_CTX_get_quiet_shutdown(SSL_CTX *ctx)

{
  return *(int *)&ctx->generate_session_id;
}

