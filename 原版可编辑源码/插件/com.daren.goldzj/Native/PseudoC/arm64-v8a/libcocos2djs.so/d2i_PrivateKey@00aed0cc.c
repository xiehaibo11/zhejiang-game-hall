
EVP_PKEY * d2i_PrivateKey(int type,EVP_PKEY **a,uchar **pp,long length)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *p8;
  EVP_PKEY *pEVar2;
  int line;
  EVP_PKEY_ASN1_METHOD *pEVar3;
  EVP_PKEY *pkey;
  uchar *local_38;
  
  local_38 = *pp;
                    /* catch() { ... } // from try @ 00aed134 with catch @ 00aed0f0 */
  if ((a == (EVP_PKEY **)0x0) || (pkey = *a, pkey == (EVP_PKEY *)0x0)) {
                    /* try { // try from 00aed114 to 00bed133 has its CatchHandler @ 00aed178 */
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_put_error(0xd,0x9a,6,"crypto/asn1/d2i_pr.c",0x1d);
      return (EVP_PKEY *)0x0;
    }
  }
  else {
                    /* try { // try from 00aed104 to 00bed107 has its CatchHandler @ 00aed16c */
    ENGINE_finish(pkey->engine);
    pkey->engine = (ENGINE *)0x0;
  }
  iVar1 = EVP_PKEY_set_type(pkey,type);
  if (iVar1 == 0) {
    iVar1 = 0xa3;
    line = 0x29;
  }
  else {
    pEVar3 = pkey->ameth;
                    /* try { // try from 00aed134 to 00bed1a7 has its CatchHandler @ 00aed0f0 */
    if (*(code **)(pEVar3 + 0xb8) != (code *)0x0) {
      iVar1 = (**(code **)(pEVar3 + 0xb8))(pkey,&local_38,length & 0xffffffff);
      pEVar2 = pkey;
      if (iVar1 != 0) goto LAB_00aed198;
      pEVar3 = pkey->ameth;
    }
    if (*(long *)(pEVar3 + 0x40) != 0) {
      p8 = d2i_PKCS8_PRIV_KEY_INFO((PKCS8_PRIV_KEY_INFO **)0x0,&local_38,length);
                    /* catch() { ... } // from try @ 00aed104 with catch @ 00aed16c */
      if (p8 != (PKCS8_PRIV_KEY_INFO *)0x0) {
                    /* catch() { ... } // from try @ 00aed114 with catch @ 00aed178 */
        pEVar2 = EVP_PKCS82PKEY(p8);
        PKCS8_PRIV_KEY_INFO_free(p8);
        if (pEVar2 != (EVP_PKEY *)0x0) {
          EVP_PKEY_free(pkey);
LAB_00aed198:
          *pp = local_38;
          if (a == (EVP_PKEY **)0x0) {
            return pEVar2;
          }
          *a = pEVar2;
          return pEVar2;
        }
      }
      goto LAB_00aed204;
    }
    iVar1 = 0xd;
    line = 0x3c;
  }
  ERR_put_error(0xd,0x9a,iVar1,"crypto/asn1/d2i_pr.c",line);
LAB_00aed204:
  if ((a == (EVP_PKEY **)0x0) || (*a != pkey)) {
    EVP_PKEY_free(pkey);
  }
  return (EVP_PKEY *)0x0;
}

