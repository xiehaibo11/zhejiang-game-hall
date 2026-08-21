
void X509_STORE_CTX_set0_param(X509_STORE_CTX *ctx,X509_VERIFY_PARAM *param)

{
  X509_VERIFY_PARAM_free((X509_VERIFY_PARAM *)ctx->crls);
  ctx->crls = (stack_st_X509_CRL *)param;
                    /* try { // try from 00b6fbb8 to 00c6fc0f has its CatchHandler @ 00b6fbb8
                       catch(type#1 @ 00000000) { ... } // from try @ 00b6fbb8 with catch @ 00b6fbb8
                       catch(type#1 @ 00000000) { ... } // from try @ 00b6fcd8 with catch @ 00b6fbb8
                        */
  return;
}

