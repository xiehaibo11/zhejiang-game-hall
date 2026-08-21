
bool BN_GF2m_mod_inv(BIGNUM *param_1,undefined8 param_2,BIGNUM *param_3,BN_CTX *param_4)

{
  uint uVar1;
  uint uVar2;
  BIGNUM *pBVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  BIGNUM *a;
  BIGNUM *pBVar9;
  long lVar10;
  ulong *__s;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong *puVar27;
  int iVar28;
  ulong uVar29;
  ulong uVar30;
  ulong *local_88;
  BIGNUM *local_68;
  
  BN_CTX_start(param_4);
  pBVar7 = BN_CTX_get(param_4);
  if ((((pBVar7 != (BIGNUM *)0x0) && (pBVar8 = BN_CTX_get(param_4), pBVar8 != (BIGNUM *)0x0)) &&
      (a = BN_CTX_get(param_4), a != (BIGNUM *)0x0)) &&
     (((local_68 = BN_CTX_get(param_4), local_68 != (BIGNUM *)0x0 &&
       (iVar5 = BN_GF2m_mod(a,param_2,param_3), iVar5 != 0)) &&
      ((iVar5 = BN_is_zero(a), iVar5 == 0 &&
       (pBVar9 = BN_copy(local_68,param_3), pBVar9 != (BIGNUM *)0x0)))))) {
    iVar5 = BN_num_bits(a);
    iVar6 = BN_num_bits(local_68);
    uVar2 = param_3->top;
    uVar26 = (ulong)uVar2;
    lVar10 = bn_wexpand(a,uVar26);
    if (lVar10 != 0) {
      iVar28 = a->top;
      puVar27 = a->d;
      if (iVar28 < (int)uVar2) {
        memset(puVar27 + iVar28,0,(ulong)((uVar2 - 1) - iVar28) * 8 + 8);
      }
      a->top = uVar2;
      lVar10 = bn_wexpand(pBVar7,uVar26);
      if (lVar10 != 0) {
        puVar25 = pBVar7->d;
        *puVar25 = 1;
        if (1 < (int)uVar2) {
          memset(puVar25 + 1,0,(ulong)(uVar2 - 2) * 8 + 8);
        }
        pBVar7->top = uVar2;
        lVar10 = bn_wexpand(pBVar8,uVar26);
        if (lVar10 != 0) {
          __s = pBVar8->d;
          if ((int)uVar2 < 1) {
            uVar24 = (ulong)(uVar2 - 1);
          }
          else {
            uVar24 = (ulong)(uVar2 - 1);
            memset(__s,0,uVar24 * 8 + 8);
          }
          pBVar8->top = uVar2;
          puVar14 = local_68->d;
          lVar10 = uVar26 - (uVar2 & 3);
          local_88 = puVar14;
LAB_00bec510:
          uVar11 = *puVar27;
          if (iVar5 != 0) {
            if ((int)uVar2 < 2) {
              do {
                if ((uVar11 & 1) != 0) goto LAB_00bec4e0;
                uVar18 = *puVar25;
                iVar5 = iVar5 + -1;
                uVar16 = *param_3->d;
                *puVar27 = uVar11 >> 1;
                *puVar25 = (uVar16 & -(uVar18 & 1) ^ uVar18) >> 1;
                uVar11 = *puVar27;
              } while (iVar5 != 0);
            }
            else {
              do {
                if ((uVar11 & 1) != 0) goto LAB_00bec4e0;
                puVar15 = param_3->d;
                uVar20 = -(*puVar25 & 1);
                uVar16 = 0;
                uVar18 = *puVar15 & uVar20 ^ *puVar25;
                do {
                  uVar22 = (puVar27 + uVar16)[1];
                  uVar29 = uVar16 + 1;
                  puVar27[uVar16] = uVar11 >> 1 | uVar22 << 0x3f;
                  uVar23 = puVar15[uVar16 + 1] & uVar20 ^ (puVar25 + uVar16)[1];
                  puVar25[uVar16] = uVar18 >> 1 | uVar23 << 0x3f;
                  uVar11 = uVar22;
                  uVar16 = uVar29;
                  uVar18 = uVar23;
                } while (uVar24 != uVar29);
                puVar27[(int)(uVar2 - 1)] = uVar22 >> 1;
                puVar25[(int)(uVar2 - 1)] = uVar23 >> 1;
                uVar11 = *puVar27;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
          }
          iVar5 = 0;
          if (uVar11 != 0) goto LAB_00bec5ec;
        }
      }
    }
  }
LAB_00bec374:
  bVar4 = false;
LAB_00bec378:
  BN_CTX_end(param_4);
  return bVar4;
LAB_00bec4e0:
  if (iVar5 < 0x41) {
    if (uVar11 == 0) goto LAB_00bec374;
LAB_00bec5ec:
    if (uVar11 == 1) goto LAB_00bec7ec;
  }
  puVar15 = __s;
  puVar17 = puVar14;
  pBVar9 = pBVar7;
  pBVar3 = a;
  iVar28 = iVar5;
  if (iVar5 < iVar6) {
    local_88 = a->d;
    puVar15 = pBVar7->d;
    puVar17 = local_88;
    pBVar9 = pBVar8;
    pBVar8 = pBVar7;
    pBVar3 = local_68;
    puVar25 = __s;
    puVar27 = puVar14;
    iVar28 = iVar6;
    local_68 = a;
    iVar6 = iVar5;
  }
  iVar5 = iVar28;
  a = pBVar3;
  pBVar7 = pBVar9;
  puVar14 = puVar17;
  __s = puVar15;
  if (0 < (int)uVar2) {
    lVar12 = 0;
    if ((3 < uVar2) && (lVar10 != 0)) {
      puVar15 = puVar25 + uVar26;
      puVar17 = puVar27 + uVar26;
      lVar12 = 0;
      if (((puVar15 <= puVar27 || puVar17 <= puVar25) &&
          (((puVar14 + uVar26 <= puVar27 || puVar17 <= local_88 &&
            (__s + uVar26 <= puVar27 || puVar17 <= __s)) &&
           (puVar14 + uVar26 <= puVar25 || puVar15 <= local_88)))) &&
         (__s + uVar26 <= puVar25 || puVar15 <= __s)) {
        puVar15 = puVar14 + 2;
        puVar17 = puVar27 + 2;
        puVar19 = __s + 2;
        puVar21 = puVar25 + 2;
        lVar12 = lVar10;
        do {
          uVar16 = puVar15[-1];
          uVar11 = puVar15[-2];
          uVar20 = puVar15[1];
          uVar18 = *puVar15;
          uVar22 = puVar17[-1];
          uVar29 = puVar17[-2];
          uVar30 = puVar17[1];
          uVar23 = *puVar17;
          puVar15 = puVar15 + 4;
          lVar12 = lVar12 + -4;
          puVar17[-1] = CONCAT17((byte)(uVar22 >> 0x38) ^ (byte)(uVar16 >> 0x38),
                                 CONCAT16((byte)(uVar22 >> 0x30) ^ (byte)(uVar16 >> 0x30),
                                          CONCAT15((byte)(uVar22 >> 0x28) ^ (byte)(uVar16 >> 0x28),
                                                   CONCAT14((byte)(uVar22 >> 0x20) ^
                                                            (byte)(uVar16 >> 0x20),
                                                            CONCAT13((byte)(uVar22 >> 0x18) ^
                                                                     (byte)(uVar16 >> 0x18),
                                                                     CONCAT12((byte)(uVar22 >> 0x10)
                                                                              ^ (byte)(uVar16 >>
                                                                                      0x10),
                                                                              CONCAT11((byte)(uVar22
                                                                                             >> 8) ^
                                                                                       (byte)(uVar16
                                                                                             >> 8),
                                                                                       (byte)uVar22
                                                                                       ^ (byte)
                                                  uVar16)))))));
          puVar17[-2] = CONCAT17((byte)(uVar29 >> 0x38) ^ (byte)(uVar11 >> 0x38),
                                 CONCAT16((byte)(uVar29 >> 0x30) ^ (byte)(uVar11 >> 0x30),
                                          CONCAT15((byte)(uVar29 >> 0x28) ^ (byte)(uVar11 >> 0x28),
                                                   CONCAT14((byte)(uVar29 >> 0x20) ^
                                                            (byte)(uVar11 >> 0x20),
                                                            CONCAT13((byte)(uVar29 >> 0x18) ^
                                                                     (byte)(uVar11 >> 0x18),
                                                                     CONCAT12((byte)(uVar29 >> 0x10)
                                                                              ^ (byte)(uVar11 >>
                                                                                      0x10),
                                                                              CONCAT11((byte)(uVar29
                                                                                             >> 8) ^
                                                                                       (byte)(uVar11
                                                                                             >> 8),
                                                                                       (byte)uVar29
                                                                                       ^ (byte)
                                                  uVar11)))))));
          puVar17[1] = CONCAT17((byte)(uVar30 >> 0x38) ^ (byte)(uVar20 >> 0x38),
                                CONCAT16((byte)(uVar30 >> 0x30) ^ (byte)(uVar20 >> 0x30),
                                         CONCAT15((byte)(uVar30 >> 0x28) ^ (byte)(uVar20 >> 0x28),
                                                  CONCAT14((byte)(uVar30 >> 0x20) ^
                                                           (byte)(uVar20 >> 0x20),
                                                           CONCAT13((byte)(uVar30 >> 0x18) ^
                                                                    (byte)(uVar20 >> 0x18),
                                                                    CONCAT12((byte)(uVar30 >> 0x10)
                                                                             ^ (byte)(uVar20 >> 0x10
                                                                                     ),
                                                                             CONCAT11((byte)(uVar30 
                                                  >> 8) ^ (byte)(uVar20 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar20)))))));
          *puVar17 = CONCAT17((byte)(uVar23 >> 0x38) ^ (byte)(uVar18 >> 0x38),
                              CONCAT16((byte)(uVar23 >> 0x30) ^ (byte)(uVar18 >> 0x30),
                                       CONCAT15((byte)(uVar23 >> 0x28) ^ (byte)(uVar18 >> 0x28),
                                                CONCAT14((byte)(uVar23 >> 0x20) ^
                                                         (byte)(uVar18 >> 0x20),
                                                         CONCAT13((byte)(uVar23 >> 0x18) ^
                                                                  (byte)(uVar18 >> 0x18),
                                                                  CONCAT12((byte)(uVar23 >> 0x10) ^
                                                                           (byte)(uVar18 >> 0x10),
                                                                           CONCAT11((byte)(uVar23 >>
                                                                                          8) ^
                                                                                    (byte)(uVar18 >>
                                                                                          8),(byte)
                                                  uVar23 ^ (byte)uVar18)))))));
          uVar16 = puVar19[-1];
          uVar11 = puVar19[-2];
          uVar20 = puVar19[1];
          uVar18 = *puVar19;
          uVar22 = puVar21[-1];
          uVar29 = puVar21[-2];
          uVar30 = puVar21[1];
          uVar23 = *puVar21;
          puVar17 = puVar17 + 4;
          puVar19 = puVar19 + 4;
          puVar21[-1] = CONCAT17((byte)(uVar22 >> 0x38) ^ (byte)(uVar16 >> 0x38),
                                 CONCAT16((byte)(uVar22 >> 0x30) ^ (byte)(uVar16 >> 0x30),
                                          CONCAT15((byte)(uVar22 >> 0x28) ^ (byte)(uVar16 >> 0x28),
                                                   CONCAT14((byte)(uVar22 >> 0x20) ^
                                                            (byte)(uVar16 >> 0x20),
                                                            CONCAT13((byte)(uVar22 >> 0x18) ^
                                                                     (byte)(uVar16 >> 0x18),
                                                                     CONCAT12((byte)(uVar22 >> 0x10)
                                                                              ^ (byte)(uVar16 >>
                                                                                      0x10),
                                                                              CONCAT11((byte)(uVar22
                                                                                             >> 8) ^
                                                                                       (byte)(uVar16
                                                                                             >> 8),
                                                                                       (byte)uVar22
                                                                                       ^ (byte)
                                                  uVar16)))))));
          puVar21[-2] = CONCAT17((byte)(uVar29 >> 0x38) ^ (byte)(uVar11 >> 0x38),
                                 CONCAT16((byte)(uVar29 >> 0x30) ^ (byte)(uVar11 >> 0x30),
                                          CONCAT15((byte)(uVar29 >> 0x28) ^ (byte)(uVar11 >> 0x28),
                                                   CONCAT14((byte)(uVar29 >> 0x20) ^
                                                            (byte)(uVar11 >> 0x20),
                                                            CONCAT13((byte)(uVar29 >> 0x18) ^
                                                                     (byte)(uVar11 >> 0x18),
                                                                     CONCAT12((byte)(uVar29 >> 0x10)
                                                                              ^ (byte)(uVar11 >>
                                                                                      0x10),
                                                                              CONCAT11((byte)(uVar29
                                                                                             >> 8) ^
                                                                                       (byte)(uVar11
                                                                                             >> 8),
                                                                                       (byte)uVar29
                                                                                       ^ (byte)
                                                  uVar11)))))));
          puVar21[1] = CONCAT17((byte)(uVar30 >> 0x38) ^ (byte)(uVar20 >> 0x38),
                                CONCAT16((byte)(uVar30 >> 0x30) ^ (byte)(uVar20 >> 0x30),
                                         CONCAT15((byte)(uVar30 >> 0x28) ^ (byte)(uVar20 >> 0x28),
                                                  CONCAT14((byte)(uVar30 >> 0x20) ^
                                                           (byte)(uVar20 >> 0x20),
                                                           CONCAT13((byte)(uVar30 >> 0x18) ^
                                                                    (byte)(uVar20 >> 0x18),
                                                                    CONCAT12((byte)(uVar30 >> 0x10)
                                                                             ^ (byte)(uVar20 >> 0x10
                                                                                     ),
                                                                             CONCAT11((byte)(uVar30 
                                                  >> 8) ^ (byte)(uVar20 >> 8),
                                                  (byte)uVar30 ^ (byte)uVar20)))))));
          *puVar21 = CONCAT17((byte)(uVar23 >> 0x38) ^ (byte)(uVar18 >> 0x38),
                              CONCAT16((byte)(uVar23 >> 0x30) ^ (byte)(uVar18 >> 0x30),
                                       CONCAT15((byte)(uVar23 >> 0x28) ^ (byte)(uVar18 >> 0x28),
                                                CONCAT14((byte)(uVar23 >> 0x20) ^
                                                         (byte)(uVar18 >> 0x20),
                                                         CONCAT13((byte)(uVar23 >> 0x18) ^
                                                                  (byte)(uVar18 >> 0x18),
                                                                  CONCAT12((byte)(uVar23 >> 0x10) ^
                                                                           (byte)(uVar18 >> 0x10),
                                                                           CONCAT11((byte)(uVar23 >>
                                                                                          8) ^
                                                                                    (byte)(uVar18 >>
                                                                                          8),(byte)
                                                  uVar23 ^ (byte)uVar18)))))));
          puVar21 = puVar21 + 4;
        } while (lVar12 != 0);
        lVar12 = lVar10;
        if ((uVar2 & 3) == 0) goto LAB_00bec798;
      }
    }
    lVar13 = uVar26 - lVar12;
    puVar15 = puVar14 + lVar12;
    puVar17 = puVar27 + lVar12;
    puVar19 = __s + lVar12;
    puVar21 = puVar25 + lVar12;
    do {
      lVar13 = lVar13 + -1;
      *puVar17 = *puVar17 ^ *puVar15;
      *puVar21 = *puVar21 ^ *puVar19;
      puVar15 = puVar15 + 1;
      puVar17 = puVar17 + 1;
      puVar19 = puVar19 + 1;
      puVar21 = puVar21 + 1;
    } while (lVar13 != 0);
  }
LAB_00bec798:
  if (iVar5 == iVar6) {
    uVar1 = iVar5 + 0x3e;
    if (-1 < (int)(iVar5 - 1U)) {
      uVar1 = iVar5 - 1U;
    }
    iVar5 = (int)uVar1 >> 6;
    iVar28 = -0x40 - (uVar1 & 0xffffffc0);
    puVar15 = puVar27 + iVar5;
    do {
      uVar11 = *puVar15;
      iVar28 = iVar28 + 0x40;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      puVar15 = puVar15 + -1;
    } while (uVar11 == 0);
    iVar5 = BN_num_bits_word(uVar11);
    iVar5 = iVar5 - iVar28;
  }
  goto LAB_00bec510;
LAB_00bec7ec:
  bn_correct_top(pBVar7);
  pBVar7 = BN_copy(param_1,pBVar7);
  bVar4 = pBVar7 != (BIGNUM *)0x0;
  goto LAB_00bec378;
}

