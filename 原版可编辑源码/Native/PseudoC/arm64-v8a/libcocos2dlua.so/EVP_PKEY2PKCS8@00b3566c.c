
PKCS8_PRIV_KEY_INFO * EVP_PKEY2PKCS8(EVP_PKEY *pkey)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *a;
  int line;
  code *pcVar2;
  
  a = PKCS8_PRIV_KEY_INFO_new();
  if (a == (PKCS8_PRIV_KEY_INFO *)0x0) {
    ERR_put_error(6,0x71,0x41,"crypto/evp/evp_pkey.c",0x41);
  }
  else {
    if (pkey->ameth == (EVP_PKEY_ASN1_METHOD *)0x0) {
      iVar1 = 0x76;
      line = 0x50;
    }
    else {
      pcVar2 = *(code **)(pkey->ameth + 0x48);
      if (pcVar2 == (code *)0x0) {
        iVar1 = 0x90;
        line = 0x4c;
      }
      else {
        iVar1 = (*pcVar2)(a,pkey);
        if (iVar1 != 0) {
          RAND_add(a->pkeyalg->parameter,*(int *)&a->pkeyalg->algorithm,0.0);
          return a;
        }
        iVar1 = 0x92;
        line = 0x48;
      }
    }
    ERR_put_error(6,0x71,iVar1,"crypto/evp/evp_pkey.c",line);
    PKCS8_PRIV_KEY_INFO_free(a);
  }
  return (PKCS8_PRIV_KEY_INFO *)0x0;
}

