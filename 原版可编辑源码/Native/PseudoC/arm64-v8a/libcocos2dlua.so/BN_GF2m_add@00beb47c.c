
undefined8 BN_GF2m_add(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  puVar1 = param_3;
  if ((int)param_3[1] <= (int)param_2[1]) {
    puVar1 = param_2;
  }
  if ((int)param_3[1] <= (int)param_2[1]) {
    param_2 = param_3;
  }
  lVar4 = bn_wexpand(param_1,(int)puVar1[1]);
  if (lVar4 == 0) {
    return 0;
  }
  uVar3 = (uint)param_2[1];
  uVar5 = (ulong)(int)uVar3;
  if ((int)uVar3 < 1) {
    uVar10 = 0;
  }
  else {
    uVar6 = *puVar1;
    uVar8 = *param_2;
    uVar9 = *param_1;
    if ((uVar3 < 4) || (uVar10 = uVar5 & 0xfffffffffffffffc, uVar10 == 0)) {
      uVar15 = 0;
    }
    else {
      lVar4 = uVar5 * 8;
      uVar15 = 0;
      if ((uVar6 + lVar4 <= uVar9 || uVar9 + lVar4 <= uVar6) &&
         (uVar8 + lVar4 <= uVar9 || uVar9 + lVar4 <= uVar8)) {
        puVar11 = (undefined8 *)(uVar6 + 0x10);
        puVar13 = (undefined8 *)(uVar8 + 0x10);
        puVar14 = (undefined8 *)(uVar9 + 0x10);
        uVar15 = uVar10;
        do {
          uVar17 = puVar11[-1];
          uVar16 = puVar11[-2];
          uVar19 = puVar11[1];
          uVar18 = *puVar11;
          uVar21 = puVar13[-1];
          uVar20 = puVar13[-2];
          uVar23 = puVar13[1];
          uVar22 = *puVar13;
          puVar11 = puVar11 + 4;
          puVar13 = puVar13 + 4;
          uVar15 = uVar15 - 4;
          puVar14[-1] = CONCAT17((byte)((ulong)uVar21 >> 0x38) ^ (byte)((ulong)uVar17 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar21 >> 0x30) ^
                                          (byte)((ulong)uVar17 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar21 >> 0x28) ^
                                                   (byte)((ulong)uVar17 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar21 >> 0x20) ^
                                                            (byte)((ulong)uVar17 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar21 >> 0x18) ^
                                                                     (byte)((ulong)uVar17 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar21
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar17
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar21 >> 8) ^ (byte)((ulong)uVar17 >> 8),
                                                  (byte)uVar21 ^ (byte)uVar17)))))));
          puVar14[-2] = CONCAT17((byte)((ulong)uVar20 >> 0x38) ^ (byte)((ulong)uVar16 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar20 >> 0x30) ^
                                          (byte)((ulong)uVar16 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar20 >> 0x28) ^
                                                   (byte)((ulong)uVar16 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar20 >> 0x20) ^
                                                            (byte)((ulong)uVar16 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar20 >> 0x18) ^
                                                                     (byte)((ulong)uVar16 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar20
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar16
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar20 >> 8) ^ (byte)((ulong)uVar16 >> 8),
                                                  (byte)uVar20 ^ (byte)uVar16)))))));
          puVar14[1] = CONCAT17((byte)((ulong)uVar23 >> 0x38) ^ (byte)((ulong)uVar19 >> 0x38),
                                CONCAT16((byte)((ulong)uVar23 >> 0x30) ^
                                         (byte)((ulong)uVar19 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar23 >> 0x28) ^
                                                  (byte)((ulong)uVar19 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar23 >> 0x20) ^
                                                           (byte)((ulong)uVar19 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar23 >> 0x18) ^
                                                                    (byte)((ulong)uVar19 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar23 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar19 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar23 >> 8) ^ (byte)((ulong)uVar19 >> 8),
                                                  (byte)uVar23 ^ (byte)uVar19)))))));
          *puVar14 = CONCAT17((byte)((ulong)uVar22 >> 0x38) ^ (byte)((ulong)uVar18 >> 0x38),
                              CONCAT16((byte)((ulong)uVar22 >> 0x30) ^ (byte)((ulong)uVar18 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar22 >> 0x28) ^
                                                 (byte)((ulong)uVar18 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar22 >> 0x20) ^
                                                          (byte)((ulong)uVar18 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar22 >> 0x18) ^
                                                                   (byte)((ulong)uVar18 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar22 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar18 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar22 >> 8) ^ (byte)((ulong)uVar18 >> 8),
                                                  (byte)uVar22 ^ (byte)uVar18)))))));
          puVar14 = puVar14 + 4;
        } while (uVar15 != 0);
        uVar15 = uVar10;
        if (uVar10 == uVar5) goto LAB_00beb594;
      }
    }
    do {
      lVar4 = uVar15 * 8;
      uVar10 = uVar15 + 1;
      *(ulong *)(uVar9 + lVar4) = *(ulong *)(uVar8 + lVar4) ^ *(ulong *)(uVar6 + lVar4);
      uVar15 = uVar10;
    } while ((long)uVar10 < (long)uVar5);
  }
LAB_00beb594:
  iVar2 = (int)puVar1[1];
  if ((int)uVar10 < iVar2) {
    uVar5 = *puVar1;
    uVar6 = *param_1;
    lVar7 = (long)iVar2;
    lVar4 = (long)(int)uVar10;
    uVar10 = lVar7 - lVar4;
    if ((3 < uVar10) && (uVar8 = uVar10 & 0xfffffffffffffffc, uVar8 != 0)) {
      lVar12 = lVar4 * 8;
      if ((uVar5 + lVar7 * 8 <= uVar6 + lVar12) || (uVar6 + lVar7 * 8 <= uVar5 + lVar12)) {
        lVar4 = uVar8 + lVar4;
        puVar13 = (undefined8 *)(uVar6 + lVar12 + 0x10);
        puVar11 = (undefined8 *)(uVar5 + lVar12 + 0x10);
        uVar9 = uVar8;
        do {
          puVar14 = puVar11 + -1;
          uVar16 = puVar11[-2];
          uVar18 = puVar11[1];
          uVar17 = *puVar11;
          uVar9 = uVar9 - 4;
          puVar11 = puVar11 + 4;
          puVar13[-1] = *puVar14;
          puVar13[-2] = uVar16;
          puVar13[1] = uVar18;
          *puVar13 = uVar17;
          puVar13 = puVar13 + 4;
        } while (uVar9 != 0);
        if (uVar10 == uVar8) goto LAB_00beb638;
      }
    }
    do {
      lVar12 = lVar4 * 8;
      lVar4 = lVar4 + 1;
      *(undefined8 *)(uVar6 + lVar12) = *(undefined8 *)(uVar5 + lVar12);
    } while (lVar4 < lVar7);
  }
LAB_00beb638:
  *(int *)(param_1 + 1) = iVar2;
  bn_correct_top(param_1);
  return 1;
}

