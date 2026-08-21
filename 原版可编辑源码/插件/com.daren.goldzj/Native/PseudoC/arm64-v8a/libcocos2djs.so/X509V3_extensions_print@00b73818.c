
int X509V3_extensions_print
              (BIO *out,char *title,stack_st_X509_EXTENSION *exts,ulong flag,int indent)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  X509_EXTENSION *pXVar5;
  ASN1_OBJECT *pAVar6;
  ASN1_OCTET_STRING *pAVar7;
  ulong uVar8;
  
  uVar8 = (ulong)(uint)indent;
  iVar3 = OPENSSL_sk_num(exts);
  if (0 < iVar3) {
    if (title != (char *)0x0) {
      BIO_printf(out,"%*s%s:\n",uVar8,&DAT_0189703a,title);
      uVar8 = (ulong)(indent + 4);
    }
    iVar3 = OPENSSL_sk_num(exts);
    if (0 < iVar3) {
      uVar1 = (int)uVar8 + 4;
      if ((int)uVar8 == 0) {
        do {
          pXVar5 = (X509_EXTENSION *)OPENSSL_sk_value(exts,uVar8);
          pAVar6 = X509_EXTENSION_get_object(pXVar5);
          i2a_ASN1_OBJECT(out,pAVar6);
          iVar3 = X509_EXTENSION_get_critical(pXVar5);
          pcVar2 = "critical";
          if (iVar3 == 0) {
            pcVar2 = "";
          }
          iVar3 = BIO_printf(out,": %s\n",pcVar2);
          if (iVar3 < 1) {
            return 0;
          }
          iVar3 = X509V3_EXT_print(out,pXVar5,flag,4);
          if (iVar3 == 0) {
            BIO_printf(out,"%*s",4,&DAT_0189703a);
            pAVar7 = X509_EXTENSION_get_data(pXVar5);
            ASN1_STRING_print(out,pAVar7);
          }
          iVar3 = BIO_write(out,&DAT_018938a8,1);
          if (iVar3 < 1) {
            return 0;
          }
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar1;
          iVar3 = OPENSSL_sk_num(exts);
        } while ((int)uVar1 < iVar3);
      }
      else {
        iVar3 = 0;
        do {
          pXVar5 = (X509_EXTENSION *)OPENSSL_sk_value(exts,iVar3);
          iVar4 = BIO_printf(out,"%*s",uVar8,&DAT_0189703a);
          if (iVar4 < 1) {
            return 0;
          }
          pAVar6 = X509_EXTENSION_get_object(pXVar5);
          i2a_ASN1_OBJECT(out,pAVar6);
          iVar4 = X509_EXTENSION_get_critical(pXVar5);
          pcVar2 = "critical";
          if (iVar4 == 0) {
            pcVar2 = "";
          }
          iVar4 = BIO_printf(out,": %s\n",pcVar2);
          if (iVar4 < 1) {
            return 0;
          }
          iVar4 = X509V3_EXT_print(out,pXVar5,flag,uVar1);
          if (iVar4 == 0) {
            BIO_printf(out,"%*s",(ulong)uVar1,&DAT_0189703a);
            pAVar7 = X509_EXTENSION_get_data(pXVar5);
            ASN1_STRING_print(out,pAVar7);
          }
          iVar4 = BIO_write(out,&DAT_018938a8,1);
          if (iVar4 < 1) {
            return 0;
          }
          iVar3 = iVar3 + 1;
          iVar4 = OPENSSL_sk_num(exts);
        } while (iVar3 < iVar4);
      }
    }
  }
  return 1;
}

