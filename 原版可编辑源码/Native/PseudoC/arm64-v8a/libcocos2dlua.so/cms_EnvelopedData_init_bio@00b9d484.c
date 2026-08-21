
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9d564 with catch @ 00b9d64c
                        */
        ERR_put_error(0x2e,0x7d,0x74,"crypto/cms/cms_env.c",0x364);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9d4f8 with catch @ 00b9d674
                        */
        *(undefined8 *)(lVar6 + 0x18) = 0;
        CRYPTO_clear_free(*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),
                          "crypto/cms/cms_env.c",0x36e);
        *(undefined8 *)(lVar6 + 0x20) = 0;
        *(undefined8 *)(lVar6 + 0x28) = 0;
        BIO_free(a);
        return (BIO *)0x0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9d398 with catch @ 00b9d688
                        */
      }
                    /* try { // try from 00b9d4f8 to 00c9d4ff has its CatchHandler @ 00b9d674 */
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(uVar7);
    } while (iVar1 < iVar2);
  }
  plVar8 = *(long **)(param_1 + 8);
  if (3 < *plVar8) goto LAB_00b9d6a0;
  puVar9 = (undefined8 *)plVar8[1];
  if (puVar9 != (undefined8 *)0x0) {
    iVar1 = OPENSSL_sk_num(*puVar9);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        piVar4 = (int *)OPENSSL_sk_value(*puVar9,iVar1);
        if (*piVar4 == 3) {
                    /* try { // try from 00b9d564 to 00c9d56b has its CatchHandler @ 00b9d64c */
          if (*plVar8 < 3) {
                    /* try { // try from 00b9d56c to 00c9d68b has its CatchHandler @ 00b9d348 */
            *plVar8 = 3;
          }
        }
        else if (*piVar4 == 4) goto LAB_00b9d690;
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(*puVar9);
      } while (iVar1 < iVar2);
    }
    iVar1 = OPENSSL_sk_num(puVar9[1]);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        piVar4 = (int *)OPENSSL_sk_value(puVar9[1],iVar1);
        if (*piVar4 == 1) goto LAB_00b9d690;
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(puVar9[1]);
      } while (iVar1 < iVar2);
    }
  }
  if (2 < *plVar8) goto LAB_00b9d6a0;
  iVar1 = OPENSSL_sk_num(plVar8[2]);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      piVar4 = (int *)OPENSSL_sk_value(plVar8[2],iVar1);
      if (*piVar4 == 0) {
        if (**(long **)(piVar4 + 2) != 0) goto LAB_00b9d618;
      }
      else {
        if (*piVar4 - 3U < 2) {
          lVar5 = 3;
          goto LAB_00b9d69c;
        }
LAB_00b9d618:
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
    goto LAB_00b9d6a0;
  }
  lVar5 = 2;
LAB_00b9d69c:
  *plVar8 = lVar5;
LAB_00b9d6a0:
  *(undefined8 *)(lVar6 + 0x18) = 0;
  CRYPTO_clear_free(*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28),
                    "crypto/cms/cms_env.c",0x36e);
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x28) = 0;
  return a;
LAB_00b9d690:
  lVar5 = 4;
  goto LAB_00b9d69c;
}

