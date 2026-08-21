
int BN_mod_exp_simple(BIGNUM *r,BIGNUM *a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  BIGNUM *local_160 [32];
  
  iVar3 = BN_get_flags(p,4);
  if (iVar3 != 0) {
    ERR_put_error(3,0x7e,0x42,"crypto/bn/bn_exp.c",0x4e8);
    return 0;
  }
  iVar3 = BN_num_bits(p);
  if (iVar3 == 0) {
    iVar3 = BN_is_one(m);
    if (iVar3 != 0) {
      BN_set_word(r,0);
      return 1;
    }
    iVar3 = BN_set_word(r,1);
    return iVar3;
  }
  BN_CTX_start(ctx);
  pBVar7 = BN_CTX_get(ctx);
  pBVar8 = BN_CTX_get(ctx);
  iVar4 = 0;
  local_160[0] = pBVar8;
  if ((pBVar7 == (BIGNUM *)0x0) || (pBVar8 == (BIGNUM *)0x0)) goto LAB_00b96f3c;
  iVar4 = BN_nnmod(pBVar8,a,m,ctx);
  if (iVar4 != 0) {
    iVar4 = BN_is_zero(pBVar8);
    if (iVar4 != 0) {
      BN_set_word(r,0);
      iVar4 = 1;
      goto LAB_00b96f3c;
    }
    if (iVar3 < 0x2a0) {
      if (0xef < iVar3) {
        uVar12 = 5;
        goto LAB_00b96cac;
      }
      if (0x4f < iVar3) {
        uVar12 = 4;
        goto LAB_00b96cac;
      }
      if (0x17 < iVar3) {
        uVar12 = 3;
        goto LAB_00b96cac;
      }
      uVar12 = 1;
    }
    else {
      uVar12 = 6;
LAB_00b96cac:
      iVar4 = BN_mod_mul(pBVar7,pBVar8,pBVar8,m,ctx);
      if (iVar4 == 0) goto LAB_00b96f38;
      iVar4 = 1 << (ulong)(uVar12 - 1 & 0x1f);
      if (1 < iVar4) {
        lVar11 = 0;
        do {
          pBVar8 = BN_CTX_get(ctx);
          local_160[lVar11 + 1] = pBVar8;
          if ((pBVar8 == (BIGNUM *)0x0) ||
             (iVar5 = BN_mod_mul(pBVar8,local_160[lVar11],pBVar7,m,ctx), iVar5 == 0))
          goto LAB_00b96f38;
          lVar1 = lVar11 + 2;
          lVar11 = lVar11 + 1;
        } while (lVar1 < iVar4);
      }
    }
    iVar4 = BN_set_word(r,1);
    pBVar7 = local_160[0];
    if (iVar4 != 0) {
      iVar3 = iVar3 + -1;
      if (uVar12 < 2) {
        bVar2 = true;
        iVar4 = 1;
        do {
          iVar5 = BN_is_bit_set(p,iVar3);
          if (iVar5 == 0) {
            if (bVar2) {
              do {
                if (iVar3 == 0) goto LAB_00b96f68;
                iVar3 = iVar3 + -1;
                iVar5 = BN_is_bit_set(p,iVar3);
              } while (iVar5 == 0);
            }
            else {
              do {
                iVar5 = BN_mod_mul(r,r,r,m,ctx);
                if (iVar5 == 0) goto LAB_00b96f38;
                if (iVar3 == 0) goto LAB_00b96f68;
                iVar3 = iVar3 + -1;
                iVar5 = BN_is_bit_set(p,iVar3);
              } while (iVar5 == 0);
            }
          }
          if (((!bVar2) && (iVar5 = BN_mod_mul(r,r,r,m,ctx), iVar5 == 0)) ||
             (iVar5 = BN_mod_mul(r,r,pBVar7,m,ctx), iVar5 == 0)) goto LAB_00b96f38;
          bVar2 = false;
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      else {
        bVar2 = true;
        do {
          iVar4 = BN_is_bit_set(p,iVar3);
          if (iVar4 == 0) {
            if (bVar2) {
              do {
                if (iVar3 == 0) goto LAB_00b96f68;
                iVar3 = iVar3 + -1;
                iVar4 = BN_is_bit_set(p,iVar3);
              } while (iVar4 == 0);
            }
            else {
              do {
                iVar4 = BN_mod_mul(r,r,r,m,ctx);
                if (iVar4 == 0) goto LAB_00b96f38;
                if (iVar3 == 0) goto LAB_00b96f68;
                iVar3 = iVar3 + -1;
                iVar4 = BN_is_bit_set(p,iVar3);
              } while (iVar4 == 0);
            }
          }
          iVar10 = 0;
          uVar9 = 1;
          iVar4 = 1;
          iVar5 = iVar3 + -1;
          do {
            if (iVar5 < 0) break;
            iVar6 = BN_is_bit_set(p,iVar5);
            if (iVar6 != 0) {
              uVar9 = uVar9 << (ulong)(iVar4 - iVar10 & 0x1f) | 1;
              iVar10 = iVar4;
            }
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar4 < (int)uVar12);
          if ((!bVar2) && (-1 < iVar10)) {
            iVar4 = -1;
            do {
              iVar5 = BN_mod_mul(r,r,r,m,ctx);
              if (iVar5 == 0) goto LAB_00b96f38;
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar10);
          }
          iVar4 = BN_mod_mul(r,r,local_160[(int)uVar9 >> 1],m,ctx);
          if (iVar4 == 0) goto LAB_00b96f38;
          bVar2 = false;
          iVar3 = (iVar3 + -1) - iVar10;
          iVar4 = 1;
        } while (-1 < iVar3);
      }
      goto LAB_00b96f3c;
    }
  }
LAB_00b96f38:
  iVar4 = 0;
LAB_00b96f3c:
  BN_CTX_end(ctx);
  return iVar4;
LAB_00b96f68:
  iVar4 = 1;
  goto LAB_00b96f3c;
}

