
int CMS_RecipientInfo_decrypt(CMS_ContentInfo *cms,CMS_RecipientInfo *ri)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pEVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  EVP_PKEY_ASN1_METHOD *pEVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  AES_KEY local_128;
  
  iVar1 = *(int *)ri;
  if (iVar1 == 3) {
    iVar1 = cms_RecipientInfo_pwri_crypt(cms,ri,0);
    return iVar1;
  }
  if (iVar1 != 2) {
    if (iVar1 != 0) {
      iVar1 = 0x86;
      iVar4 = 0x9b;
      iVar5 = 0x2f0;
LAB_00b9ce40:
      ERR_put_error(0x2e,iVar1,iVar4,"crypto/cms/cms_env.c",iVar5);
      return 0;
    }
    lVar7 = *(long *)(ri + 8);
    if (*(EVP_PKEY **)(lVar7 + 0x28) == (EVP_PKEY *)0x0) {
      iVar1 = 0x8c;
      iVar4 = 0x85;
      iVar5 = 0x171;
      goto LAB_00b9ce40;
    }
    lVar9 = *(long *)(*(long *)(cms + 8) + 0x18);
    ctx = EVP_PKEY_CTX_new(*(EVP_PKEY **)(lVar7 + 0x28),(ENGINE *)0x0);
    *(EVP_PKEY_CTX **)(lVar7 + 0x30) = ctx;
    if (ctx == (EVP_PKEY_CTX *)0x0) {
      return 0;
    }
    iVar1 = EVP_PKEY_decrypt_init(ctx);
    if (0 < iVar1) {
      if (*(int *)ri == 1) {
        if ((*(EVP_PKEY_CTX **)(*(long *)(ri + 8) + 0x28) != (EVP_PKEY_CTX *)0x0) &&
           (pEVar2 = EVP_PKEY_CTX_get0_pkey(*(EVP_PKEY_CTX **)(*(long *)(ri + 8) + 0x28)),
           pEVar2 != (EVP_PKEY *)0x0)) {
          pEVar6 = pEVar2->ameth;
          goto joined_r0x00b9ced4;
        }
      }
      else if (*(int *)ri == 0) {
        pEVar2 = *(EVP_PKEY **)(*(long *)(ri + 8) + 0x28);
        pEVar6 = pEVar2->ameth;
joined_r0x00b9ced4:
        if ((pEVar6 == (EVP_PKEY_ASN1_METHOD *)0x0) || (*(code **)(pEVar6 + 0xb0) == (code *)0x0)) {
LAB_00b9cf74:
          iVar1 = EVP_PKEY_CTX_ctrl(*(EVP_PKEY_CTX **)(lVar7 + 0x30),-1,0x200,10,0,ri);
          if (0 < iVar1) {
                    /* try { // try from 00b9cfa4 to 00c9cfab has its CatchHandler @ 00b9d120 */
                    /* try { // try from 00b9cfac to 00c9d123 has its CatchHandler @ 00b9cf58 */
            iVar1 = EVP_PKEY_decrypt(*(EVP_PKEY_CTX **)(lVar7 + 0x30),(uchar *)0x0,
                                     (size_t *)&local_128,*(uchar **)(*(int **)(lVar7 + 0x18) + 2),
                                     (long)**(int **)(lVar7 + 0x18));
            if (0 < iVar1) {
              puVar3 = CRYPTO_malloc(local_128.rd_key[0],"crypto/cms/cms_env.c",0x18a);
              if (puVar3 == (uchar *)0x0) {
                iVar1 = 0x41;
                iVar4 = 0x18d;
              }
              else {
                iVar1 = EVP_PKEY_decrypt(*(EVP_PKEY_CTX **)(lVar7 + 0x30),puVar3,
                                         (size_t *)&local_128,
                                         *(uchar **)(*(int **)(lVar7 + 0x18) + 2),
                                         (long)**(int **)(lVar7 + 0x18));
                if (0 < iVar1) {
                  CRYPTO_clear_free(*(undefined8 *)(lVar9 + 0x20),*(undefined8 *)(lVar9 + 0x28),
                                    "crypto/cms/cms_env.c",0x19a);
                  *(uchar **)(lVar9 + 0x20) = puVar3;
                  *(undefined8 *)(lVar9 + 0x28) = local_128.rd_key._0_8_;
                  EVP_PKEY_CTX_free(*(EVP_PKEY_CTX **)(lVar7 + 0x30));
                  *(undefined8 *)(lVar7 + 0x30) = 0;
                  return 1;
                }
                iVar1 = 0x68;
                iVar4 = 0x194;
              }
              ERR_put_error(0x2e,0x8c,iVar1,"crypto/cms/cms_env.c",iVar4);
              goto LAB_00b9d030;
            }
            goto LAB_00b9d02c;
          }
          iVar1 = 0x8c;
          iVar4 = 0x6e;
          iVar5 = 0x181;
        }
        else {
          iVar1 = (**(code **)(pEVar6 + 0xb0))(pEVar2,7,1,ri);
          if (iVar1 == -2) {
            iVar1 = 0xab;
            iVar4 = 0x7d;
            iVar5 = 0x47;
          }
          else {
            if (0 < iVar1) goto LAB_00b9cf74;
            iVar1 = 0xab;
            iVar4 = 0x6f;
            iVar5 = 0x4b;
          }
        }
        ERR_put_error(0x2e,iVar1,iVar4,"crypto/cms/cms_env.c",iVar5);
        puVar3 = (uchar *)0x0;
        goto LAB_00b9d030;
      }
    }
LAB_00b9d02c:
    puVar3 = (uchar *)0x0;
LAB_00b9d030:
    EVP_PKEY_CTX_free(*(EVP_PKEY_CTX **)(lVar7 + 0x30));
    *(undefined8 *)(lVar7 + 0x30) = 0;
    CRYPTO_free(puVar3);
    return 0;
  }
  lVar7 = *(long *)(ri + 8);
  if (*(long *)(lVar7 + 0x20) == 0) {
    iVar1 = 0x87;
    iVar4 = 0x82;
    iVar5 = 0x2aa;
    goto LAB_00b9ce40;
  }
  lVar8 = *(long *)(*(long *)(cms + 8) + 0x18);
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(lVar7 + 0x10));
  lVar9 = (ulong)(iVar1 - 0x314U) * 8 + 0x10;
  if (2 < iVar1 - 0x314U) {
    lVar9 = 0;
  }
  if (lVar9 != *(long *)(lVar7 + 0x28)) {
    iVar1 = 0x87;
    iVar4 = 0x76;
    iVar5 = 0x2b1;
    goto LAB_00b9ce40;
  }
  if (**(int **)(lVar7 + 0x18) < 0x10) {
    iVar1 = 0x75;
    iVar4 = 0x2b9;
LAB_00b9ce8c:
    ERR_put_error(0x2e,0x87,iVar1,"crypto/cms/cms_env.c",iVar4);
    puVar3 = (uchar *)0x0;
  }
  else {
    iVar1 = AES_set_decrypt_key(*(uchar **)(lVar7 + 0x20),(int)lVar9 << 3,&local_128);
    if (iVar1 != 0) {
      iVar1 = 0x73;
      iVar4 = 0x2bf;
      goto LAB_00b9ce8c;
    }
    puVar3 = CRYPTO_malloc(**(int **)(lVar7 + 0x18) + -8,"crypto/cms/cms_env.c",0x2c3);
    if (puVar3 == (uchar *)0x0) {
      iVar1 = 0x41;
      iVar4 = 0x2c6;
    }
    else {
      iVar1 = AES_unwrap_key(&local_128,(uchar *)0x0,puVar3,
                             *(uchar **)(*(uint **)(lVar7 + 0x18) + 2),**(uint **)(lVar7 + 0x18));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9cfac with catch @ 00b9cf58
                        */
      if (0 < iVar1) {
        *(uchar **)(lVar8 + 0x20) = puVar3;
        *(long *)(lVar8 + 0x28) = (long)iVar1;
        iVar1 = 1;
        goto LAB_00b9ceac;
      }
      iVar1 = 0x9d;
      iVar4 = 0x2cf;
    }
    ERR_put_error(0x2e,0x87,iVar1,"crypto/cms/cms_env.c",iVar4);
  }
  CRYPTO_free(puVar3);
  iVar1 = 0;
LAB_00b9ceac:
  OPENSSL_cleanse(&local_128,0xf4);
  return iVar1;
}

