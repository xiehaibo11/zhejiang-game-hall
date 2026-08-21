
void SSL_CTX_set_client_CA_list(SSL_CTX *ctx,stack_st_X509_NAME *name_list)

{
  OPENSSL_sk_pop_free(ctx->comp_methods,X509_NAME_free);
  ctx->comp_methods = (stack_st_SSL_COMP *)name_list;
  return;
}

