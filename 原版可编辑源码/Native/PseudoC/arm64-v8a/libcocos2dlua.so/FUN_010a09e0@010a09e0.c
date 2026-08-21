
undefined8 FUN_010a09e0(long param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  int *piVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  if (-1 < (int)param_4) {
    piVar5 = *(int **)(param_1 + 0x10);
    uVar7 = **(ushort **)(param_1 + 0x18);
    uVar14 = (uint)uVar7;
    if (*piVar5 < (int)((uint)uVar7 + param_5)) {
      return 3;
    }
    if (param_5 < 0) {
      return 3;
    }
    uVar16 = (uint)(*(ushort **)(param_1 + 0x18))[1];
                    /* catch() { ... } // from try @ 010a0838 with catch @ 010a0a1c */
    if (piVar5[1] < (int)(uVar16 + param_4)) {
      return 3;
    }
    uVar16 = *(byte *)(param_1 + 0x22) * uVar16;
                    /* try { // try from 010a0a38 to 011a0a6b has its CatchHandler @ 010a0a38
                       catch() { ... } // from try @ 010a0a38 with catch @ 010a0a38
                       catch() { ... } // from try @ 010a0a78 with catch @ 010a0a38 */
    if (param_2 + (uVar16 + 7 >> 3) * (uint)uVar7 <= param_3) {
      lVar13 = (long)piVar5[2];
      lVar17 = *(long *)(piVar5 + 4);
      uVar22 = param_4 & 7;
                    /* try { // try from 010a0a6c to 011a0a77 has its CatchHandler @ 010a0ac8 */
      lVar18 = (long)(int)(piVar5[2] * param_5 + (param_4 >> 3));
      pbVar15 = (byte *)(lVar17 + lVar18);
                    /* try { // try from 010a0a78 to 011a0afb has its CatchHandler @ 010a0a38 */
      if (uVar22 == 0) {
        if (uVar14 != 0) {
          if (uVar16 < 8) {
            iVar25 = uVar14 + 1;
            do {
              pbVar11 = param_2;
              if (uVar16 != 0) {
                pbVar11 = param_2 + 1;
                *pbVar15 = (byte)(0xff00 >> (ulong)(uVar16 & 0x1f)) & *param_2 | *pbVar15;
              }
              iVar25 = iVar25 + -1;
              pbVar15 = pbVar15 + lVar13;
              param_2 = pbVar11;
            } while (1 < iVar25);
            return 0;
          }
          uVar22 = 0xfffffff0;
          if (0xfffffff0 < ~uVar16) {
            uVar22 = ~uVar16;
          }
          uVar22 = uVar22 + uVar16 + 8;
          uVar21 = uVar22 >> 3;
          uVar20 = (ulong)uVar21;
          uVar22 = uVar22 & 0xfffffff8;
          uVar21 = uVar21 + 1;
          lVar2 = lVar18 + uVar20 + 1;
          lVar12 = (ulong)uVar21 - (ulong)(uVar21 & 0x1f);
          lVar19 = 0;
          pbVar11 = (byte *)(lVar17 + lVar2);
          do {
            pbVar10 = pbVar15;
            pbVar23 = param_2;
            uVar24 = uVar16;
            if (((uVar21 < 0x20) || (lVar12 == 0)) ||
               (((byte *)(lVar17 + lVar19 * lVar13 + lVar18) < param_2 + uVar20 + 1 &&
                (param_2 < (byte *)(lVar17 + lVar2 + lVar19 * lVar13))))) {
LAB_010a0c74:
              iVar25 = uVar24 + 8;
              do {
                iVar25 = iVar25 + -8;
                *pbVar10 = *pbVar23 | *pbVar10;
                pbVar10 = pbVar10 + 1;
                pbVar23 = pbVar23 + 1;
              } while (0xf < iVar25);
            }
            else {
              lVar26 = 0;
              pbVar10 = pbVar15 + lVar12;
              pbVar23 = param_2 + lVar12;
              do {
                pbVar3 = pbVar15 + lVar26;
                pbVar4 = param_2 + lVar26 + 0x10;
                uVar28 = *(undefined8 *)(pbVar3 + 8);
                uVar27 = *(undefined8 *)pbVar3;
                uVar30 = *(undefined8 *)(pbVar3 + 0x18);
                uVar29 = *(undefined8 *)(pbVar3 + 0x10);
                uVar32 = *(undefined8 *)(pbVar4 + -8);
                uVar31 = *(undefined8 *)(pbVar4 + -0x10);
                uVar34 = *(undefined8 *)(pbVar4 + 8);
                uVar33 = *(undefined8 *)pbVar4;
                lVar26 = lVar26 + 0x20;
                *(ulong *)(pbVar3 + 8) =
                     CONCAT17((byte)((ulong)uVar32 >> 0x38) | (byte)((ulong)uVar28 >> 0x38),
                              CONCAT16((byte)((ulong)uVar32 >> 0x30) | (byte)((ulong)uVar28 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar32 >> 0x28) |
                                                 (byte)((ulong)uVar28 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar32 >> 0x20) |
                                                          (byte)((ulong)uVar28 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar32 >> 0x18) |
                                                                   (byte)((ulong)uVar28 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar32 >>
                                                                                  0x10) |
                                                                            (byte)((ulong)uVar28 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar32 >> 8) | (byte)((ulong)uVar28 >> 8),
                                                  (byte)uVar32 | (byte)uVar28)))))));
                *(ulong *)pbVar3 =
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
                *(ulong *)(pbVar3 + 0x18) =
                     CONCAT17((byte)((ulong)uVar34 >> 0x38) | (byte)((ulong)uVar30 >> 0x38),
                              CONCAT16((byte)((ulong)uVar34 >> 0x30) | (byte)((ulong)uVar30 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar34 >> 0x28) |
                                                 (byte)((ulong)uVar30 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar34 >> 0x20) |
                                                          (byte)((ulong)uVar30 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar34 >> 0x18) |
                                                                   (byte)((ulong)uVar30 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar34 >>
                                                                                  0x10) |
                                                                            (byte)((ulong)uVar30 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar34 >> 8) | (byte)((ulong)uVar30 >> 8),
                                                  (byte)uVar34 | (byte)uVar30)))))));
                *(ulong *)(pbVar3 + 0x10) =
                     CONCAT17((byte)((ulong)uVar33 >> 0x38) | (byte)((ulong)uVar29 >> 0x38),
                              CONCAT16((byte)((ulong)uVar33 >> 0x30) | (byte)((ulong)uVar29 >> 0x30)
                                       ,CONCAT15((byte)((ulong)uVar33 >> 0x28) |
                                                 (byte)((ulong)uVar29 >> 0x28),
                                                 CONCAT14((byte)((ulong)uVar33 >> 0x20) |
                                                          (byte)((ulong)uVar29 >> 0x20),
                                                          CONCAT13((byte)((ulong)uVar33 >> 0x18) |
                                                                   (byte)((ulong)uVar29 >> 0x18),
                                                                   CONCAT12((byte)((ulong)uVar33 >>
                                                                                  0x10) |
                                                                            (byte)((ulong)uVar29 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  uVar33 >> 8) | (byte)((ulong)uVar29 >> 8),
                                                  (byte)uVar33 | (byte)uVar29)))))));
              } while (lVar12 != lVar26);
              uVar24 = uVar16 + (int)lVar12 * -8;
              if ((uVar21 & 0x1f) != 0) goto LAB_010a0c74;
            }
            pbVar10 = param_2 + uVar20 + 1;
            if (8 < (int)(uVar16 - uVar22)) {
              *pbVar11 = (byte)(0xff00 >> (ulong)((uVar16 - 8) - uVar22 & 0x1f)) &
                         param_2[uVar20 + 1] | *pbVar11;
              pbVar10 = param_2 + uVar20 + 2;
            }
            param_2 = pbVar10;
            uVar24 = uVar14 - 1;
            pbVar15 = pbVar15 + lVar13;
            pbVar11 = pbVar11 + lVar13;
            lVar19 = lVar19 + 1;
            bVar1 = (int)uVar14 < 1;
            uVar14 = uVar24;
            if (uVar24 == 0 || bVar1) {
              return 0;
            }
          } while( true );
        }
      }
      else if (uVar14 != 0) {
        if (7 < uVar16) {
          uVar21 = 0xfffffff0;
          if (0xfffffff0 < ~uVar16) {
            uVar21 = ~uVar16;
          }
          uVar21 = uVar21 + uVar16 + 8;
          uVar20 = (ulong)(uVar21 >> 3);
          uVar21 = uVar21 & 0xfffffff8;
          uVar24 = (uVar16 - 8) - uVar21;
          lVar17 = lVar17 + lVar18 + uVar20;
                    /* catch() { ... } // from try @ 010a0a6c with catch @ 010a0ac8 */
          pbVar11 = (byte *)(lVar17 + 1);
          do {
            lVar18 = 0;
            uVar9 = 0;
            iVar25 = uVar16 + 8;
            do {
              iVar25 = iVar25 + -8;
              uVar8 = uVar9 | param_2[lVar18];
              uVar9 = uVar8 << 8;
              pbVar15[lVar18] = (byte)(uVar8 >> (ulong)uVar22) | pbVar15[lVar18];
              lVar18 = lVar18 + 1;
            } while (0xf < iVar25);
            pbVar10 = param_2 + uVar20 + 1;
            if (8 < (int)(uVar16 - uVar21)) {
              bVar6 = *pbVar10;
              pbVar10 = param_2 + uVar20 + 2;
              uVar9 = 0xff00U >> (ulong)(uVar24 & 0x1f) & (uint)bVar6 | uVar9;
            }
            *pbVar11 = (byte)(uVar9 >> (ulong)uVar22) | *pbVar11;
            if (8 < (int)(uVar24 + uVar22)) {
              *(byte *)(lVar17 + 2) = (byte)((uVar9 << 8) >> (ulong)uVar22) | *(byte *)(lVar17 + 2);
            }
            uVar9 = uVar14 - 1;
            pbVar15 = pbVar15 + lVar13;
            lVar17 = lVar17 + lVar13;
            pbVar11 = pbVar11 + lVar13;
            bVar1 = 0 < (int)uVar14;
            param_2 = pbVar10;
            uVar14 = uVar9;
          } while (uVar9 != 0 && bVar1);
          return 0;
        }
        iVar25 = uVar14 + 1;
        pbVar15 = (byte *)(lVar17 + lVar18 + 1);
        do {
          if (uVar16 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = 0xff00U >> (ulong)(uVar16 & 0x1f) & (uint)*param_2;
            param_2 = param_2 + 1;
          }
          pbVar15[-1] = (byte)(uVar14 >> (ulong)uVar22) | pbVar15[-1];
          if (8 < uVar16 + uVar22) {
            *pbVar15 = (byte)((uVar14 << 8) >> (ulong)uVar22) | *pbVar15;
          }
          iVar25 = iVar25 + -1;
          pbVar15 = pbVar15 + lVar13;
        } while (1 < iVar25);
        return 0;
      }
      return 0;
    }
  }
  return 3;
}

