
bool SSL_CTX_set_default_verify_file(long param_1)

{
  X509_LOOKUP_METHOD *m;
  X509_LOOKUP *ctx;
  X509_STORE *v;
  
  v = *(X509_STORE **)(param_1 + 0x18);
  m = X509_LOOKUP_file();
                    /* catch() { ... } // from try @ 00ad9824 with catch @ 00ad988c */
  ctx = X509_STORE_add_lookup(v,m);
  if (ctx != (X509_LOOKUP *)0x0) {
    X509_LOOKUP_ctrl(ctx,1,(char *)0x0,3,(char **)0x0);
    ERR_clear_error();
  }
                    /* catch() { ... } // from try @ 00ad97f8 with catch @ 00ad98bc */
                    /* catch() { ... } // from try @ 00ad97d4 with catch @ 00ad98c0 */
  return ctx != (X509_LOOKUP *)0x0;
}

