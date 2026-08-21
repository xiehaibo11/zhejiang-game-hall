
void SSL_CTX_free(SSL_CTX *param_1)

{
  _func_3093 *p_Var1;
  lhash_st_SSL_SESSION *plVar2;
  int local_24;
  
  if ((param_1 != (SSL_CTX *)0x0) &&
     (CRYPTO_atomic_add(&param_1->references,0xffffffff,&local_24,param_1[1].comp_methods),
     local_24 < 1)) {
    X509_VERIFY_PARAM_free((X509_VERIFY_PARAM *)param_1->default_verify_callback);
    CRYPTO_free(param_1[1].default_passwd_callback);
    param_1[1].default_passwd_callback = (undefined1 *)0x0;
    CRYPTO_free(param_1[1].default_passwd_callback_userdata);
    plVar2 = param_1->sessions;
    param_1[1].default_passwd_callback_userdata = (void *)0x0;
    *(undefined1 *)&param_1[1].client_cert_cb = 0;
    if (plVar2 != (lhash_st_SSL_SESSION *)0x0) {
      SSL_CTX_flush_sessions(param_1,0);
    }
    CRYPTO_free_ex_data(1,param_1,&param_1->ex_data);
                    /* catch() { ... } // from try @ 00ad67ac with catch @ 00ad676c
                       catch() { ... } // from try @ 00ad67e4 with catch @ 00ad676c */
    OPENSSL_LH_free(param_1->sessions);
    X509_STORE_free(param_1->cert_store);
    CTLOG_STORE_free(param_1->param);
    OPENSSL_sk_free(param_1->cipher_list);
    OPENSSL_sk_free(param_1->cipher_list_by_id);
    ssl_cert_free(param_1->mode);
                    /* try { // try from 00ad67a4 to 00bd67ab has its CatchHandler @ 00ad67f8 */
    OPENSSL_sk_pop_free(param_1->comp_methods,X509_NAME_free);
                    /* try { // try from 00ad67ac to 00bd67db has its CatchHandler @ 00ad676c */
    OPENSSL_sk_pop_free(param_1->md5,X509_free);
    p_Var1 = param_1[1].app_verify_cookie_cb;
    param_1->sha1 = (EVP_MD *)0x0;
    OPENSSL_sk_free(p_Var1);
    SSL_CTX_SRP_CTX_free(param_1);
    ENGINE_finish(*(ENGINE **)(param_1->tlsext_tick_key_name + 8));
                    /* try { // try from 00ad67dc to 00bd67e3 has its CatchHandler @ 00ad67f8 */
                    /* try { // try from 00ad67e4 to 00bd67ff has its CatchHandler @ 00ad676c */
    CRYPTO_free(param_1[1].rsa_md5);
                    /* catch() { ... } // from try @ 00ad67a4 with catch @ 00ad67f8
                       catch() { ... } // from try @ 00ad67dc with catch @ 00ad67f8 */
    CRYPTO_free(param_1[1].sha1);
    CRYPTO_free(param_1[1].app_verify_callback);
    CRYPTO_THREAD_lock_free(param_1[1].comp_methods);
    CRYPTO_free(param_1);
  }
                    /* try { // try from 00ad6828 to 00bd68d7 has its CatchHandler @ 00ad6828
                       catch(type#1 @ 00000000) { ... } // from try @ 00ad6828 with catch @ 00ad6828
                       catch(type#1 @ 00000000) { ... } // from try @ 00ad6998 with catch @ 00ad6828
                        */
  return;
}

