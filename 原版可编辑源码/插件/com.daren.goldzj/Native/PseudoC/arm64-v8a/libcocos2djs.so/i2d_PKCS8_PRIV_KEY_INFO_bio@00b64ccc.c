
int i2d_PKCS8_PRIV_KEY_INFO_bio(BIO *bp,PKCS8_PRIV_KEY_INFO *p8inf)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00b64c48 with catch @ 00b64ce0 */
  iVar1 = ASN1_i2d_bio(i2d_PKCS8_PRIV_KEY_INFO,bp,(uchar *)p8inf);
  return iVar1;
}

