
int X509_NAME_add_entry_by_NID
              (X509_NAME *name,int nid,int type,uchar *bytes,int len,int loc,int set)

{
  int iVar1;
  ASN1_OBJECT *o;
  X509_NAME_ENTRY *ne;
  ASN1_OBJECT *pAVar2;
  
                    /* try { // try from 00b63c28 to 00c63c33 has its CatchHandler @ 00b640e0 */
                    /* try { // try from 00b63c34 to 00c63c9b has its CatchHandler @ 00b63af8 */
  o = OBJ_nid2obj(nid);
  if (o == (ASN1_OBJECT *)0x0) {
    ERR_put_error(0xb,0x72,0x6d,"crypto/x509/x509name.c",0x10d);
  }
  else {
    ne = X509_NAME_ENTRY_new();
    if (ne != (X509_NAME_ENTRY *)0x0) {
      ASN1_OBJECT_free(ne->object);
      pAVar2 = OBJ_dup(o);
      ne->object = pAVar2;
      if ((pAVar2 != (ASN1_OBJECT *)0x0) &&
         (iVar1 = X509_NAME_ENTRY_set_data(ne,type,bytes,len), iVar1 != 0)) {
        ASN1_OBJECT_free(o);
                    /* try { // try from 00b63c9c to 00c63ca7 has its CatchHandler @ 00b6411c */
                    /* try { // try from 00b63ca8 to 00c63cb7 has its CatchHandler @ 00b6410c */
        iVar1 = X509_NAME_add_entry(name,ne,loc,set);
        X509_NAME_ENTRY_free(ne);
        return iVar1;
      }
      X509_NAME_ENTRY_free(ne);
    }
    ASN1_OBJECT_free(o);
  }
  return 0;
}

