
undefined8 cms_SignedData_final(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uchar *puVar3;
  CMS_SignerInfo *si;
  EVP_MD_CTX *ctx;
  int line;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  void *bytes;
  EVP_PKEY_CTX *ctx_00;
  uint local_a4;
  uint local_a0 [16];
  size_t local_58;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if (iVar1 == 0x16) {
    if (param_1[1] != 0) {
      uVar6 = *(undefined8 *)(param_1[1] + 0x28);
      goto LAB_00ba0e78;
    }
  }
  else {
    ERR_put_error(0x2e,0x85,0x6c,"crypto/cms/cms_sd.c",0x1a);
  }
  uVar6 = 0;
LAB_00ba0e78:
  iVar1 = OPENSSL_sk_num(uVar6);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      si = (CMS_SignerInfo *)OPENSSL_sk_value(uVar6,iVar1);
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (ctx == (EVP_MD_CTX *)0x0) {
        ERR_put_error(0x2e,0x96,0x41,"crypto/cms/cms_sd.c",0x21d);
        return 0;
      }
      if (*(long *)(si + 0x40) == 0) {
        iVar1 = 0x96;
        iVar2 = 0x85;
        line = 0x222;
        goto LAB_00ba10b8;
      }
      iVar2 = cms_DigestAlgorithm_find_ctx(ctx,param_2,*(undefined8 *)(si + 0x10));
      if (iVar2 == 0) {
LAB_00ba10bc:
        EVP_MD_CTX_free(ctx);
        ctx_00 = (EVP_PKEY_CTX *)0x0;
LAB_00ba10c8:
        EVP_PKEY_CTX_free(ctx_00);
        return 0;
      }
      if (*(long *)(si + 0x50) != 0) {
        lVar4 = *(long *)(*(long *)(si + 0x40) + 0x10);
        if ((lVar4 == 0) || (pcVar5 = *(code **)(lVar4 + 0xb0), pcVar5 == (code *)0x0))
        goto LAB_00ba0ef0;
        iVar2 = (*pcVar5)(*(long *)(si + 0x40),5,0,si);
        if (iVar2 == -2) {
          iVar1 = 0xaa;
          iVar2 = 0x7d;
          line = 0xd2;
        }
        else {
          if (0 < iVar2) goto LAB_00ba0ef0;
          iVar1 = 0xaa;
          iVar2 = 0x6f;
          line = 0xd6;
        }
LAB_00ba10b8:
        ERR_put_error(0x2e,iVar1,iVar2,"crypto/cms/cms_sd.c",line);
        goto LAB_00ba10bc;
      }
LAB_00ba0ef0:
      iVar2 = CMS_signed_get_attr_count(si);
      if (iVar2 < 0) {
        ctx_00 = *(EVP_PKEY_CTX **)(si + 0x50);
        if (ctx_00 != (EVP_PKEY_CTX *)0x0) {
          iVar2 = EVP_DigestFinal_ex(ctx,(uchar *)local_a0,&local_a4);
          if (iVar2 != 0) {
            iVar2 = EVP_PKEY_size(*(EVP_PKEY **)(si + 0x40));
            local_58 = (size_t)iVar2;
                    /* catch() { ... } // from try @ 00ba115c with catch @ 00ba0f9c
                       catch() { ... } // from try @ 00ba118c with catch @ 00ba0f9c
                       catch() { ... } // from try @ 00ba12c4 with catch @ 00ba0f9c
                       catch() { ... } // from try @ 00ba12f4 with catch @ 00ba0f9c
                       catch() { ... } // from try @ 00ba131c with catch @ 00ba0f9c
                       catch() { ... } // from try @ 00ba1334 with catch @ 00ba0f9c */
            puVar3 = CRYPTO_malloc(iVar2,"crypto/cms/cms_sd.c",0x249);
            if (puVar3 == (uchar *)0x0) {
              ERR_put_error(0x2e,0x96,0x41,"crypto/cms/cms_sd.c",0x24b);
            }
            else {
              iVar2 = EVP_PKEY_sign(ctx_00,puVar3,&local_58,(uchar *)local_a0,(ulong)local_a4);
              if (0 < iVar2) {
                ASN1_STRING_set0(*(ASN1_STRING **)(si + 0x28),puVar3,(int)local_58);
                goto LAB_00ba0fdc;
              }
                    /* try { // try from 00ba1154 to 00ca115b has its CatchHandler @ 00ba133c */
              CRYPTO_free(puVar3);
            }
          }
                    /* try { // try from 00ba115c to 00ca1183 has its CatchHandler @ 00ba0f9c */
          EVP_MD_CTX_free(ctx);
          goto LAB_00ba10c8;
        }
        iVar2 = EVP_PKEY_size(*(EVP_PKEY **)(si + 0x40));
        puVar3 = CRYPTO_malloc(iVar2,"crypto/cms/cms_sd.c",0x256);
        if (puVar3 == (uchar *)0x0) {
          iVar1 = 0x96;
          iVar2 = 0x41;
          line = 600;
                    /* try { // try from 00ba1184 to 00ca118b has its CatchHandler @ 00ba1344 */
          goto LAB_00ba10b8;
        }
        iVar2 = EVP_SignFinal(ctx,puVar3,local_a0,*(EVP_PKEY **)(si + 0x40));
        if (iVar2 != 0) {
          ASN1_STRING_set0(*(ASN1_STRING **)(si + 0x28),puVar3,local_a0[0]);
          goto LAB_00ba0f64;
        }
                    /* try { // try from 00ba118c to 00ca11e7 has its CatchHandler @ 00ba0f9c */
        ERR_put_error(0x2e,0x96,0x8b,"crypto/cms/cms_sd.c",0x25c);
        CRYPTO_free(puVar3);
        goto LAB_00ba10bc;
      }
      bytes = (void *)**(undefined8 **)(param_1[1] + 0x10);
      iVar2 = EVP_DigestFinal_ex(ctx,(uchar *)local_a0,(uint *)&local_58);
      if (iVar2 == 0) goto LAB_00ba10bc;
      iVar2 = CMS_signed_add1_attr_by_NID(si,0x33,4,local_a0,(int)local_58);
      if (((iVar2 == 0) || (iVar2 = CMS_signed_add1_attr_by_NID(si,0x32,6,bytes,-1), iVar2 < 1)) ||
         (iVar2 = CMS_SignerInfo_sign(si), iVar2 == 0)) goto LAB_00ba10bc;
LAB_00ba0f64:
      ctx_00 = (EVP_PKEY_CTX *)0x0;
LAB_00ba0fdc:
      EVP_MD_CTX_free(ctx);
      EVP_PKEY_CTX_free(ctx_00);
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(uVar6);
    } while (iVar1 < iVar2);
  }
  *(undefined4 *)(*(long *)(param_1[1] + 0x10) + 0x10) = 0;
                    /* try { // try from 00ba10d4 to 00ca10e3 has its CatchHandler @ 00ba1374 */
  return 1;
}

