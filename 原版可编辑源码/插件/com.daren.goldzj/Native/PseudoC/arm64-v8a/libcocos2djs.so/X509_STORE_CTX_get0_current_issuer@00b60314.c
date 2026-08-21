
X509 * X509_STORE_CTX_get0_current_issuer(X509_STORE_CTX *ctx)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b5ffec with catch @ 00b60314
                        */
                    /* try { // try from 00b60318 to 00c603b7 has its CatchHandler @ 00b60318
                       catch() { ... } // from try @ 00b60318 with catch @ 00b60318
                       catch() { ... } // from try @ 00b603c0 with catch @ 00b60318
                       catch() { ... } // from try @ 00b60424 with catch @ 00b60318 */
  return ctx->current_cert;
}

