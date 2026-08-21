
int PKCS7_add_signer(PKCS7 *p7,PKCS7_SIGNER_INFO *p7i)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  X509_ALGOR *a;
  ASN1_TYPE *pAVar5;
  ASN1_OBJECT *pAVar6;
  stack_st_PKCS7_SIGNER_INFO *psVar7;
  stack_st_X509_ALGOR *psVar8;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if ((iVar1 == 0x18) || (iVar1 == 0x16)) {
    psVar8 = ((p7->d).sign)->md_algs;
    psVar7 = ((p7->d).sign)->signer_info;
    iVar1 = OBJ_obj2nid(p7i->digest_alg->algorithm);
    iVar2 = OPENSSL_sk_num(psVar8);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        puVar4 = (undefined8 *)OPENSSL_sk_value(psVar8,iVar2);
        iVar3 = OBJ_obj2nid((ASN1_OBJECT *)*puVar4);
        if (iVar3 == iVar1) goto LAB_00b453b4;
        iVar2 = iVar2 + 1;
        iVar3 = OPENSSL_sk_num(psVar8);
      } while (iVar2 < iVar3);
    }
    a = X509_ALGOR_new();
    if (a != (X509_ALGOR *)0x0) {
      pAVar5 = ASN1_TYPE_new();
      a->parameter = pAVar5;
      if (pAVar5 != (ASN1_TYPE *)0x0) {
        pAVar6 = OBJ_nid2obj(iVar1);
        a->algorithm = pAVar6;
        a->parameter->type = 5;
        iVar1 = OPENSSL_sk_push(psVar8,a);
        if (iVar1 == 0) {
          X509_ALGOR_free(a);
          return 0;
        }
LAB_00b453b4:
        iVar1 = OPENSSL_sk_push(psVar7,p7i);
        return (uint)(iVar1 != 0);
      }
    }
    X509_ALGOR_free(a);
    ERR_put_error(0x21,0x67,0x41,"crypto/pkcs7/pk7_lib.c",0xdf);
  }
  else {
    ERR_put_error(0x21,0x67,0x71,"crypto/pkcs7/pk7_lib.c",0xcc);
  }
  return 0;
}

