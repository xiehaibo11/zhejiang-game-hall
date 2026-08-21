
bool FUN_00b6e640(X509_CRL *param_1,X509_CRL *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  X509_EXTENSION *pXVar4;
  ASN1_OCTET_STRING *a;
  ASN1_OCTET_STRING *b;
  
  iVar2 = X509_CRL_get_ext_by_NID(param_1,param_3,-1);
  if (iVar2 < 0) {
    a = (ASN1_STRING *)0x0;
LAB_00b6e6a4:
    iVar2 = X509_CRL_get_ext_by_NID(param_2,param_3,-1);
    if (iVar2 < 0) {
      b = (ASN1_STRING *)0x0;
      if (a != (ASN1_STRING *)0x0) {
LAB_00b6e6e8:
        if (a == (ASN1_STRING *)0x0) {
          return false;
        }
        if (b == (ASN1_STRING *)0x0) {
          return false;
        }
        iVar2 = ASN1_OCTET_STRING_cmp(a,b);
        return iVar2 == 0;
      }
    }
    else {
      iVar3 = X509_CRL_get_ext_by_NID(param_2,param_3,iVar2);
      if (iVar3 != -1) goto LAB_00b6e6d4;
      pXVar4 = X509_CRL_get_ext(param_2,iVar2);
      b = X509_EXTENSION_get_data(pXVar4);
      if (a != (ASN1_STRING *)0x0 || b != (ASN1_OCTET_STRING *)0x0) goto LAB_00b6e6e8;
    }
    bVar1 = true;
  }
  else {
    iVar3 = X509_CRL_get_ext_by_NID(param_1,param_3,iVar2);
    if (iVar3 == -1) {
      pXVar4 = X509_CRL_get_ext(param_1,iVar2);
      a = X509_EXTENSION_get_data(pXVar4);
      goto LAB_00b6e6a4;
    }
LAB_00b6e6d4:
    bVar1 = false;
  }
  return bVar1;
}

