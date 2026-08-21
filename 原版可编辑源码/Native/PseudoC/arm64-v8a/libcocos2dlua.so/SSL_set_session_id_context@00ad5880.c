
int SSL_set_session_id_context(SSL *ssl,uchar *sid_ctx,uint sid_ctx_len)

{
  if (0x20 < sid_ctx_len) {
    ERR_put_error(0x14,0xda,0x111,"ssl/ssl_lib.c",0x2c9);
    return 0;
  }
  *(uint *)&ssl->info_callback = sid_ctx_len;
                    /* try { // try from 00ad58c0 to 00bd58c3 has its CatchHandler @ 00ad5960 */
  memcpy((void *)((long)&ssl->info_callback + 4),sid_ctx,(ulong)sid_ctx_len);
  return 1;
}

