
EVP_PKEY * X509_PUBKEY_get(X509_PUBKEY *key)

{
  EVP_PKEY *pEVar1;
  EVP_PKEY *local_18;
  
  local_18 = (EVP_PKEY *)0x0;
  if ((key != (X509_PUBKEY *)0x0) && (key->public_key != (ASN1_BIT_STRING *)0x0)) {
    pEVar1 = key->pkey;
    if (pEVar1 != (EVP_PKEY *)0x0) {
      EVP_PKEY_up_ref(pEVar1);
      return pEVar1;
    }
    FUN_00b75a64(&local_18,key);
    pEVar1 = local_18;
    if (local_18 != (EVP_PKEY *)0x0) {
      ERR_put_error(0xb,0x77,0x44,"crypto/x509/x_pubkey.c",0xa1);
      EVP_PKEY_free(pEVar1);
    }
  }
  return (EVP_PKEY *)0x0;
}

