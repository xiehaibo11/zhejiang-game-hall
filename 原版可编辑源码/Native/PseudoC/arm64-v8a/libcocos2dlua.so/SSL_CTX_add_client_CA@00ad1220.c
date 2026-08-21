
int SSL_CTX_add_client_CA(SSL_CTX *ctx,X509 *x)

{
  int iVar1;
  stack_st_SSL_COMP *psVar2;
  X509_NAME *pXVar3;
  
  if (x != (X509 *)0x0) {
    if (ctx->comp_methods == (stack_st_SSL_COMP *)0x0) {
      psVar2 = (stack_st_SSL_COMP *)OPENSSL_sk_new_null();
      ctx->comp_methods = psVar2;
      if (psVar2 == (stack_st_SSL_COMP *)0x0) {
        return 0;
      }
    }
    pXVar3 = X509_get_subject_name(x);
    pXVar3 = X509_NAME_dup(pXVar3);
    if (pXVar3 == (X509_NAME *)0x0) {
      return 0;
    }
    iVar1 = OPENSSL_sk_push(ctx->comp_methods,pXVar3);
    if (iVar1 != 0) {
      return 1;
    }
    X509_NAME_free(pXVar3);
  }
  return 0;
}

