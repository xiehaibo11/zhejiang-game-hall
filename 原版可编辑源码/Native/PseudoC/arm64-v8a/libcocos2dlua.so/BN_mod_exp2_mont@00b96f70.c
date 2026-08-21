
/* WARNING: Type propagation algorithm not settling */

int BN_mod_exp2_mont(BIGNUM *r,BIGNUM *a1,BIGNUM *p1,BIGNUM *a2,BIGNUM *p2,BIGNUM *m,BN_CTX *ctx,
                    BN_MONT_CTX *m_ctx)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  BIGNUM *pBVar11;
  BIGNUM *r_00;
  BIGNUM *pBVar12;
  BIGNUM *rem;
  BN_MONT_CTX *mont;
  uint uVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  BIGNUM *local_260 [32];
  BIGNUM *local_160 [32];
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b96fa4 with catch @ 00b96f80
                        */
                    /* try { // try from 00b96f9c to 00c96fa3 has its CatchHandler @ 00b970a0 */
                    /* try { // try from 00b96fa4 to 00c970c3 has its CatchHandler @ 00b96f80 */
  if ((*m->d & 1) == 0) {
    ERR_put_error(3,0x76,0x66,"crypto/bn/bn_exp2.c",0x24);
    return 0;
  }
  iVar4 = BN_num_bits(p1);
  iVar5 = BN_num_bits(p2);
  if (iVar5 == 0 && iVar4 == 0) {
    iVar4 = BN_set_word(r,1);
    return iVar4;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b96f9c with catch @ 00b970a0
                        */
  }
  iVar14 = iVar4;
  if (iVar4 <= iVar5) {
    iVar14 = iVar5;
  }
  BN_CTX_start(ctx);
  pBVar11 = BN_CTX_get(ctx);
  r_00 = BN_CTX_get(ctx);
  pBVar12 = BN_CTX_get(ctx);
  local_160[0] = pBVar12;
  rem = BN_CTX_get(ctx);
  mont = (BN_MONT_CTX *)0x0;
  uVar19 = 0;
  local_260[0] = rem;
  if ((((rem == (BIGNUM *)0x0) || (pBVar11 == (BIGNUM *)0x0)) || (r_00 == (BIGNUM *)0x0)) ||
     (pBVar12 == (BIGNUM *)0x0)) {
joined_r0x00b975fc:
    if (m_ctx != (BN_MONT_CTX *)0x0) goto LAB_00b975c8;
  }
  else {
    mont = m_ctx;
    if (m_ctx != (BN_MONT_CTX *)0x0) {
joined_r0x00b970c8:
      if (iVar4 < 0x2a0) {
        if (iVar4 < 0xf0) {
          if (iVar4 < 0x50) {
            uVar19 = 3;
            if (iVar4 < 0x18) {
              uVar19 = 1;
            }
          }
          else {
            uVar19 = 4;
          }
        }
        else {
          uVar19 = 5;
        }
      }
      else {
        uVar19 = 6;
      }
      if (iVar5 < 0x2a0) {
        if (iVar5 < 0xf0) {
          if (iVar5 < 0x50) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b97170 with catch @ 00b9713c
                        */
            uVar13 = 3;
            if (iVar5 < 0x18) {
              uVar13 = 1;
            }
          }
          else {
            uVar13 = 4;
          }
        }
        else {
          uVar13 = 5;
        }
      }
      else {
        uVar13 = 6;
      }
                    /* try { // try from 00b97168 to 00c9716f has its CatchHandler @ 00b97238 */
                    /* try { // try from 00b97170 to 00c97263 has its CatchHandler @ 00b9713c */
      if (((a1->neg == 0) && (iVar4 = BN_ucmp(a1,m), iVar4 < 0)) ||
         (iVar4 = BN_div((BIGNUM *)0x0,pBVar12,a1,m,ctx), a1 = pBVar12, iVar4 != 0)) {
        iVar4 = BN_is_zero(a1);
        if (iVar4 != 0) {
LAB_00b97194:
          BN_set_word(r,0);
          uVar19 = 1;
          goto joined_r0x00b975fc;
        }
        iVar4 = BN_to_montgomery(pBVar12,a1,mont,ctx);
        if (iVar4 != 0) {
          if (1 < uVar19) {
            iVar4 = BN_mod_mul_montgomery(pBVar11,pBVar12,pBVar12,mont,ctx);
            if (iVar4 == 0) goto LAB_00b975b8;
            iVar4 = 1 << (ulong)(uVar19 - 1 & 0x1f);
            if (1 < iVar4) {
              lVar15 = 0;
              do {
                pBVar12 = BN_CTX_get(ctx);
                local_160[lVar15 + 1] = pBVar12;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b97168 with catch @ 00b97238
                        */
                if ((pBVar12 == (BIGNUM *)0x0) ||
                   (iVar5 = BN_mod_mul_montgomery(pBVar12,local_160[lVar15],pBVar11,mont,ctx),
                   iVar5 == 0)) goto LAB_00b975b8;
                lVar2 = lVar15 + 2;
                lVar15 = lVar15 + 1;
              } while (lVar2 < iVar4);
            }
          }
          if (((a2->neg == 0) && (iVar4 = BN_ucmp(a2,m), iVar4 < 0)) ||
             (iVar4 = BN_div((BIGNUM *)0x0,rem,a2,m,ctx), a2 = rem, iVar4 != 0)) {
            iVar4 = BN_is_zero(a2);
            if (iVar4 != 0) goto LAB_00b97194;
            iVar4 = BN_to_montgomery(rem,a2,mont,ctx);
            if (iVar4 != 0) {
              if (1 < uVar13) {
                iVar4 = BN_mod_mul_montgomery(pBVar11,rem,rem,mont,ctx);
                if (iVar4 == 0) goto LAB_00b975b8;
                iVar4 = 1 << (ulong)(uVar13 - 1 & 0x1f);
                if (1 < iVar4) {
                  lVar15 = 0;
                    /* try { // try from 00b97310 to 00c97333 has its CatchHandler @ 00b97384 */
                  do {
                    pBVar12 = BN_CTX_get(ctx);
                    local_260[lVar15 + 1] = pBVar12;
                    /* try { // try from 00b97334 to 00c973bb has its CatchHandler @ 00b972a0 */
                    if ((pBVar12 == (BIGNUM *)0x0) ||
                       (iVar5 = BN_mod_mul_montgomery(pBVar12,local_260[lVar15],pBVar11,mont,ctx),
                       iVar5 == 0)) goto LAB_00b975b8;
                    lVar2 = lVar15 + 2;
                    lVar15 = lVar15 + 1;
                  } while (lVar2 < iVar4);
                }
              }
              pBVar11 = BN_value_one();
              iVar4 = BN_to_montgomery(r_00,pBVar11,mont,ctx);
              if (iVar4 != 0) {
                if (0 < iVar14) {
                  bVar3 = true;
                    /* catch() { ... } // from try @ 00b97310 with catch @ 00b97384 */
                  uVar17 = 0;
                  uVar18 = 0;
                  iVar4 = 0;
                  iVar6 = (iVar14 + -2) - uVar19;
                  iVar16 = (iVar14 + -2) - uVar13;
                  iVar5 = 0;
                  do {
                    if ((!bVar3) &&
                       (iVar9 = BN_mod_mul_montgomery(r_00,r_00,r_00,mont,ctx), iVar9 == 0))
                    goto LAB_00b975b8;
                    iVar9 = iVar14 + -1;
                    uVar19 = uVar18;
                    if (uVar18 == 0) {
                      iVar7 = BN_is_bit_set(p1,iVar9);
                      iVar10 = iVar6;
                      if (iVar7 == 0) {
                        uVar19 = 0;
                      }
                      else {
                        do {
                          iVar7 = iVar10;
                          iVar4 = BN_is_bit_set(p1,iVar7 + 2);
                          iVar10 = iVar7 + 1;
                        } while (iVar4 == 0);
                        iVar4 = iVar7 + 2;
                        uVar19 = 1;
                        for (iVar10 = iVar14 + -2; iVar7 + 1 < iVar10; iVar10 = iVar10 + -1) {
                          iVar8 = BN_is_bit_set(p1,iVar10);
                          uVar19 = (uint)(iVar8 != 0) | uVar19 << 1;
                        }
                      }
                    }
                    if (uVar17 == 0) {
                      iVar7 = BN_is_bit_set(p2,iVar9);
                      iVar10 = iVar16;
                      if (iVar7 == 0) {
                        uVar17 = 0;
                      }
                      else {
                        do {
                          iVar5 = iVar10;
                          iVar7 = BN_is_bit_set(p2,iVar5 + 2);
                          iVar10 = iVar5 + 1;
                        } while (iVar7 == 0);
                        iVar7 = iVar14 + -2;
                        iVar5 = iVar5 + 2;
                        if (iVar10 < iVar7) {
                          uVar17 = 1;
                          do {
                            iVar8 = BN_is_bit_set(p2,iVar7);
                            iVar7 = iVar7 + -1;
                            uVar17 = (uint)(iVar8 != 0) | uVar17 << 1;
                          } while (iVar10 < iVar7);
                        }
                        else {
                          uVar17 = 1;
                        }
                      }
                    }
                    uVar18 = uVar19;
                    if ((iVar9 == iVar4) && (uVar18 = 0, uVar19 != 0)) {
                      iVar10 = BN_mod_mul_montgomery(r_00,r_00,local_160[(int)uVar19 >> 1],mont,ctx)
                      ;
                      uVar18 = 0;
                      bVar3 = false;
                      if (iVar10 != 0) goto LAB_00b97544;
joined_r0x00b975fc:
                      uVar19 = 0;
                      goto joined_r0x00b975fc;
                    }
LAB_00b97544:
                    if ((iVar9 == iVar5) && (uVar17 != 0)) {
                      iVar10 = BN_mod_mul_montgomery(r_00,r_00,local_260[(int)uVar17 >> 1],mont,ctx)
                      ;
                      uVar17 = 0;
                      bVar3 = false;
                      if (iVar10 == 0) goto joined_r0x00b975fc;
                    }
                    iVar6 = iVar6 + -1;
                    iVar16 = iVar16 + -1;
                    bVar1 = 1 < iVar14;
                    iVar14 = iVar9;
                  } while (bVar1);
                }
                iVar4 = BN_from_montgomery(r,r_00,mont,ctx);
                uVar19 = (uint)(iVar4 != 0);
                goto joined_r0x00b975fc;
              }
            }
          }
        }
      }
LAB_00b975b8:
      uVar19 = 0;
      goto joined_r0x00b975fc;
    }
    mont = BN_MONT_CTX_new();
    if (mont == (BN_MONT_CTX *)0x0) {
      mont = (BN_MONT_CTX *)0x0;
      uVar19 = 0;
    }
    else {
      iVar6 = BN_MONT_CTX_set(mont,m,ctx);
      if (iVar6 != 0) goto joined_r0x00b970c8;
      uVar19 = 0;
                    /* try { // try from 00b972a0 to 00c9730f has its CatchHandler @ 00b972a0
                       catch() { ... } // from try @ 00b972a0 with catch @ 00b972a0
                       catch() { ... } // from try @ 00b97334 with catch @ 00b972a0 */
    }
  }
  BN_MONT_CTX_free(mont);
LAB_00b975c8:
  BN_CTX_end(ctx);
  return uVar19;
}

