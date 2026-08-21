
int SSL_CTX_set_default_verify_paths(SSL_CTX *ctx)

{
  int iVar1;
  
                    /* try { // try from 00ad9824 to 00bd982b has its CatchHandler @ 00ad988c */
  iVar1 = X509_STORE_set_default_paths(ctx->cert_store);
  return iVar1;
}

