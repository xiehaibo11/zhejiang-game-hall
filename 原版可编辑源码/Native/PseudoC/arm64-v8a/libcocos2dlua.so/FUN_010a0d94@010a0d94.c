
undefined8 FUN_010a0d94(long param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  
  if ((int)param_4 < 0) {
    return 3;
  }
  piVar4 = *(int **)(param_1 + 0x10);
  uVar8 = 3;
  uVar5 = **(ushort **)(param_1 + 0x18);
  if ((((int)((uint)uVar5 + param_5) <= *piVar4) && (-1 < param_5)) &&
     (uVar21 = (uint)(*(ushort **)(param_1 + 0x18))[1], (int)(uVar21 + param_4) <= piVar4[1])) {
    uVar21 = *(byte *)(param_1 + 0x22) * uVar21;
    if (param_3 < param_2 + (uVar21 * uVar5 + 7 >> 3)) {
      return 3;
    }
    uVar18 = (uint)uVar5;
    if (uVar18 == 0) {
      return 0;
    }
    iVar6 = piVar4[2];
    lVar15 = *(long *)(piVar4 + 4);
    uVar3 = param_4 & 7;
    uVar19 = 8 - uVar3;
    lVar9 = (long)(int)(iVar6 * param_5 + (param_4 >> 3));
    pbVar20 = (byte *)(lVar15 + lVar9);
    uVar22 = uVar21;
    if (uVar19 <= uVar21) {
      uVar22 = uVar19;
    }
    if (uVar3 == 0) {
      uVar18 = 0xfffffff0;
      if (0xfffffff0 < ~uVar21) {
        uVar18 = ~uVar21;
      }
      uVar18 = uVar18 + uVar21 + 8;
      uVar3 = (uVar21 - 8) - (uVar18 & 0xfffffff8);
      uVar12 = (ulong)(uVar18 >> 3);
                    /* try { // try from 010a1054 to 011a106f has its CatchHandler @ 010a10f4 */
      uVar18 = 0;
      pbVar13 = (byte *)(lVar15 + lVar9 + uVar12 + 1);
      uVar22 = 0;
      uVar19 = (uint)uVar5;
      do {
        if (uVar21 < 8) {
                    /* try { // try from 010a110c to 011a120f has its CatchHandler @ 010a110c
                       catch() { ... } // from try @ 010a110c with catch @ 010a110c
                       catch() { ... } // from try @ 010a122c with catch @ 010a110c */
          pbVar17 = pbVar20;
          uVar11 = uVar21;
          if (uVar21 != 0) goto LAB_010a10bc;
        }
        else {
                    /* try { // try from 010a1070 to 011a110b has its CatchHandler @ 010a0fb4 */
          lVar9 = 0;
          iVar25 = uVar21 + 8;
          do {
            iVar25 = iVar25 + -8;
            uVar11 = (uint)param_2[lVar9] | uVar18 & 0xffff;
            uVar18 = uVar11 << 8;
            pbVar20[lVar9] = (byte)(uVar11 >> (ulong)(uVar22 & 0x1f)) | pbVar20[lVar9];
            lVar9 = lVar9 + 1;
          } while (0xf < iVar25);
          param_2 = param_2 + uVar12 + 1;
          pbVar17 = pbVar13;
          uVar11 = uVar3;
          if (0 < (int)uVar3) {
LAB_010a10bc:
            if ((int)uVar22 < (int)uVar11) {
              pbVar10 = param_2;
              if (param_2 < param_3) {
                pbVar10 = param_2 + 1;
                uVar18 = (uint)*param_2 | uVar18 & 0xffff;
              }
              uVar2 = uVar18 & 0xffff;
                    /* catch() { ... } // from try @ 010a1054 with catch @ 010a10f4 */
              uVar18 = uVar2 << 8;
              *pbVar17 = (byte)(uVar2 >> (ulong)(uVar22 & 0x1f)) &
                         (byte)(0xff00 >> (ulong)(uVar11 & 0x1f)) | *pbVar17;
              param_2 = pbVar10;
              uVar22 = (uVar22 + 8) - uVar11;
            }
            else {
              *pbVar17 = (byte)(0xff00 >> (ulong)(uVar11 & 0x1f)) &
                         (byte)((uVar18 & 0xffff) >> (ulong)(uVar22 & 0x1f)) | *pbVar17;
              uVar22 = uVar22 - uVar11;
            }
          }
        }
        uVar11 = uVar19 - 1;
        pbVar20 = pbVar20 + iVar6;
        pbVar13 = pbVar13 + iVar6;
        bVar1 = (int)uVar19 < 1;
        uVar19 = uVar11;
        if (uVar11 == 0 || bVar1) {
          return 0;
        }
      } while( true );
    }
    uVar11 = uVar3 - 9;
    if (uVar11 < ~uVar21) {
      uVar11 = ~uVar21;
    }
    iVar25 = (-2 - uVar21) - uVar11;
    if (iVar25 < -0xf) {
      iVar25 = -0x10;
    }
    uVar2 = iVar25 + uVar11 + uVar21 + 9;
    uVar12 = (ulong)(uVar2 >> 3);
    uVar14 = 0;
    uVar23 = 0;
    pbVar13 = (byte *)(lVar15 + lVar9 + uVar12 + 2);
    uVar16 = uVar18;
    do {
      if (uVar16 == uVar18) {
        uVar14 = (uint)*param_2;
        param_2 = param_2 + 1;
        uVar24 = uVar3;
      }
      else {
        uVar24 = uVar23 - uVar22;
        if ((int)uVar23 < (int)uVar22) {
          pbVar17 = param_2;
          if (param_2 < param_3) {
            pbVar17 = param_2 + 1;
            uVar14 = (uint)*param_2 | uVar14 & 0xffff;
          }
          uVar24 = (8 - uVar22) + uVar23;
          param_2 = pbVar17;
        }
        else {
          uVar14 = uVar14 >> 8 & 0xff;
        }
      }
      pbVar17 = pbVar20 + 1;
      *pbVar20 = (byte)((uVar14 & 0xffff) >> (ulong)(uVar24 & 0x1f)) &
                 (byte)(~(0xff << (ulong)(uVar22 & 0x1f)) << (ulong)(uVar19 - uVar22 & 0x1f)) |
                 *pbVar20;
      uVar14 = (uVar14 & 0xffff) << 8;
      uVar7 = uVar21 - uVar22;
      if (7 < (int)(uVar21 - uVar22)) {
        lVar9 = 0;
        iVar25 = uVar11 + uVar21 + 9;
        do {
          uVar23 = uVar14 & 0xff00 | (uint)param_2[lVar9];
          iVar25 = iVar25 + -8;
          uVar14 = uVar23 << 8;
          pbVar20[lVar9 + 1] = (byte)(uVar23 >> (ulong)(uVar24 & 0x1f)) | pbVar20[lVar9 + 1];
          lVar9 = lVar9 + 1;
        } while (0xf < iVar25);
        param_2 = param_2 + uVar12 + 1;
        uVar7 = (uVar11 + uVar21 + -7) - (uVar2 & 0xfffffff8);
        pbVar17 = pbVar13;
      }
      uVar23 = uVar24;
      if (0 < (int)uVar7) {
        uVar23 = uVar24 - uVar7;
        if ((int)uVar24 < (int)uVar7) {
          pbVar10 = param_2;
          if (param_2 < param_3) {
            pbVar10 = param_2 + 1;
            uVar14 = uVar14 & 0xff00 | (uint)*param_2;
          }
          uVar23 = (uVar24 + 8) - uVar7;
                    /* try { // try from 010a0fb4 to 011a1053 has its CatchHandler @ 010a0fb4
                       catch() { ... } // from try @ 010a0fb4 with catch @ 010a0fb4
                       catch() { ... } // from try @ 010a1070 with catch @ 010a0fb4 */
          *pbVar17 = (byte)((uVar14 & 0xffff) >> (ulong)(uVar24 & 0x1f)) &
                     (byte)(0xff00 >> (ulong)(uVar7 & 0x1f)) | *pbVar17;
          uVar14 = (uVar14 & 0xffff) << 8;
          param_2 = pbVar10;
        }
        else {
          *pbVar17 = (byte)(0xff00 >> (ulong)(uVar7 & 0x1f)) &
                     (byte)((uVar14 & 0xff00) >> (ulong)(uVar24 & 0x1f)) | *pbVar17;
        }
      }
      uVar24 = uVar16 - 1;
      pbVar20 = pbVar20 + iVar6;
      pbVar13 = pbVar13 + iVar6;
      bVar1 = 0 < (int)uVar16;
      uVar16 = uVar24;
    } while (uVar24 != 0 && bVar1);
    uVar8 = 0;
  }
  return uVar8;
}

