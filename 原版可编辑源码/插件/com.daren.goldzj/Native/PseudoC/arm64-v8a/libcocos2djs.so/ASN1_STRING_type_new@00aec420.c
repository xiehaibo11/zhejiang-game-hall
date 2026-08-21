
ASN1_STRING * ASN1_STRING_type_new(int type)

{
  ASN1_STRING *pAVar1;
  
  pAVar1 = (ASN1_STRING *)CRYPTO_zalloc(0x18,"crypto/asn1/asn1_lib.c",0x135);
  if (pAVar1 == (ASN1_STRING *)0x0) {
    ERR_put_error(0xd,0x82,0x41,"crypto/asn1/asn1_lib.c",0x137);
    pAVar1 = (ASN1_STRING *)0x0;
  }
  else {
    pAVar1->type = type;
  }
  return pAVar1;
}

