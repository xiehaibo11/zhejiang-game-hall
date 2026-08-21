
EVP_PKEY * d2i_AutoPrivateKey(EVP_PKEY **a,uchar **pp,long length)

{
  int iVar1;
  ASN1_SEQUENCE_ANY *pAVar2;
  PKCS8_PRIV_KEY_INFO *p8;
  EVP_PKEY *pEVar3;
  uchar *local_38;
  
  local_38 = *pp;
  pAVar2 = d2i_ASN1_SEQUENCE_ANY((ASN1_SEQUENCE_ANY **)0x0,&local_38,length);
  local_38 = *pp;
  iVar1 = OPENSSL_sk_num();
  if (iVar1 == 6) {
    iVar1 = 0x74;
  }
  else {
    iVar1 = OPENSSL_sk_num(pAVar2);
    if (iVar1 == 4) {
      iVar1 = 0x198;
    }
    else {
      iVar1 = OPENSSL_sk_num(pAVar2);
      if (iVar1 == 3) {
        p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_38,length);
        OPENSSL_sk_pop_free(pAVar2,ASN1_TYPE_free);
        if (p8 == (PKCS8_PRIV_KEY_INFO *)0x0) {
          ERR_put_error(0xd,0xcf,0xa7,"crypto/asn1/d2i_pr.c",0x6d);
          return (EVP_PKEY *)0x0;
        }
        pEVar3 = EVP_PKCS82PKEY(p8);
        PKCS8_PRIV_KEY_INFO_free(p8);
        if (pEVar3 == (EVP_PKEY *)0x0) {
          return (EVP_PKEY *)0x0;
        }
        *pp = local_38;
        if (a == (EVP_PKEY **)0x0) {
          return pEVar3;
        }
        *a = pEVar3;
        return pEVar3;
      }
      iVar1 = 6;
    }
  }
  OPENSSL_sk_pop_free(pAVar2,ASN1_TYPE_free);
  pEVar3 = d2i_PrivateKey(iVar1,a,pp,length);
  return pEVar3;
}

