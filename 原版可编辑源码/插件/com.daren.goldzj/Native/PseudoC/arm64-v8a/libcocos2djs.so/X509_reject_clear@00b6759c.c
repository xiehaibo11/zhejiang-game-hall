
void X509_reject_clear(X509 *x)

{
  if (x[1].akid != (AUTHORITY_KEYID *)0x0) {
    OPENSSL_sk_pop_free((x[1].akid)->issuer,ASN1_OBJECT_free);
                    /* try { // try from 00b675c4 to 00c675df has its CatchHandler @ 00b67688 */
    (x[1].akid)->issuer = (GENERAL_NAMES *)0x0;
  }
  return;
}

