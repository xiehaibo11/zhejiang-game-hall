
X509_ATTRIBUTE * X509_ATTRIBUTE_create(int nid,int atrtype,void *value)

{
  int iVar1;
  X509_ATTRIBUTE *val;
  ASN1_OBJECT *pAVar2;
  ASN1_TYPE *a;
  
  val = (X509_ATTRIBUTE *)ASN1_item_new((ASN1_ITEM *)X509_ATTRIBUTE_it);
  if (val != (X509_ATTRIBUTE *)0x0) {
    pAVar2 = OBJ_nid2obj(nid);
                    /* catch() { ... } // from try @ 00b64de4 with catch @ 00b64e4c */
    val->object = pAVar2;
                    /* catch() { ... } // from try @ 00b64da4 with catch @ 00b64e50 */
    a = ASN1_TYPE_new();
    if ((a == (ASN1_TYPE *)0x0) ||
       (iVar1 = OPENSSL_sk_push(*(undefined8 *)&val->single,a), iVar1 == 0)) {
      ASN1_item_free((ASN1_VALUE *)val,(ASN1_ITEM *)X509_ATTRIBUTE_it);
      ASN1_TYPE_free(a);
      val = (X509_ATTRIBUTE *)0x0;
    }
    else {
      ASN1_TYPE_set(a,atrtype,value);
    }
  }
  return val;
}

