
int BN_mod_exp_mont(BIGNUM *r,BIGNUM *a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx,BN_MONT_CTX *m_ctx)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BIGNUM *pBVar7;
  BIGNUM *r_00;
  BIGNUM *pBVar8;
  BN_MONT_CTX *mont;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  BIGNUM *local_160 [32];
  
  iVar3 = BN_get_flags(p,4);
  if (iVar3 != 0) {
    iVar3 = BN_mod_exp_mont_consttime(r,a,p,m,ctx,m_ctx);
    return iVar3;
  }
  iVar3 = BN_is_odd(m);
  if (iVar3 == 0) {
    ERR_put_error(3,0x6d,0x66,"crypto/bn/bn_exp.c",0x140);
    return 0;
  }
  iVar3 = BN_num_bits(p);
  if (iVar3 == 0) {
    iVar3 = BN_is_one(m);
    if (iVar3 == 0) {
      iVar3 = BN_set_word(r,1);
      return iVar3;
    }
    BN_set_word(r,0);
    return 1;
  }
  BN_CTX_start(ctx);
  pBVar7 = BN_CTX_get(ctx);
  r_00 = BN_CTX_get(ctx);
  pBVar8 = BN_CTX_get(ctx);
  mont = (BN_MONT_CTX *)0x0;
  local_160[0] = pBVar8;
  if (((pBVar7 == (BIGNUM *)0x0) || (r_00 == (BIGNUM *)0x0)) || (pBVar8 == (BIGNUM *)0x0))
  goto LAB_00b87560;
  mont = m_ctx;
  if (m_ctx == (BN_MONT_CTX *)0x0) {
    mont = BN_MONT_CTX_new();
    if (mont == (BN_MONT_CTX *)0x0) {
      uVar14 = 0;
    }
    else {
      iVar4 = BN_MONT_CTX_set(mont,m,ctx);
      if (iVar4 != 0) goto LAB_00b870b4;
      uVar14 = 0;
    }
  }
  else {
LAB_00b870b4:
    if (((a->neg != 0) || (iVar4 = BN_ucmp(a,m), -1 < iVar4)) &&
       (iVar4 = BN_nnmod(pBVar8,a,m,ctx), a = pBVar8, iVar4 == 0)) goto LAB_00b87560;
    iVar4 = BN_is_zero(a);
    if (iVar4 == 0) {
      iVar4 = BN_to_montgomery(pBVar8,a,mont,ctx);
      if (iVar4 == 0) goto LAB_00b87560;
      if (iVar3 < 0x2a0) {
        if (0xef < iVar3) {
          uVar14 = 5;
          goto LAB_00b871f8;
        }
        if (0x4f < iVar3) {
          uVar14 = 4;
          goto LAB_00b871f8;
        }
        if (0x17 < iVar3) {
          uVar14 = 3;
          goto LAB_00b871f8;
        }
        uVar14 = 1;
      }
      else {
        uVar14 = 6;
LAB_00b871f8:
        iVar4 = BN_mod_mul_montgomery(pBVar7,pBVar8,pBVar8,mont,ctx);
        if (iVar4 == 0) goto LAB_00b87560;
        iVar4 = 1 << (ulong)(uVar14 - 1 & 0x1f);
        if (1 < iVar4) {
          lVar15 = 0;
          do {
            pBVar8 = BN_CTX_get(ctx);
            local_160[lVar15 + 1] = pBVar8;
            if ((pBVar8 == (BIGNUM *)0x0) ||
               (iVar5 = BN_mod_mul_montgomery(pBVar8,local_160[lVar15],pBVar7,mont,ctx), iVar5 == 0)
               ) goto LAB_00b87560;
            lVar11 = lVar15 + 2;
            lVar15 = lVar15 + 1;
          } while (lVar11 < iVar4);
        }
      }
      uVar16 = m->top;
      uVar18 = (ulong)uVar16;
      if ((long)m->d[(int)(uVar16 - 1)] < 0) {
        lVar15 = bn_wexpand(r_00,uVar16);
        if (lVar15 == 0) goto LAB_00b87560;
        puVar9 = m->d;
        puVar10 = r_00->d;
        *puVar10 = -*puVar9;
        if (1 < (int)uVar16) {
          if (uVar18 - 1 < 4) {
LAB_00b87324:
            lVar11 = 1;
          }
          else {
            uVar1 = uVar16 + 3 & 3;
            lVar15 = (uVar18 - 1) - (ulong)uVar1;
            if ((lVar15 == 0) ||
               ((puVar10 + 1 < puVar9 + uVar18 && (puVar9 + 1 < puVar10 + uVar18))))
            goto LAB_00b87324;
            lVar11 = lVar15 + 1;
            puVar12 = puVar9 + 3;
            puVar13 = puVar10 + 3;
            do {
              uVar20 = puVar12[-1];
              uVar19 = puVar12[-2];
              uVar22 = puVar12[1];
              uVar21 = *puVar12;
              puVar12 = puVar12 + 4;
              lVar15 = lVar15 + -4;
              puVar13[-1] = CONCAT17(~(byte)(uVar20 >> 0x38),
                                     CONCAT16(~(byte)(uVar20 >> 0x30),
                                              CONCAT15(~(byte)(uVar20 >> 0x28),
                                                       CONCAT14(~(byte)(uVar20 >> 0x20),
                                                                CONCAT13(~(byte)(uVar20 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar20 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar20 >> 8),~(byte)uVar20)))))));
              puVar13[-2] = CONCAT17(~(byte)(uVar19 >> 0x38),
                                     CONCAT16(~(byte)(uVar19 >> 0x30),
                                              CONCAT15(~(byte)(uVar19 >> 0x28),
                                                       CONCAT14(~(byte)(uVar19 >> 0x20),
                                                                CONCAT13(~(byte)(uVar19 >> 0x18),
                                                                         CONCAT12(~(byte)(uVar19 >>
                                                                                         0x10),
                                                                                  CONCAT11(~(byte)(
                                                  uVar19 >> 8),~(byte)uVar19)))))));
              puVar13[1] = CONCAT17(~(byte)(uVar22 >> 0x38),
                                    CONCAT16(~(byte)(uVar22 >> 0x30),
                                             CONCAT15(~(byte)(uVar22 >> 0x28),
                                                      CONCAT14(~(byte)(uVar22 >> 0x20),
                                                               CONCAT13(~(byte)(uVar22 >> 0x18),
                                                                        CONCAT12(~(byte)(uVar22 >>
                                                                                        0x10),
                                                                                 CONCAT11(~(byte)(
                                                  uVar22 >> 8),~(byte)uVar22)))))));
              *puVar13 = CONCAT17(~(byte)(uVar21 >> 0x38),
                                  CONCAT16(~(byte)(uVar21 >> 0x30),
                                           CONCAT15(~(byte)(uVar21 >> 0x28),
                                                    CONCAT14(~(byte)(uVar21 >> 0x20),
                                                             CONCAT13(~(byte)(uVar21 >> 0x18),
                                                                      CONCAT12(~(byte)(uVar21 >>
                                                                                      0x10),
                                                                               CONCAT11(~(byte)(
                                                  uVar21 >> 8),~(byte)uVar21)))))));
              puVar13 = puVar13 + 4;
            } while (lVar15 != 0);
            if (uVar1 == 0) goto LAB_00b8734c;
          }
          lVar15 = uVar18 - lVar11;
          puVar9 = puVar9 + lVar11;
          puVar10 = puVar10 + lVar11;
          do {
            lVar15 = lVar15 + -1;
            *puVar10 = ~*puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          } while (lVar15 != 0);
        }
LAB_00b8734c:
        r_00->top = uVar16;
        bn_correct_top(r_00);
      }
      else {
        pBVar7 = BN_value_one();
        iVar4 = BN_to_montgomery(r_00,pBVar7,mont,ctx);
        if (iVar4 == 0) {
LAB_00b87560:
          uVar14 = 0;
          uVar16 = 0;
          goto joined_r0x00b8710c;
        }
      }
      pBVar7 = local_160[0];
      iVar3 = iVar3 + -1;
      if (uVar14 < 2) {
        bVar2 = true;
        do {
          iVar4 = BN_is_bit_set(p,iVar3);
          if (iVar4 == 0) {
            if (bVar2) {
              do {
                if (iVar3 == 0) goto LAB_00b87574;
                iVar3 = iVar3 + -1;
                iVar4 = BN_is_bit_set(p,iVar3);
              } while (iVar4 == 0);
            }
            else {
              do {
                iVar4 = BN_mod_mul_montgomery(r_00,r_00,r_00,mont,ctx);
                if (iVar4 == 0) goto LAB_00b87560;
                if (iVar3 == 0) goto LAB_00b87574;
                iVar3 = iVar3 + -1;
                iVar4 = BN_is_bit_set(p,iVar3);
              } while (iVar4 == 0);
            }
          }
          if (((!bVar2) && (iVar4 = BN_mod_mul_montgomery(r_00,r_00,r_00,mont,ctx), iVar4 == 0)) ||
             (iVar4 = BN_mod_mul_montgomery(r_00,r_00,pBVar7,mont,ctx), iVar4 == 0))
          goto LAB_00b87560;
          iVar3 = iVar3 + -1;
          bVar2 = false;
        } while (-1 < iVar3);
      }
      else {
        bVar2 = true;
        do {
          iVar4 = BN_is_bit_set(p,iVar3);
          if (iVar4 == 0) {
            if (bVar2) {
              do {
                if (iVar3 == 0) goto LAB_00b87574;
                iVar3 = iVar3 + -1;
                iVar4 = BN_is_bit_set(p,iVar3);
              } while (iVar4 == 0);
            }
            else {
              do {
                iVar4 = BN_mod_mul_montgomery(r_00,r_00,r_00,mont,ctx);
                if (iVar4 == 0) goto LAB_00b87560;
                if (iVar3 == 0) goto LAB_00b87574;
                iVar3 = iVar3 + -1;
                iVar4 = BN_is_bit_set(p,iVar3);
              } while (iVar4 == 0);
            }
          }
          iVar17 = 0;
          iVar4 = 1;
          uVar16 = 1;
          iVar5 = iVar3 + -1;
          do {
            if (iVar5 < 0) break;
            iVar6 = BN_is_bit_set(p,iVar5);
            if (iVar6 != 0) {
              uVar16 = uVar16 << (ulong)(iVar4 - iVar17 & 0x1f) | 1;
              iVar17 = iVar4;
            }
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar4 < (int)uVar14);
          if ((!bVar2) && (-1 < iVar17)) {
            iVar4 = -1;
            do {
              iVar5 = BN_mod_mul_montgomery(r_00,r_00,r_00,mont,ctx);
              if (iVar5 == 0) goto LAB_00b87560;
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar17);
          }
          iVar4 = BN_mod_mul_montgomery(r_00,r_00,local_160[(int)uVar16 >> 1],mont,ctx);
          if (iVar4 == 0) goto LAB_00b87560;
          iVar3 = (iVar3 + -1) - iVar17;
          bVar2 = false;
        } while (-1 < iVar3);
      }
LAB_00b87574:
      iVar3 = BN_from_montgomery(r,r_00,mont,ctx);
      uVar14 = (uint)(iVar3 != 0);
      uVar16 = (uint)(iVar3 != 0);
    }
    else {
      BN_set_word(r,0);
      uVar14 = 1;
      uVar16 = 1;
    }
joined_r0x00b8710c:
    if (m_ctx != (BN_MONT_CTX *)0x0) goto LAB_00b87568;
  }
  uVar16 = uVar14;
  BN_MONT_CTX_free(mont);
LAB_00b87568:
  BN_CTX_end(ctx);
  return uVar16;
}

