
undefined8 FUN_00b7284c(CONF_VALUE *param_1,long *param_2,ASN1_INTEGER **param_3,long *param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ASN1_OBJECT *pAVar4;
  void *pvVar5;
  BIO *b;
  size_t __n;
  void *pvVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  ASN1_OCTET_STRING *pAVar10;
  char *pcVar11;
  undefined1 auStack_858 [2048];
  size_t local_58;
  
  pcVar11 = param_1->name;
  iVar3 = strcmp(pcVar11,"language");
  if (iVar3 == 0) {
    if (*param_2 == 0) {
      pAVar4 = OBJ_txt2obj(param_1->value,0);
      *param_2 = (long)pAVar4;
      if (pAVar4 != (ASN1_OBJECT *)0x0) {
        return 1;
      }
      iVar3 = 0x6e;
      iVar7 = 0x60;
    }
    else {
      iVar3 = 0x9b;
      iVar7 = 0x5a;
    }
LAB_00b72ac0:
    ERR_put_error(0x22,0x96,iVar3,"crypto/x509v3/v3_pci.c",iVar7);
    ERR_add_error_data(6,"section:",param_1->section,",name:",param_1->name,",value:",param_1->value
                      );
    return 0;
  }
  iVar3 = strcmp(pcVar11,"pathlen");
  if (iVar3 == 0) {
    if (*param_3 == (ASN1_INTEGER *)0x0) {
      iVar3 = X509V3_get_value_int(param_1,param_3);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = 0x9c;
      iVar7 = 0x6d;
    }
    else {
      iVar3 = 0x9d;
      iVar7 = 0x67;
    }
    goto LAB_00b72ac0;
  }
  iVar3 = strcmp(pcVar11,"policy");
  if (iVar3 != 0) {
    return 1;
  }
  pAVar10 = (ASN1_OCTET_STRING *)*param_4;
  if (pAVar10 == (ASN1_OCTET_STRING *)0x0) {
    pAVar10 = ASN1_OCTET_STRING_new();
    *param_4 = (long)pAVar10;
    if (pAVar10 == (ASN1_OCTET_STRING *)0x0) {
      iVar3 = 0x41;
      iVar7 = 0x77;
      goto LAB_00b72ac0;
    }
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  pcVar11 = param_1->value;
  iVar3 = strncmp(pcVar11,"hex:",4);
  if (iVar3 == 0) {
    pvVar6 = (void *)OPENSSL_hexstr2buf(pcVar11 + 4,&local_58);
    if (pvVar6 == (void *)0x0) goto LAB_00b72d84;
    pvVar5 = CRYPTO_realloc(*(void **)((int *)*param_4 + 2),*(int *)*param_4 + (int)local_58 + 1,
                            "crypto/x509v3/v3_pci.c",0x87);
    if (pvVar5 != (void *)0x0) {
      *(void **)(*param_4 + 8) = pvVar5;
      memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),pvVar6,local_58);
      piVar8 = (int *)*param_4;
      iVar3 = (int)local_58 + *piVar8;
      *piVar8 = iVar3;
      *(undefined1 *)(*(long *)(piVar8 + 2) + (long)iVar3) = 0;
      CRYPTO_free(pvVar6);
      return 1;
    }
    CRYPTO_free(pvVar6);
    CRYPTO_free(*(void **)(*param_4 + 8));
    *(undefined8 *)(*param_4 + 8) = 0;
    puVar9 = (undefined4 *)*param_4;
    iVar3 = 0x97;
LAB_00b72d7c:
    iVar7 = 0x41;
    *puVar9 = 0;
  }
  else {
    iVar3 = strncmp(pcVar11,"file:",5);
    if (iVar3 == 0) {
      b = BIO_new_file(pcVar11 + 5,"r");
      if (b == (BIO *)0x0) {
        iVar7 = 0x20;
        iVar3 = 0xa1;
      }
      else {
        pvVar6 = (void *)0x0;
        do {
          while (iVar3 = BIO_read(b,auStack_858,0x800), 0 < iVar3) {
            pvVar6 = CRYPTO_realloc(*(void **)((int *)*param_4 + 2),iVar3 + *(int *)*param_4 + 1,
                                    "crypto/x509v3/v3_pci.c",0xab);
            if (pvVar6 == (void *)0x0) {
              CRYPTO_free(*(void **)(*param_4 + 8));
              *(undefined8 *)(*param_4 + 8) = 0;
              *(undefined4 *)*param_4 = 0;
              ERR_put_error(0x22,0x96,0x41,"crypto/x509v3/v3_pci.c",0xb2);
              ERR_add_error_data(6,"section:",param_1->section,",name:",param_1->name,",value:",
                                 param_1->value);
              BIO_free_all(b);
              goto joined_r0x00b72cec;
            }
            *(void **)(*param_4 + 8) = pvVar6;
            memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),auStack_858,
                   (long)iVar3);
            piVar8 = (int *)*param_4;
            lVar1 = (long)*piVar8 + (long)iVar3;
            *piVar8 = (int)lVar1;
            *(undefined1 *)(*(long *)(piVar8 + 2) + lVar1) = 0;
          }
          if (iVar3 != 0) {
            BIO_free_all(b);
            iVar7 = 0x20;
            iVar3 = 0xc0;
            goto LAB_00b72d80;
          }
          iVar3 = BIO_test_flags(b,8);
        } while (iVar3 != 0);
        BIO_free_all(b);
        if (pvVar6 != (void *)0x0) {
          return 1;
        }
        iVar7 = 0x41;
        iVar3 = 0xe1;
      }
    }
    else {
      iVar3 = strncmp(pcVar11,"text:",5);
      if (iVar3 == 0) {
        __n = strlen(pcVar11 + 5);
        local_58 = __n;
        pvVar6 = CRYPTO_realloc(pAVar10->data,(int)__n + pAVar10->length + 1,
                                "crypto/x509v3/v3_pci.c",199);
        if (pvVar6 != (void *)0x0) {
          *(void **)(*param_4 + 8) = pvVar6;
          memcpy((void *)(*(long *)((int *)*param_4 + 2) + (long)*(int *)*param_4),
                 param_1->value + 5,__n);
          piVar8 = (int *)*param_4;
          iVar3 = (int)__n + *piVar8;
          *piVar8 = iVar3;
          *(undefined1 *)(*(long *)(piVar8 + 2) + (long)iVar3) = 0;
          return 1;
        }
        CRYPTO_free(*(void **)(*param_4 + 8));
        *(undefined8 *)(*param_4 + 8) = 0;
        puVar9 = (undefined4 *)*param_4;
        iVar3 = 0xd6;
        goto LAB_00b72d7c;
      }
      iVar7 = 0x98;
      iVar3 = 0xdc;
    }
  }
LAB_00b72d80:
  ERR_put_error(0x22,0x96,iVar7,"crypto/x509v3/v3_pci.c",iVar3);
LAB_00b72d84:
  ERR_add_error_data(6,"section:",param_1->section,",name:",param_1->name,",value:",param_1->value);
joined_r0x00b72cec:
  if (!bVar2) {
    return 0;
  }
  ASN1_OCTET_STRING_free((ASN1_STRING *)*param_4);
  *param_4 = 0;
  return 0;
}

