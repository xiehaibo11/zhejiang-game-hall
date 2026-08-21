
int PKCS7_ISSUER_AND_SERIAL_digest(PKCS7_ISSUER_AND_SERIAL *data,EVP_MD *type,uchar *md,uint *len)

{
  int iVar1;
  
                    /* try { // try from 00b73f58 to 00c73f63 has its CatchHandler @ 00b73f64 */
                    /* catch() { ... } // from try @ 00b73eac with catch @ 00b73f64
                       catch() { ... } // from try @ 00b73f58 with catch @ 00b73f64
                       try { // try from 00b73f64 to 00c73f7b has its CatchHandler @ 00b73d3c */
  iVar1 = ASN1_item_digest((ASN1_ITEM *)PKCS7_ISSUER_AND_SERIAL_it,type,data,md,len);
  return iVar1;
}

