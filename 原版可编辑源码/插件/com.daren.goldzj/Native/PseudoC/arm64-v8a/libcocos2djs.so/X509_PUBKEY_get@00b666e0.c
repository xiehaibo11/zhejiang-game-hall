
EVP_PKEY * X509_PUBKEY_get(X509_PUBKEY *key)

{
  EVP_PKEY *pEVar1;
  EVP_PKEY *local_18;
  
  local_18 = (EVP_PKEY *)0x0;
  if ((key != (X509_PUBKEY *)0x0) && (key->public_key != (ASN1_BIT_STRING *)0x0)) {
    pEVar1 = key->pkey;
                    /* try { // try from 00b66704 to 00c6670b has its CatchHandler @ 00b66a28 */
    if (pEVar1 != (EVP_PKEY *)0x0) {
                    /* try { // try from 00b6670c to 00c6671b has its CatchHandler @ 00b669a8 */
      EVP_PKEY_up_ref(pEVar1);
      return pEVar1;
    }
                    /* try { // try from 00b6671c to 00c6672f has its CatchHandler @ 00b66984 */
    FUN_00b665e4(&local_18,key);
    pEVar1 = local_18;
    if (local_18 != (EVP_PKEY *)0x0) {
      ERR_put_error(0xb,0x77,0x44,"crypto/x509/x_pubkey.c",0xa1);
      EVP_PKEY_free(pEVar1);
    }
  }
  return (EVP_PKEY *)0x0;
}

