
ASN1_OCTET_STRING * PKCS7_digest_from_attributes(stack_st_X509_ATTRIBUTE *sk)

{
  int loc;
  X509_ATTRIBUTE *attr;
  ASN1_TYPE *pAVar1;
  ASN1_OCTET_STRING *pAVar2;
  
  loc = X509at_get_attr_by_NID(sk,0x33,-1);
  attr = X509at_get_attr(sk,loc);
  pAVar1 = X509_ATTRIBUTE_get0_type(attr,0);
  pAVar2 = (ASN1_OCTET_STRING *)0x0;
  if (pAVar1 != (ASN1_TYPE *)0x0) {
    pAVar2 = (ASN1_OCTET_STRING *)(pAVar1->value).ptr;
  }
  return pAVar2;
}

