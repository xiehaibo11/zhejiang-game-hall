
int SSL_CTX_set_session_id_context(SSL_CTX *ctx,uchar *sid_ctx,uint sid_ctx_len)

{
  if (0x20 < sid_ctx_len) {
                    /* try { // try from 00ad584c to 00bd58bf has its CatchHandler @ 00ad584c
                       catch() { ... } // from try @ 00ad584c with catch @ 00ad584c
                       catch() { ... } // from try @ 00ad58e4 with catch @ 00ad584c */
    ERR_put_error(0x14,0xdb,0x111,"ssl/ssl_lib.c",699);
    return 0;
  }
  *(uint *)((long)&ctx->msg_callback + 4) = sid_ctx_len;
  memcpy(&ctx->msg_callback_arg,sid_ctx,(ulong)sid_ctx_len);
  return 1;
}

