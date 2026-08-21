
void SSL_SESSION_free(SSL_SESSION *ses)

{
  int local_24;
  
  if ((ses != (SSL_SESSION *)0x0) &&
     (CRYPTO_atomic_add(ses->krb5_client_princ + 0x28,0xffffffff,&local_24,
                        *(undefined8 *)(ses->krb5_client_princ + 200)), local_24 < 1)) {
                    /* try { // try from 00adc3c0 to 00bdc3f7 has its CatchHandler @ 00adc40c */
    CRYPTO_free_ex_data(2,ses,(CRYPTO_EX_DATA *)(ses->krb5_client_princ + 0x60));
    OPENSSL_cleanse(ses->key_arg,0x30);
    OPENSSL_cleanse(ses->master_key + 0x28,0x20);
    X509_free(*(X509 **)(ses->krb5_client_princ + 8));
                    /* try { // try from 00adc3f8 to 00bdc427 has its CatchHandler @ 00adc320 */
    OPENSSL_sk_pop_free(*(undefined8 *)(ses->krb5_client_princ + 0x18),X509_free);
    OPENSSL_sk_free(*(undefined8 *)(ses->krb5_client_princ + 0x58));
                    /* catch() { ... } // from try @ 00adc3c0 with catch @ 00adc40c */
    CRYPTO_free(*(void **)(ses->krb5_client_princ + 0x78));
                    /* try { // try from 00adc428 to 00bdc4c7 has its CatchHandler @ 00adc428
                       catch() { ... } // from try @ 00adc428 with catch @ 00adc428
                       catch() { ... } // from try @ 00adc500 with catch @ 00adc428 */
    CRYPTO_free(*(void **)(ses->krb5_client_princ + 0xa0));
    ses->krb5_client_princ[0x80] = '\0';
    ses->krb5_client_princ[0x81] = '\0';
    ses->krb5_client_princ[0x82] = '\0';
    ses->krb5_client_princ[0x83] = '\0';
    ses->krb5_client_princ[0x84] = '\0';
    ses->krb5_client_princ[0x85] = '\0';
    ses->krb5_client_princ[0x86] = '\0';
    ses->krb5_client_princ[0x87] = '\0';
    CRYPTO_free(*(void **)(ses->krb5_client_princ + 0x88));
    ses->krb5_client_princ[0x90] = '\0';
    ses->krb5_client_princ[0x91] = '\0';
    ses->krb5_client_princ[0x92] = '\0';
    ses->krb5_client_princ[0x93] = '\0';
    ses->krb5_client_princ[0x94] = '\0';
    ses->krb5_client_princ[0x95] = '\0';
    ses->krb5_client_princ[0x96] = '\0';
    ses->krb5_client_princ[0x97] = '\0';
    CRYPTO_free(*(void **)(ses->krb5_client_princ + 0x98));
    CRYPTO_free(*(void **)(ses->sid_ctx + 0x14));
    CRYPTO_free(*(void **)(ses->sid_ctx + 0x1c));
    CRYPTO_free(*(void **)(ses->krb5_client_princ + 0xb8));
    CRYPTO_THREAD_lock_free(*(undefined8 *)(ses->krb5_client_princ + 200));
    CRYPTO_clear_free(ses,0x160,"ssl/ssl_sess.c",0x2fe);
  }
  return;
}

