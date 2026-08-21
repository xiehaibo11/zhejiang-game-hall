
EC_POINT * EC_POINT_bn2point(EC_GROUP *param_1,BIGNUM *param_2,EC_POINT *param_3,BN_CTX *param_4)

{
  uint uVar1;
  int iVar2;
  uchar *to;
  EC_POINT *p;
  
  iVar2 = BN_num_bits(param_2);
  uVar1 = iVar2 + 0xeU;
  if (-1 < (int)(iVar2 + 7U)) {
    uVar1 = iVar2 + 7U;
  }
  if (0xe < iVar2 + 0xeU) {
    to = CRYPTO_malloc((int)uVar1 >> 3,"crypto/ec/ec_print.c",0x2a);
    if (to != (uchar *)0x0) {
      iVar2 = BN_bn2bin(param_2,to);
      if (iVar2 != 0) {
        p = param_3;
        if (((param_3 == (EC_POINT *)0x0) && (p = EC_POINT_new(param_1), p == (EC_POINT *)0x0)) ||
           (iVar2 = EC_POINT_oct2point(param_1,p,to,(long)((ulong)uVar1 << 0x20) >> 0x23,param_4),
           iVar2 != 0)) {
          CRYPTO_free(to);
          return p;
        }
        if (p != param_3) {
          EC_POINT_clear_free(p);
        }
      }
      CRYPTO_free(to);
    }
  }
  return (EC_POINT *)0x0;
}

