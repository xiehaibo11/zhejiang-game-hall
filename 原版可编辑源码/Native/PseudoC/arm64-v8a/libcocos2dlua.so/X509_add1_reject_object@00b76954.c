
int X509_add1_reject_object(X509 *x,ASN1_OBJECT *obj)

{
  int iVar1;
  ASN1_OBJECT *a;
  GENERAL_NAMES *pGVar2;
  AUTHORITY_KEYID *pAVar3;
  
  a = OBJ_dup(obj);
  if (a == (ASN1_OBJECT *)0x0) {
    return 0;
  }
  if (x == (X509 *)0x0) {
LAB_00b769c4:
    ASN1_OBJECT_free(a);
    return 0;
  }
  pAVar3 = x[1].akid;
  if (pAVar3 == (AUTHORITY_KEYID *)0x0) {
    pAVar3 = (AUTHORITY_KEYID *)ASN1_item_new((ASN1_ITEM *)X509_CERT_AUX_it);
    x[1].akid = pAVar3;
    if (pAVar3 == (AUTHORITY_KEYID *)0x0) goto LAB_00b769c4;
  }
  pGVar2 = pAVar3->issuer;
  if (pGVar2 == (GENERAL_NAMES *)0x0) {
    pGVar2 = (GENERAL_NAMES *)OPENSSL_sk_new_null();
    pAVar3->issuer = pGVar2;
    if (pGVar2 == (GENERAL_NAMES *)0x0) goto LAB_00b769c4;
  }
  iVar1 = OPENSSL_sk_push(pGVar2,a);
  return iVar1;
}

