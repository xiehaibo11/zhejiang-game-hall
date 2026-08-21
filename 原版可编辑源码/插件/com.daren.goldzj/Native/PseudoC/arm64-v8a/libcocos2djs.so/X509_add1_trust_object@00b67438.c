
int X509_add1_trust_object(X509 *x,ASN1_OBJECT *obj)

{
  int iVar1;
  ASN1_OBJECT *a;
  ASN1_OCTET_STRING *pAVar2;
  AUTHORITY_KEYID *pAVar3;
  
  if (obj == (ASN1_OBJECT *)0x0) {
    a = (ASN1_OBJECT *)0x0;
  }
  else {
    a = OBJ_dup(obj);
    if (a == (ASN1_OBJECT *)0x0) {
      return 0;
    }
  }
  if (x != (X509 *)0x0) {
    pAVar3 = x[1].akid;
    if (pAVar3 == (AUTHORITY_KEYID *)0x0) {
      pAVar3 = (AUTHORITY_KEYID *)ASN1_item_new((ASN1_ITEM *)X509_CERT_AUX_it);
                    /* try { // try from 00b6747c to 00c67483 has its CatchHandler @ 00b67488 */
      x[1].akid = pAVar3;
      if (pAVar3 == (AUTHORITY_KEYID *)0x0) goto LAB_00b674b8;
    }
                    /* try { // try from 00b67484 to 00c674f7 has its CatchHandler @ 00b6727c */
    pAVar2 = pAVar3->keyid;
                    /* catch() { ... } // from try @ 00b6747c with catch @ 00b67488 */
    if (pAVar2 == (ASN1_OCTET_STRING *)0x0) {
                    /* catch() { ... } // from try @ 00b67348 with catch @ 00b6748c */
      pAVar2 = (ASN1_OCTET_STRING *)OPENSSL_sk_new_null();
      pAVar3->keyid = pAVar2;
      if (pAVar2 == (ASN1_OCTET_STRING *)0x0) goto LAB_00b674b8;
    }
    if ((a == (ASN1_OBJECT *)0x0) || (iVar1 = OPENSSL_sk_push(pAVar2,a), iVar1 != 0)) {
      return 1;
    }
  }
LAB_00b674b8:
  ASN1_OBJECT_free(a);
  return 0;
}

