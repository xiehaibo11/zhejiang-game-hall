
void FUN_00d76b04(long param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  uint3 uVar2;
  uint3 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  uint6 uVar14;
  uint6 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ushort uVar29;
  ushort uVar30;
  undefined8 uVar28;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  lVar7 = *(long *)(param_1 + 8);
  uVar10 = (ulong)*(byte *)(param_1 + 0x13) + 7;
  uVar6 = uVar10 >> 3;
  uVar8 = lVar7 - uVar6;
  pbVar5 = param_3;
  if (uVar6 == 0) goto LAB_00d76b70;
  pbVar5 = param_3 + uVar6;
  if (((uVar10 < 0x100) || ((uint)uVar6 >> 5 == 0)) ||
     ((param_2 < param_3 + uVar6 && (param_3 < param_2 + uVar6)))) {
    uVar10 = 0;
    pbVar9 = param_2;
LAB_00d76b4c:
    lVar11 = uVar6 - uVar10;
    do {
      lVar11 = lVar11 + -1;
      *pbVar9 = *pbVar9 + (*param_3 >> 1);
      param_3 = param_3 + 1;
      pbVar9 = pbVar9 + 1;
    } while (lVar11 != 0);
  }
  else {
    uVar10 = uVar6 & 0x20;
    puVar12 = (ulong *)(param_3 + 0x10);
    pbVar9 = param_2 + uVar10;
    param_3 = param_3 + uVar10;
    pbVar4 = param_2 + 0x10;
    uVar13 = uVar10;
    do {
      uVar17 = *(undefined8 *)(pbVar4 + -8);
      uVar16 = *(undefined8 *)(pbVar4 + -0x10);
      uVar19 = *(undefined8 *)(pbVar4 + 8);
      uVar18 = *(undefined8 *)pbVar4;
      uVar23 = puVar12[-1];
      uVar21 = puVar12[-2];
      uVar27 = puVar12[1];
      uVar25 = *puVar12;
      puVar12 = puVar12 + 4;
      uVar13 = uVar13 - 0x20;
      uVar14 = CONCAT15((byte)(uVar21 >> 0x28) >> 1,
                        CONCAT14((byte)(uVar21 >> 0x20) >> 1,
                                 CONCAT13((byte)(uVar21 >> 0x18) >> 1,
                                          CONCAT12((byte)(uVar21 >> 0x10) >> 1,
                                                   CONCAT11((byte)(uVar21 >> 8) >> 1,
                                                            (char)(uVar21 >> 1)))))) &
               0xffffffffff7f;
      uVar15 = CONCAT15((byte)(uVar25 >> 0x28) >> 1,
                        CONCAT14((byte)(uVar25 >> 0x20) >> 1,
                                 CONCAT13((byte)(uVar25 >> 0x18) >> 1,
                                          CONCAT12((byte)(uVar25 >> 0x10) >> 1,
                                                   CONCAT11((byte)(uVar25 >> 8) >> 1,
                                                            (char)(uVar25 >> 1)))))) &
               0xffffffffff7f;
      *(ulong *)(pbVar4 + -8) =
           CONCAT17((char)((ulong)uVar17 >> 0x38) + (byte)(uVar23 >> 0x39),
                    CONCAT16((char)((ulong)uVar17 >> 0x30) + ((byte)(uVar23 >> 0x30) >> 1),
                             CONCAT15((char)((ulong)uVar17 >> 0x28) + ((byte)(uVar23 >> 0x28) >> 1),
                                      CONCAT14((char)((ulong)uVar17 >> 0x20) +
                                               ((byte)(uVar23 >> 0x20) >> 1),
                                               CONCAT13((char)((ulong)uVar17 >> 0x18) +
                                                        ((byte)(uVar23 >> 0x18) >> 1),
                                                        CONCAT12((char)((ulong)uVar17 >> 0x10) +
                                                                 ((byte)(uVar23 >> 0x10) >> 1),
                                                                 CONCAT11((char)((ulong)uVar17 >> 8)
                                                                          + ((byte)(uVar23 >> 8) >>
                                                                            1),(char)uVar17 +
                                                                               ((byte)uVar23 >> 1)))
                                                       )))));
      *(ulong *)(pbVar4 + -0x10) =
           CONCAT17((char)((ulong)uVar16 >> 0x38) + (byte)(uVar21 >> 0x39),
                    CONCAT16((char)((ulong)uVar16 >> 0x30) + ((byte)(uVar21 >> 0x30) >> 1),
                             CONCAT15((char)((ulong)uVar16 >> 0x28) + (char)(uVar14 >> 0x28),
                                      CONCAT14((char)((ulong)uVar16 >> 0x20) +
                                               (char)(uVar14 >> 0x20),
                                               CONCAT13((char)((ulong)uVar16 >> 0x18) +
                                                        (char)(uVar14 >> 0x18),
                                                        CONCAT12((char)((ulong)uVar16 >> 0x10) +
                                                                 (char)(uVar14 >> 0x10),
                                                                 CONCAT11((char)((ulong)uVar16 >> 8)
                                                                          + (char)(uVar14 >> 8),
                                                                          (char)uVar16 +
                                                                          (char)uVar14)))))));
      *(ulong *)(pbVar4 + 8) =
           CONCAT17((char)((ulong)uVar19 >> 0x38) + (byte)(uVar27 >> 0x39),
                    CONCAT16((char)((ulong)uVar19 >> 0x30) + ((byte)(uVar27 >> 0x30) >> 1),
                             CONCAT15((char)((ulong)uVar19 >> 0x28) + ((byte)(uVar27 >> 0x28) >> 1),
                                      CONCAT14((char)((ulong)uVar19 >> 0x20) +
                                               ((byte)(uVar27 >> 0x20) >> 1),
                                               CONCAT13((char)((ulong)uVar19 >> 0x18) +
                                                        ((byte)(uVar27 >> 0x18) >> 1),
                                                        CONCAT12((char)((ulong)uVar19 >> 0x10) +
                                                                 ((byte)(uVar27 >> 0x10) >> 1),
                                                                 CONCAT11((char)((ulong)uVar19 >> 8)
                                                                          + ((byte)(uVar27 >> 8) >>
                                                                            1),(char)uVar19 +
                                                                               ((byte)uVar27 >> 1)))
                                                       )))));
      *(ulong *)pbVar4 =
           CONCAT17((char)((ulong)uVar18 >> 0x38) + (byte)(uVar25 >> 0x39),
                    CONCAT16((char)((ulong)uVar18 >> 0x30) + ((byte)(uVar25 >> 0x30) >> 1),
                             CONCAT15((char)((ulong)uVar18 >> 0x28) + (char)(uVar15 >> 0x28),
                                      CONCAT14((char)((ulong)uVar18 >> 0x20) +
                                               (char)(uVar15 >> 0x20),
                                               CONCAT13((char)((ulong)uVar18 >> 0x18) +
                                                        (char)(uVar15 >> 0x18),
                                                        CONCAT12((char)((ulong)uVar18 >> 0x10) +
                                                                 (char)(uVar15 >> 0x10),
                                                                 CONCAT11((char)((ulong)uVar18 >> 8)
                                                                          + (char)(uVar15 >> 8),
                                                                          (char)uVar18 +
                                                                          (char)uVar15)))))));
      pbVar4 = pbVar4 + 0x20;
    } while (uVar13 != 0);
    if (uVar6 != uVar10) goto LAB_00d76b4c;
  }
  param_2 = param_2 + uVar6;
LAB_00d76b70:
  if (uVar8 != 0) {
    uVar10 = 0;
    lVar11 = -uVar6;
    if ((0x1f < uVar8) && (uVar10 = uVar8 & 0xffffffffffffffe0, uVar10 != 0)) {
      if ((param_2 < pbVar5 + uVar8 && pbVar5 < param_2 + uVar8) ||
         (param_2 < param_2 + lVar7 + uVar6 * -2 && param_2 + lVar11 < param_2 + uVar8)) {
        uVar10 = 0;
      }
      else {
        pbVar9 = pbVar5 + 0x10;
        pbVar4 = param_2;
        uVar13 = uVar10;
        do {
          pbVar1 = pbVar4 + lVar11;
          uVar17 = *(undefined8 *)(pbVar4 + 8);
          uVar16 = *(undefined8 *)pbVar4;
          uVar19 = *(undefined8 *)(pbVar4 + 0x18);
          uVar18 = *(undefined8 *)(pbVar4 + 0x10);
          uVar22 = *(undefined8 *)(pbVar9 + -8);
          uVar20 = *(undefined8 *)(pbVar9 + -0x10);
          uVar26 = *(undefined8 *)(pbVar9 + 8);
          uVar24 = *(undefined8 *)pbVar9;
          uVar31 = *(undefined8 *)(pbVar1 + 8);
          uVar28 = *(undefined8 *)pbVar1;
          uVar33 = *(undefined8 *)(pbVar1 + 0x18);
          uVar32 = *(undefined8 *)(pbVar1 + 0x10);
          pbVar9 = pbVar9 + 0x20;
          uVar2 = CONCAT12((char)((ulong)uVar28 >> 8),(short)uVar28) & 0xff00ff;
          uVar3 = CONCAT12((char)((ulong)uVar32 >> 8),(short)uVar32) & 0xff00ff;
          uVar29 = (ushort)(byte)(uVar3 >> 0x10) + (ushort)(byte)((ulong)uVar24 >> 8);
          uVar30 = (ushort)(byte)((ulong)uVar32 >> 0x10) + (ushort)(byte)((ulong)uVar24 >> 0x10);
          uVar13 = uVar13 - 0x20;
          *(ulong *)(pbVar4 + 8) =
               CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar31 >> 0x38) +
                                       (ushort)(byte)((ulong)uVar22 >> 0x38)) >> 1) +
                        (char)((ulong)uVar17 >> 0x38),
                        CONCAT16((char)((ushort)((ushort)(byte)((ulong)uVar31 >> 0x30) +
                                                (ushort)(byte)((ulong)uVar22 >> 0x30)) >> 1) +
                                 (char)((ulong)uVar17 >> 0x30),
                                 CONCAT15((char)((ushort)((ushort)(byte)((ulong)uVar31 >> 0x28) +
                                                         (ushort)(byte)((ulong)uVar22 >> 0x28)) >> 1
                                                ) + (char)((ulong)uVar17 >> 0x28),
                                          CONCAT14((char)((ushort)((ushort)(byte)((ulong)uVar31 >>
                                                                                 0x20) +
                                                                  (ushort)(byte)((ulong)uVar22 >>
                                                                                0x20)) >> 1) +
                                                   (char)((ulong)uVar17 >> 0x20),
                                                   CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar31 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar22 >> 0x18)) >> 1) +
                                                  (char)((ulong)uVar17 >> 0x18),
                                                  CONCAT12((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar31 >> 0x10) +
                                                  (ushort)(byte)((ulong)uVar22 >> 0x10)) >> 1) +
                                                  (char)((ulong)uVar17 >> 0x10),
                                                  CONCAT11((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar31 >> 8) + (ushort)(byte)((ulong)uVar22 >> 8))
                                                  >> 1) + (char)((ulong)uVar17 >> 8),
                                                  (char)((ushort)((ushort)(byte)uVar31 +
                                                                 (ushort)(byte)uVar22) >> 1) +
                                                  (char)uVar17)))))));
          *(ulong *)pbVar4 =
               CONCAT17((char)((ulong)uVar16 >> 0x38) +
                        (char)((ushort)((ushort)(byte)((ulong)uVar28 >> 0x38) +
                                       (ushort)(byte)((ulong)uVar20 >> 0x38)) >> 1),
                        CONCAT16((char)((ulong)uVar16 >> 0x30) +
                                 (char)((ushort)((ushort)(byte)((ulong)uVar28 >> 0x30) +
                                                (ushort)(byte)((ulong)uVar20 >> 0x30)) >> 1),
                                 CONCAT15((char)((ulong)uVar16 >> 0x28) +
                                          (char)((ushort)((ushort)(byte)((ulong)uVar28 >> 0x28) +
                                                         (ushort)(byte)((ulong)uVar20 >> 0x28)) >> 1
                                                ),CONCAT14((char)((ulong)uVar16 >> 0x20) +
                                                           (char)((ushort)((ushort)(byte)((ulong)
                                                  uVar28 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar20 >> 0x20)) >> 1),
                                                  CONCAT13((char)((ulong)uVar16 >> 0x18) +
                                                           (char)((ushort)((ushort)(byte)((ulong)
                                                  uVar28 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar20 >> 0x18)) >> 1),
                                                  CONCAT12((char)((ulong)uVar16 >> 0x10) +
                                                           (char)((ushort)((ushort)(byte)((ulong)
                                                  uVar28 >> 0x10) +
                                                  (ushort)(byte)((ulong)uVar20 >> 0x10)) >> 1),
                                                  CONCAT11((char)((ulong)uVar16 >> 8) +
                                                           (char)((ushort)((ushort)(byte)(uVar2 >> 
                                                  0x10) + (ushort)(byte)((ulong)uVar20 >> 8)) >> 1),
                                                  (char)uVar16 +
                                                  (char)((ushort)((short)uVar2 +
                                                                 (ushort)(byte)uVar20) >> 1))))))));
          *(ulong *)(pbVar4 + 0x18) =
               CONCAT17((char)((ushort)((ushort)(byte)((ulong)uVar33 >> 0x38) +
                                       (ushort)(byte)((ulong)uVar26 >> 0x38)) >> 1) +
                        (char)((ulong)uVar19 >> 0x38),
                        CONCAT16((char)((ushort)((ushort)(byte)((ulong)uVar33 >> 0x30) +
                                                (ushort)(byte)((ulong)uVar26 >> 0x30)) >> 1) +
                                 (char)((ulong)uVar19 >> 0x30),
                                 CONCAT15((char)((ushort)((ushort)(byte)((ulong)uVar33 >> 0x28) +
                                                         (ushort)(byte)((ulong)uVar26 >> 0x28)) >> 1
                                                ) + (char)((ulong)uVar19 >> 0x28),
                                          CONCAT14((char)((ushort)((ushort)(byte)((ulong)uVar33 >>
                                                                                 0x20) +
                                                                  (ushort)(byte)((ulong)uVar26 >>
                                                                                0x20)) >> 1) +
                                                   (char)((ulong)uVar19 >> 0x20),
                                                   CONCAT13((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar33 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar26 >> 0x18)) >> 1) +
                                                  (char)((ulong)uVar19 >> 0x18),
                                                  CONCAT12((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar33 >> 0x10) +
                                                  (ushort)(byte)((ulong)uVar26 >> 0x10)) >> 1) +
                                                  (char)((ulong)uVar19 >> 0x10),
                                                  CONCAT11((char)((ushort)((ushort)(byte)((ulong)
                                                  uVar33 >> 8) + (ushort)(byte)((ulong)uVar26 >> 8))
                                                  >> 1) + (char)((ulong)uVar19 >> 8),
                                                  (char)((ushort)((ushort)(byte)uVar33 +
                                                                 (ushort)(byte)uVar26) >> 1) +
                                                  (char)uVar19)))))));
          *(ulong *)(pbVar4 + 0x10) =
               CONCAT17((char)((ulong)uVar18 >> 0x38) +
                        (char)((ushort)((ushort)(byte)((ulong)uVar32 >> 0x38) +
                                       (ushort)(byte)((ulong)uVar24 >> 0x38)) >> 1),
                        CONCAT16((char)((ulong)uVar18 >> 0x30) +
                                 (char)((ushort)((ushort)(byte)((ulong)uVar32 >> 0x30) +
                                                (ushort)(byte)((ulong)uVar24 >> 0x30)) >> 1),
                                 CONCAT15((char)((ulong)uVar18 >> 0x28) +
                                          (char)((ushort)((ushort)(byte)((ulong)uVar32 >> 0x28) +
                                                         (ushort)(byte)((ulong)uVar24 >> 0x28)) >> 1
                                                ),CONCAT14((char)((ulong)uVar18 >> 0x20) +
                                                           (char)((ushort)((ushort)(byte)((ulong)
                                                  uVar32 >> 0x20) +
                                                  (ushort)(byte)((ulong)uVar24 >> 0x20)) >> 1),
                                                  CONCAT13((char)((ulong)uVar18 >> 0x18) +
                                                           (char)((ushort)((ushort)(byte)((ulong)
                                                  uVar32 >> 0x18) +
                                                  (ushort)(byte)((ulong)uVar24 >> 0x18)) >> 1),
                                                  CONCAT12((char)((ulong)uVar18 >> 0x10) +
                                                           (char)(uVar30 >> 1),
                                                           CONCAT11((char)((ulong)uVar18 >> 8) +
                                                                    (char)(uVar29 >> 1),
                                                                    (char)uVar18 +
                                                                    (char)(((ulong)CONCAT24(uVar30,
                                                  CONCAT22(uVar29,(short)uVar3 +
                                                                  (ushort)(byte)uVar24)) & 0xfffe)
                                                  >> 1))))))));
          pbVar4 = pbVar4 + 0x20;
        } while (uVar13 != 0);
        param_2 = param_2 + uVar10;
        pbVar5 = pbVar5 + uVar10;
        if (uVar8 == uVar10) {
          return;
        }
      }
    }
    lVar7 = (lVar7 - uVar10) - uVar6;
    do {
      lVar7 = lVar7 + -1;
      *param_2 = *param_2 + (char)((uint)param_2[lVar11] + (uint)*pbVar5 >> 1);
      param_2 = param_2 + 1;
      pbVar5 = pbVar5 + 1;
    } while (lVar7 != 0);
  }
  return;
}

