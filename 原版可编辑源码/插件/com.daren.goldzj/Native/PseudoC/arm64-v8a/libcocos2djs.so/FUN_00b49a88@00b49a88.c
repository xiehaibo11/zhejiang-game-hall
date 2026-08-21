
int FUN_00b49a88(int param_1,uchar *param_2,void *param_3,long param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  BN_CTX *ctx;
  BIGNUM *ret;
  BIGNUM *a;
  uchar *to;
  BIGNUM *pBVar3;
  BN_MONT_CTX *pBVar4;
  int iVar5;
  long lVar6;
  
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x20));
  if (0x4000 < iVar1) {
    iVar1 = 0x69;
    iVar5 = 0x3c;
LAB_00b49bfc:
    ERR_put_error(4,0x68,iVar1,"crypto/rsa/rsa_ossl.c",iVar5);
    return -1;
  }
  iVar1 = BN_ucmp(*(BIGNUM **)(param_4 + 0x20),*(BIGNUM **)(param_4 + 0x28));
  if (iVar1 < 1) {
    iVar1 = 0x65;
    iVar5 = 0x41;
    goto LAB_00b49bfc;
  }
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x20));
  if ((0xc00 < iVar1) && (iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x28)), 0x40 < iVar1)) {
    iVar1 = 0x65;
    iVar5 = 0x48;
    goto LAB_00b49bfc;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    to = (uchar *)0x0;
    lVar6 = 0;
    iVar1 = -1;
    goto LAB_00b49c44;
  }
  BN_CTX_start(ctx);
  ret = BN_CTX_get(ctx);
  a = BN_CTX_get(ctx);
  iVar1 = BN_num_bits(*(BIGNUM **)(param_4 + 0x20));
  iVar5 = iVar1 + 0xe;
  if (-1 < iVar1 + 7) {
    iVar5 = iVar1 + 7;
  }
  iVar5 = iVar5 >> 3;
  to = CRYPTO_malloc(iVar5,"crypto/rsa/rsa_ossl.c",0x53);
  if (((ret == (BIGNUM *)0x0) || (a == (BIGNUM *)0x0)) || (to == (uchar *)0x0)) {
    iVar1 = 0x41;
    iVar2 = 0x55;
LAB_00b49c30:
    ERR_put_error(4,0x68,iVar1,"crypto/rsa/rsa_ossl.c",iVar2);
LAB_00b49c34:
    iVar1 = -1;
  }
  else {
    switch(param_5) {
    case 1:
      iVar1 = RSA_padding_add_PKCS1_type_2(to,iVar5,param_2,param_1);
      break;
    case 2:
      iVar1 = RSA_padding_add_SSLv23(to,iVar5,param_2,param_1);
      if (0 < iVar1) goto LAB_00b49d04;
      goto LAB_00b49c34;
    case 3:
      iVar1 = RSA_padding_add_none(to,iVar5,param_2,param_1);
      break;
    case 4:
      iVar1 = RSA_padding_add_PKCS1_OAEP(to,iVar5,param_2,param_1,(uchar *)0x0,0);
      break;
    default:
      iVar1 = 0x76;
      iVar2 = 0x67;
      goto LAB_00b49c30;
    }
    if (iVar1 < 1) goto LAB_00b49c34;
LAB_00b49d04:
    pBVar3 = BN_bin2bn(to,iVar5,ret);
    if (pBVar3 == (BIGNUM *)0x0) goto LAB_00b49c34;
    iVar1 = BN_ucmp(ret,*(BIGNUM **)(param_4 + 0x20));
    if (-1 < iVar1) {
      iVar1 = 0x84;
      iVar2 = 0x73;
      goto LAB_00b49c30;
    }
    if ((((*(byte *)(param_4 + 0x6c) >> 1 & 1) != 0) &&
        (pBVar4 = BN_MONT_CTX_set_locked
                            ((BN_MONT_CTX **)(param_4 + 0x70),(int)*(undefined8 *)(param_4 + 0xa0),
                             *(BIGNUM **)(param_4 + 0x20),ctx), pBVar4 == (BN_MONT_CTX *)0x0)) ||
       (iVar1 = (**(code **)(*(long *)(param_4 + 0x10) + 0x30))
                          (a,ret,*(undefined8 *)(param_4 + 0x28),*(undefined8 *)(param_4 + 0x20),ctx
                           ,*(undefined8 *)(param_4 + 0x70)), iVar1 == 0)) goto LAB_00b49c34;
    iVar2 = BN_num_bits(a);
    iVar1 = iVar2 + 0xe;
    if (-1 < iVar2 + 7) {
      iVar1 = iVar2 + 7;
    }
    iVar2 = BN_bn2bin(a,(uchar *)((long)param_3 + (long)(iVar5 - (iVar1 >> 3))));
    iVar1 = iVar5;
    if (iVar2 < iVar5) {
      memset(param_3,0,(ulong)(uint)((iVar5 + -1) - iVar2) + 1);
    }
  }
  BN_CTX_end(ctx);
  lVar6 = (long)iVar5;
LAB_00b49c44:
  BN_CTX_free(ctx);
  CRYPTO_clear_free(to,lVar6,"crypto/rsa/rsa_ossl.c",0x8e);
  return iVar1;
}

