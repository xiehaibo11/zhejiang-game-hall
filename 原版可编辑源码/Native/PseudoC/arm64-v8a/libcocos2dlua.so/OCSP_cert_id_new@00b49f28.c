
OCSP_CERTID *
OCSP_cert_id_new(EVP_MD *dgst,X509_NAME *issuerName,ASN1_BIT_STRING *issuerKey,
                ASN1_INTEGER *serialNumber)

{
  int iVar1;
  OCSP_CERTID *a;
  ASN1_OBJECT *pAVar2;
  ASN1_OCTET_STRING *pAVar3;
  int line;
  uchar auStack_80 [64];
  uint local_34;
  
  a = OCSP_CERTID_new();
  if (a == (OCSP_CERTID *)0x0) goto LAB_00b4a024;
  ASN1_OBJECT_free((ASN1_OBJECT *)a->hashAlgorithm);
  iVar1 = EVP_MD_type(dgst);
  if (iVar1 == 0) {
    iVar1 = 0x78;
    line = 0x3a;
  }
  else {
    pAVar2 = OBJ_nid2obj(iVar1);
    a->hashAlgorithm = (X509_ALGOR *)pAVar2;
    if (pAVar2 == (ASN1_OBJECT *)0x0) goto LAB_00b4a024;
    pAVar3 = (ASN1_OCTET_STRING *)ASN1_TYPE_new();
    a->issuerNameHash = pAVar3;
    if (pAVar3 == (ASN1_OCTET_STRING *)0x0) goto LAB_00b4a024;
    pAVar3->length = 5;
    iVar1 = X509_NAME_digest(issuerName,dgst,auStack_80,&local_34);
    if (iVar1 != 0) {
      iVar1 = ASN1_OCTET_STRING_set((ASN1_STRING *)&a->issuerKeyHash,auStack_80,local_34);
      if (((iVar1 != 0) &&
          (iVar1 = EVP_Digest(issuerKey->data,(long)issuerKey->length,auStack_80,&local_34,dgst,
                              (ENGINE *)0x0), iVar1 != 0)) &&
         (iVar1 = ASN1_OCTET_STRING_set((ASN1_STRING *)&a[1].issuerNameHash,auStack_80,local_34),
         iVar1 != 0)) {
        if (serialNumber == (ASN1_INTEGER *)0x0) {
          return a;
        }
        iVar1 = ASN1_STRING_copy((ASN1_STRING *)(a + 2),serialNumber);
        if (iVar1 != 0) {
          return a;
        }
      }
      goto LAB_00b4a024;
    }
    iVar1 = 0x66;
    line = 0x55;
  }
  ERR_put_error(0x27,0x65,iVar1,"crypto/ocsp/ocsp_lib.c",line);
LAB_00b4a024:
  OCSP_CERTID_free(a);
  return (OCSP_CERTID *)0x0;
}

