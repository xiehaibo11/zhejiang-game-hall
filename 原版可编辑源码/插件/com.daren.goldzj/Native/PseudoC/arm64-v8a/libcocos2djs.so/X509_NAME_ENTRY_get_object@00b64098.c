
ASN1_OBJECT * X509_NAME_ENTRY_get_object(X509_NAME_ENTRY *ne)

{
  ASN1_OBJECT *pAVar1;
  
  pAVar1 = (ASN1_OBJECT *)0x0;
  if (ne != (X509_NAME_ENTRY *)0x0) {
    pAVar1 = ne->object;
  }
  return pAVar1;
}

