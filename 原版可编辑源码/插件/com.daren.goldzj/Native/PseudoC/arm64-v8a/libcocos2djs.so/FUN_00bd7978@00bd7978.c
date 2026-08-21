
AUTHORITY_KEYID * FUN_00bd7978(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  X509_EXTENSION *ext;
  ASN1_STRING *a;
  ASN1_INTEGER *a_00;
  AUTHORITY_KEYID *pAVar5;
  GENERAL_NAMES *pGVar6;
  GENERAL_NAME *a_01;
  int iVar7;
  X509 *x;
  ASN1_STRING *a_02;
  X509_NAME *pXVar8;
  char *__s1;
  
  iVar1 = OPENSSL_sk_num(param_3);
  if (iVar1 < 1) {
    iVar1 = 0;
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    iVar1 = 0;
    iVar3 = 0;
    do {
      lVar4 = OPENSSL_sk_value(param_3,iVar3);
      __s1 = *(char **)(lVar4 + 8);
      iVar2 = strcmp(__s1,"keyid");
      if (iVar2 == 0) {
        if (*(char **)(lVar4 + 0x10) == (char *)0x0) {
          iVar7 = 1;
        }
        else {
          iVar2 = strcmp(*(char **)(lVar4 + 0x10),"always");
          iVar7 = 1;
          if (iVar2 == 0) {
            iVar7 = 2;
          }
        }
      }
      else {
        iVar1 = strcmp(__s1,"issuer");
        if (iVar1 != 0) {
          ERR_put_error(0x22,0x77,0x78,"crypto/x509v3/v3_akey.c",0x5e);
          ERR_add_error_data(2,"name=",*(undefined8 *)(lVar4 + 8));
          return (AUTHORITY_KEYID *)0x0;
        }
        if (*(char **)(lVar4 + 0x10) == (char *)0x0) {
          iVar1 = 1;
        }
        else {
          iVar2 = strcmp(*(char **)(lVar4 + 0x10),"always");
          iVar1 = 1;
          if (iVar2 == 0) {
            iVar1 = 2;
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = OPENSSL_sk_num(param_3);
    } while (iVar3 < iVar2);
  }
  if (param_2 != (int *)0x0) {
    x = *(X509 **)(param_2 + 2);
    if (x != (X509 *)0x0) {
      if (iVar7 == 0) {
        a = (ASN1_STRING *)0x0;
      }
      else {
        iVar3 = X509_get_ext_by_NID(x,0x52,-1);
        if ((iVar3 < 0) || (ext = X509_get_ext(x,iVar3), ext == (X509_EXTENSION *)0x0)) {
          a = (ASN1_STRING *)0x0;
        }
        else {
          a = X509V3_EXT_d2i(ext);
        }
        if ((iVar7 == 2) && (a == (ASN1_STRING *)0x0)) {
          iVar1 = 0x7b;
          iVar7 = 0x74;
          goto LAB_00bd7b40;
        }
      }
      if ((iVar1 == 2) || (iVar1 != 0 && a == (ASN1_STRING *)0x0)) {
        pXVar8 = X509_get_issuer_name(x);
        pXVar8 = X509_NAME_dup(pXVar8);
        a_00 = X509_get_serialNumber(x);
        a_02 = ASN1_INTEGER_dup(a_00);
        if ((pXVar8 != (X509_NAME *)0x0) && (a_02 != (ASN1_STRING *)0x0)) goto LAB_00bd7bd8;
        ERR_put_error(0x22,0x77,0x7a,"crypto/x509v3/v3_akey.c",0x7e);
      }
      else {
        pXVar8 = (X509_NAME *)0x0;
        a_02 = (ASN1_STRING *)0x0;
LAB_00bd7bd8:
        pAVar5 = AUTHORITY_KEYID_new();
        if (pAVar5 != (AUTHORITY_KEYID *)0x0) {
          if (pXVar8 == (X509_NAME *)0x0) {
            pGVar6 = (GENERAL_NAMES *)0x0;
LAB_00bd7c4c:
            pAVar5->keyid = a;
            pAVar5->issuer = pGVar6;
            pAVar5->serial = a_02;
            return pAVar5;
          }
          pGVar6 = (GENERAL_NAMES *)OPENSSL_sk_new_null();
          if (pGVar6 == (GENERAL_NAMES *)0x0) {
            a_01 = (GENERAL_NAME *)0x0;
          }
          else {
            a_01 = GENERAL_NAME_new();
            if ((a_01 != (GENERAL_NAME *)0x0) && (iVar1 = OPENSSL_sk_push(pGVar6,a_01), iVar1 != 0))
            {
              a_01->type = 4;
              (a_01->d).directoryName = pXVar8;
              goto LAB_00bd7c4c;
            }
          }
          ERR_put_error(0x22,0x77,0x41,"crypto/x509v3/v3_akey.c",0x8a);
          goto LAB_00bd7c78;
        }
      }
      pGVar6 = (GENERAL_NAMES *)0x0;
      a_01 = (GENERAL_NAME *)0x0;
LAB_00bd7c78:
      OPENSSL_sk_free(pGVar6);
      GENERAL_NAME_free(a_01);
      X509_NAME_free(pXVar8);
      ASN1_INTEGER_free(a_02);
      ASN1_OCTET_STRING_free(a);
      return (AUTHORITY_KEYID *)0x0;
    }
    if (*param_2 == 1) {
      pAVar5 = AUTHORITY_KEYID_new();
      return pAVar5;
    }
  }
  iVar1 = 0x79;
  iVar7 = 0x68;
LAB_00bd7b40:
  ERR_put_error(0x22,0x77,iVar1,"crypto/x509v3/v3_akey.c",iVar7);
  return (AUTHORITY_KEYID *)0x0;
}

