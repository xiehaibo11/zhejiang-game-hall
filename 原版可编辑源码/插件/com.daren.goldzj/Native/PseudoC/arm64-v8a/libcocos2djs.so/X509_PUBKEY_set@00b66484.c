
int X509_PUBKEY_set(X509_PUBKEY **x,EVP_PKEY *pkey)

{
  int iVar1;
  X509_PUBKEY *val;
  int line;
  code *pcVar2;
  
  if (x != (X509_PUBKEY **)0x0) {
    val = (X509_PUBKEY *)ASN1_item_new((ASN1_ITEM *)X509_PUBKEY_it);
    if (val != (X509_PUBKEY *)0x0) {
      if (pkey->ameth == (EVP_PKEY_ASN1_METHOD *)0x0) {
        iVar1 = 0x6f;
        line = 0x51;
      }
      else {
        pcVar2 = *(code **)(pkey->ameth + 0x28);
        if (pcVar2 == (code *)0x0) {
          iVar1 = 0x7c;
          line = 0x4d;
        }
        else {
                    /* try { // try from 00b664c4 to 00c664c7 has its CatchHandler @ 00b66968 */
          iVar1 = (*pcVar2)(val,pkey);
          if (iVar1 != 0) {
            ASN1_item_free((ASN1_VALUE *)*x,(ASN1_ITEM *)X509_PUBKEY_it);
            *x = val;
            val->pkey = pkey;
            EVP_PKEY_up_ref(pkey);
            return 1;
                    /* try { // try from 00b664f8 to 00c664ff has its CatchHandler @ 00b66964 */
          }
                    /* try { // try from 00b66544 to 00c6654b has its CatchHandler @ 00b66968 */
          iVar1 = 0x7e;
          line = 0x49;
        }
      }
                    /* try { // try from 00b6654c to 00c66613 has its CatchHandler @ 00b66220 */
      ERR_put_error(0xb,0x78,iVar1,"crypto/x509/x_pubkey.c",line);
    }
    ASN1_item_free((ASN1_VALUE *)val,(ASN1_ITEM *)X509_PUBKEY_it);
  }
  return 0;
}

