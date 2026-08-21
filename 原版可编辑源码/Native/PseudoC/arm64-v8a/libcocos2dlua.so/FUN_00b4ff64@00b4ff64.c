
undefined8
FUN_00b4ff64(long param_1,char *param_2,int param_3,uchar *param_4,uint *param_5,code *param_6)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  EVP_MD *md;
  HMAC_CTX *ctx;
  undefined8 *puVar7;
  int *piVar8;
  uchar *salt;
  ASN1_OBJECT *local_110;
  X509_ALGOR *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uchar auStack_c0 [64];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pcVar1 = PKCS12_key_gen_utf8;
  if (param_6 != (code *)0x0) {
    pcVar1 = param_6;
  }
  iVar2 = OBJ_obj2nid(*(ASN1_OBJECT **)(*(long *)(param_1 + 0x10) + 0x18));
  if (iVar2 == 0x15) {
    puVar7 = *(undefined8 **)(param_1 + 8);
    salt = *(uchar **)((int *)puVar7[1] + 2);
    iVar2 = *(int *)puVar7[1];
    if ((ASN1_INTEGER *)puVar7[2] == (ASN1_INTEGER *)0x0) {
      uVar5 = 1;
    }
    else {
      uVar5 = ASN1_INTEGER_get((ASN1_INTEGER *)puVar7[2]);
      puVar7 = *(undefined8 **)(param_1 + 8);
    }
    X509_SIG_get0(*puVar7,&local_108,0);
    X509_ALGOR_get0(&local_110,(int *)0x0,(void **)0x0,local_108);
    iVar3 = OBJ_obj2nid(local_110);
    pcVar6 = OBJ_nid2sn(iVar3);
    md = EVP_get_digestbyname(pcVar6);
    if (md == (EVP_MD *)0x0) {
      iVar2 = 0x76;
      iVar3 = 0x68;
    }
    else {
      iVar3 = EVP_MD_size(md);
      iVar4 = EVP_MD_type(md);
      if (iVar3 < 0) {
        return 0;
      }
      if (((iVar4 - 0x3d6U < 2) || (iVar4 == 0x329)) &&
         (pcVar6 = getenv("LEGACY_GOST_PKCS12"), pcVar6 == (char *)0x0)) {
        iVar2 = PKCS5_PBKDF2_HMAC(param_2,param_3,salt,iVar2,(int)uVar5,md,0x60,auStack_c0);
        if (iVar2 != 0) {
          uStack_f8 = uStack_78;
          local_100 = local_80;
          uStack_e8 = uStack_68;
          uStack_f0 = uStack_70;
          OPENSSL_cleanse(auStack_c0,0x60);
          iVar3 = 0x20;
LAB_00b50144:
          ctx = (HMAC_CTX *)HMAC_CTX_new();
          iVar2 = HMAC_Init_ex(ctx,&local_100,iVar3,md,(ENGINE *)0x0);
          if (((iVar2 != 0) &&
              (piVar8 = *(int **)(*(long *)(param_1 + 0x10) + 0x20),
              iVar2 = HMAC_Update(ctx,*(uchar **)(piVar8 + 2),(long)*piVar8), iVar2 != 0)) &&
             (iVar2 = HMAC_Final(ctx,param_4,param_5), iVar2 != 0)) {
            HMAC_CTX_free(ctx);
            return 1;
          }
          HMAC_CTX_free(ctx);
          return 0;
        }
        iVar2 = 0x6b;
        iVar3 = 0x76;
      }
      else {
        iVar2 = (*pcVar1)(param_2,param_3,salt,iVar2,3,uVar5 & 0xffffffff,iVar3,&local_100,md);
        if (iVar2 != 0) goto LAB_00b50144;
        iVar2 = 0x6b;
        iVar3 = 0x7c;
      }
    }
  }
  else {
    iVar2 = 0x79;
    iVar3 = 0x5b;
  }
  ERR_put_error(0x23,0x6b,iVar2,"crypto/pkcs12/p12_mutl.c",iVar3);
  return 0;
}

