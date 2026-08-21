
BIGNUM * BN_bin2bn(uchar *s,int len,BIGNUM *ret)

{
  bool bVar1;
  uint uVar2;
  BIGNUM *pBVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  byte *pbVar9;
  BIGNUM *ptr;
  
  if (ret == (BIGNUM *)0x0) {
    ptr = (BIGNUM *)CRYPTO_zalloc(0x18,"crypto/bn/bn_lib.c",0xe3);
    if (ptr == (BIGNUM *)0x0) {
      ERR_put_error(3,0x71,0x41,"crypto/bn/bn_lib.c",0xe4);
      return (BIGNUM *)0x0;
    }
    ptr->flags = 1;
    ret = ptr;
  }
  else {
    ptr = (BIGNUM *)0x0;
  }
  iVar8 = len;
  if (0 < len) {
    do {
      len = iVar8;
      if (*s != 0) goto LAB_00b0a048;
      len = iVar8 + -1;
      s = s + 1;
      bVar1 = 0 < iVar8;
      iVar8 = len;
    } while (len != 0 && bVar1);
  }
  if (len == 0) {
    ret->top = 0;
    return ret;
  }
LAB_00b0a048:
  uVar6 = len - 1U >> 3;
  uVar2 = uVar6 + 1;
  if (((int)uVar6 < ret->dmax) || (pBVar3 = bn_expand2(ret,uVar2), pBVar3 != (BIGNUM *)0x0)) {
    uVar6 = len - 1U & 7;
    uVar4 = (ulong)uVar2;
    ret->top = uVar2;
    ret->neg = 0;
    do {
      uVar7 = 0;
      uVar6 = ~uVar6;
      pbVar9 = s;
      do {
        if (len == 0) {
          lVar5 = (ulong)uVar2 - 1;
          goto LAB_00b0a0c8;
        }
        s = pbVar9 + 1;
        uVar6 = uVar6 + 1;
        len = len + -1;
        uVar7 = (ulong)*pbVar9 | uVar7 << 8;
        pbVar9 = s;
      } while (uVar6 != 0);
      uVar4 = (ulong)((int)uVar4 - 1);
      ret->d[uVar4] = uVar7;
      uVar6 = 7;
    } while( true );
  }
  if (ptr == (BIGNUM *)0x0) {
    return (BIGNUM *)0x0;
  }
  if (((uint)ptr->flags >> 1 & 1) == 0) {
    if (((uint)ptr->flags >> 3 & 1) == 0) {
      CRYPTO_free(ptr->d);
      uVar2 = ptr->flags;
      goto joined_r0x00b0a1c0;
    }
    CRYPTO_secure_free(ptr->d,"crypto/bn/bn_lib.c",0xae);
  }
  uVar2 = ptr->flags;
joined_r0x00b0a1c0:
  if ((uVar2 & 1) != 0) {
    CRYPTO_free(ptr);
    return (BIGNUM *)0x0;
  }
  ptr->flags = uVar2 | 0x8000;
  ptr->d = (ulong *)0x0;
  return (BIGNUM *)0x0;
  while (lVar5 = lVar5 + -1, 1 < (int)lVar5 + 2) {
LAB_00b0a0c8:
    if (ret->d[lVar5] != 0) break;
  }
  iVar8 = (int)lVar5 + 1;
  ret->top = iVar8;
  if (iVar8 == 0) {
    ret->neg = 0;
    return ret;
  }
  return ret;
}

