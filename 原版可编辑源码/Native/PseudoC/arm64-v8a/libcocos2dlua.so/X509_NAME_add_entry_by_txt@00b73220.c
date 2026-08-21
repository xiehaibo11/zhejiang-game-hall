
int X509_NAME_add_entry_by_txt
              (X509_NAME *name,char *field,int type,uchar *bytes,int len,int loc,int set)

{
  int iVar1;
  ASN1_OBJECT *o;
  X509_NAME_ENTRY *ne;
  ASN1_OBJECT *pAVar2;
  
  o = OBJ_txt2obj(field,0);
                    /* try { // try from 00b73260 to 00c73267 has its CatchHandler @ 00b738d4 */
  if (o == (ASN1_OBJECT *)0x0) {
    ERR_put_error(0xb,0x83,0x77,"crypto/x509/x509name.c",0xfa);
    ERR_add_error_data(2,"name=",field);
  }
  else {
                    /* try { // try from 00b73268 to 00c7332b has its CatchHandler @ 00b73094 */
    ne = X509_NAME_ENTRY_new();
    if (ne != (X509_NAME_ENTRY *)0x0) {
      ASN1_OBJECT_free(ne->object);
      pAVar2 = OBJ_dup(o);
      ne->object = pAVar2;
      if ((pAVar2 != (ASN1_OBJECT *)0x0) &&
         (iVar1 = X509_NAME_ENTRY_set_data(ne,type,bytes,len), iVar1 != 0)) {
        ASN1_OBJECT_free(o);
        iVar1 = X509_NAME_add_entry(name,ne,loc,set);
        X509_NAME_ENTRY_free(ne);
        return iVar1;
      }
      X509_NAME_ENTRY_free(ne);
    }
    ASN1_OBJECT_free(o);
  }
                    /* try { // try from 00b7332c to 00c7332f has its CatchHandler @ 00b738dc */
                    /* try { // try from 00b73330 to 00c736bb has its CatchHandler @ 00b73094 */
  return 0;
}

