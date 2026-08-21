
uint FUN_00b860e0(X509 *param_1,char *param_2,size_t param_3,uint param_4,int param_5,
                 undefined8 *param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  GENERAL_NAMES *a;
  int *piVar7;
  X509_NAME *name;
  X509_NAME_ENTRY *pXVar8;
  ASN1_STRING *pAVar9;
  undefined8 uVar10;
  uint *puVar11;
  int nid;
  void *__s1;
  code *local_78;
  uchar *local_68;
  
  uVar1 = param_4 & 0xffff7fff;
  if (param_5 == 1) {
    local_78 = (code *)&DAT_00b86ae4;
    iVar3 = 0x16;
    iVar5 = 0x16;
    nid = 0x30;
  }
  else if (param_5 == 2) {
    uVar4 = uVar1;
    if ((1 < param_3) && (uVar4 = param_4 | 0x8000, *param_2 != '.')) {
      uVar4 = uVar1;
    }
    local_78 = FUN_00b86cc8;
    if ((uVar4 & 2) != 0) {
      local_78 = FUN_00b86bd0;
    }
    iVar3 = 0x16;
    iVar5 = 0x16;
    nid = 0xd;
    uVar1 = uVar4;
  }
  else {
    nid = 0;
    iVar3 = 4;
    iVar5 = 4;
    local_78 = (code *)&DAT_00b87180;
  }
  if (param_3 == 0) {
    param_3 = strlen(param_2);
    iVar5 = iVar3;
  }
  a = X509_get_ext_d2i(param_1,0x55,(int *)0x0,(int *)0x0);
  if (a == (GENERAL_NAMES *)0x0) goto LAB_00b86280;
  iVar3 = OPENSSL_sk_num(a);
  if (iVar3 < 1) {
    bVar2 = false;
LAB_00b8626c:
    GENERAL_NAMES_free(a);
  }
  else {
    if (iVar5 == 0x16) {
      bVar2 = false;
      iVar5 = 0;
      do {
        piVar7 = (int *)OPENSSL_sk_value(a,iVar5);
        if (*piVar7 == param_5) {
          puVar11 = *(uint **)(piVar7 + 2);
          if (((*(long *)(puVar11 + 2) != 0) && (*puVar11 != 0)) && (puVar11[1] == 0x16)) {
            uVar4 = (*local_78)(*(long *)(puVar11 + 2),(long)(int)*puVar11,param_2,param_3,uVar1);
            if ((param_6 != (undefined8 *)0x0) && (0 < (int)uVar4)) {
              __s1 = *(void **)(puVar11 + 2);
              param_3 = (size_t)*puVar11;
              goto LAB_00b8658c;
            }
            if (uVar4 != 0) goto LAB_00b865ac;
          }
          bVar2 = true;
        }
        iVar5 = iVar5 + 1;
        iVar3 = OPENSSL_sk_num(a);
      } while (iVar5 < iVar3);
      goto LAB_00b8626c;
    }
    uVar4 = 0;
    bVar2 = false;
    iVar3 = 0;
    if (param_6 == (undefined8 *)0x0) {
      do {
        piVar7 = (int *)OPENSSL_sk_value(a,iVar3);
        if (*piVar7 == param_5) {
          piVar7 = *(int **)(piVar7 + 2);
          if ((*(void **)(piVar7 + 2) == (void *)0x0) || (*piVar7 == 0)) {
            uVar4 = 0;
            bVar2 = true;
          }
          else {
            uVar4 = 0;
            bVar2 = true;
            if ((piVar7[1] == iVar5) && (*piVar7 == (int)param_3)) {
              iVar6 = memcmp(*(void **)(piVar7 + 2),param_2,param_3);
              uVar4 = (uint)(iVar6 == 0);
              bVar2 = true;
              if (iVar6 == 0) break;
            }
          }
        }
        iVar3 = iVar3 + 1;
        iVar6 = OPENSSL_sk_num(a);
      } while (iVar3 < iVar6);
    }
    else {
      do {
        piVar7 = (int *)OPENSSL_sk_value(a,iVar3);
        if (*piVar7 == param_5) {
          piVar7 = *(int **)(piVar7 + 2);
          __s1 = *(void **)(piVar7 + 2);
          if ((__s1 == (void *)0x0) || (*piVar7 == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            bVar2 = true;
            if ((piVar7[1] != iVar5) || (*piVar7 != (int)param_3)) goto LAB_00b863f8;
            iVar6 = memcmp(__s1,param_2,param_3);
            uVar4 = (uint)(iVar6 == 0);
            if (iVar6 == 0) {
LAB_00b8658c:
              uVar10 = CRYPTO_strndup(__s1,(long)(int)param_3,"crypto/x509v3/v3_utl.c",0x2f1);
                    /* try { // try from 00b865a4 to 00c865d3 has its CatchHandler @ 00b864b4 */
              *param_6 = uVar10;
LAB_00b865ac:
              GENERAL_NAMES_free(a);
              return uVar4;
            }
          }
          bVar2 = true;
        }
LAB_00b863f8:
        iVar3 = iVar3 + 1;
        iVar6 = OPENSSL_sk_num(a);
      } while (iVar3 < iVar6);
    }
    GENERAL_NAMES_free(a);
    if (uVar4 != 0) {
      return uVar4;
    }
  }
  if (((uVar1 & 1) == 0) && (bVar2)) {
    return 0;
  }
LAB_00b86280:
  if (nid == 0) {
    return 0;
  }
  if ((uVar1 >> 5 & 1) == 0) {
    name = X509_get_subject_name(param_1);
    if (param_6 == (undefined8 *)0x0) {
      iVar5 = -1;
      while( true ) {
                    /* try { // try from 00b864b4 to 00c86503 has its CatchHandler @ 00b864b4
                       catch() { ... } // from try @ 00b864b4 with catch @ 00b864b4
                       catch() { ... } // from try @ 00b865a4 with catch @ 00b864b4 */
        iVar5 = X509_NAME_get_index_by_NID(name,nid,iVar5);
        while( true ) {
          if (iVar5 < 0) {
            return 0;
          }
          pXVar8 = X509_NAME_get_entry(name,iVar5);
          pAVar9 = X509_NAME_ENTRY_get_data(pXVar8);
          if ((pAVar9->data != (uchar *)0x0) && (pAVar9->length != 0)) break;
          iVar5 = X509_NAME_get_index_by_NID(name,nid,iVar5);
                    /* try { // try from 00b86504 to 00c865a3 has its CatchHandler @ 00b865b8 */
        }
        iVar3 = ASN1_STRING_to_UTF8(&local_68,pAVar9);
        if (iVar3 < 0) break;
        uVar4 = (*local_78)(local_68,(long)iVar3,param_2,param_3,uVar1);
        CRYPTO_free(local_68);
        if (uVar4 != 0) {
          return uVar4;
        }
      }
    }
    else {
      iVar5 = -1;
      while( true ) {
        iVar5 = X509_NAME_get_index_by_NID(name,nid,iVar5);
        while( true ) {
          if (iVar5 < 0) {
            return 0;
          }
          pXVar8 = X509_NAME_get_entry(name,iVar5);
          pAVar9 = X509_NAME_ENTRY_get_data(pXVar8);
          if ((pAVar9->data != (uchar *)0x0) && (pAVar9->length != 0)) break;
          iVar5 = X509_NAME_get_index_by_NID(name,nid,iVar5);
        }
        iVar3 = ASN1_STRING_to_UTF8(&local_68,pAVar9);
        if (iVar3 < 0) break;
        uVar4 = (*local_78)(local_68,(long)iVar3,param_2,param_3,uVar1);
        if (0 < (int)uVar4) {
          uVar10 = CRYPTO_strndup(local_68,(long)iVar3,"crypto/x509v3/v3_utl.c",0x2ff);
          *param_6 = uVar10;
        }
        CRYPTO_free(local_68);
        if (uVar4 != 0) {
          return uVar4;
        }
      }
    }
    return 0xffffffff;
  }
  return 0;
}

