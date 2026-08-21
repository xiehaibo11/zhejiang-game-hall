
int SSL_CTX_set_trust(SSL_CTX *s,int trust)

{
  int iVar1;
  
                    /* try { // try from 00ad59e0 to 00bd5a1b has its CatchHandler @ 00ad5a1c */
  iVar1 = X509_VERIFY_PARAM_set_trust((X509_VERIFY_PARAM *)s->default_verify_callback,trust);
  return iVar1;
}

