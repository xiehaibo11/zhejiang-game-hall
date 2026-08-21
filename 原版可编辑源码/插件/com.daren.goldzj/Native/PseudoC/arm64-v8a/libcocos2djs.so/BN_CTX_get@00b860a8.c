
BIGNUM * BN_CTX_get(BN_CTX *ctx)

{
  uint uVar1;
  ulong *puVar2;
  BN_CTX *pBVar3;
  long lVar4;
  ulong uVar5;
  BIGNUM *a;
  
  if ((*(int *)(ctx + 0x34) == 0) && (*(int *)(ctx + 0x38) == 0)) {
    uVar1 = *(uint *)(ctx + 0x18);
    if (uVar1 == *(uint *)(ctx + 0x1c)) {
      uVar1 = *(uint *)(ctx + 0x3c);
      a = CRYPTO_malloc(400,"crypto/bn/bn_ctx.c",0x135);
      if (a == (BIGNUM *)0x0) {
LAB_00b861dc:
        *(undefined4 *)(ctx + 0x38) = 1;
        ERR_put_error(3,0x74,0x6d,"crypto/bn/bn_ctx.c",0xe1);
        goto LAB_00b860cc;
      }
      bn_init(a);
      if ((uVar1 >> 3 & 1) == 0) {
        bn_init(a + 1);
        bn_init(a + 2);
        bn_init(a + 3);
        bn_init(a + 4);
        bn_init(a + 5);
        bn_init(a + 6);
        bn_init(a + 7);
        bn_init(a + 8);
        bn_init(a + 9);
        bn_init(a + 10);
        bn_init(a + 0xb);
        bn_init(a + 0xc);
        bn_init(a + 0xd);
        bn_init(a + 0xe);
        bn_init(a + 0xf);
      }
      else {
        BN_set_flags(a,8);
        bn_init(a + 1);
        BN_set_flags(a + 1,8);
        bn_init(a + 2);
        BN_set_flags(a + 2,8);
        bn_init(a + 3);
        BN_set_flags(a + 3,8);
        bn_init(a + 4);
        BN_set_flags(a + 4,8);
        bn_init(a + 5);
        BN_set_flags(a + 5,8);
        bn_init(a + 6);
        BN_set_flags(a + 6,8);
        bn_init(a + 7);
        BN_set_flags(a + 7,8);
        bn_init(a + 8);
        BN_set_flags(a + 8,8);
        bn_init(a + 9);
        BN_set_flags(a + 9,8);
        bn_init(a + 10);
        BN_set_flags(a + 10,8);
        bn_init(a + 0xb);
        BN_set_flags(a + 0xb,8);
        bn_init(a + 0xc);
        BN_set_flags(a + 0xc,8);
        bn_init(a + 0xd);
        BN_set_flags(a + 0xd,8);
        bn_init(a + 0xe);
        BN_set_flags(a + 0xe,8);
        bn_init(a + 0xf);
        BN_set_flags(a + 0xf,8);
      }
      puVar2 = *(ulong **)(ctx + 0x10);
      a[0x10].d = puVar2;
      a[0x10].top = 0;
      a[0x10].dmax = 0;
      if (*(long *)ctx == 0) {
        *(BIGNUM **)(ctx + 8) = a;
        *(BIGNUM **)(ctx + 0x10) = a;
        pBVar3 = ctx;
      }
      else {
        puVar2[0x31] = (ulong)a;
        *(BIGNUM **)(ctx + 0x10) = a;
        pBVar3 = ctx + 8;
      }
      *(BIGNUM **)pBVar3 = a;
      *(int *)(ctx + 0x18) = *(int *)(ctx + 0x18) + 1;
      *(int *)(ctx + 0x1c) = *(int *)(ctx + 0x1c) + 0x10;
    }
    else {
      pBVar3 = ctx;
      if (uVar1 == 0) {
LAB_00b861bc:
        lVar4 = *(long *)pBVar3;
        uVar5 = 0;
        *(long *)(ctx + 8) = lVar4;
      }
      else {
        lVar4 = *(long *)(ctx + 8);
        uVar5 = (ulong)(uVar1 & 0xf);
        if ((uVar1 & 0xf) == 0) {
          pBVar3 = (BN_CTX *)(lVar4 + 0x188);
          goto LAB_00b861bc;
        }
      }
      a = (BIGNUM *)(lVar4 + uVar5 * 0x18);
      *(uint *)(ctx + 0x18) = uVar1 + 1;
      if (a == (BIGNUM *)0x0) goto LAB_00b861dc;
    }
    BN_set_word(a,0);
    *(int *)(ctx + 0x30) = *(int *)(ctx + 0x30) + 1;
  }
  else {
LAB_00b860cc:
    a = (BIGNUM *)0x0;
  }
  return a;
}

