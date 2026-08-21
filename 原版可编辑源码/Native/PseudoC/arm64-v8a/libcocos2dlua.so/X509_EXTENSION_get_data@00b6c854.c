
ASN1_OCTET_STRING * X509_EXTENSION_get_data(X509_EXTENSION *ne)

{
  ASN1_OCTET_STRING *pAVar1;
  
  pAVar1 = (ASN1_OCTET_STRING *)0x0;
  if (ne != (X509_EXTENSION *)0x0) {
    pAVar1 = (ASN1_OCTET_STRING *)&ne->value;
  }
  return pAVar1;
}

