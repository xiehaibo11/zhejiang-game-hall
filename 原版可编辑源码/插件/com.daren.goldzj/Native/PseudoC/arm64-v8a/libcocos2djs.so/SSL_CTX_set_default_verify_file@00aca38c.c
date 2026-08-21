
bool SSL_CTX_set_default_verify_file(long param_1)

{
  X509_LOOKUP_METHOD *m;
  X509_LOOKUP *ctx;
  X509_STORE *v;
  
                    /* try { // try from 00aca394 to 00bca5b7 has its CatchHandler @ 00aca394
                       catch() { ... } // from try @ 00aca394 with catch @ 00aca394
                       catch() { ... } // from try @ 00aca69c with catch @ 00aca394 */
  v = *(X509_STORE **)(param_1 + 0x18);
  m = X509_LOOKUP_file();
  ctx = X509_STORE_add_lookup(v,m);
  if (ctx != (X509_LOOKUP *)0x0) {
    X509_LOOKUP_ctrl(ctx,1,(char *)0x0,3,(char **)0x0);
    ERR_clear_error();
  }
  return ctx != (X509_LOOKUP *)0x0;
}

