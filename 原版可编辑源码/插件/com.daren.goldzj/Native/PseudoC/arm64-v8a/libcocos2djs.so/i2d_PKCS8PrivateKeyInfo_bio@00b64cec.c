
int i2d_PKCS8PrivateKeyInfo_bio(BIO *bp,EVP_PKEY *key)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *a;
  
                    /* try { // try from 00b64cfc to 00c64da3 has its CatchHandler @ 00b64cfc
                       catch() { ... } // from try @ 00b64cfc with catch @ 00b64cfc
                       catch() { ... } // from try @ 00b64e00 with catch @ 00b64cfc */
  a = EVP_PKEY2PKCS8(key);
  iVar1 = 0;
  if (a != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = ASN1_i2d_bio(i2d_PKCS8_PRIV_KEY_INFO,bp,(uchar *)a);
    PKCS8_PRIV_KEY_INFO_free(a);
  }
  return iVar1;
}

