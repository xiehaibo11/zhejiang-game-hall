
void SSL_CTX_set_tmp_dh_callback(SSL_CTX *ctx,dh *dh)

{
                    /* WARNING: Could not recover jumptable at 0x00aca550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*ctx->method->ssl_callback_ctrl)((SSL *)ctx,6,(fp *)dh);
  return;
}

