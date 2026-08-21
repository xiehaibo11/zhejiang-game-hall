
bool BN_GF2m_mod_solve_quad_arr(BIGNUM *param_1,undefined8 param_2,byte *param_3,BN_CTX *param_4)

{
  BIGNUM *pBVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BIGNUM *pBVar6;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  BIGNUM *pBVar9;
  BIGNUM *pBVar10;
  long lVar11;
  uint uVar12;
  ulong *puVar13;
  ulong *puVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  
  if (*(int *)param_3 == 0) {
    BN_set_word(param_1,0);
    return true;
  }
  BN_CTX_start(param_4);
  pBVar6 = BN_CTX_get(param_4);
  a = BN_CTX_get(param_4);
  a_00 = BN_CTX_get(param_4);
  if ((a_00 == (BIGNUM *)0x0) || (iVar3 = BN_GF2m_mod_arr(pBVar6,param_2,param_3), iVar3 == 0))
  goto LAB_00bde98c;
  iVar3 = BN_is_zero(pBVar6);
  if (iVar3 != 0) {
    BN_set_word(param_1,0);
    bVar2 = true;
    goto LAB_00bde990;
  }
  if ((*param_3 & 1) == 0) {
    pBVar7 = BN_CTX_get(param_4);
    pBVar8 = BN_CTX_get(param_4);
    pBVar9 = BN_CTX_get(param_4);
    if (pBVar9 != (BIGNUM *)0x0) {
      iVar3 = 0;
      do {
        iVar4 = BN_rand(pBVar7,*(int *)param_3,0,0);
        if ((iVar4 == 0) || (iVar4 = BN_GF2m_mod_arr(pBVar7,pBVar7,param_3), iVar4 == 0))
        goto LAB_00bde98c;
        BN_set_word(a,0);
        pBVar10 = BN_copy(a_00,pBVar7);
        if (pBVar10 == (BIGNUM *)0x0) goto LAB_00bde98c;
        if (1 < *(int *)param_3) {
          iVar4 = 1;
          do {
            iVar5 = BN_GF2m_mod_sqr_arr(a,a,param_3,param_4);
            if (((iVar5 == 0) ||
                (iVar5 = BN_GF2m_mod_sqr_arr(pBVar8,a_00,param_3,param_4), iVar5 == 0)) ||
               (iVar5 = BN_GF2m_mod_mul_arr(pBVar9,pBVar8,pBVar6,param_3,param_4), iVar5 == 0))
            goto LAB_00bde98c;
            pBVar10 = pBVar9;
            if (pBVar9->top <= a->top) {
              pBVar10 = a;
            }
            pBVar1 = a;
            if (pBVar9->top <= a->top) {
              pBVar1 = pBVar9;
            }
            lVar11 = bn_wexpand(a,pBVar10->top);
            if (lVar11 == 0) goto LAB_00bde98c;
            uVar12 = pBVar1->top;
            if ((int)uVar12 < 1) {
              uVar12 = 0;
            }
            else {
              puVar13 = pBVar10->d;
              puVar14 = pBVar1->d;
              puVar16 = a->d;
              uVar17 = (ulong)(int)uVar12;
              if ((uVar12 < 4) || (uVar19 = uVar17 & 0xfffffffffffffffc, uVar19 == 0)) {
                uVar23 = 0;
              }
              else {
                uVar23 = 0;
                if ((puVar13 + uVar17 <= puVar16 || puVar16 + uVar17 <= puVar13) &&
                   (puVar14 + uVar17 <= puVar16 || puVar16 + uVar17 <= puVar14)) {
                  puVar20 = puVar13 + 2;
                  puVar21 = puVar14 + 2;
                  puVar22 = puVar16 + 2;
                  uVar23 = uVar19;
                  do {
                    uVar25 = puVar20[-1];
                    uVar24 = puVar20[-2];
                    uVar27 = puVar20[1];
                    uVar26 = *puVar20;
                    uVar29 = puVar21[-1];
                    uVar28 = puVar21[-2];
                    uVar31 = puVar21[1];
                    uVar30 = *puVar21;
                    puVar20 = puVar20 + 4;
                    puVar21 = puVar21 + 4;
                    uVar23 = uVar23 - 4;
                    puVar22[-1] = CONCAT17((byte)(uVar29 >> 0x38) ^ (byte)(uVar25 >> 0x38),
                                           CONCAT16((byte)(uVar29 >> 0x30) ^ (byte)(uVar25 >> 0x30),
                                                    CONCAT15((byte)(uVar29 >> 0x28) ^
                                                             (byte)(uVar25 >> 0x28),
                                                             CONCAT14((byte)(uVar29 >> 0x20) ^
                                                                      (byte)(uVar25 >> 0x20),
                                                                      CONCAT13((byte)(uVar29 >> 0x18
                                                                                     ) ^ (byte)(
                                                  uVar25 >> 0x18),
                                                  CONCAT12((byte)(uVar29 >> 0x10) ^
                                                           (byte)(uVar25 >> 0x10),
                                                           CONCAT11((byte)(uVar29 >> 8) ^
                                                                    (byte)(uVar25 >> 8),
                                                                    (byte)uVar29 ^ (byte)uVar25)))))
                                                  ));
                    puVar22[-2] = CONCAT17((byte)(uVar28 >> 0x38) ^ (byte)(uVar24 >> 0x38),
                                           CONCAT16((byte)(uVar28 >> 0x30) ^ (byte)(uVar24 >> 0x30),
                                                    CONCAT15((byte)(uVar28 >> 0x28) ^
                                                             (byte)(uVar24 >> 0x28),
                                                             CONCAT14((byte)(uVar28 >> 0x20) ^
                                                                      (byte)(uVar24 >> 0x20),
                                                                      CONCAT13((byte)(uVar28 >> 0x18
                                                                                     ) ^ (byte)(
                                                  uVar24 >> 0x18),
                                                  CONCAT12((byte)(uVar28 >> 0x10) ^
                                                           (byte)(uVar24 >> 0x10),
                                                           CONCAT11((byte)(uVar28 >> 8) ^
                                                                    (byte)(uVar24 >> 8),
                                                                    (byte)uVar28 ^ (byte)uVar24)))))
                                                  ));
                    puVar22[1] = CONCAT17((byte)(uVar31 >> 0x38) ^ (byte)(uVar27 >> 0x38),
                                          CONCAT16((byte)(uVar31 >> 0x30) ^ (byte)(uVar27 >> 0x30),
                                                   CONCAT15((byte)(uVar31 >> 0x28) ^
                                                            (byte)(uVar27 >> 0x28),
                                                            CONCAT14((byte)(uVar31 >> 0x20) ^
                                                                     (byte)(uVar27 >> 0x20),
                                                                     CONCAT13((byte)(uVar31 >> 0x18)
                                                                              ^ (byte)(uVar27 >>
                                                                                      0x18),
                                                                              CONCAT12((byte)(uVar31
                                                                                             >> 0x10
                                                  ) ^ (byte)(uVar27 >> 0x10),
                                                  CONCAT11((byte)(uVar31 >> 8) ^ (byte)(uVar27 >> 8)
                                                           ,(byte)uVar31 ^ (byte)uVar27)))))));
                    *puVar22 = CONCAT17((byte)(uVar30 >> 0x38) ^ (byte)(uVar26 >> 0x38),
                                        CONCAT16((byte)(uVar30 >> 0x30) ^ (byte)(uVar26 >> 0x30),
                                                 CONCAT15((byte)(uVar30 >> 0x28) ^
                                                          (byte)(uVar26 >> 0x28),
                                                          CONCAT14((byte)(uVar30 >> 0x20) ^
                                                                   (byte)(uVar26 >> 0x20),
                                                                   CONCAT13((byte)(uVar30 >> 0x18) ^
                                                                            (byte)(uVar26 >> 0x18),
                                                                            CONCAT12((byte)(uVar30 
                                                  >> 0x10) ^ (byte)(uVar26 >> 0x10),
                                                  CONCAT11((byte)(uVar30 >> 8) ^ (byte)(uVar26 >> 8)
                                                           ,(byte)uVar30 ^ (byte)uVar26)))))));
                    puVar22 = puVar22 + 4;
                  } while (uVar23 != 0);
                  uVar23 = uVar19;
                  if (uVar19 == uVar17) goto LAB_00bde278;
                }
              }
              lVar11 = uVar17 - uVar23;
              puVar13 = puVar13 + uVar23;
              puVar14 = puVar14 + uVar23;
              puVar16 = puVar16 + uVar23;
              do {
                lVar11 = lVar11 + -1;
                *puVar16 = *puVar14 ^ *puVar13;
                puVar13 = puVar13 + 1;
                puVar14 = puVar14 + 1;
                puVar16 = puVar16 + 1;
              } while (lVar11 != 0);
            }
LAB_00bde278:
            iVar5 = pBVar10->top;
            if ((int)uVar12 < iVar5) {
              puVar13 = pBVar10->d;
              puVar14 = a->d;
              lVar15 = (long)iVar5;
              lVar11 = (long)(int)uVar12;
              uVar17 = lVar15 - lVar11;
              if ((3 < uVar17) && (uVar19 = uVar17 & 0xfffffffffffffffc, uVar19 != 0)) {
                if ((puVar13 + lVar15 <= puVar14 + lVar11) || (puVar14 + lVar15 <= puVar13 + lVar11)
                   ) {
                  puVar16 = puVar14 + lVar11 + 2;
                  puVar20 = puVar13 + lVar11 + 2;
                  uVar23 = uVar19;
                  do {
                    puVar21 = puVar20 + -1;
                    uVar24 = puVar20[-2];
                    uVar26 = puVar20[1];
                    uVar25 = *puVar20;
                    uVar23 = uVar23 - 4;
                    puVar20 = puVar20 + 4;
                    puVar16[-1] = *puVar21;
                    puVar16[-2] = uVar24;
                    puVar16[1] = uVar26;
                    *puVar16 = uVar25;
                    puVar16 = puVar16 + 4;
                  } while (uVar23 != 0);
                  lVar11 = uVar19 + lVar11;
                  if (uVar17 == uVar19) goto LAB_00bde318;
                }
              }
              do {
                lVar18 = lVar11 + 1;
                puVar14[lVar11] = puVar13[lVar11];
                lVar11 = lVar18;
              } while (lVar18 < lVar15);
            }
LAB_00bde318:
            a->top = iVar5;
            bn_correct_top(a);
            pBVar10 = pBVar7;
            if (pBVar7->top <= pBVar8->top) {
              pBVar10 = pBVar8;
            }
            pBVar1 = pBVar8;
            if (pBVar7->top <= pBVar8->top) {
              pBVar1 = pBVar7;
            }
            lVar11 = bn_wexpand(a_00,pBVar10->top);
            if (lVar11 == 0) goto LAB_00bde98c;
            uVar12 = pBVar1->top;
            if ((int)uVar12 < 1) {
              uVar12 = 0;
            }
            else {
              puVar13 = pBVar10->d;
              puVar14 = pBVar1->d;
              puVar16 = a_00->d;
              uVar17 = (ulong)(int)uVar12;
              if (uVar12 < 4) {
                uVar19 = 0;
              }
              else {
                uVar23 = uVar17 & 0xfffffffffffffffc;
                uVar19 = 0;
                if (uVar23 != 0) {
                  if ((puVar13 + uVar17 <= puVar16 || puVar16 + uVar17 <= puVar13) &&
                     (puVar14 + uVar17 <= puVar16 || puVar16 + uVar17 <= puVar14)) {
                    puVar20 = puVar13 + 2;
                    puVar21 = puVar14 + 2;
                    puVar22 = puVar16 + 2;
                    uVar19 = uVar23;
                    do {
                      uVar25 = puVar20[-1];
                      uVar24 = puVar20[-2];
                      uVar27 = puVar20[1];
                      uVar26 = *puVar20;
                      uVar29 = puVar21[-1];
                      uVar28 = puVar21[-2];
                      uVar31 = puVar21[1];
                      uVar30 = *puVar21;
                      puVar20 = puVar20 + 4;
                      puVar21 = puVar21 + 4;
                      uVar19 = uVar19 - 4;
                      puVar22[-1] = CONCAT17((byte)(uVar29 >> 0x38) ^ (byte)(uVar25 >> 0x38),
                                             CONCAT16((byte)(uVar29 >> 0x30) ^
                                                      (byte)(uVar25 >> 0x30),
                                                      CONCAT15((byte)(uVar29 >> 0x28) ^
                                                               (byte)(uVar25 >> 0x28),
                                                               CONCAT14((byte)(uVar29 >> 0x20) ^
                                                                        (byte)(uVar25 >> 0x20),
                                                                        CONCAT13((byte)(uVar29 >>
                                                                                       0x18) ^
                                                                                 (byte)(uVar25 >>
                                                                                       0x18),
                                                                                 CONCAT12((byte)(
                                                  uVar29 >> 0x10) ^ (byte)(uVar25 >> 0x10),
                                                  CONCAT11((byte)(uVar29 >> 8) ^ (byte)(uVar25 >> 8)
                                                           ,(byte)uVar29 ^ (byte)uVar25)))))));
                      puVar22[-2] = CONCAT17((byte)(uVar28 >> 0x38) ^ (byte)(uVar24 >> 0x38),
                                             CONCAT16((byte)(uVar28 >> 0x30) ^
                                                      (byte)(uVar24 >> 0x30),
                                                      CONCAT15((byte)(uVar28 >> 0x28) ^
                                                               (byte)(uVar24 >> 0x28),
                                                               CONCAT14((byte)(uVar28 >> 0x20) ^
                                                                        (byte)(uVar24 >> 0x20),
                                                                        CONCAT13((byte)(uVar28 >>
                                                                                       0x18) ^
                                                                                 (byte)(uVar24 >>
                                                                                       0x18),
                                                                                 CONCAT12((byte)(
                                                  uVar28 >> 0x10) ^ (byte)(uVar24 >> 0x10),
                                                  CONCAT11((byte)(uVar28 >> 8) ^ (byte)(uVar24 >> 8)
                                                           ,(byte)uVar28 ^ (byte)uVar24)))))));
                      puVar22[1] = CONCAT17((byte)(uVar31 >> 0x38) ^ (byte)(uVar27 >> 0x38),
                                            CONCAT16((byte)(uVar31 >> 0x30) ^ (byte)(uVar27 >> 0x30)
                                                     ,CONCAT15((byte)(uVar31 >> 0x28) ^
                                                               (byte)(uVar27 >> 0x28),
                                                               CONCAT14((byte)(uVar31 >> 0x20) ^
                                                                        (byte)(uVar27 >> 0x20),
                                                                        CONCAT13((byte)(uVar31 >>
                                                                                       0x18) ^
                                                                                 (byte)(uVar27 >>
                                                                                       0x18),
                                                                                 CONCAT12((byte)(
                                                  uVar31 >> 0x10) ^ (byte)(uVar27 >> 0x10),
                                                  CONCAT11((byte)(uVar31 >> 8) ^ (byte)(uVar27 >> 8)
                                                           ,(byte)uVar31 ^ (byte)uVar27)))))));
                      *puVar22 = CONCAT17((byte)(uVar30 >> 0x38) ^ (byte)(uVar26 >> 0x38),
                                          CONCAT16((byte)(uVar30 >> 0x30) ^ (byte)(uVar26 >> 0x30),
                                                   CONCAT15((byte)(uVar30 >> 0x28) ^
                                                            (byte)(uVar26 >> 0x28),
                                                            CONCAT14((byte)(uVar30 >> 0x20) ^
                                                                     (byte)(uVar26 >> 0x20),
                                                                     CONCAT13((byte)(uVar30 >> 0x18)
                                                                              ^ (byte)(uVar26 >>
                                                                                      0x18),
                                                                              CONCAT12((byte)(uVar30
                                                                                             >> 0x10
                                                  ) ^ (byte)(uVar26 >> 0x10),
                                                  CONCAT11((byte)(uVar30 >> 8) ^ (byte)(uVar26 >> 8)
                                                           ,(byte)uVar30 ^ (byte)uVar26)))))));
                      puVar22 = puVar22 + 4;
                    } while (uVar19 != 0);
                    uVar19 = uVar23;
                    if (uVar23 == uVar17) goto LAB_00bde448;
                  }
                }
              }
              lVar11 = uVar17 - uVar19;
              puVar13 = puVar13 + uVar19;
              puVar14 = puVar14 + uVar19;
              puVar16 = puVar16 + uVar19;
              do {
                lVar11 = lVar11 + -1;
                *puVar16 = *puVar14 ^ *puVar13;
                puVar13 = puVar13 + 1;
                puVar14 = puVar14 + 1;
                puVar16 = puVar16 + 1;
              } while (lVar11 != 0);
            }
LAB_00bde448:
            iVar5 = pBVar10->top;
            if ((int)uVar12 < iVar5) {
              puVar13 = pBVar10->d;
              puVar14 = a_00->d;
              lVar15 = (long)iVar5;
              lVar11 = (long)(int)uVar12;
              uVar17 = lVar15 - lVar11;
              if ((3 < uVar17) && (uVar19 = uVar17 & 0xfffffffffffffffc, uVar19 != 0)) {
                if ((puVar13 + lVar15 <= puVar14 + lVar11) || (puVar14 + lVar15 <= puVar13 + lVar11)
                   ) {
                  puVar16 = puVar14 + lVar11 + 2;
                  puVar20 = puVar13 + lVar11 + 2;
                  uVar23 = uVar19;
                  do {
                    puVar21 = puVar20 + -1;
                    uVar24 = puVar20[-2];
                    uVar26 = puVar20[1];
                    uVar25 = *puVar20;
                    uVar23 = uVar23 - 4;
                    puVar20 = puVar20 + 4;
                    puVar16[-1] = *puVar21;
                    puVar16[-2] = uVar24;
                    puVar16[1] = uVar26;
                    *puVar16 = uVar25;
                    puVar16 = puVar16 + 4;
                  } while (uVar23 != 0);
                  lVar11 = uVar19 + lVar11;
                  if (uVar17 == uVar19) goto LAB_00bde4e8;
                }
              }
              do {
                lVar18 = lVar11 + 1;
                puVar14[lVar11] = puVar13[lVar11];
                lVar11 = lVar18;
              } while (lVar18 < lVar15);
            }
LAB_00bde4e8:
            a_00->top = iVar5;
            bn_correct_top(a_00);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)param_3);
        }
        iVar4 = BN_is_zero(a_00);
      } while ((iVar3 < 0x31) && (iVar3 = iVar3 + 1, iVar4 != 0));
      iVar3 = BN_is_zero(a_00);
      if (iVar3 == 0) goto LAB_00bde568;
      iVar3 = 0x71;
      iVar4 = 0x45a;
LAB_00bde988:
      ERR_put_error(3,0x87,iVar3,"crypto/bn/bn_gf2m.c",iVar4);
    }
  }
  else {
    pBVar7 = BN_copy(a,pBVar6);
    if (pBVar7 != (BIGNUM *)0x0) {
      if (2 < *(int *)param_3) {
        iVar3 = 1;
        do {
          iVar4 = BN_GF2m_mod_sqr_arr(a,a,param_3,param_4);
          if ((iVar4 == 0) || (iVar4 = BN_GF2m_mod_sqr_arr(a,a,param_3,param_4), iVar4 == 0))
          goto LAB_00bde98c;
          pBVar7 = pBVar6;
          if (pBVar6->top <= a->top) {
            pBVar7 = a;
          }
          pBVar8 = a;
          if (pBVar6->top <= a->top) {
            pBVar8 = pBVar6;
          }
          lVar11 = bn_wexpand(a,pBVar7->top);
          if (lVar11 == 0) goto LAB_00bde98c;
          uVar12 = pBVar8->top;
          if ((int)uVar12 < 1) {
            uVar12 = 0;
          }
          else {
            puVar13 = pBVar7->d;
            puVar14 = pBVar8->d;
            puVar16 = a->d;
            uVar17 = (ulong)(int)uVar12;
            if ((uVar12 < 4) || (uVar19 = uVar17 & 0xfffffffffffffffc, uVar19 == 0)) {
              uVar23 = 0;
            }
            else {
              uVar23 = 0;
              if ((puVar13 + uVar17 <= puVar16 || puVar16 + uVar17 <= puVar13) &&
                 (puVar14 + uVar17 <= puVar16 || puVar16 + uVar17 <= puVar14)) {
                puVar20 = puVar13 + 2;
                puVar21 = puVar14 + 2;
                puVar22 = puVar16 + 2;
                uVar23 = uVar19;
                do {
                  uVar25 = puVar20[-1];
                  uVar24 = puVar20[-2];
                  uVar27 = puVar20[1];
                  uVar26 = *puVar20;
                  uVar29 = puVar21[-1];
                  uVar28 = puVar21[-2];
                  uVar31 = puVar21[1];
                  uVar30 = *puVar21;
                  puVar20 = puVar20 + 4;
                  puVar21 = puVar21 + 4;
                  uVar23 = uVar23 - 4;
                  puVar22[-1] = CONCAT17((byte)(uVar29 >> 0x38) ^ (byte)(uVar25 >> 0x38),
                                         CONCAT16((byte)(uVar29 >> 0x30) ^ (byte)(uVar25 >> 0x30),
                                                  CONCAT15((byte)(uVar29 >> 0x28) ^
                                                           (byte)(uVar25 >> 0x28),
                                                           CONCAT14((byte)(uVar29 >> 0x20) ^
                                                                    (byte)(uVar25 >> 0x20),
                                                                    CONCAT13((byte)(uVar29 >> 0x18)
                                                                             ^ (byte)(uVar25 >> 0x18
                                                                                     ),
                                                                             CONCAT12((byte)(uVar29 
                                                  >> 0x10) ^ (byte)(uVar25 >> 0x10),
                                                  CONCAT11((byte)(uVar29 >> 8) ^ (byte)(uVar25 >> 8)
                                                           ,(byte)uVar29 ^ (byte)uVar25)))))));
                  puVar22[-2] = CONCAT17((byte)(uVar28 >> 0x38) ^ (byte)(uVar24 >> 0x38),
                                         CONCAT16((byte)(uVar28 >> 0x30) ^ (byte)(uVar24 >> 0x30),
                                                  CONCAT15((byte)(uVar28 >> 0x28) ^
                                                           (byte)(uVar24 >> 0x28),
                                                           CONCAT14((byte)(uVar28 >> 0x20) ^
                                                                    (byte)(uVar24 >> 0x20),
                                                                    CONCAT13((byte)(uVar28 >> 0x18)
                                                                             ^ (byte)(uVar24 >> 0x18
                                                                                     ),
                                                                             CONCAT12((byte)(uVar28 
                                                  >> 0x10) ^ (byte)(uVar24 >> 0x10),
                                                  CONCAT11((byte)(uVar28 >> 8) ^ (byte)(uVar24 >> 8)
                                                           ,(byte)uVar28 ^ (byte)uVar24)))))));
                  puVar22[1] = CONCAT17((byte)(uVar31 >> 0x38) ^ (byte)(uVar27 >> 0x38),
                                        CONCAT16((byte)(uVar31 >> 0x30) ^ (byte)(uVar27 >> 0x30),
                                                 CONCAT15((byte)(uVar31 >> 0x28) ^
                                                          (byte)(uVar27 >> 0x28),
                                                          CONCAT14((byte)(uVar31 >> 0x20) ^
                                                                   (byte)(uVar27 >> 0x20),
                                                                   CONCAT13((byte)(uVar31 >> 0x18) ^
                                                                            (byte)(uVar27 >> 0x18),
                                                                            CONCAT12((byte)(uVar31 
                                                  >> 0x10) ^ (byte)(uVar27 >> 0x10),
                                                  CONCAT11((byte)(uVar31 >> 8) ^ (byte)(uVar27 >> 8)
                                                           ,(byte)uVar31 ^ (byte)uVar27)))))));
                  *puVar22 = CONCAT17((byte)(uVar30 >> 0x38) ^ (byte)(uVar26 >> 0x38),
                                      CONCAT16((byte)(uVar30 >> 0x30) ^ (byte)(uVar26 >> 0x30),
                                               CONCAT15((byte)(uVar30 >> 0x28) ^
                                                        (byte)(uVar26 >> 0x28),
                                                        CONCAT14((byte)(uVar30 >> 0x20) ^
                                                                 (byte)(uVar26 >> 0x20),
                                                                 CONCAT13((byte)(uVar30 >> 0x18) ^
                                                                          (byte)(uVar26 >> 0x18),
                                                                          CONCAT12((byte)(uVar30 >>
                                                                                         0x10) ^
                                                                                   (byte)(uVar26 >>
                                                                                         0x10),
                                                                                   CONCAT11((byte)(
                                                  uVar30 >> 8) ^ (byte)(uVar26 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar26)))))));
                  puVar22 = puVar22 + 4;
                } while (uVar23 != 0);
                uVar23 = uVar19;
                if (uVar19 == uVar17) goto LAB_00bde7a4;
              }
            }
            lVar11 = uVar17 - uVar23;
            puVar13 = puVar13 + uVar23;
            puVar14 = puVar14 + uVar23;
            puVar16 = puVar16 + uVar23;
            do {
              lVar11 = lVar11 + -1;
              *puVar16 = *puVar14 ^ *puVar13;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
            } while (lVar11 != 0);
          }
LAB_00bde7a4:
          iVar4 = pBVar7->top;
          if ((int)uVar12 < iVar4) {
            puVar13 = pBVar7->d;
            puVar14 = a->d;
            lVar15 = (long)iVar4;
            lVar11 = (long)(int)uVar12;
            uVar17 = lVar15 - lVar11;
            if ((3 < uVar17) && (uVar19 = uVar17 & 0xfffffffffffffffc, uVar19 != 0)) {
              if ((puVar13 + lVar15 <= puVar14 + lVar11) || (puVar14 + lVar15 <= puVar13 + lVar11))
              {
                puVar16 = puVar14 + lVar11 + 2;
                puVar20 = puVar13 + lVar11 + 2;
                uVar23 = uVar19;
                do {
                  puVar21 = puVar20 + -1;
                  uVar24 = puVar20[-2];
                  uVar26 = puVar20[1];
                  uVar25 = *puVar20;
                  uVar23 = uVar23 - 4;
                  puVar20 = puVar20 + 4;
                  puVar16[-1] = *puVar21;
                  puVar16[-2] = uVar24;
                  puVar16[1] = uVar26;
                  *puVar16 = uVar25;
                  puVar16 = puVar16 + 4;
                } while (uVar23 != 0);
                lVar11 = uVar19 + lVar11;
                if (uVar17 == uVar19) goto LAB_00bde844;
              }
            }
            do {
              lVar18 = lVar11 + 1;
              puVar14[lVar11] = puVar13[lVar11];
              lVar11 = lVar18;
            } while (lVar18 < lVar15);
          }
LAB_00bde844:
          a->top = iVar4;
          bn_correct_top(a);
          iVar5 = *(int *)param_3 + -1;
          iVar4 = *(int *)param_3;
          if (-1 < iVar5) {
            iVar4 = iVar5;
          }
          bVar2 = iVar3 < iVar4 >> 1;
          iVar3 = iVar3 + 1;
        } while (bVar2);
      }
LAB_00bde568:
      iVar3 = BN_GF2m_mod_sqr_arr(a_00,a,param_3,param_4);
      if (iVar3 != 0) {
        pBVar7 = a_00;
        if (a_00->top <= a->top) {
          pBVar7 = a;
        }
        pBVar8 = a;
        if (a_00->top <= a->top) {
          pBVar8 = a_00;
        }
        lVar11 = bn_wexpand(a_00,pBVar7->top);
        if (lVar11 != 0) {
          uVar12 = pBVar8->top;
          if ((int)uVar12 < 1) {
            uVar12 = 0;
          }
          else {
            puVar13 = pBVar7->d;
            puVar14 = pBVar8->d;
            puVar16 = a_00->d;
            uVar17 = (ulong)(int)uVar12;
            if ((uVar12 < 4) || (uVar19 = uVar17 & 0xfffffffffffffffc, uVar19 == 0)) {
              uVar23 = 0;
            }
            else {
              uVar23 = 0;
              if ((puVar13 + uVar17 <= puVar16 || puVar16 + uVar17 <= puVar13) &&
                 (puVar14 + uVar17 <= puVar16 || puVar16 + uVar17 <= puVar14)) {
                puVar20 = puVar13 + 2;
                puVar21 = puVar14 + 2;
                puVar22 = puVar16 + 2;
                uVar23 = uVar19;
                do {
                  uVar25 = puVar20[-1];
                  uVar24 = puVar20[-2];
                  uVar27 = puVar20[1];
                  uVar26 = *puVar20;
                  uVar29 = puVar21[-1];
                  uVar28 = puVar21[-2];
                  uVar31 = puVar21[1];
                  uVar30 = *puVar21;
                  puVar20 = puVar20 + 4;
                  puVar21 = puVar21 + 4;
                  uVar23 = uVar23 - 4;
                  puVar22[-1] = CONCAT17((byte)(uVar29 >> 0x38) ^ (byte)(uVar25 >> 0x38),
                                         CONCAT16((byte)(uVar29 >> 0x30) ^ (byte)(uVar25 >> 0x30),
                                                  CONCAT15((byte)(uVar29 >> 0x28) ^
                                                           (byte)(uVar25 >> 0x28),
                                                           CONCAT14((byte)(uVar29 >> 0x20) ^
                                                                    (byte)(uVar25 >> 0x20),
                                                                    CONCAT13((byte)(uVar29 >> 0x18)
                                                                             ^ (byte)(uVar25 >> 0x18
                                                                                     ),
                                                                             CONCAT12((byte)(uVar29 
                                                  >> 0x10) ^ (byte)(uVar25 >> 0x10),
                                                  CONCAT11((byte)(uVar29 >> 8) ^ (byte)(uVar25 >> 8)
                                                           ,(byte)uVar29 ^ (byte)uVar25)))))));
                  puVar22[-2] = CONCAT17((byte)(uVar28 >> 0x38) ^ (byte)(uVar24 >> 0x38),
                                         CONCAT16((byte)(uVar28 >> 0x30) ^ (byte)(uVar24 >> 0x30),
                                                  CONCAT15((byte)(uVar28 >> 0x28) ^
                                                           (byte)(uVar24 >> 0x28),
                                                           CONCAT14((byte)(uVar28 >> 0x20) ^
                                                                    (byte)(uVar24 >> 0x20),
                                                                    CONCAT13((byte)(uVar28 >> 0x18)
                                                                             ^ (byte)(uVar24 >> 0x18
                                                                                     ),
                                                                             CONCAT12((byte)(uVar28 
                                                  >> 0x10) ^ (byte)(uVar24 >> 0x10),
                                                  CONCAT11((byte)(uVar28 >> 8) ^ (byte)(uVar24 >> 8)
                                                           ,(byte)uVar28 ^ (byte)uVar24)))))));
                  puVar22[1] = CONCAT17((byte)(uVar31 >> 0x38) ^ (byte)(uVar27 >> 0x38),
                                        CONCAT16((byte)(uVar31 >> 0x30) ^ (byte)(uVar27 >> 0x30),
                                                 CONCAT15((byte)(uVar31 >> 0x28) ^
                                                          (byte)(uVar27 >> 0x28),
                                                          CONCAT14((byte)(uVar31 >> 0x20) ^
                                                                   (byte)(uVar27 >> 0x20),
                                                                   CONCAT13((byte)(uVar31 >> 0x18) ^
                                                                            (byte)(uVar27 >> 0x18),
                                                                            CONCAT12((byte)(uVar31 
                                                  >> 0x10) ^ (byte)(uVar27 >> 0x10),
                                                  CONCAT11((byte)(uVar31 >> 8) ^ (byte)(uVar27 >> 8)
                                                           ,(byte)uVar31 ^ (byte)uVar27)))))));
                  *puVar22 = CONCAT17((byte)(uVar30 >> 0x38) ^ (byte)(uVar26 >> 0x38),
                                      CONCAT16((byte)(uVar30 >> 0x30) ^ (byte)(uVar26 >> 0x30),
                                               CONCAT15((byte)(uVar30 >> 0x28) ^
                                                        (byte)(uVar26 >> 0x28),
                                                        CONCAT14((byte)(uVar30 >> 0x20) ^
                                                                 (byte)(uVar26 >> 0x20),
                                                                 CONCAT13((byte)(uVar30 >> 0x18) ^
                                                                          (byte)(uVar26 >> 0x18),
                                                                          CONCAT12((byte)(uVar30 >>
                                                                                         0x10) ^
                                                                                   (byte)(uVar26 >>
                                                                                         0x10),
                                                                                   CONCAT11((byte)(
                                                  uVar30 >> 8) ^ (byte)(uVar26 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar26)))))));
                  puVar22 = puVar22 + 4;
                } while (uVar23 != 0);
                uVar23 = uVar19;
                if (uVar19 == uVar17) goto LAB_00bde8a8;
              }
            }
            lVar11 = uVar17 - uVar23;
            puVar13 = puVar13 + uVar23;
            puVar14 = puVar14 + uVar23;
            puVar16 = puVar16 + uVar23;
            do {
              lVar11 = lVar11 + -1;
              *puVar16 = *puVar14 ^ *puVar13;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
              puVar16 = puVar16 + 1;
            } while (lVar11 != 0);
          }
LAB_00bde8a8:
          iVar3 = pBVar7->top;
          if ((int)uVar12 < iVar3) {
            puVar13 = pBVar7->d;
            puVar14 = a_00->d;
            lVar18 = (long)iVar3;
            lVar15 = (long)(int)uVar12;
            uVar17 = lVar18 - lVar15;
            lVar11 = lVar15;
            if (((3 < uVar17) && (uVar19 = uVar17 & 0xfffffffffffffffc, uVar19 != 0)) &&
               ((puVar13 + lVar18 <= puVar14 + lVar15 || (puVar14 + lVar18 <= puVar13 + lVar15)))) {
              lVar11 = uVar19 + lVar15;
              puVar20 = puVar14 + lVar15 + 2;
              puVar16 = puVar13 + lVar15 + 2;
              uVar23 = uVar19;
              do {
                puVar21 = puVar16 + -1;
                uVar24 = puVar16[-2];
                uVar26 = puVar16[1];
                uVar25 = *puVar16;
                uVar23 = uVar23 - 4;
                puVar16 = puVar16 + 4;
                puVar20[-1] = *puVar21;
                puVar20[-2] = uVar24;
                puVar20[1] = uVar26;
                *puVar20 = uVar25;
                puVar20 = puVar20 + 4;
              } while (uVar23 != 0);
              if (uVar17 == uVar19) goto LAB_00bde954;
            }
            lVar18 = lVar18 - lVar11;
            puVar14 = puVar14 + lVar11;
            puVar13 = puVar13 + lVar11;
            do {
              lVar18 = lVar18 + -1;
              *puVar14 = *puVar13;
              puVar14 = puVar14 + 1;
              puVar13 = puVar13 + 1;
            } while (lVar18 != 0);
          }
LAB_00bde954:
          a_00->top = iVar3;
          bn_correct_top(a_00);
          iVar3 = BN_ucmp(a_00,pBVar6);
          if (iVar3 == 0) {
            pBVar6 = BN_copy(param_1,a);
            bVar2 = pBVar6 != (BIGNUM *)0x0;
            goto LAB_00bde990;
          }
          iVar3 = 0x74;
          iVar4 = 0x464;
          goto LAB_00bde988;
        }
      }
    }
  }
LAB_00bde98c:
  bVar2 = false;
LAB_00bde990:
  BN_CTX_end(param_4);
  return bVar2;
}

