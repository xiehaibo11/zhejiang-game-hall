
int BN_sqr(BIGNUM *r,BIGNUM *a,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  BIGNUM *b;
  BIGNUM *pBVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  ulong auStack_150 [32];
  
  puVar7 = auStack_150;
  iVar1 = a->top;
  if (iVar1 < 1) {
    r->top = 0;
    r->neg = 0;
    return 1;
  }
  BN_CTX_start(ctx);
  b = r;
  if (a == r) {
    b = BN_CTX_get(ctx);
  }
  pBVar3 = BN_CTX_get(ctx);
  iVar8 = 0;
  if ((b == (BIGNUM *)0x0) || (pBVar3 == (BIGNUM *)0x0)) goto LAB_00b0ea14;
  iVar8 = iVar1 * 2;
  lVar4 = bn_wexpand(b,iVar8);
  if (lVar4 == 0) goto LAB_00b0ea10;
  if (iVar1 == 8) {
    bn_sqr_comba8(b->d,a->d);
  }
  else if (iVar1 == 4) {
    bn_sqr_comba4(b->d,a->d);
  }
  else {
    if (0xf < iVar1) {
      iVar2 = BN_num_bits_word((long)iVar1);
      if (iVar1 == 1 << (ulong)(iVar2 - 1U & 0x1f)) {
        lVar4 = bn_wexpand(pBVar3,iVar1 << 2);
        if (lVar4 != 0) {
          bn_sqr_recursive(b->d,a->d,iVar1,pBVar3->d);
          goto LAB_00b0e9d4;
        }
      }
      else {
        lVar4 = bn_wexpand(pBVar3,iVar8);
        if (lVar4 != 0) {
          puVar5 = b->d;
          puVar6 = a->d;
          puVar7 = pBVar3->d;
          goto LAB_00b0e9cc;
        }
      }
LAB_00b0ea10:
      iVar8 = 0;
      goto LAB_00b0ea14;
    }
    puVar5 = b->d;
    puVar6 = a->d;
LAB_00b0e9cc:
    bn_sqr_normal(puVar5,puVar6,iVar1,puVar7);
  }
LAB_00b0e9d4:
  b->neg = 0;
  b->top = iVar8 - (uint)((a->d[iVar1 + -1] & 0xffffffff00000000) == 0);
  if (b != r) {
    BN_copy(r,b);
  }
  iVar8 = 1;
LAB_00b0ea14:
  BN_CTX_end(ctx);
  return iVar8;
}

