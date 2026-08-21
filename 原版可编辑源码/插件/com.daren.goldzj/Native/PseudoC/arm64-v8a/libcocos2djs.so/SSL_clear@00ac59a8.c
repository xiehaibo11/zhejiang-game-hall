
int SSL_clear(SSL *s)

{
  int iVar1;
  ssl2_state_st *a;
  EVP_CIPHER_CTX *a_00;
  COMP_CTX *ctx;
  long lVar2;
  X509 *a_01;
  int line;
  SSL_METHOD *pSVar3;
  
  if (s->method == (SSL_METHOD *)0x0) {
    iVar1 = 0xbc;
    line = 0x1be;
  }
  else {
    iVar1 = ssl_clear_bad_session(s);
    if (iVar1 != 0) {
      SSL_SESSION_free((SSL_SESSION *)s->ctx);
      s->ctx = (SSL_CTX *)0x0;
    }
    iVar1 = s[1].init_off;
    *(undefined4 *)&s->client_CA = 0;
    *(undefined4 *)&s->param = 0;
    s->shutdown = 0;
    if (iVar1 == 0) {
      ossl_statem_clear(s);
      a = s->s2;
      iVar1 = s->method->version;
      s->rwstate = 1;
      s->version = iVar1;
      *(int *)((long)&s->tlsext_ocsp_ids + 4) = iVar1;
      BUF_MEM_free((BUF_MEM *)a);
      a_00 = *(EVP_CIPHER_CTX **)(s->sid_ctx + 0xc);
      s->s2 = (ssl2_state_st *)0x0;
      if (a_00 != (EVP_CIPHER_CTX *)0x0) {
        EVP_CIPHER_CTX_free(a_00);
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
      lVar2 = *(long *)&s->verify_mode;
      s->sid_ctx[0x14] = '\0';
      s->sid_ctx[0x15] = '\0';
      s->sid_ctx[0x16] = '\0';
      s->sid_ctx[0x17] = '\0';
      s->sid_ctx[0x18] = '\0';
      s->sid_ctx[0x19] = '\0';
      s->sid_ctx[0x1a] = '\0';
      s->sid_ctx[0x1b] = '\0';
      if (lVar2 != 0) {
        EVP_MD_CTX_free();
      }
      a_01 = (X509 *)s->expand;
      *(undefined8 *)&s->verify_mode = 0;
      *(undefined4 *)&s->tlsext_ocsp_ids = 0;
      *(undefined8 *)((long)&s->enc_write_ctx + 4) = 0xffffffffffffffff;
      X509_free(a_01);
      s->read_hash = (EVP_MD_CTX *)0x0;
      s->expand = (COMP_CTX *)0x0;
      X509_VERIFY_PARAM_move_peername(s->cipher_list,0);
      iVar1 = ossl_statem_get_in_handshake(s);
      if (((iVar1 == 0) && (s->ctx == (SSL_CTX *)0x0)) && (s->method != *(SSL_METHOD **)s->mode)) {
        (*s->method->ssl_accept)(s);
        pSVar3 = *(SSL_METHOD **)s->mode;
        s->method = pSVar3;
        iVar1 = (*pSVar3->ssl_clear)(s);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
                    /* try { // try from 00ac5aec to 00bc5af3 has its CatchHandler @ 00ac5c88 */
        (*s->method->ssl_free)(s);
      }
      RECORD_LAYER_clear(&s[1].write_hash);
      return 1;
    }
    iVar1 = 0x44;
    line = 0x1cc;
  }
  ERR_put_error(0x14,0xa4,iVar1,"ssl/ssl_lib.c",line);
  return 0;
}

