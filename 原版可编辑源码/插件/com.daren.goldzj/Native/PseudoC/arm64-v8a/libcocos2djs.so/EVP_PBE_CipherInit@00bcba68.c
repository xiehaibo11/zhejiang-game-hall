
int EVP_PBE_CipherInit(ASN1_OBJECT *pbe_obj,char *pass,int passlen,ASN1_TYPE *param,
                      EVP_CIPHER_CTX *ctx,int en_de)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  EVP_CIPHER *pEVar4;
  EVP_MD *pEVar5;
  int iVar6;
  ulong uVar7;
  code *pcVar8;
  undefined4 local_a0;
  int iStack_9c;
  
  uVar7 = (ulong)(uint)passlen;
  iVar1 = OBJ_obj2nid(pbe_obj);
  if ((iVar1 == 0) ||
     ((((local_a0 = 0, iStack_9c = iVar1, DAT_01d3b410 == 0 ||
        (iVar1 = OPENSSL_sk_find(DAT_01d3b410,&local_a0), iVar1 == -1)) ||
       (pvVar2 = (void *)OPENSSL_sk_value(DAT_01d3b410,iVar1), pvVar2 == (void *)0x0)) &&
      (pvVar2 = OBJ_bsearch_(&local_a0,&DAT_01c8b7b8,0x19,0x18,(cmp *)&LAB_00bcbfcc),
      pvVar2 == (void *)0x0)))) {
    ERR_put_error(6,0x74,0x79,"crypto/evp/evp_pbe.c",0x5b);
    if (pbe_obj == (ASN1_OBJECT *)0x0) {
      OPENSSL_strlcpy(&local_a0,"NULL",0x50);
    }
    else {
      i2t_ASN1_OBJECT((char *)&local_a0,0x50,pbe_obj);
    }
    ERR_add_error_data(2,"TYPE=",&local_a0);
    return 0;
  }
  iVar1 = *(int *)((long)pvVar2 + 8);
  iVar6 = *(int *)((long)pvVar2 + 0xc);
  pcVar8 = *(code **)((long)pvVar2 + 0x10);
  if (pass == (char *)0x0) {
    uVar7 = 0;
joined_r0x00bcbbd0:
    if (iVar1 != -1) goto LAB_00bcbb1c;
LAB_00bcbbd4:
    pEVar4 = (EVP_CIPHER *)0x0;
  }
  else {
    if (passlen == -1) {
      uVar7 = strlen(pass);
      goto joined_r0x00bcbbd0;
    }
    if (iVar1 == -1) goto LAB_00bcbbd4;
LAB_00bcbb1c:
    pcVar3 = OBJ_nid2sn(iVar1);
    pEVar4 = EVP_get_cipherbyname(pcVar3);
    if (pEVar4 == (EVP_CIPHER *)0x0) {
      iVar1 = 0xa0;
      iVar6 = 0x6e;
      goto LAB_00bcbc58;
    }
  }
  if (iVar6 == -1) {
    pEVar5 = (EVP_MD *)0x0;
  }
  else {
    pcVar3 = OBJ_nid2sn(iVar6);
    pEVar5 = EVP_get_digestbyname(pcVar3);
    if (pEVar5 == (EVP_MD *)0x0) {
      iVar1 = 0xa1;
      iVar6 = 0x78;
      goto LAB_00bcbc58;
    }
  }
  iVar1 = (*pcVar8)(ctx,pass,uVar7 & 0xffffffff,param,pEVar4,pEVar5,en_de);
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = 0x78;
  iVar6 = 0x7e;
LAB_00bcbc58:
  ERR_put_error(6,0x74,iVar1,"crypto/evp/evp_pbe.c",iVar6);
  return 0;
}

