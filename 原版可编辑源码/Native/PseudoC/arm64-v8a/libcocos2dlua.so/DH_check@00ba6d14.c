
int DH_check(DH *dh,int *codes)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *rem;
  BIGNUM *b;
  ulong uVar2;
  uint uVar3;
  BIGNUM *a;
  
  *codes = 0;
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    return 0;
  }
  BN_CTX_start(ctx);
  r = BN_CTX_get(ctx);
  if ((r != (BIGNUM *)0x0) && (rem = BN_CTX_get(ctx), rem != (BIGNUM *)0x0)) {
    a = dh->g;
    if (dh->q == (BIGNUM *)0x0) {
      iVar1 = BN_is_word(a,2);
      if (iVar1 == 0) {
        iVar1 = BN_is_word(dh->g,5);
        if (iVar1 == 0) {
          uVar3 = 4;
        }
        else {
          uVar2 = BN_mod_word(dh->p,10);
          if (uVar2 == 0xffffffffffffffff) goto LAB_00ba6f3c;
          if ((uVar2 == 3) || (uVar2 == 7)) goto LAB_00ba6ee0;
          uVar3 = 8;
        }
        uVar3 = *codes | uVar3;
LAB_00ba6edc:
        *codes = uVar3;
      }
      else {
        uVar2 = BN_mod_word(dh->p,0x18);
        if (uVar2 == 0xffffffffffffffff) goto LAB_00ba6f3c;
        if (uVar2 != 0xb) {
          uVar3 = *codes | 8;
          goto LAB_00ba6edc;
        }
      }
LAB_00ba6ee0:
      iVar1 = BN_is_prime_ex(dh->p,0,ctx,(BN_GENCB *)0x0);
      if (-1 < iVar1) {
        if (iVar1 == 0) {
          uVar3 = *codes | 1;
LAB_00ba6f70:
          *codes = uVar3;
        }
        else if (dh->q == (BIGNUM *)0x0) {
          iVar1 = BN_rshift1(r,dh->p);
          if ((iVar1 == 0) || (iVar1 = BN_is_prime_ex(r,0,ctx,(BN_GENCB *)0x0), iVar1 < 0))
          goto LAB_00ba6f3c;
          if (iVar1 == 0) {
            uVar3 = *codes | 2;
            goto LAB_00ba6f70;
          }
        }
        iVar1 = 1;
        goto LAB_00ba6f40;
      }
    }
    else {
      b = BN_value_one();
      iVar1 = BN_cmp(a,b);
      if ((iVar1 < 1) || (iVar1 = BN_cmp(dh->g,dh->p), -1 < iVar1)) {
LAB_00ba6d98:
        *codes = *codes | 8;
      }
      else {
        iVar1 = BN_mod_exp(r,dh->g,dh->q,dh->p,ctx);
        if (iVar1 == 0) goto LAB_00ba6f3c;
        iVar1 = BN_is_one(r);
        if (iVar1 == 0) goto LAB_00ba6d98;
      }
      iVar1 = BN_is_prime_ex(dh->q,0,ctx,(BN_GENCB *)0x0);
      if (-1 < iVar1) {
        if (iVar1 == 0) {
          *codes = *codes | 0x10;
        }
        iVar1 = BN_div(r,rem,dh->p,dh->q,ctx);
        if (iVar1 != 0) {
          iVar1 = BN_is_one(rem);
          if (iVar1 == 0) {
            *codes = *codes | 0x20;
          }
          if ((dh->j == (BIGNUM *)0x0) || (iVar1 = BN_cmp(dh->j,r), iVar1 == 0)) goto LAB_00ba6ee0;
          uVar3 = *codes | 0x40;
          goto LAB_00ba6edc;
        }
      }
    }
  }
LAB_00ba6f3c:
  iVar1 = 0;
LAB_00ba6f40:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  return iVar1;
}

