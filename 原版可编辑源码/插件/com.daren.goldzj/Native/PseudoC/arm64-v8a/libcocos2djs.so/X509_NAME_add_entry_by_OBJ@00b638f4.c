
int X509_NAME_add_entry_by_OBJ
              (X509_NAME *name,ASN1_OBJECT *obj,int type,uchar *bytes,int len,int loc,int set)

{
  int iVar1;
  X509_NAME_ENTRY *ne;
  ASN1_OBJECT *pAVar2;
  
  ne = X509_NAME_ENTRY_new();
  if (ne != (X509_NAME_ENTRY *)0x0) {
    if (obj == (ASN1_OBJECT *)0x0) {
      ERR_put_error(0xb,0x73,0x43,"crypto/x509/x509name.c",0x134);
    }
    else {
      ASN1_OBJECT_free(ne->object);
      pAVar2 = OBJ_dup(obj);
      ne->object = pAVar2;
      if ((pAVar2 != (ASN1_OBJECT *)0x0) &&
         (iVar1 = X509_NAME_ENTRY_set_data(ne,type,bytes,len), iVar1 != 0)) {
        iVar1 = X509_NAME_add_entry(name,ne,loc,set);
        X509_NAME_ENTRY_free(ne);
        return iVar1;
      }
    }
    X509_NAME_ENTRY_free(ne);
  }
  return 0;
}

