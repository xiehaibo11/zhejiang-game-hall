
undefined8 FUN_00e5bf24(long param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  byte *pbVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  if ((int)param_4 < 0) {
    uVar8 = 3;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x10);
    uVar8 = 3;
    uVar5 = **(ushort **)(param_1 + 0x18);
    uVar13 = (uint)uVar5;
    if ((((uint)uVar5 + param_5 <= *puVar3) && (-1 < param_5)) &&
       (uVar14 = (uint)(*(ushort **)(param_1 + 0x18))[1], uVar14 + param_4 <= puVar3[1])) {
      uVar14 = *(byte *)(param_1 + 0x22) * uVar14;
      if (param_3 < param_2 + (uVar14 + 7 >> 3) * (uint)uVar5) {
        return 3;
      }
      lVar15 = (long)(int)puVar3[2];
      lVar17 = *(long *)(puVar3 + 4);
      uVar2 = param_4 & 7;
      lVar18 = (long)(int)(puVar3[2] * param_5 + (param_4 >> 3));
      pbVar16 = (byte *)(lVar17 + lVar18);
      if (uVar2 == 0) {
        if (uVar5 == 0) {
          return 0;
        }
        if (uVar14 < 8) {
          do {
            pbVar10 = param_2;
            if (uVar14 != 0) {
              pbVar10 = param_2 + 1;
              *pbVar16 = *param_2 & (byte)(0xff00 >> (ulong)(uVar14 & 0x1f)) | *pbVar16;
            }
            uVar13 = uVar13 - 1;
            uVar8 = 0;
            pbVar16 = pbVar16 + lVar15;
            param_2 = pbVar10;
          } while (0 < (int)uVar13);
        }
        else {
          uVar20 = uVar14 - 8 >> 3;
          uVar22 = (ulong)uVar20;
          uVar2 = uVar14 - 8 & 7;
          uVar21 = uVar22 + 1;
          uVar20 = uVar20 + 1 & 0x1f;
          lVar1 = uVar22 + lVar18 + 1;
          lVar12 = uVar21 - uVar20;
          lVar19 = 0;
          pbVar10 = (byte *)(lVar17 + lVar1);
          do {
            pbVar9 = pbVar16;
            pbVar23 = param_2;
            uVar7 = uVar14;
            if ((uVar21 < 0x20) ||
               (((byte *)(lVar17 + lVar19 * lVar15 + lVar18) < param_2 + uVar21 &&
                (param_2 < (byte *)(lVar17 + lVar1 + lVar19 * lVar15))))) {
LAB_00e5c178:
              do {
                uVar7 = uVar7 - 8;
                *pbVar9 = *pbVar23 | *pbVar9;
                pbVar9 = pbVar9 + 1;
                pbVar23 = pbVar23 + 1;
              } while (7 < (int)uVar7);
            }
            else {
              lVar24 = 0;
              do {
                pbVar9 = pbVar16 + lVar24;
                pbVar23 = param_2 + lVar24 + 0x10;
                uVar25 = *(undefined8 *)(pbVar9 + 8);
                uVar8 = *(undefined8 *)pbVar9;
                uVar27 = *(undefined8 *)(pbVar9 + 0x18);
                uVar26 = *(undefined8 *)(pbVar9 + 0x10);
                uVar29 = *(undefined8 *)(pbVar23 + -8);
                uVar28 = *(undefined8 *)(pbVar23 + -0x10);
                uVar31 = *(undefined8 *)(pbVar23 + 8);
                uVar30 = *(undefined8 *)pbVar23;
                lVar24 = lVar24 + 0x20;
                *(ulong *)(pbVar9 + 8) =
                     CONCAT17((byte)((ulong)uVar29 >> 0x38) | (byte)((ulong)uVar25 >> 0x38),
                              CONCAT16((byte)((ulong)uVar29 >> 0x30) | (byte)((ulong)uVar25 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar29 >> 0x28) |
                                                 (byte)((ulong)uVar25 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar29 >> 0x20) |
                                                          (byte)((ulong)uVar25 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar29 >> 0x18) |
                                                                   (byte)((ulong)uVar25 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar29 >>
                                                                                  0x10) |
                                                                            (byte)((ulong)uVar25 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar29 >> 8) | (byte)((ulong)uVar25 >> 8),
                                                  (byte)uVar29 | (byte)uVar25)))))));
                *(ulong *)pbVar9 =
                     CONCAT17((byte)((ulong)uVar28 >> 0x38) | (byte)((ulong)uVar8 >> 0x38),
                              CONCAT16((byte)((ulong)uVar28 >> 0x30) | (byte)((ulong)uVar8 >> 0x30),
                                       CONCAT15((byte)((ulong)uVar28 >> 0x28) |
                                                (byte)((ulong)uVar8 >> 0x28),
                                                CONCAT14((byte)((ulong)uVar28 >> 0x20) |
                                                         (byte)((ulong)uVar8 >> 0x20),
                                                         CONCAT13((byte)((ulong)uVar28 >> 0x18) |
                                                                  (byte)((ulong)uVar8 >> 0x18),
                                                                  CONCAT12((byte)((ulong)uVar28 >>
                                                                                 0x10) |
                                                                           (byte)((ulong)uVar8 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((ulong)
                                                  uVar28 >> 8) | (byte)((ulong)uVar8 >> 8),
                                                  (byte)uVar28 | (byte)uVar8)))))));
                *(ulong *)(pbVar9 + 0x18) =
                     CONCAT17((byte)((ulong)uVar31 >> 0x38) | (byte)((ulong)uVar27 >> 0x38),
                              CONCAT16((byte)((ulong)uVar31 >> 0x30) | (byte)((ulong)uVar27 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar31 >> 0x28) |
                                                 (byte)((ulong)uVar27 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar31 >> 0x20) |
                                                          (byte)((ulong)uVar27 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar31 >> 0x18) |
                                                                   (byte)((ulong)uVar27 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar31 >>
                                                                                  0x10) |
                                                                            (byte)((ulong)uVar27 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar31 >> 8) | (byte)((ulong)uVar27 >> 8),
                                                  (byte)uVar31 | (byte)uVar27)))))));
                *(ulong *)(pbVar9 + 0x10) =
                     CONCAT17((byte)((ulong)uVar30 >> 0x38) | (byte)((ulong)uVar26 >> 0x38),
                              CONCAT16((byte)((ulong)uVar30 >> 0x30) | (byte)((ulong)uVar26 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar30 >> 0x28) |
                                                 (byte)((ulong)uVar26 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar30 >> 0x20) |
                                                          (byte)((ulong)uVar26 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar30 >> 0x18) |
                                                                   (byte)((ulong)uVar26 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar30 >>
                                                                                  0x10) |
                                                                            (byte)((ulong)uVar26 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar30 >> 8) | (byte)((ulong)uVar26 >> 8),
                                                  (byte)uVar30 | (byte)uVar26)))))));
              } while (lVar12 != lVar24);
              pbVar9 = pbVar16 + lVar12;
              pbVar23 = param_2 + lVar12;
              uVar7 = uVar14 + (int)lVar12 * -8;
              if (uVar20 != 0) goto LAB_00e5c178;
            }
            pbVar9 = param_2 + uVar21;
            if (uVar2 != 0) {
              *pbVar10 = param_2[uVar21] & (byte)(0xff00 >> (ulong)uVar2) | *pbVar10;
              pbVar9 = param_2 + uVar22 + 2;
            }
            param_2 = pbVar9;
            uVar13 = uVar13 - 1;
            uVar8 = 0;
            pbVar16 = pbVar16 + lVar15;
            pbVar10 = pbVar10 + lVar15;
            lVar19 = lVar19 + 1;
          } while (0 < (int)uVar13);
        }
      }
      else {
        if (uVar5 == 0) {
          return 0;
        }
        if (uVar14 < 8) {
          pbVar16 = (byte *)(lVar17 + lVar18 + 1);
          do {
            if (uVar14 == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = 0xff00U >> (ulong)(uVar14 & 0x1f) & (uint)*param_2;
              param_2 = param_2 + 1;
            }
            pbVar16[-1] = pbVar16[-1] | (byte)(uVar20 >> (ulong)uVar2);
            if (8 < uVar14 + uVar2) {
              *pbVar16 = *pbVar16 | (byte)((uVar20 << 8) >> (ulong)uVar2);
            }
            uVar13 = uVar13 - 1;
            uVar8 = 0;
            pbVar16 = pbVar16 + lVar15;
          } while (0 < (int)uVar13);
        }
        else {
          uVar21 = (ulong)(uVar14 - 8 >> 3);
          uVar20 = uVar14 - 8 & 7;
          lVar17 = lVar17 + uVar21 + lVar18;
          pbVar10 = (byte *)(lVar17 + 1);
          do {
            lVar18 = 0;
            uVar7 = 0;
            uVar11 = uVar14;
            do {
              uVar11 = uVar11 - 8;
              uVar6 = uVar7 | param_2[lVar18];
              uVar7 = uVar6 << 8;
              pbVar16[lVar18] = pbVar16[lVar18] | (byte)(uVar6 >> (ulong)uVar2);
              lVar18 = lVar18 + 1;
            } while (7 < (int)uVar11);
            pbVar9 = param_2 + uVar21 + 1;
            if (uVar20 != 0) {
              bVar4 = *pbVar9;
              pbVar9 = param_2 + uVar21 + 2;
              uVar7 = 0xff00U >> (ulong)uVar20 & (uint)bVar4 | uVar7;
            }
            *pbVar10 = *pbVar10 | (byte)(uVar7 >> (ulong)uVar2);
            if (8 < uVar20 + uVar2) {
              *(byte *)(lVar17 + 2) = *(byte *)(lVar17 + 2) | (byte)((uVar7 << 8) >> (ulong)uVar2);
            }
            uVar13 = uVar13 - 1;
            uVar8 = 0;
            pbVar16 = pbVar16 + lVar15;
            lVar17 = lVar17 + lVar15;
            pbVar10 = pbVar10 + lVar15;
            param_2 = pbVar9;
          } while (0 < (int)uVar13);
        }
      }
    }
  }
  return uVar8;
}

