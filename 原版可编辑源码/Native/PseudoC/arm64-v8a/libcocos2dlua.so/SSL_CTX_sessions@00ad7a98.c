
lhash_st_SSL_SESSION * SSL_CTX_sessions(SSL_CTX *ctx)

{
                    /* try { // try from 00ad7a98 to 00bd7aff has its CatchHandler @ 00ad7a98
                       catch() { ... } // from try @ 00ad7a98 with catch @ 00ad7a98
                       catch() { ... } // from try @ 00ad7b08 with catch @ 00ad7a98 */
  return ctx->sessions;
}

