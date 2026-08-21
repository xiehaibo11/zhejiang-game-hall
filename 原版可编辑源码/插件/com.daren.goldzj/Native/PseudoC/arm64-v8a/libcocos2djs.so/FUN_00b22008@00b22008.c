
undefined8 FUN_00b22008(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  lVar20 = *(long *)(param_1 + 0x78);
  uVar7 = *(uint *)(lVar20 + 0x70);
  uVar5 = (ulong)uVar7;
  if (uVar7 != 0) {
    if ((param_4 == 0) || (0x3f < uVar7)) {
LAB_00b22138:
      *(uint *)(lVar20 + 0x70) = uVar7;
    }
    else {
      uVar8 = -param_4;
      uVar14 = ~(ulong)(0x3f - uVar7);
      if (uVar8 < uVar14 || -uVar14 == param_4) {
        uVar8 = ~(ulong)(0x3f - uVar7);
      }
      uVar8 = -uVar8;
      uVar14 = param_2;
      uVar10 = param_3;
      if ((0x1f < uVar8) && (uVar15 = uVar8 & 0x1ffffffe0, uVar15 != 0)) {
        uVar9 = -param_4;
        uVar19 = ~(ulong)(0x3f - uVar7);
        if (uVar9 < uVar19 || -uVar19 == param_4) {
          uVar9 = ~(ulong)(0x3f - uVar7);
        }
        if ((param_3 - uVar9 <= param_2 || param_2 - uVar9 <= param_3) &&
           (lVar20 + ((uVar5 + 0x30) - uVar9) <= param_2 || param_2 - uVar9 <= lVar20 + uVar5 + 0x30
           )) {
          uVar7 = uVar7 + (int)uVar15;
          uVar14 = param_2 + uVar15;
          param_4 = param_4 - uVar15;
          uVar10 = param_3 + uVar15;
          puVar4 = (undefined8 *)(param_3 + 0x10);
          puVar16 = (undefined8 *)(param_2 + 0x10);
          uVar9 = uVar15;
          do {
            lVar12 = lVar20 + uVar5;
            uVar23 = puVar4[-1];
            uVar22 = puVar4[-2];
            uVar25 = puVar4[1];
            uVar24 = *puVar4;
            uVar27 = *(undefined8 *)(lVar12 + 0x38);
            uVar26 = *(undefined8 *)(lVar12 + 0x30);
            uVar29 = *(undefined8 *)(lVar12 + 0x48);
            uVar28 = *(undefined8 *)(lVar12 + 0x40);
            puVar4 = puVar4 + 4;
            uVar9 = uVar9 - 0x20;
            uVar5 = (ulong)((int)uVar5 + 0x20);
            puVar16[-1] = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                            (byte)((ulong)uVar23 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                     (byte)((ulong)uVar23 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                              (byte)((ulong)uVar23 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar27 >> 0x18)
                                                                       ^ (byte)((ulong)uVar23 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar27
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar23
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar27 >> 8) ^ (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar23)))))));
            puVar16[-2] = CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                   CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                            (byte)((ulong)uVar22 >> 0x30),
                                            CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                     (byte)((ulong)uVar22 >> 0x28),
                                                     CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                              (byte)((ulong)uVar22 >> 0x20),
                                                              CONCAT13((byte)((ulong)uVar26 >> 0x18)
                                                                       ^ (byte)((ulong)uVar22 >>
                                                                               0x18),
                                                                       CONCAT12((byte)((ulong)uVar26
                                                                                      >> 0x10) ^
                                                                                (byte)((ulong)uVar22
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  ulong)uVar26 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar26 ^ (byte)uVar22)))))));
            puVar16[1] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                                  CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                           (byte)((ulong)uVar25 >> 0x30),
                                           CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                    (byte)((ulong)uVar25 >> 0x28),
                                                    CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                             (byte)((ulong)uVar25 >> 0x20),
                                                             CONCAT13((byte)((ulong)uVar29 >> 0x18)
                                                                      ^ (byte)((ulong)uVar25 >> 0x18
                                                                              ),
                                                                      CONCAT12((byte)((ulong)uVar29
                                                                                     >> 0x10) ^
                                                                               (byte)((ulong)uVar25
                                                                                     >> 0x10),
                                                                               CONCAT11((byte)((
                                                  ulong)uVar29 >> 8) ^ (byte)((ulong)uVar25 >> 8),
                                                  (byte)uVar29 ^ (byte)uVar25)))))));
            *puVar16 = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                                CONCAT16((byte)((ulong)uVar28 >> 0x30) ^
                                         (byte)((ulong)uVar24 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                  (byte)((ulong)uVar24 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                           (byte)((ulong)uVar24 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                                    (byte)((ulong)uVar24 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar28 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar24 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar28 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar24)))))));
            puVar16 = puVar16 + 4;
          } while (uVar9 != 0);
          param_2 = uVar14;
          param_3 = uVar10;
          if (uVar15 == uVar8) goto LAB_00b22138;
        }
      }
      lVar12 = 0;
      do {
        uVar5 = (ulong)uVar7 + lVar12;
        bVar3 = param_4 - 1 == lVar12;
        *(byte *)(uVar14 + lVar12) =
             *(byte *)(lVar20 + (uVar5 & 0xffffffff) + 0x30) ^ *(byte *)(uVar10 + lVar12);
        lVar12 = lVar12 + 1;
        if (bVar3) break;
      } while ((int)uVar5 + 1U < 0x40);
      uVar7 = uVar7 + (int)lVar12;
      param_2 = uVar14 + lVar12;
      param_4 = param_4 - lVar12;
      param_3 = uVar10 + lVar12;
      *(uint *)(lVar20 + 0x70) = uVar7;
    }
    if (param_4 == 0) {
      return 1;
    }
    if (uVar7 == 0x40) {
      *(undefined4 *)(lVar20 + 0x70) = 0;
      iVar1 = *(int *)(lVar20 + 0x20) + 1;
      *(int *)(lVar20 + 0x20) = iVar1;
      if (iVar1 == 0) {
        *(int *)(lVar20 + 0x24) = *(int *)(lVar20 + 0x24) + 1;
      }
    }
  }
  uVar7 = (uint)param_4 & 0x3f;
  uVar5 = (ulong)uVar7;
  uVar8 = param_4 - uVar5;
  if (0x3f < uVar8) {
    uVar21 = *(uint *)(lVar20 + 0x20);
    do {
      while( true ) {
        uVar14 = uVar8 >> 6;
        if (uVar8 >> 0x22 != 0) {
          uVar14 = 0x10000000;
        }
        uVar2 = uVar21 + (int)uVar14;
        uVar10 = (ulong)uVar2;
        uVar21 = 0;
        if (uVar14 <= uVar10) {
          uVar10 = 0;
          uVar21 = uVar2;
        }
        lVar12 = (uVar14 - uVar10) * 0x40;
        ChaCha20_ctr32(param_2,param_3,lVar12,lVar20,lVar20 + 0x20);
        uVar8 = uVar8 + (uVar14 - uVar10) * -0x40;
        param_3 = param_3 + lVar12;
        param_2 = param_2 + lVar12;
        *(uint *)(lVar20 + 0x20) = uVar21;
        if (uVar21 == 0) break;
        if (uVar8 < 0x40) goto LAB_00b221f8;
      }
      *(int *)(lVar20 + 0x24) = *(int *)(lVar20 + 0x24) + 1;
    } while (0x3f < uVar8);
  }
