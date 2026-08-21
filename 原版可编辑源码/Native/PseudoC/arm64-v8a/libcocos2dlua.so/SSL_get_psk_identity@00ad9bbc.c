
char * SSL_get_psk_identity(SSL *s)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (s != (SSL *)0x0) {
                    /* catch() { ... } // from try @ 00ad9b50 with catch @ 00ad9bc4 */
    if (s->ctx == (SSL_CTX *)0x0) {
      return (char *)0x0;
    }
                    /* catch() { ... } // from try @ 00ad9b08 with catch @ 00ad9bc8 */
    pcVar1 = *(char **)&(s->ctx->stats).sess_cache_full;
  }
  return pcVar1;
}

