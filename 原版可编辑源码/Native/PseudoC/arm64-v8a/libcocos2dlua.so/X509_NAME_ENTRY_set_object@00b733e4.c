
int X509_NAME_ENTRY_set_object(X509_NAME_ENTRY *ne,ASN1_OBJECT *obj)

{
  uint uVar1;
  ASN1_OBJECT *pAVar2;
  
  if ((ne == (X509_NAME_ENTRY *)0x0) || (obj == (ASN1_OBJECT *)0x0)) {
    ERR_put_error(0xb,0x73,0x43,"crypto/x509/x509name.c",0x134);
    uVar1 = 0;
  }
  else {
    ASN1_OBJECT_free(ne->object);
    pAVar2 = OBJ_dup(obj);
    ne->object = pAVar2;
    uVar1 = (uint)(pAVar2 != (ASN1_OBJECT *)0x0);
  }
  return uVar1;
}

