
void ssl_cert_clear_certs(long param_1)

{
                    /* catch() { ... } // from try @ 00ac0ee0 with catch @ 00ac0efc */
  if (param_1 != 0) {
    X509_free(*(X509 **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
                    /* try { // try from 00ac0f28 to 00bc0f4b has its CatchHandler @ 00ac0f64 */
    EVP_PKEY_free(*(EVP_PKEY **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x30),X509_free);
    *(undefined8 *)(param_1 + 0x30) = 0;
    CRYPTO_free(*(void **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    X509_free(*(X509 **)(param_1 + 0x48));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ac0f28 with catch @ 00ac0f64
                        */
    *(undefined8 *)(param_1 + 0x48) = 0;
    EVP_PKEY_free(*(EVP_PKEY **)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x58),X509_free);
    *(undefined8 *)(param_1 + 0x58) = 0;
    CRYPTO_free(*(void **)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    X509_free(*(X509 **)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
    EVP_PKEY_free(*(EVP_PKEY **)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x80),X509_free);
    *(undefined8 *)(param_1 + 0x80) = 0;
    CRYPTO_free(*(void **)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    X509_free(*(X509 **)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
    EVP_PKEY_free(*(EVP_PKEY **)(param_1 + 0xa0));
    *(undefined8 *)(param_1 + 0xa0) = 0;
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0xa8),X509_free);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    CRYPTO_free(*(void **)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    X509_free(*(X509 **)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0;
    EVP_PKEY_free(*(EVP_PKEY **)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0xd0),X509_free);
    *(undefined8 *)(param_1 + 0xd0) = 0;
                    /* try { // try from 00ac1044 to 00bc111f has its CatchHandler @ 00ac1044
                       catch() { ... } // from try @ 00ac1044 with catch @ 00ac1044
                       catch() { ... } // from try @ 00ac1128 with catch @ 00ac1044
                       catch() { ... } // from try @ 00ac12e8 with catch @ 00ac1044
                       catch() { ... } // from try @ 00ac13e4 with catch @ 00ac1044
                       catch() { ... } // from try @ 00ac13f0 with catch @ 00ac1044 */
    CRYPTO_free(*(void **)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    X509_free(*(X509 **)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    EVP_PKEY_free(*(EVP_PKEY **)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0xf8),X509_free);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    CRYPTO_free(*(void **)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    X509_free(*(X509 **)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
    EVP_PKEY_free(*(EVP_PKEY **)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x118) = 0;
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x120),X509_free);
    *(undefined8 *)(param_1 + 0x120) = 0;
    CRYPTO_free(*(void **)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  return;
}

