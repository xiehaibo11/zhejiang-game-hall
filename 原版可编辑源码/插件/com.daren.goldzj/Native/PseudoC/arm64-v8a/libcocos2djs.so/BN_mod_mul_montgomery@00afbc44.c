
int BN_mod_mul_montgomery(BIGNUM *r,BIGNUM *a,BIGNUM *b,BN_MONT_CTX *mont,BN_CTX *ctx)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  BIGNUM *r_00;
  uint uVar5;
  
  iVar3 = (mont->N).top;
  if (((1 < iVar3) && (a->top == iVar3)) && (b->top == iVar3)) {
    lVar4 = bn_wexpand(r,iVar3);
    if (lVar4 == 0) {
      return 0;
    }
    iVar2 = bn_mul_mont(r->d,a->d,b->d,(mont->N).d,mont->n0,iVar3);
    if (iVar2 != 0) {
      uVar5 = a->neg;
      uVar1 = b->neg;
      r->top = iVar3;
      r->neg = uVar1 ^ uVar5;
      bn_correct_top(r);
      return 1;
    }
  }
  BN_CTX_start(ctx);
  r_00 = BN_CTX_get(ctx);
  if (r_00 != (BIGNUM *)0x0) {
    if (a == b) {
      iVar3 = BN_sqr(r_00,a,ctx);
    }
    else {
      iVar3 = BN_mul(r_00,a,b,ctx);
    }
    if (iVar3 != 0) {
      iVar3 = FUN_00afbd70(r,r_00,mont);
                    /* try { // try from 00afbd30 to 00bfbebf has its CatchHandler @ 00afbd30
                       catch() { ... } // from try @ 00afbd30 with catch @ 00afbd30
                       catch() { ... } // from try @ 00afbecc with catch @ 00afbd30 */
      uVar5 = (uint)(iVar3 != 0);
      goto LAB_00afbd48;
    }
  }
  uVar5 = 0;
LAB_00afbd48:
  BN_CTX_end(ctx);
  return uVar5;
}

