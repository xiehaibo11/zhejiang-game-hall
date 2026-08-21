
int i2d_EC_PUBKEY(EC_KEY *a,uchar **pp)

{
  int iVar1;
  EVP_PKEY *pkey;
  X509_PUBKEY *local_28;
  
  if (a == (EC_KEY *)0x0) {
    iVar1 = 0;
  }
  else {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_put_error(0xd,0xb5,0x41,"crypto/x509/x_pubkey.c",0x147);
      iVar1 = 0;
    }
    else {
      EVP_PKEY_set1_EC_KEY(pkey,a);
      local_28 = (X509_PUBKEY *)0x0;
      iVar1 = X509_PUBKEY_set(&local_28,pkey);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = ASN1_item_i2d((ASN1_VALUE *)local_28,pp,(ASN1_ITEM *)X509_PUBKEY_it);
                    /* try { // try from 00b66c44 to 00c66c53 has its CatchHandler @ 00b6711c */
                    /* try { // try from 00b66c54 to 00c66c97 has its CatchHandler @ 00b66b8c */
        ASN1_item_free((ASN1_VALUE *)local_28,(ASN1_ITEM *)X509_PUBKEY_it);
      }
      EVP_PKEY_free(pkey);
    }
  }
                    /* try { // try from 00b66c98 to 00c66c9f has its CatchHandler @ 00b671ec */
  return iVar1;
}

