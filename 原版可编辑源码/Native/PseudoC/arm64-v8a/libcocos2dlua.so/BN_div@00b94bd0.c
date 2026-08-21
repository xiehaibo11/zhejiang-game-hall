
int BN_div(BIGNUM *dv,BIGNUM *rem,BIGNUM *m,BIGNUM *d,BN_CTX *ctx)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  BIGNUM *pBVar9;
  BIGNUM *r;
  BIGNUM *r_00;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong w;
  ulong d_00;
  ulong local_c8;
  BIGNUM local_78;
  
  if (((0 < m->top) && (m->d[m->top + -1] == 0)) || ((0 < d->top && (d->d[d->top + -1] == 0)))) {
    ERR_put_error(3,0x6b,0x6b,"crypto/bn/bn_div.c",0x9d);
    return 0;
  }
  iVar5 = BN_get_flags(m,4);
  if ((iVar5 == 0) && (iVar5 = BN_get_flags(d,4), iVar5 == 0)) {
    iVar5 = 0;
  }
  else {
    iVar5 = 1;
  }
  iVar6 = BN_is_zero(d);
  if (iVar6 != 0) {
    ERR_put_error(3,0x6b,0x67,"crypto/bn/bn_div.c",0xb3);
    return 0;
  }
  if ((iVar5 == 0) && (iVar6 = BN_ucmp(m,d), iVar6 < 0)) {
    if ((rem != (BIGNUM *)0x0) && (pBVar9 = BN_copy(rem,m), pBVar9 == (BIGNUM *)0x0)) {
      return 0;
    }
    if (dv == (BIGNUM *)0x0) {
      return 1;
    }
    BN_set_word(dv,0);
    return 1;
  }
  BN_CTX_start(ctx);
  pBVar9 = BN_CTX_get(ctx);
  r = BN_CTX_get(ctx);
  r_00 = BN_CTX_get(ctx);
  if (dv == (BIGNUM *)0x0) {
    dv = BN_CTX_get(ctx);
  }
  if ((((r == (BIGNUM *)0x0) || (pBVar9 == (BIGNUM *)0x0)) || (r_00 == (BIGNUM *)0x0)) ||
     (dv == (BIGNUM *)0x0)) {
LAB_00b94f58:
    BN_CTX_end(ctx);
    return 0;
  }
  iVar6 = BN_num_bits(d);
  iVar7 = BN_lshift(r_00,d,-(iVar6 % 0x40) + 0x40);
  if (iVar7 == 0) goto LAB_00b94f58;
  iVar6 = -(iVar6 % 0x40) + 0x80;
  r_00->neg = 0;
  iVar7 = BN_lshift(r,m,iVar6);
  if (iVar7 == 0) goto LAB_00b94f58;
  r->neg = 0;
  iVar7 = r->top;
  if (iVar5 != 0) {
    if (r_00->top + 1 < iVar7) {
      lVar10 = bn_wexpand(r,iVar7 + 1);
      if (lVar10 == 0) goto LAB_00b94f58;
      iVar7 = r->top;
      r->d[iVar7] = 0;
      iVar7 = iVar7 + 1;
    }
    else {
      lVar10 = bn_wexpand(r,r_00->top + 2);
      if (lVar10 == 0) goto LAB_00b94f58;
      iVar1 = r->top;
      iVar7 = r_00->top + 2;
      if (iVar1 < iVar7) {
        iVar15 = iVar7;
        if (iVar7 <= iVar1 + 1) {
          iVar15 = iVar1 + 1;
        }
        memset(r->d + iVar1,0,(ulong)(uint)((iVar15 + -1) - iVar1) * 8 + 8);
      }
    }
    r->top = iVar7;
  }
  iVar1 = r_00->top;
  local_78.neg = 0;
  lVar10 = (long)iVar7 - (long)iVar1;
  local_78.d = r->d + lVar10;
  iVar15 = (int)lVar10;
  local_78.dmax = r->dmax - iVar15;
  d_00 = r_00->d[iVar1 + -1];
  if (iVar1 + -1 == 0) {
    local_c8 = 0;
  }
  else {
    local_c8 = r_00->d[iVar1 + -2];
  }
  puVar18 = r->d;
  dv->neg = d->neg ^ m->neg;
  local_78.top = iVar1;
  lVar11 = bn_wexpand(dv,iVar15 + 1);
  if (lVar11 == 0) goto LAB_00b94f58;
  puVar17 = dv->d;
  dv->top = iVar15 - iVar5;
  lVar11 = bn_wexpand(pBVar9);
  if (lVar11 == 0) goto LAB_00b94f58;
  puVar17 = puVar17 + lVar10 + -1;
  if (iVar5 == 0) {
    iVar8 = BN_ucmp(&local_78,r_00);
    if (iVar8 < 0) {
      iVar8 = dv->top + -1;
      dv->top = iVar8;
      goto LAB_00b94f3c;
    }
    bn_sub_words(local_78.d,local_78.d,r_00->d,iVar1);
    *puVar17 = 1;
  }
  iVar8 = dv->top;
LAB_00b94f3c:
  if (iVar8 == 0) {
    dv->neg = 0;
    puVar17 = puVar17 + 1;
  }
  if (1 < iVar15) {
    iVar15 = 0;
    puVar18 = puVar18 + (long)iVar7 + -1;
    do {
      uVar16 = puVar18[-1];
      if (*puVar18 == d_00) {
        w = 0xffffffffffffffff;
      }
      else {
        w = bn_div_words(*puVar18,uVar16,d_00);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_c8;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = w;
        uVar12 = SUB168(auVar2 * auVar3,8);
        if (uVar16 - w * d_00 <= uVar12) {
          lVar14 = 1 - w;
          uVar13 = w * local_c8;
          lVar11 = -d_00 * w;
          do {
            if (((lVar11 + uVar16 == uVar12) && (uVar13 <= puVar18[-2])) ||
               (w = w - 1, d_00 * lVar14 + uVar16 < d_00)) break;
            bVar4 = uVar13 < local_c8;
            uVar13 = uVar13 - local_c8;
            uVar16 = uVar16 + d_00;
            uVar12 = uVar12 - bVar4;
          } while (lVar11 + uVar16 <= uVar12);
        }
      }
      uVar16 = bn_mul_words(pBVar9->d,r_00->d,iVar1,w);
      pBVar9->d[iVar1] = uVar16;
      local_78.d = local_78.d + -1;
      uVar16 = bn_sub_words(local_78.d,local_78.d,pBVar9->d,iVar1 + 1);
      if (uVar16 != 0) {
        w = w - 1;
        uVar16 = bn_add_words(local_78.d,local_78.d,r_00->d,iVar1);
        if (uVar16 != 0) {
          *puVar18 = *puVar18 + 1;
        }
      }
      iVar15 = iVar15 + 1;
      puVar17 = puVar17 + -1;
      *puVar17 = w;
      puVar18 = puVar18 + -1;
    } while (iVar15 < (int)(lVar10 + -1));
  }
  bn_correct_top(r);
  if (rem != (BIGNUM *)0x0) {
    iVar7 = m->neg;
    BN_rshift(rem,r,iVar6);
    iVar6 = BN_is_zero(rem);
    if (iVar6 == 0) {
      rem->neg = iVar7;
    }
  }
  if (iVar5 != 0) {
    bn_correct_top(dv);
  }
  BN_CTX_end(ctx);
  return 1;
}

