
int EC_GROUP_cmp(EC_GROUP *a,EC_GROUP *b,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *pBVar2;
  BIGNUM *pBVar3;
  BIGNUM *a_00;
  BIGNUM *b_00;
  BIGNUM *b_01;
  BIGNUM *b_02;
  int line;
  long lVar4;
  BN_CTX *c;
  
  if ((*(int *)(*(byte **)a + 4) != *(int *)(*(long *)b + 4)) ||
     (((*(int *)(a + 0x20) != 0 && (*(int *)(b + 0x20) != 0)) &&
      (*(int *)(a + 0x20) != *(int *)(b + 0x20))))) {
    return 1;
  }
  if ((**(byte **)a >> 1 & 1) != 0) {
    return 0;
  }
  if (ctx == (BN_CTX *)0x0) {
    ctx = BN_CTX_new();
    c = ctx;
    if (ctx == (BN_CTX *)0x0) {
      return -1;
    }
  }
  else {
    c = (BN_CTX *)0x0;
  }
  BN_CTX_start(ctx);
  pBVar2 = BN_CTX_get(ctx);
  pBVar3 = BN_CTX_get(ctx);
  a_00 = BN_CTX_get(ctx);
  b_00 = BN_CTX_get(ctx);
  b_01 = BN_CTX_get(ctx);
  b_02 = BN_CTX_get(ctx);
  if (b_02 == (BIGNUM *)0x0) {
LAB_00b1ecec:
    BN_CTX_end(ctx);
    BN_CTX_free(c);
    return -1;
  }
  iVar1 = (**(code **)(*(long *)a + 0x30))(a,pBVar2,pBVar3,a_00,ctx);
  if (((iVar1 != 0) && (iVar1 = (**(code **)(*(long *)b + 0x30))(b,b_00,b_01,b_02,ctx), iVar1 != 0))
     && ((iVar1 = BN_cmp(pBVar2,b_00), iVar1 == 0 &&
         ((iVar1 = BN_cmp(pBVar3,b_01), iVar1 == 0 && (iVar1 = BN_cmp(a_00,b_02), iVar1 == 0)))))) {
    lVar4 = *(long *)a;
    if (*(code **)(lVar4 + 0xd8) == (code *)0x0) {
      iVar1 = 0x42;
      line = 0x359;
    }
    else {
      if ((lVar4 == **(long **)(a + 8)) && (lVar4 == **(long **)(b + 8))) {
        iVar1 = (**(code **)(lVar4 + 0xd8))(a,*(long **)(a + 8),*(long **)(b + 8),ctx);
        if (iVar1 == 0) {
          if ((*(BIGNUM **)(a + 0x10) == (BIGNUM *)0x0) || (*(BIGNUM **)(b + 0x10) == (BIGNUM *)0x0)
             ) goto LAB_00b1ecec;
          pBVar3 = *(BIGNUM **)(a + 0x18);
          pBVar2 = *(BIGNUM **)(b + 0x18);
          iVar1 = BN_cmp(*(BIGNUM **)(a + 0x10),*(BIGNUM **)(b + 0x10));
          if ((iVar1 == 0) && (iVar1 = BN_cmp(pBVar3,pBVar2), iVar1 == 0)) {
            iVar1 = 0;
            goto LAB_00b1ec90;
          }
        }
        goto LAB_00b1ec8c;
      }
      iVar1 = 0x65;
      line = 0x35d;
    }
    ERR_put_error(0x10,0x71,iVar1,"crypto/ec/ec_lib.c",line);
  }
LAB_00b1ec8c:
  iVar1 = 1;
LAB_00b1ec90:
  BN_CTX_end(ctx);
  BN_CTX_free(c);
  return iVar1;
}

