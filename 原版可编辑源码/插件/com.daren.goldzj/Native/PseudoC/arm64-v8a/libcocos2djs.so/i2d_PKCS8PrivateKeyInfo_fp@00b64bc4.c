
int i2d_PKCS8PrivateKeyInfo_fp(FILE *fp,EVP_PKEY *key)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *a;
  
                    /* catch() { ... } // from try @ 00b64c68 with catch @ 00b64bc4 */
  a = EVP_PKEY2PKCS8(key);
  iVar1 = 0;
  if (a != (PKCS8_PRIV_KEY_INFO *)0x0) {
    iVar1 = ASN1_i2d_fp(i2d_PKCS8_PRIV_KEY_INFO,fp,a);
    PKCS8_PRIV_KEY_INFO_free(a);
  }
  return iVar1;
}

