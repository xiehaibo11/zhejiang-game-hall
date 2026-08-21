
EVP_PKEY_ASN1_METHOD * EVP_PKEY_asn1_get0(int idx)

{
  EVP_PKEY_ASN1_METHOD *pEVar1;
  
  if (idx < 0) {
    return (EVP_PKEY_ASN1_METHOD *)0x0;
  }
  if (idx < 0xd) {
    return (EVP_PKEY_ASN1_METHOD *)(&PTR_rsa_asn1_meths_0176e2f0)[idx];
  }
  pEVar1 = (EVP_PKEY_ASN1_METHOD *)OPENSSL_sk_value(DAT_01782dc8,idx + -0xd);
  return pEVar1;
}

