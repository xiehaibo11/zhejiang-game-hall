
ASN1_BIT_STRING * X509_get0_pubkey_bitstr(X509 *x)

{
  ASN1_BIT_STRING *pAVar1;
  
  pAVar1 = (ASN1_BIT_STRING *)0x0;
  if (x != (X509 *)0x0) {
    pAVar1 = *(ASN1_BIT_STRING **)(x->ex_kusage + 8);
  }
  return pAVar1;
}

