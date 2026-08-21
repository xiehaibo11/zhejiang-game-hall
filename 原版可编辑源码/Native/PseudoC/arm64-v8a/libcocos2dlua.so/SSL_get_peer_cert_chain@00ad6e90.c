
stack_st_X509 * SSL_get_peer_cert_chain(SSL *s)

{
  stack_st_X509 *psVar1;
  
  psVar1 = (stack_st_X509 *)0x0;
  if (s != (SSL *)0x0) {
    if (s->ctx == (SSL_CTX *)0x0) {
      return (stack_st_X509 *)0x0;
    }
    psVar1 = (stack_st_X509 *)s->ctx->default_passwd_callback;
  }
  return psVar1;
}

