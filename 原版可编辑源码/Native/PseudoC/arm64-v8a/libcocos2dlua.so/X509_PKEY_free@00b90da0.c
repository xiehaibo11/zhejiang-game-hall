
void X509_PKEY_free(X509_PKEY *a)

{
                    /* try { // try from 00b90da0 to 00c90dfb has its CatchHandler @ 00b90da0
                       catch() { ... } // from try @ 00b90da0 with catch @ 00b90da0
                       catch() { ... } // from try @ 00b90e08 with catch @ 00b90da0 */
  if (a != (X509_PKEY *)0x0) {
    X509_ALGOR_free(a->enc_algor);
    ASN1_OCTET_STRING_free(a->enc_pkey);
    EVP_PKEY_free(a->dec_pkey);
    if (a->key_free != 0) {
      CRYPTO_free(a->key_data);
    }
                    /* try { // try from 00b90dfc to 00c90e07 has its CatchHandler @ 00b90e5c */
    CRYPTO_free(a);
    return;
  }
                    /* try { // try from 00b90e08 to 00c90e77 has its CatchHandler @ 00b90da0 */
  return;
}

