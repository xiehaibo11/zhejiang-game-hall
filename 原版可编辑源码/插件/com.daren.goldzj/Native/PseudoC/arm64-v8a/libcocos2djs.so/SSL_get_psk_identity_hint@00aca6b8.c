
char * SSL_get_psk_identity_hint(SSL *s)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  if (s != (SSL *)0x0) {
    if (s->ctx == (SSL_CTX *)0x0) {
                    /* catch() { ... } // from try @ 00aca690 with catch @ 00aca6cc */
      return (char *)0x0;
    }
    pcVar1 = *(char **)&(s->ctx->stats).sess_miss;
  }
  return pcVar1;
}

