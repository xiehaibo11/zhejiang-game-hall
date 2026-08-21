
int FUN_00b58258(int param_1,uchar *param_2,uchar *param_3,long param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *a;
  uchar *to;
  BIGNUM *pBVar4;
  BN_MONT_CTX *pBVar5;
  ulong *puVar6;
  long lVar7;
  
  iVar2 = BN_num_bits(*(BIGNUM **)(param_4 + 0x20));
  if (0x4000 < iVar2) {
    iVar2 = 0x69;
    iVar3 = 0x1f2;
LAB_00b583b0:
    ERR_put_error(4,0x67,iVar2,"crypto/rsa/rsa_ossl.c",iVar3);
    return -1;
  }
  iVar2 = BN_ucmp(*(BIGNUM **)(param_4 + 0x20),*(BIGNUM **)(param_4 + 0x28));
  if (iVar2 < 1) {
    iVar2 = 0x65;
    iVar3 = 0x1f7;
    goto LAB_00b583b0;
  }
  iVar2 = BN_num_bits(*(BIGNUM **)(param_4 + 0x20));
  if ((0xc00 < iVar2) && (iVar2 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28)), 0x40 < iVar2)) {
    iVar2 = 0x65;
    iVar3 = 0x1fe;
    goto LAB_00b583b0;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    to = (uchar *)0x0;
    lVar7 = 0;
    iVar2 = -1;
    goto LAB_00b583f4;
  }
  BN_CTX_start(ctx);
  ret = BN_CTX_get(ctx);
  a = BN_CTX_get(ctx);
  iVar2 = BN_num_bits(*(BIGNUM **)(param_4 + 0x20));
  uVar1 = iVar2 + 0xe;
  if (-1 < (int)(iVar2 + 7U)) {
    uVar1 = iVar2 + 7U;
  }
  lVar7 = (long)((ulong)uVar1 << 0x20) >> 0x23;
  iVar2 = (int)uVar1 >> 3;
  to = CRYPTO_malloc(iVar2,"crypto/rsa/rsa_ossl.c",0x209);
  if (((ret == (BIGNUM *)0x0) || (a == (BIGNUM *)0x0)) || (to == (uchar *)0x0)) {
    iVar2 = 0x41;
    iVar3 = 0x20b;
LAB_00b583e4:
    ERR_put_error(4,0x67,iVar2,"crypto/rsa/rsa_ossl.c",iVar3);
LAB_00b583e8:
    iVar2 = -1;
  }
  else {
    if (iVar2 < param_1) {
      iVar2 = 0x6c;
      iVar3 = 0x214;
      goto LAB_00b583e4;
    }
    pBVar4 = BN_bin2bn(param_2,param_1,ret);
    if (pBVar4 == (BIGNUM *)0x0) goto LAB_00b583e8;
    iVar3 = BN_ucmp(ret,*(BIGNUM **)(param_4 + 0x20));
    if (-1 < iVar3) {
      iVar2 = 0x84;
      iVar3 = 0x21d;
      goto LAB_00b583e4;
    }
    if ((((*(byte *)(param_4 + 0x6c) >> 1 & 1) != 0) &&
        (pBVar5 = BN_MONT_CTX_set_locked
                            ((BN_MONT_CTX **)(param_4 + 0x70),(int)*(undefined8 *)(param_4 + 0xa0),
                             *(BIGNUM **)(param_4 + 0x20),ctx), pBVar5 == (BN_MONT_CTX *)0x0)) ||
       (iVar3 = (**(code **)(*(long *)(param_4 + 0x10) + 0x30))
                          (a,ret,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x20),ctx
                           ,*(undefined8 *)(param_4 + 0x70)), iVar3 == 0)) goto LAB_00b583e8;
    if (param_5 == 5) {
      puVar6 = (ulong *)bn_get_words(a);
      if (((*puVar6 & 0xf) != 0xc) && (iVar3 = BN_sub(a,*(BIGNUM **)(param_4 + 0x20),a), iVar3 == 0)
         ) goto LAB_00b583e8;
      iVar3 = BN_bn2bin(a,to);
      iVar2 = RSA_padding_check_X931(param_3,iVar2,to,iVar3,iVar2);
    }
    else {
      iVar3 = BN_bn2bin(a,to);
      if (param_5 == 3) {
        iVar2 = RSA_padding_check_none(param_3,iVar2,to,iVar3,iVar2);
      }
      else {
        if (param_5 != 1) {
          iVar2 = 0x76;
          iVar3 = 0x23c;
          goto LAB_00b583e4;
        }
        iVar2 = RSA_padding_check_PKCS1_type_1(param_3,iVar2,to,iVar3,iVar2);
      }
    }
    if (iVar2 < 0) {
      ERR_put_error(4,0x67,0x72,"crypto/rsa/rsa_ossl.c",0x240);
    }
  }
  BN_CTX_end(ctx);
LAB_00b583f4:
  BN_CTX_free(ctx);
  CRYPTO_clear_free(to,lVar7,"crypto/rsa/rsa_ossl.c",0x246);
  return iVar2;
}

