
void SSL_free(SSL *ssl)

{
  BIO *pBVar1;
  undefined8 uVar2;
  COMP_CTX *ctx;
  long lVar3;
  undefined8 uVar4;
  int local_24;
  
  if ((ssl != (SSL *)0x0) &&
     (CRYPTO_atomic_add(&ssl->tlsext_debug_arg,0xffffffff,&local_24,ssl[6].session), local_24 < 1))
  {
    X509_VERIFY_PARAM_free((X509_VERIFY_PARAM *)ssl->cipher_list);
    OPENSSL_sk_pop_free(*(undefined8 *)&ssl->mac_flags,FUN_00ada4dc);
    *(undefined8 *)&ssl->mac_flags = 0;
    OPENSSL_sk_pop_free(ssl->enc_read_ctx,X509_free);
    ssl->enc_read_ctx = (EVP_CIPHER_CTX *)0x0;
    X509_free((X509 *)ssl->expand);
    ssl->read_hash = (EVP_MD_CTX *)0x0;
    ssl->expand = (COMP_CTX *)0x0;
    *(undefined8 *)((long)&ssl->enc_write_ctx + 4) = 0xffffffffffffffff;
    CRYPTO_free_ex_data(0,ssl,(CRYPTO_EX_DATA *)&ssl->max_send_fragment);
    if (ssl->bbio != (BIO *)0x0) {
      pBVar1 = BIO_pop(ssl->wbio);
      ssl->wbio = pBVar1;
      BIO_free(ssl->bbio);
      ssl->bbio = (BIO *)0x0;
    }
    BIO_free_all(ssl->wbio);
    BIO_free_all(ssl->rbio);
    BUF_MEM_free((BUF_MEM *)ssl->s2);
    OPENSSL_sk_free(ssl->cert);
    uVar2._0_4_ = ssl->sid_ctx_length;
    uVar2._4_1_ = ssl->sid_ctx[0];
    uVar2._5_1_ = ssl->sid_ctx[1];
    uVar2._6_1_ = ssl->sid_ctx[2];
    uVar2._7_1_ = ssl->sid_ctx[3];
    OPENSSL_sk_free(uVar2);
    if (ssl->ctx != (SSL_CTX *)0x0) {
      ssl_clear_bad_session(ssl);
      SSL_SESSION_free((SSL_SESSION *)ssl->ctx);
    }
    if (*(EVP_CIPHER_CTX **)(ssl->sid_ctx + 0xc) != (EVP_CIPHER_CTX *)0x0) {
      EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)(ssl->sid_ctx + 0xc));
      ssl->sid_ctx[0xc] = '\0';
      ssl->sid_ctx[0xd] = '\0';
      ssl->sid_ctx[0xe] = '\0';
      ssl->sid_ctx[0xf] = '\0';
      ssl->sid_ctx[0x10] = '\0';
      ssl->sid_ctx[0x11] = '\0';
      ssl->sid_ctx[0x12] = '\0';
      ssl->sid_ctx[0x13] = '\0';
    }
    if ((EVP_CIPHER_CTX *)ssl->generate_session_id != (EVP_CIPHER_CTX *)0x0) {
      EVP_CIPHER_CTX_free((EVP_CIPHER_CTX *)ssl->generate_session_id);
      ssl->generate_session_id = (GEN_SESSION_CB)0x0;
    }
                    /* try { // try from 00ad5664 to 00bd572f has its CatchHandler @ 00ad5664
                       catch() { ... } // from try @ 00ad5664 with catch @ 00ad5664
                       catch() { ... } // from try @ 00ad573c with catch @ 00ad5664 */
    COMP_CTX_free((COMP_CTX *)ssl->session);
    ctx = *(COMP_CTX **)(ssl->sid_ctx + 0x1c);
    ssl->session = (SSL_SESSION *)0x0;
    COMP_CTX_free(ctx);
    *(undefined8 *)(ssl->sid_ctx + 0x1c) = 0;
    if (*(long *)(ssl->sid_ctx + 0x14) != 0) {
      EVP_MD_CTX_free();
    }
    lVar3 = *(long *)&ssl->verify_mode;
    ssl->sid_ctx[0x14] = '\0';
    ssl->sid_ctx[0x15] = '\0';
    ssl->sid_ctx[0x16] = '\0';
    ssl->sid_ctx[0x17] = '\0';
    ssl->sid_ctx[0x18] = '\0';
    ssl->sid_ctx[0x19] = '\0';
    ssl->sid_ctx[0x1a] = '\0';
    ssl->sid_ctx[0x1b] = '\0';
    if (lVar3 != 0) {
      EVP_MD_CTX_free();
    }
    *(undefined8 *)&ssl->verify_mode = 0;
    ssl_cert_free(ssl->verify_callback);
    CRYPTO_free(ssl->tlsext_ecpointformatlist);
    SSL_CTX_free((SSL_CTX *)ssl[1].bbio);
    CRYPTO_free(ssl->srtp_profiles);
    CRYPTO_free(*(void **)&ssl->tlsext_heartbeat);
    OPENSSL_sk_pop_free(ssl->tls_session_secret_cb_arg,X509_EXTENSION_free);
    OPENSSL_sk_pop_free(ssl->tls_session_secret_cb,OCSP_RESPID_free);
    SCT_LIST_free(ssl->tlsext_opaque_prf_input_len);
    CRYPTO_free(ssl->tlsext_session_ticket);
    CRYPTO_free(ssl->initial_ctx);
                    /* try { // try from 00ad5730 to 00bd573b has its CatchHandler @ 00ad5768 */
    CRYPTO_free(ssl[1].init_msg);
                    /* try { // try from 00ad573c to 00bd577b has its CatchHandler @ 00ad5664 */
    OPENSSL_sk_pop_free(ssl->tlsext_debug_cb,X509_NAME_free);
    OPENSSL_sk_pop_free(ssl->max_cert_list,X509_free);
    if (ssl->method != (SSL_METHOD *)0x0) {
                    /* catch() { ... } // from try @ 00ad5730 with catch @ 00ad5768 */
      (*ssl->method->ssl_accept)(ssl);
    }
    RECORD_LAYER_release(&ssl[1].write_hash);
    SSL_CTX_free((SSL_CTX *)ssl->mode);
    ASYNC_WAIT_CTX_free(*(undefined8 *)(ssl[6].sid_ctx + 0x1c));
    CRYPTO_free(*(void **)&ssl[1].rwstate);
    uVar4._0_4_ = ssl[1].server;
    uVar4._4_4_ = ssl[1].new_session;
    OPENSSL_sk_free(uVar4);
    CRYPTO_THREAD_lock_free(ssl[6].session);
    CRYPTO_free(ssl);
  }
  return;
}

