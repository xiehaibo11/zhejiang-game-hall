
char * SSL_get_psk_identity(SSL *s)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (s != (SSL *)0x0) {
                    /* catch() { ... } // from try @ 00aca648 with catch @ 00aca6dc */
    if (s->ctx == (SSL_CTX *)0x0) {
                    /* catch() { ... } // from try @ 00aca600 with catch @ 00aca6ec */
      return (char *)0x0;
    }
    pcVar1 = *(char **)&(s->ctx->stats).sess_cache_full;
  }
  return pcVar1;
}

