
undefined8 FUN_00b5d824(int param_1,X509 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ASN1_OBJECT *pAVar3;
  undefined8 uVar4;
  AUTHORITY_KEYID *pAVar5;
  
  pAVar5 = param_2[1].akid;
  if (pAVar5 != (AUTHORITY_KEYID *)0x0) {
    if ((pAVar5->issuer != (GENERAL_NAMES *)0x0) && (iVar1 = OPENSSL_sk_num(), 0 < iVar1)) {
      if ((param_3 >> 4 & 1) == 0) {
        iVar1 = 0;
        do {
          pAVar3 = (ASN1_OBJECT *)OPENSSL_sk_value(pAVar5->issuer,iVar1);
          iVar2 = OBJ_obj2nid(pAVar3);
          if (iVar2 == param_1) {
            return 2;
          }
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(pAVar5->issuer);
        } while (iVar1 < iVar2);
      }
      else {
        iVar1 = 0;
        do {
          pAVar3 = (ASN1_OBJECT *)OPENSSL_sk_value(pAVar5->issuer,iVar1);
          iVar2 = OBJ_obj2nid(pAVar3);
          if (iVar2 == param_1) {
            return 2;
          }
          if (iVar2 == 0x38e) {
            return 2;
          }
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(pAVar5->issuer);
        } while (iVar1 < iVar2);
      }
    }
    if (pAVar5->keyid != (ASN1_OCTET_STRING *)0x0) {
      iVar1 = OPENSSL_sk_num();
      if (0 < iVar1) {
        if ((param_3 >> 4 & 1) == 0) {
          iVar1 = 0;
          do {
            pAVar3 = (ASN1_OBJECT *)OPENSSL_sk_value(pAVar5->keyid,iVar1);
            iVar2 = OBJ_obj2nid(pAVar3);
            if (iVar2 == param_1) goto LAB_00b5d984;
            iVar1 = iVar1 + 1;
            iVar2 = OPENSSL_sk_num(pAVar5->keyid);
          } while (iVar1 < iVar2);
        }
        else {
          iVar1 = 0;
          do {
            pAVar3 = (ASN1_OBJECT *)OPENSSL_sk_value(pAVar5->keyid,iVar1);
            iVar2 = OBJ_obj2nid(pAVar3);
            if ((iVar2 == param_1) || (iVar2 == 0x38e)) goto LAB_00b5d984;
            iVar1 = iVar1 + 1;
            iVar2 = OPENSSL_sk_num(pAVar5->keyid);
          } while (iVar1 < iVar2);
        }
      }
      return 2;
    }
  }
  if ((((param_3 >> 3 & 1) == 0) || (X509_check_purpose(param_2,-1,0), (param_3 >> 2 & 1) != 0)) ||
     ((*(byte *)((long)&param_2[1].sig_alg + 1) >> 5 & 1) == 0)) {
    uVar4 = 3;
  }
  else {
LAB_00b5d984:
    uVar4 = 1;
  }
  return uVar4;
}

