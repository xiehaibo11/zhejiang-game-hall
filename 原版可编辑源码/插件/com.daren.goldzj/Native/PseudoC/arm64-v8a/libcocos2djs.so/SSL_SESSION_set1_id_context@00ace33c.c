
int SSL_SESSION_set1_id_context(SSL_SESSION *s,uchar *sid_ctx,uint sid_ctx_len)

{
  if (0x20 < sid_ctx_len) {
    ERR_put_error(0x14,0x138,0x111,"ssl/ssl_sess.c",0x375);
    return 0;
  }
  *(uint *)(s->session_id + 0x14) = sid_ctx_len;
  memcpy(s->session_id + 0x18,sid_ctx,(ulong)sid_ctx_len);
  return 1;
}

