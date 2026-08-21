
int X509_STORE_CTX_get_error_depth(X509_STORE_CTX *ctx)

{
  return *(int *)((long)&ctx->tree + 4);
}

