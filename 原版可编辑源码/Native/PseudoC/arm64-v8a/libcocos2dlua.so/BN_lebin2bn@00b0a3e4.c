
BIGNUM * BN_lebin2bn(long param_1,int param_2,BIGNUM *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  BIGNUM *pBVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  BIGNUM *ptr;
  byte *pbVar10;
  
  if (param_3 == (BIGNUM *)0x0) {
    param_3 = (BIGNUM *)CRYPTO_zalloc(0x18,"crypto/bn/bn_lib.c",0xe3);
    if (param_3 == (BIGNUM *)0x0) {
      ERR_put_error(3,0x71,0x41,"crypto/bn/bn_lib.c",0xe4);
      return (BIGNUM *)0x0;
    }
    param_3->flags = 1;
    ptr = param_3;
  }
  else {
    ptr = (BIGNUM *)0x0;
  }
  pbVar10 = (byte *)(param_1 + param_2);
  if (0 < param_2) {
    do {
      pbVar5 = pbVar10 + -1;
      if (*pbVar5 != 0) goto LAB_00b0a470;
      iVar3 = param_2 + -1;
      bVar1 = 0 < param_2;
      pbVar10 = pbVar5;
      param_2 = iVar3;
    } while (iVar3 != 0 && bVar1);
  }
  if (param_2 == 0) {
    param_3->top = 0;
    return param_3;
  }
LAB_00b0a470:
  uVar8 = param_2 - 1U >> 3;
  uVar2 = uVar8 + 1;
  if (((int)uVar8 < param_3->dmax) || (pBVar4 = bn_expand2(param_3,uVar2), pBVar4 != (BIGNUM *)0x0))
  {
    uVar8 = param_2 - 1U & 7;
    uVar6 = (ulong)uVar2;
    param_3->top = uVar2;
    param_3->neg = 0;
    do {
      uVar9 = 0;
      uVar8 = ~uVar8;
      do {
        if (param_2 == 0) {
          lVar7 = (ulong)uVar2 - 1;
          goto LAB_00b0a4f0;
        }
        pbVar10 = pbVar10 + -1;
        uVar8 = uVar8 + 1;
        param_2 = param_2 + -1;
        uVar9 = (ulong)*pbVar10 | uVar9 << 8;
      } while (uVar8 != 0);
      uVar6 = (ulong)((int)uVar6 - 1);
      param_3->d[uVar6] = uVar9;
      uVar8 = 7;
    } while( true );
  }
  if (ptr == (BIGNUM *)0x0) {
    return (BIGNUM *)0x0;
  }
  if (((uint)ptr->flags >> 1 & 1) == 0) {
    if (((uint)ptr->flags >> 3 & 1) == 0) {
      CRYPTO_free(ptr->d);
      uVar2 = ptr->flags;
      goto joined_r0x00b0a5bc;
    }
    CRYPTO_secure_free(ptr->d,"crypto/bn/bn_lib.c",0xae);
  }
  uVar2 = ptr->flags;
joined_r0x00b0a5bc:
  if ((uVar2 & 1) != 0) {
    CRYPTO_free(ptr);
    return (BIGNUM *)0x0;
  }
  ptr->flags = uVar2 | 0x8000;
  ptr->d = (ulong *)0x0;
  return (BIGNUM *)0x0;
  while (lVar7 = lVar7 + -1, 1 < (int)lVar7 + 2) {
LAB_00b0a4f0:
    if (param_3->d[lVar7] != 0) break;
  }
  iVar3 = (int)lVar7 + 1;
  param_3->top = iVar3;
  if (iVar3 == 0) {
    param_3->neg = 0;
    return param_3;
  }
  return param_3;
}

