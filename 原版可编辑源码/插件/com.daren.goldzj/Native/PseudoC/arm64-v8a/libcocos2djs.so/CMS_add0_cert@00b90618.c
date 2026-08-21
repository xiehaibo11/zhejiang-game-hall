
int CMS_add0_cert(CMS_ContentInfo *cms,X509 *cert)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  CMS_CertificateChoices *pCVar4;
  int line;
  undefined8 *puVar5;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar1 == 0x17) {
    puVar5 = *(undefined8 **)(*(long *)(cms + 8) + 8);
    if (puVar5 != (undefined8 *)0x0) goto LAB_00b90660;
  }
  else {
    if (iVar1 == 0x16) {
      puVar5 = (undefined8 *)(*(long *)(cms + 8) + 0x18);
LAB_00b90660:
      iVar1 = OPENSSL_sk_num(*puVar5);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          piVar3 = (int *)OPENSSL_sk_value(*puVar5,iVar1);
          if ((*piVar3 == 0) && (iVar2 = X509_cmp(*(X509 **)(piVar3 + 2),cert), iVar2 == 0)) {
            iVar1 = 0xa4;
            iVar2 = 0xaf;
            line = 0x18a;
            goto LAB_00b906fc;
          }
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(*puVar5);
        } while (iVar1 < iVar2);
      }
      pCVar4 = CMS_add0_CertificateChoices(cms);
      if (pCVar4 == (CMS_CertificateChoices *)0x0) {
        return 0;
      }
      *(undefined4 *)pCVar4 = 0;
      *(X509 **)(pCVar4 + 8) = cert;
      return 1;
    }
    iVar1 = 0x80;
    iVar2 = 0x98;
    line = 0x162;
LAB_00b906fc:
    ERR_put_error(0x2e,iVar1,iVar2,"crypto/cms/cms_lib.c",line);
  }
  return 0;
}

