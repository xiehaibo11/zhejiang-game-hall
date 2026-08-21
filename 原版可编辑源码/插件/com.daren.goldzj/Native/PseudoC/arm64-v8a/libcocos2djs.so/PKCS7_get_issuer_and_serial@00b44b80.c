
PKCS7_ISSUER_AND_SERIAL * PKCS7_get_issuer_and_serial(PKCS7 *p7,int idx)

{
  int iVar1;
  long lVar2;
  PKCS7_ISSUER_AND_SERIAL *pPVar3;
  stack_st_PKCS7_RECIP_INFO *psVar4;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if ((((iVar1 == 0x18) && ((p7->d).signed_and_enveloped != (PKCS7_SIGN_ENVELOPE *)0x0)) &&
      (psVar4 = ((p7->d).signed_and_enveloped)->recipientinfo,
      psVar4 != (stack_st_PKCS7_RECIP_INFO *)0x0)) && (iVar1 = OPENSSL_sk_num(psVar4), idx < iVar1))
  {
    lVar2 = OPENSSL_sk_value(psVar4,idx);
    pPVar3 = *(PKCS7_ISSUER_AND_SERIAL **)(lVar2 + 8);
  }
  else {
    pPVar3 = (PKCS7_ISSUER_AND_SERIAL *)0x0;
  }
  return pPVar3;
}

