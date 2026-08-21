
void SSL_CTX_set_quiet_shutdown(SSL_CTX *ctx,int mode)

{
  *(int *)&ctx->generate_session_id = mode;
  return;
}

