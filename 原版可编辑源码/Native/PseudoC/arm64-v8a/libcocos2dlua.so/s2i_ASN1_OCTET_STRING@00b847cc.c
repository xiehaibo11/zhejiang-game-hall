
ASN1_OCTET_STRING * s2i_ASN1_OCTET_STRING(X509V3_EXT_METHOD *method,X509V3_CTX *ctx,char *str)

{
  ASN1_OCTET_STRING *a;
  uchar *puVar1;
  int local_28 [2];
  
  a = ASN1_OCTET_STRING_new();
                    /* try { // try from 00b847e8 to 00c847eb has its CatchHandler @ 00b84808 */
  if (a == (ASN1_OCTET_STRING *)0x0) {
                    /* try { // try from 00b84820 to 00c8491f has its CatchHandler @ 00b84820
                       catch() { ... } // from try @ 00b84820 with catch @ 00b84820
                       catch() { ... } // from try @ 00b84944 with catch @ 00b84820
                       catch() { ... } // from try @ 00b849bc with catch @ 00b84820 */
    ERR_put_error(0x22,0x70,0x41,"crypto/x509v3/v3_skey.c",0x28);
  }
  else {
                    /* try { // try from 00b847ec to 00c8481b has its CatchHandler @ 00b847bc */
    puVar1 = (uchar *)OPENSSL_hexstr2buf(str,local_28);
    a->data = puVar1;
    if (puVar1 == (uchar *)0x0) {
      ASN1_OCTET_STRING_free(a);
      a = (ASN1_OCTET_STRING *)0x0;
    }
    else {
      a->length = local_28[0];
                    /* catch() { ... } // from try @ 00b847e8 with catch @ 00b84808 */
    }
  }
  return a;
}

