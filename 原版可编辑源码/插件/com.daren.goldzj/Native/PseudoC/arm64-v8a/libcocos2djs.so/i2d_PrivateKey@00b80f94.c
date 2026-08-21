
int i2d_PrivateKey(EVP_PKEY *a,uchar **pp)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *a_00;
  EVP_PKEY_ASN1_METHOD *pEVar2;
  
  pEVar2 = a->ameth;
  if (pEVar2 != (EVP_PKEY_ASN1_METHOD *)0x0) {
    if (*(code **)(pEVar2 + 0xc0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b80fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar1 = (**(code **)(pEVar2 + 0xc0))(a,pp);
      return iVar1;
    }
    if (*(long *)(pEVar2 + 0x48) != 0) {
      a_00 = EVP_PKEY2PKCS8(a);
      if (a_00 == (PKCS8_PRIV_KEY_INFO *)0x0) {
        return 0;
      }
      iVar1 = i2d_PKCS8_PRIV_KEY_INFO(a_00,pp);
      PKCS8_PRIV_KEY_INFO_free(a_00);
      return iVar1;
    }
  }
  ERR_put_error(0xd,0xa3,0xa7,"crypto/asn1/i2d_pr.c",0x1f);
  return -1;
}

