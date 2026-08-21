
int CMS_SignerInfo_verify_content(CMS_SignerInfo *si,BIO *chain)

{
  int iVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  ASN1_OBJECT *oid;
  uint *puVar3;
  EVP_MD *p2;
  long lVar4;
  code *pcVar5;
  EVP_PKEY_CTX *ctx_00;
  uchar auStack_80 [64];
  uint local_34;
  
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    iVar1 = 0x41;
    iVar2 = 0x310;
    goto LAB_00b92fd4;
  }
  iVar1 = CMS_signed_get_attr_count(si);
  if (iVar1 < 0) {
    puVar3 = (uint *)0x0;
  }
  else {
    oid = OBJ_nid2obj(0x33);
    puVar3 = CMS_signed_get0_data_by_OBJ(si,oid,-3,4);
    if (puVar3 == (uint *)0x0) {
      iVar1 = 0x72;
      iVar2 = 0x31a;
      goto LAB_00b92fd4;
    }
  }
  iVar1 = cms_DigestAlgorithm_find_ctx(ctx,chain,*(undefined8 *)(si + 0x10));
  if (iVar1 == 0) {
LAB_00b92fd8:
    ctx_00 = (EVP_PKEY_CTX *)0x0;
  }
  else {
    iVar1 = EVP_DigestFinal_ex(ctx,auStack_80,&local_34);
    if (iVar1 < 1) {
      iVar1 = 0x93;
      iVar2 = 0x324;
LAB_00b92fd4:
      ERR_put_error(0x2e,0x9a,iVar1,"crypto/cms/cms_sd.c",iVar2);
      goto LAB_00b92fd8;
    }
    if (puVar3 != (uint *)0x0) {
      if (local_34 == *puVar3) {
        iVar1 = memcmp(auStack_80,*(void **)(puVar3 + 2),(ulong)local_34);
        if (iVar1 == 0) {
          ctx_00 = (EVP_PKEY_CTX *)0x0;
          iVar2 = 1;
          goto LAB_00b92fe0;
        }
        ERR_put_error(0x2e,0x9a,0x9e,"crypto/cms/cms_sd.c",0x333);
        ctx_00 = (EVP_PKEY_CTX *)0x0;
LAB_00b92ef0:
        iVar2 = 0;
        goto LAB_00b92fe0;
      }
      iVar1 = 0x78;
      iVar2 = 0x32d;
      goto LAB_00b92fd4;
    }
    p2 = EVP_MD_CTX_md(ctx);
    ctx_00 = EVP_PKEY_CTX_new(*(EVP_PKEY **)(si + 0x40),(ENGINE *)0x0);
    if ((ctx_00 != (EVP_PKEY_CTX *)0x0) && (iVar1 = EVP_PKEY_verify_init(ctx_00), 0 < iVar1)) {
      iVar2 = -1;
      iVar1 = EVP_PKEY_CTX_ctrl(ctx_00,-1,0xf8,1,0,p2);
      if (iVar1 < 1) goto LAB_00b92fe0;
      *(EVP_PKEY_CTX **)(si + 0x50) = ctx_00;
      lVar4 = *(long *)(*(long *)(si + 0x40) + 0x10);
      if ((lVar4 == 0) || (pcVar5 = *(code **)(lVar4 + 0xb0), pcVar5 == (code *)0x0)) {
LAB_00b93020:
        iVar2 = EVP_PKEY_verify(ctx_00,*(uchar **)(*(int **)(si + 0x28) + 2),
                                (long)**(int **)(si + 0x28),auStack_80,(ulong)local_34);
        if (0 < iVar2) goto LAB_00b92fe0;
        ERR_put_error(0x2e,0x9a,0x9e,"crypto/cms/cms_sd.c",0x347);
        goto LAB_00b92ef0;
      }
      iVar1 = (*pcVar5)(*(long *)(si + 0x40),5,1,si);
      if (iVar1 == -2) {
        iVar1 = 0x7d;
        iVar2 = 0xd2;
      }
      else {
        if (0 < iVar1) goto LAB_00b93020;
        iVar1 = 0x6f;
        iVar2 = 0xd6;
      }
      ERR_put_error(0x2e,0xaa,iVar1,"crypto/cms/cms_sd.c",iVar2);
    }
  }
  iVar2 = -1;
LAB_00b92fe0:
  EVP_PKEY_CTX_free(ctx_00);
  EVP_MD_CTX_free(ctx);
  return iVar2;
}

