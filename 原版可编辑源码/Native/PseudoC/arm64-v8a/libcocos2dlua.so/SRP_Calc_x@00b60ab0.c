
BIGNUM * SRP_Calc_x(BIGNUM *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  EVP_MD_CTX *ctx;
  uchar *to;
  EVP_MD *pEVar4;
  size_t sVar5;
  BIGNUM *pBVar6;
  uchar auStack_54 [20];
  
  if (param_1 == (BIGNUM *)0x0) {
    return (BIGNUM *)0x0;
  }
  if (param_2 == (char *)0x0) {
    return (BIGNUM *)0x0;
  }
  if (param_3 == (char *)0x0) {
    return (BIGNUM *)0x0;
  }
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    return (BIGNUM *)0x0;
  }
  iVar2 = BN_num_bits(param_1);
  iVar3 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar3 = iVar2 + 7;
  }
  to = CRYPTO_malloc(iVar3 >> 3,"crypto/srp/srp_lib.c",0x80);
  if (to != (uchar *)0x0) {
    pEVar4 = EVP_sha1();
    iVar3 = EVP_DigestInit_ex(ctx,pEVar4,(ENGINE *)0x0);
    if (iVar3 != 0) {
      sVar5 = strlen(param_2);
      iVar3 = EVP_DigestUpdate(ctx,param_2,sVar5);
      if ((iVar3 != 0) && (iVar3 = EVP_DigestUpdate(ctx,&DAT_012f06b7,1), iVar3 != 0)) {
        sVar5 = strlen(param_3);
        iVar3 = EVP_DigestUpdate(ctx,param_3,sVar5);
        if ((iVar3 != 0) && (iVar3 = EVP_DigestFinal_ex(ctx,auStack_54,(uint *)0x0), iVar3 != 0)) {
          pEVar4 = EVP_sha1();
          iVar3 = EVP_DigestInit_ex(ctx,pEVar4,(ENGINE *)0x0);
          if (iVar3 != 0) {
            BN_bn2bin(param_1,to);
            iVar3 = BN_num_bits(param_1);
            uVar1 = iVar3 + 0xe;
            if (-1 < (int)(iVar3 + 7U)) {
              uVar1 = iVar3 + 7U;
            }
            iVar3 = EVP_DigestUpdate(ctx,to,(long)((ulong)uVar1 << 0x20) >> 0x23);
            if (((iVar3 != 0) && (iVar3 = EVP_DigestUpdate(ctx,auStack_54,0x14), iVar3 != 0)) &&
               (iVar3 = EVP_DigestFinal_ex(ctx,auStack_54,(uint *)0x0), iVar3 != 0)) {
              pBVar6 = BN_bin2bn(auStack_54,0x14,(BIGNUM *)0x0);
              goto LAB_00b60c34;
            }
          }
        }
      }
    }
  }
  pBVar6 = (BIGNUM *)0x0;
LAB_00b60c34:
  CRYPTO_free(to);
  EVP_MD_CTX_free(ctx);
  return pBVar6;
}

