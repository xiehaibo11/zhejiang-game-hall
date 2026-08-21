
bool cms_DigestedData_do_final(long param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  int line;
  long lVar3;
  uint local_74;
  uchar auStack_70 [64];
  
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    iVar2 = 0x41;
    line = 0x40;
LAB_00bf1b68:
    ERR_put_error(0x2e,0x75,iVar2,"crypto/cms/cms_dd.c",line);
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    iVar2 = cms_DigestAlgorithm_find_ctx(ctx,param_2,*(undefined8 *)(lVar3 + 8));
    if ((iVar2 != 0) && (iVar2 = EVP_DigestFinal_ex(ctx,auStack_70,&local_74), 0 < iVar2)) {
      if (param_3 == 0) {
        iVar2 = ASN1_STRING_set(*(ASN1_STRING **)(lVar3 + 0x18),auStack_70,local_74);
        bVar1 = iVar2 != 0;
        goto LAB_00bf1b70;
      }
      if (local_74 == **(uint **)(lVar3 + 0x18)) {
        iVar2 = memcmp(auStack_70,*(void **)(*(uint **)(lVar3 + 0x18) + 2),(ulong)local_74);
        if (iVar2 == 0) {
          bVar1 = true;
          goto LAB_00bf1b70;
        }
        iVar2 = 0x9e;
        line = 0x55;
      }
      else {
        iVar2 = 0x79;
        line = 0x4f;
      }
      goto LAB_00bf1b68;
    }
  }
  bVar1 = false;
LAB_00bf1b70:
  EVP_MD_CTX_free(ctx);
  return bVar1;
}

