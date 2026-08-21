
undefined8 * SRP_VBASE_get1_by_user(undefined8 *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 *ptr;
  char *pcVar5;
  EVP_MD_CTX *ctx;
  EVP_MD *type;
  size_t sVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  undefined8 uVar9;
  uchar auStack_58 [20];
  uchar auStack_44 [20];
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  iVar1 = OPENSSL_sk_num(*param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar3 = (undefined8 *)OPENSSL_sk_value(*param_1,iVar1);
      iVar2 = strcmp((char *)*puVar3,param_2);
      if (iVar2 == 0) {
        if (puVar3 != (undefined8 *)0x0) {
          ptr = CRYPTO_malloc(0x30,"crypto/srp/srp_vfy.c",0x9a);
          if (ptr == (undefined8 *)0x0) {
            return (undefined8 *)0x0;
          }
          ptr[3] = 0;
          ptr[2] = 0;
          ptr[5] = 0;
          ptr[4] = 0;
          ptr[1] = 0;
          *ptr = 0;
          uVar9 = puVar3[3];
          ptr[4] = puVar3[4];
          ptr[3] = uVar9;
          pcVar5 = (char *)puVar3[5];
          if ((char *)*puVar3 != (char *)0x0) {
            pcVar4 = CRYPTO_strdup((char *)*puVar3,"crypto/srp/srp_vfy.c",0xb0);
            *ptr = pcVar4;
            if (pcVar4 == (char *)0x0) goto LAB_00b61ca4;
          }
          if (pcVar5 != (char *)0x0) {
            pcVar5 = CRYPTO_strdup(pcVar5,"crypto/srp/srp_vfy.c",0xb2);
            ptr[5] = pcVar5;
            if (pcVar5 == (char *)0x0) goto LAB_00b61ca4;
          }
          pBVar7 = BN_dup((BIGNUM *)puVar3[1]);
          pBVar8 = BN_dup((BIGNUM *)puVar3[2]);
          ptr[1] = pBVar7;
          ptr[2] = pBVar8;
          if ((pBVar7 != (BIGNUM *)0x0) && (pBVar8 != (BIGNUM *)0x0)) {
            return ptr;
          }
          goto LAB_00b61ca4;
        }
        break;
      }
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(*param_1);
    } while (iVar1 < iVar2);
  }
  if (param_1[2] == 0) {
    return (undefined8 *)0x0;
  }
  if (param_1[3] == 0) {
    return (undefined8 *)0x0;
  }
  if (param_1[4] == 0) {
    return (undefined8 *)0x0;
  }
  ptr = CRYPTO_malloc(0x30,"crypto/srp/srp_vfy.c",0x9a);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  ptr[3] = 0;
  ptr[2] = 0;
  ptr[5] = 0;
  ptr[4] = 0;
  ptr[1] = 0;
  *ptr = 0;
  uVar9 = param_1[3];
  ptr[4] = param_1[4];
  ptr[3] = uVar9;
  if (param_2 == (char *)0x0) {
LAB_00b61bd0:
    iVar1 = RAND_bytes(auStack_44,0x14);
    if (0 < iVar1) {
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      if (ctx != (EVP_MD_CTX *)0x0) {
        type = EVP_sha1();
        iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
        if (iVar1 != 0) {
          pcVar5 = (char *)param_1[2];
          sVar6 = strlen(pcVar5);
          iVar1 = EVP_DigestUpdate(ctx,pcVar5,sVar6);
          if (iVar1 != 0) {
            sVar6 = strlen(param_2);
            iVar1 = EVP_DigestUpdate(ctx,param_2,sVar6);
            if ((iVar1 != 0) && (iVar1 = EVP_DigestFinal_ex(ctx,auStack_58,(uint *)0x0), iVar1 != 0)
               ) {
              EVP_MD_CTX_free(ctx);
              pBVar7 = BN_bin2bn(auStack_58,0x14,(BIGNUM *)0x0);
              pBVar8 = BN_bin2bn(auStack_44,0x14,(BIGNUM *)0x0);
              ctx = (EVP_MD_CTX *)0x0;
              ptr[1] = pBVar7;
              ptr[2] = pBVar8;
              if ((pBVar7 != (BIGNUM *)0x0) && (pBVar8 != (BIGNUM *)0x0)) {
                return ptr;
              }
            }
          }
        }
      }
      goto LAB_00b61c9c;
    }
  }
  else {
    pcVar5 = CRYPTO_strdup(param_2,"crypto/srp/srp_vfy.c",0xb0);
    *ptr = pcVar5;
    if (pcVar5 != (char *)0x0) goto LAB_00b61bd0;
  }
  ctx = (EVP_MD_CTX *)0x0;
LAB_00b61c9c:
  EVP_MD_CTX_free(ctx);
LAB_00b61ca4:
  BN_free((BIGNUM *)ptr[1]);
  BN_clear_free((BIGNUM *)ptr[2]);
  CRYPTO_free((void *)*ptr);
  CRYPTO_free((void *)ptr[5]);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}

