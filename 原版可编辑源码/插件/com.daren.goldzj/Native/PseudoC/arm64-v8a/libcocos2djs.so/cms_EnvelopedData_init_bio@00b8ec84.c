
BIO * cms_EnvelopedData_init_bio(long param_1)

{
  int iVar1;
  int iVar2;
  BIO *a;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x18);
  a = (BIO *)cms_EncryptedContent_init_bio(lVar6);
  if (a == (BIO *)0x0) {
    return (BIO *)0x0;
  }
  if (*(long *)(lVar6 + 0x18) == 0) {
    return a;
  }
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
  iVar1 = OPENSSL_sk_num(uVar7);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar3 = OPENSSL_sk_value(uVar7,iVar1);
      iVar2 = CMS_RecipientInfo_encrypt(param_1,uVar3);
      if (iVar2 < 1) {
        ERR_put_error(0x2e,0x7d,0x74,"crypto/cms/cms_env.c",0x364);
        *(undefined8 *)(lVar6 + 0x18) = 0;
        CRYPTO_clear_free(*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),
                          "crypto/cms/cms_env.c",0x36e);
        *(undefined8 *)(lVar6 + 0x20) = 0;
        *(undefined8 *)(lVar6 + 0x28) = 0;
        BIO_free(a);
        return (BIO *)0x0;
      }
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(uVar7);
    } while (iVar1 < iVar2);
  }
  plVar8 = *(long **)(param_1 + 8);
  if (3 < *plVar8) goto LAB_00b8eea0;
  puVar9 = (undefined8 *)plVar8[1];
  if (puVar9 != (undefined8 *)0x0) {
    iVar1 = OPENSSL_sk_num(*puVar9);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        piVar4 = (int *)OPENSSL_sk_value(*puVar9,iVar1);
        if (*piVar4 == 3) {
          if (*plVar8 < 3) {
            *plVar8 = 3;
          }
        }
        else if (*piVar4 == 4) goto LAB_00b8ee90;
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(*puVar9);
      } while (iVar1 < iVar2);
    }
    iVar1 = OPENSSL_sk_num(puVar9[1]);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        piVar4 = (int *)OPENSSL_sk_value(puVar9[1],iVar1);
        if (*piVar4 == 1) goto LAB_00b8ee90;
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(puVar9[1]);
      } while (iVar1 < iVar2);
    }
  }
  if (2 < *plVar8) goto LAB_00b8eea0;
  iVar1 = OPENSSL_sk_num(plVar8[2]);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      piVar4 = (int *)OPENSSL_sk_value(plVar8[2],iVar1);
      if (*piVar4 == 0) {
        if (**(long **)(piVar4 + 2) != 0) goto LAB_00b8ee18;
      }
      else {
        if (*piVar4 - 3U < 2) {
          lVar5 = 3;
          goto LAB_00b8ee9c;
        }
LAB_00b8ee18:
        *plVar8 = 2;
      }
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(plVar8[2]);
    } while (iVar1 < iVar2);
  }
  if ((plVar8[1] == 0) && (plVar8[4] == 0)) {
    if (*plVar8 != 2) {
      *plVar8 = 0;
    }
    goto LAB_00b8eea0;
  }
  lVar5 = 2;
LAB_00b8ee9c:
  *plVar8 = lVar5;
LAB_00b8eea0:
  *(undefined8 *)(lVar6 + 0x18) = 0;
  CRYPTO_clear_free(*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),
                    "crypto/cms/cms_env.c",0x36e);
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  return a;
LAB_00b8ee90:
  lVar5 = 4;
  goto LAB_00b8ee9c;
}