LAB_00b221f8:
  if ((param_4 & 0x3f) == 0) {
    return 1;
  }
  *(undefined8 *)(lVar20 + 0x58) = 0;
  *(undefined8 *)(lVar20 + 0x50) = 0;
  *(undefined8 *)(lVar20 + 0x68) = 0;
  *(undefined8 *)(lVar20 + 0x60) = 0;
  *(undefined8 *)(lVar20 + 0x48) = 0;
  *(undefined8 *)(lVar20 + 0x40) = 0;
  puVar4 = (undefined8 *)(lVar20 + 0x30);
  *(undefined8 *)(lVar20 + 0x38) = 0;
  *puVar4 = 0;
  ChaCha20_ctr32(puVar4,puVar4,0x40,lVar20,lVar20 + 0x20);
  if (uVar7 < 0x20) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    lVar6 = uVar5 - (param_4 & 0x1f);
    if (lVar6 != 0) {
      if ((param_3 + uVar5 <= param_2 || param_2 + uVar5 <= param_3) &&
         (lVar20 + uVar5 + 0x30 <= param_2 || param_2 + uVar5 <= lVar20 + 0x30U)) {
        puVar4 = (undefined8 *)(param_3 + 0x10);
        puVar16 = (undefined8 *)(param_2 + 0x10);
        puVar18 = (undefined8 *)(lVar20 + 0x40);
        lVar12 = lVar6;
        do {
          uVar23 = puVar4[-1];
          uVar22 = puVar4[-2];
          uVar25 = puVar4[1];
          uVar24 = *puVar4;
          uVar27 = puVar18[-1];
          uVar26 = puVar18[-2];
          uVar29 = puVar18[1];
          uVar28 = *puVar18;
          lVar12 = lVar12 + -0x20;
          puVar4 = puVar4 + 4;
          puVar18 = puVar18 + 4;
          puVar16[-1] = CONCAT17((byte)((ulong)uVar27 >> 0x38) ^ (byte)((ulong)uVar23 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar27 >> 0x30) ^
                                          (byte)((ulong)uVar23 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar27 >> 0x28) ^
                                                   (byte)((ulong)uVar23 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar27 >> 0x20) ^
                                                            (byte)((ulong)uVar23 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar27 >> 0x18) ^
                                                                     (byte)((ulong)uVar23 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar27
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar23
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar27 >> 8) ^ (byte)((ulong)uVar23 >> 8),
                                                  (byte)uVar27 ^ (byte)uVar23)))))));
          puVar16[-2] = CONCAT17((byte)((ulong)uVar26 >> 0x38) ^ (byte)((ulong)uVar22 >> 0x38),
                                 CONCAT16((byte)((ulong)uVar26 >> 0x30) ^
                                          (byte)((ulong)uVar22 >> 0x30),
                                          CONCAT15((byte)((ulong)uVar26 >> 0x28) ^
                                                   (byte)((ulong)uVar22 >> 0x28),
                                                   CONCAT14((byte)((ulong)uVar26 >> 0x20) ^
                                                            (byte)((ulong)uVar22 >> 0x20),
                                                            CONCAT13((byte)((ulong)uVar26 >> 0x18) ^
                                                                     (byte)((ulong)uVar22 >> 0x18),
                                                                     CONCAT12((byte)((ulong)uVar26
                                                                                    >> 0x10) ^
                                                                              (byte)((ulong)uVar22
                                                                                    >> 0x10),
                                                                              CONCAT11((byte)((ulong
                                                  )uVar26 >> 8) ^ (byte)((ulong)uVar22 >> 8),
                                                  (byte)uVar26 ^ (byte)uVar22)))))));
          puVar16[1] = CONCAT17((byte)((ulong)uVar29 >> 0x38) ^ (byte)((ulong)uVar25 >> 0x38),
                                CONCAT16((byte)((ulong)uVar29 >> 0x30) ^
                                         (byte)((ulong)uVar25 >> 0x30),
                                         CONCAT15((byte)((ulong)uVar29 >> 0x28) ^
                                                  (byte)((ulong)uVar25 >> 0x28),
                                                  CONCAT14((byte)((ulong)uVar29 >> 0x20) ^
                                                           (byte)((ulong)uVar25 >> 0x20),
                                                           CONCAT13((byte)((ulong)uVar29 >> 0x18) ^
                                                                    (byte)((ulong)uVar25 >> 0x18),
                                                                    CONCAT12((byte)((ulong)uVar29 >>
                                                                                   0x10) ^
                                                                             (byte)((ulong)uVar25 >>
                                                                                   0x10),
                                                                             CONCAT11((byte)((ulong)
                                                  uVar29 >> 8) ^ (byte)((ulong)uVar25 >> 8),
                                                  (byte)uVar29 ^ (byte)uVar25)))))));
          *puVar16 = CONCAT17((byte)((ulong)uVar28 >> 0x38) ^ (byte)((ulong)uVar24 >> 0x38),
                              CONCAT16((byte)((ulong)uVar28 >> 0x30) ^ (byte)((ulong)uVar24 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar28 >> 0x28) ^
                                                 (byte)((ulong)uVar24 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar28 >> 0x20) ^
                                                          (byte)((ulong)uVar24 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar28 >> 0x18) ^
                                                                   (byte)((ulong)uVar24 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar28 >>
                                                                                  0x10) ^
                                                                            (byte)((ulong)uVar24 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar28 >> 8) ^ (byte)((ulong)uVar24 >> 8),
                                                  (byte)uVar28 ^ (byte)uVar24)))))));
          puVar16 = puVar16 + 4;
        } while (lVar12 != 0);
        lVar12 = lVar6;
        if ((param_4 & 0x1f) == 0) goto LAB_00b22358;
      }
    }
  }
  lVar6 = uVar5 - lVar12;
  pbVar11 = (byte *)(param_3 + lVar12);
  pbVar13 = (byte *)(param_2 + lVar12);
  pbVar17 = (byte *)(lVar20 + lVar12 + 0x30);
  do {
    lVar6 = lVar6 + -1;
    *pbVar13 = *pbVar17 ^ *pbVar11;
    pbVar11 = pbVar11 + 1;
    pbVar13 = pbVar13 + 1;
    pbVar17 = pbVar17 + 1;
  } while (lVar6 != 0);
LAB_00b22358:
  *(uint *)(lVar20 + 0x70) = uVar7;
  return 1;
}

