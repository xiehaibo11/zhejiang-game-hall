
X509_EXTENSION *
X509_EXTENSION_create_by_NID(X509_EXTENSION **ex,int nid,int crit,ASN1_OCTET_STRING *data)

{
  ASN1_OBJECT *obj;
  X509_EXTENSION *pXVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b5e0d8 with catch @ 00b5e1e8
                        */
  obj = OBJ_nid2obj(nid);
  if (obj == (ASN1_OBJECT *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b5df44 with catch @ 00b5e230
                        */
                    /* try { // try from 00b5e234 to 00c5e2cf has its CatchHandler @ 00b5e234
                       catch() { ... } // from try @ 00b5e234 with catch @ 00b5e234
                       catch() { ... } // from try @ 00b5e2d8 with catch @ 00b5e234
                       catch() { ... } // from try @ 00b5e364 with catch @ 00b5e234
                       catch() { ... } // from try @ 00b5e3c0 with catch @ 00b5e234 */
    ERR_put_error(0xb,0x6c,0x6d,"crypto/x509/x509_v3.c",0x90);
  }
  else {
    pXVar1 = X509_EXTENSION_create_by_OBJ(ex,obj,crit,data);
    if (pXVar1 != (X509_EXTENSION *)0x0) {
      return pXVar1;
    }
    ASN1_OBJECT_free(obj);
  }
  return (X509_EXTENSION *)0x0;
}

