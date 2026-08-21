
void X509_INFO_free(X509_INFO *a)

{
  if (a != (X509_INFO *)0x0) {
    X509_free(a->x509);
    X509_CRL_free(a->crl);
                    /* catch() { ... } // from try @ 00b90c28 with catch @ 00b90ca0 */
    X509_PKEY_free(a->x_pkey);
                    /* try { // try from 00b90cbc to 00c90d1f has its CatchHandler @ 00b90cbc
                       catch() { ... } // from try @ 00b90cbc with catch @ 00b90cbc
                       catch() { ... } // from try @ 00b90d2c with catch @ 00b90cbc */
    CRYPTO_free(a->enc_data);
    CRYPTO_free(a);
    return;
  }
  return;
}

