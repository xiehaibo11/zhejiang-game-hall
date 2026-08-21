
void X509_trust_clear(X509 *x)

{
  if (x[1].akid != (AUTHORITY_KEYID *)0x0) {
    OPENSSL_sk_pop_free((x[1].akid)->keyid,ASN1_OBJECT_free);
    (x[1].akid)->keyid = (ASN1_OCTET_STRING *)0x0;
  }
                    /* try { // try from 00b67594 to 00c675af has its CatchHandler @ 00b67680 */
  return;
}

