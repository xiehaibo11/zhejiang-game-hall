
void SSL_set_connect_state(SSL *s)

{
  EVP_CIPHER_CTX *a;
  COMP_CTX *ctx;
  long lVar1;
  
  s->server = 0;
  s->shutdown = 0;
  ossl_statem_clear();
  a = *(EVP_CIPHER_CTX **)(s->sid_ctx + 0xc);
  s->handshake_func = (_func_3149 *)s->method->ssl_read;
  if (a != (EVP_CIPHER_CTX *)0x0) {
    EVP_CIPHER_CTX_free(a);
    s->sid_ctx[0xc] = '\0';
    s->sid_ctx[0xd] = '\0';
    s->sid_ctx[0xe] = '\0';
    s->sid_ctx[0xf] = '\0';
    s->sid_ctx[0x10] = '\0';
    s->sid_ctx[0x11] = '\0';
    s->sid_ctx[0x12] = '\0';
    s->sid_ctx[0x13] = '\0';
  }
  if ((EVP_CIPHER_CTX *)s->generate_session_id != (EVP_CIPHER_CTX *)0x0) {
    EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)s->generate_session_id);
    s->generate_session_id = (GEN_SESSION_CB)0x0;
  }
  COMP_CTX_free((COMP_CTX *)s->session);
  ctx = *(COMP_CTX **)(s->sid_ctx + 0x1c);
  s->session = (SSL_SESSION *)0x0;
  COMP_CTX_free(ctx);
  *(undefined8 *)(s->sid_ctx + 0x1c) = 0;
  if (*(long *)(s->sid_ctx + 0x14) != 0) {
    EVP_MD_CTX_free();
  }
  lVar1 = *(long *)&s->verify_mode;
  s->sid_ctx[0x14] = '\0';
  s->sid_ctx[0x15] = '\0';
  s->sid_ctx[0x16] = '\0';
  s->sid_ctx[0x17] = '\0';
  s->sid_ctx[0x18] = '\0';
  s->sid_ctx[0x19] = '\0';
  s->sid_ctx[0x1a] = '\0';
  s->sid_ctx[0x1b] = '\0';
  if (lVar1 != 0) {
    EVP_MD_CTX_free();
  }
  *(undefined8 *)&s->verify_mode = 0;
  return;
}

