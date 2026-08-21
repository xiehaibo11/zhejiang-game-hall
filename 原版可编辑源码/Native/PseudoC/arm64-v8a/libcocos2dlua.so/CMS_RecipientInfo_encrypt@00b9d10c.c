
ulong CMS_RecipientInfo_encrypt(long param_1,undefined4 *param_2)

{
  EVP_PKEY *pkey;
  int iVar1;
  ulong uVar2;
  EVP_PKEY_CTX *ctx;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uchar *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  AES_KEY local_138;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9cfa4 with catch @ 00b9d120
                        */
  switch(*param_2) {
  case 0:
    lVar9 = *(long *)(param_2 + 2);
    pkey = *(EVP_PKEY **)(lVar9 + 0x28);
    ctx = *(EVP_PKEY_CTX **)(lVar9 + 0x30);
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x18);
    if (ctx != (EVP_PKEY_CTX *)0x0) {
      if ((pkey->ameth == (EVP_PKEY_ASN1_METHOD *)0x0) ||
         (pcVar5 = *(code **)(pkey->ameth + 0xb0), pcVar5 == (code *)0x0)) {
LAB_00b9d2f4:
        iVar1 = EVP_PKEY_CTX_ctrl(ctx,-1,0x100,9,0,param_2);
        if (iVar1 < 1) {
          iVar1 = 0x8d;
                    /* try { // try from 00b9d398 to 00c9d39f has its CatchHandler @ 00b9d688 */
          iVar3 = 0x6e;
          iVar4 = 0x145;
          goto LAB_00b9d3a0;
        }
        iVar1 = EVP_PKEY_encrypt(ctx,(uchar *)0x0,(size_t *)&local_138,*(uchar **)(lVar7 + 0x20),
                                 *(size_t *)(lVar7 + 0x28));
        if (iVar1 < 1) goto LAB_00b9d3a4;
        puVar6 = CRYPTO_malloc(local_138.rd_key[0],"crypto/cms/cms_env.c",0x14c);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b9d3a0 with catch @ 00b9d348
                       catch(type#1 @ 00000000) { ... } // from try @ 00b9d56c with catch @ 00b9d348
                        */
        if (puVar6 == (uchar *)0x0) {
          ERR_put_error(0x2e,0x8d,0x41,"crypto/cms/cms_env.c",0x14f);
          goto LAB_00b9d3a8;
        }
        iVar1 = EVP_PKEY_encrypt(ctx,puVar6,(size_t *)&local_138,*(uchar **)(lVar7 + 0x20),
                                 *(size_t *)(lVar7 + 0x28));
        if (iVar1 < 1) goto LAB_00b9d3a8;
        ASN1_STRING_set0(*(ASN1_STRING **)(lVar9 + 0x18),puVar6,local_138.rd_key[0]);
        puVar6 = (uchar *)0x0;
        uVar8 = 1;
      }
      else {
        iVar1 = (*pcVar5)(pkey,7,0,param_2);
        if (iVar1 == -2) {
          iVar1 = 0xab;
          iVar3 = 0x7d;
          iVar4 = 0x47;
        }
        else {
          if (0 < iVar1) goto LAB_00b9d2f4;
          iVar1 = 0xab;
          iVar3 = 0x6f;
          iVar4 = 0x4b;
        }
LAB_00b9d3a0:
                    /* try { // try from 00b9d3a0 to 00c9d4f7 has its CatchHandler @ 00b9d348 */
        ERR_put_error(0x2e,iVar1,iVar3,"crypto/cms/cms_env.c",iVar4);
LAB_00b9d3a4:
        puVar6 = (uchar *)0x0;
LAB_00b9d3a8:
        uVar8 = 0;
      }
      EVP_PKEY_CTX_free(ctx);
      *(undefined8 *)(lVar9 + 0x30) = 0;
      CRYPTO_free(puVar6);
      goto LAB_00b9d44c;
    }
    ctx = EVP_PKEY_CTX_new(pkey,(ENGINE *)0x0);
    if (ctx != (EVP_PKEY_CTX *)0x0) {
      iVar1 = EVP_PKEY_encrypt_init(ctx);
      if (0 < iVar1) goto LAB_00b9d2f4;
      goto LAB_00b9d3a4;
    }
    goto LAB_00b9d288;
  case 1:
    uVar2 = cms_RecipientInfo_kari_encrypt(param_1,param_2);
    return uVar2;
  case 2:
    lVar7 = *(long *)(param_2 + 2);
    if (*(uchar **)(lVar7 + 0x20) != (uchar *)0x0) {
      lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x18);
                    /* try { // try from 00b9d1fc to 00c9d277 has its CatchHandler @ 00b9d2b8 */
      iVar1 = AES_set_encrypt_key(*(uchar **)(lVar7 + 0x20),*(int *)(lVar7 + 0x28) << 3,&local_138);
      if (iVar1 == 0) {
        puVar6 = CRYPTO_malloc((int)*(undefined8 *)(lVar9 + 0x28) + 8,"crypto/cms/cms_env.c",0x27d);
        if (puVar6 == (uchar *)0x0) {
          iVar1 = 0x41;
          iVar3 = 0x280;
LAB_00b9d424:
          ERR_put_error(0x2e,0x88,iVar1,"crypto/cms/cms_env.c",iVar3);
          goto LAB_00b9d428;
        }
                    /* catch() { ... } // from try @ 00b9d1fc with catch @ 00b9d2b8 */
        iVar1 = AES_wrap_key(&local_138,(uchar *)0x0,puVar6,*(uchar **)(lVar9 + 0x20),
                             *(uint *)(lVar9 + 0x28));
        if (iVar1 < 1) {
          iVar1 = 0x9f;
          iVar3 = 0x287;
          goto LAB_00b9d424;
        }
        ASN1_STRING_set0(*(ASN1_STRING **)(lVar7 + 0x18),puVar6,iVar1);
        uVar8 = 1;
      }
      else {
        ERR_put_error(0x2e,0x88,0x73,"crypto/cms/cms_env.c",0x279);
        puVar6 = (uchar *)0x0;
LAB_00b9d428:
        CRYPTO_free(puVar6);
        uVar8 = 0;
      }
      OPENSSL_cleanse(&local_138,0xf4);
      goto LAB_00b9d44c;
    }
                    /* try { // try from 00b9d278 to 00c9d2d3 has its CatchHandler @ 00b9d1a8 */
    iVar1 = 0x88;
    iVar3 = 0x82;
    iVar4 = 0x273;
    break;
  case 3:
    uVar2 = cms_RecipientInfo_pwri_crypt(param_1,param_2,1);
    return uVar2;
  default:
                    /* catch() { ... } // from try @ 00b9d278 with catch @ 00b9d1a8 */
    iVar1 = 0xa9;
    iVar3 = 0x9a;
    iVar4 = 0x306;
  }
  ERR_put_error(0x2e,iVar1,iVar3,"crypto/cms/cms_env.c",iVar4);
LAB_00b9d288:
  uVar8 = 0;
LAB_00b9d44c:
  return (ulong)uVar8;
}

