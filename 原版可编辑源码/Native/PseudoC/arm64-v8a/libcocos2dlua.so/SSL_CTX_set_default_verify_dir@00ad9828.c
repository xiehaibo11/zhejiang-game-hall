
bool SSL_CTX_set_default_verify_dir(long param_1)

{
  X509_LOOKUP_METHOD *m;
  X509_LOOKUP *ctx;
  X509_STORE *v;
  
                    /* try { // try from 00ad982c to 00bd98db has its CatchHandler @ 00ad9788 */
  v = *(X509_STORE **)(param_1 + 0x18);
  m = X509_LOOKUP_hash_dir();
  ctx = X509_STORE_add_lookup(v,m);
  if (ctx != (X509_LOOKUP *)0x0) {
    X509_LOOKUP_ctrl(ctx,2,(char *)0x0,3,(char **)0x0);
    ERR_clear_error();
  }
  return ctx != (X509_LOOKUP *)0x0;
}

