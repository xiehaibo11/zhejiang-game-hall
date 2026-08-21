
undefined8 FUN_00e5c2ac(long param_1,byte *param_2,byte *param_3,uint param_4,int param_5)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  if ((int)param_4 < 0) {
    return 3;
  }
  puVar1 = *(uint **)(param_1 + 0x10);
  uVar6 = 3;
  uVar2 = **(ushort **)(param_1 + 0x18);
  uVar14 = (uint)uVar2;
  if ((((uint)uVar2 + param_5 <= *puVar1) && (-1 < param_5)) &&
     (uVar17 = (uint)(*(ushort **)(param_1 + 0x18))[1], uVar17 + param_4 <= puVar1[1])) {
    uVar17 = *(byte *)(param_1 + 0x22) * uVar17;
    if (param_3 < param_2 + (uVar17 * uVar2 + 7 >> 3)) {
      return 3;
    }
    uVar6 = 0;
    uVar15 = (uint)uVar2;
    if ((uVar15 != 0) && (uVar17 != 0)) {
      uVar3 = puVar1[2];
      lVar12 = *(long *)(puVar1 + 4);
      uVar18 = param_4 & 7;
      uVar4 = 8 - uVar18;
      lVar8 = (long)(int)(uVar3 * param_5 + (param_4 >> 3));
      pbVar16 = (byte *)(lVar12 + lVar8);
      uVar5 = uVar17;
      if (uVar4 <= uVar17) {
        uVar5 = uVar4;
      }
      if (uVar18 != 0) {
        uVar14 = uVar18 - 9;
        if (uVar14 < ~uVar17) {
          uVar14 = ~uVar17;
        }
        uVar14 = (uVar14 + uVar17) - 7;
        uVar17 = uVar17 - uVar5;
        uVar10 = (ulong)(uVar14 >> 3);
        uVar19 = 0;
        uVar21 = 0;
        uVar14 = uVar14 & 7;
        pbVar9 = (byte *)(lVar12 + uVar10 + lVar8 + 2);
        uVar11 = uVar15;
        do {
          if (uVar11 == uVar15) {
            uVar19 = (uint)*param_2;
            param_2 = param_2 + 1;
            uVar21 = uVar18;
          }
          else if ((int)uVar21 < (int)uVar5) {
            pbVar13 = param_2;
            if (param_2 < param_3) {
              pbVar13 = param_2 + 1;
              uVar19 = uVar19 | *param_2;
            }
            param_2 = pbVar13;
            uVar21 = (8 - uVar5) + uVar21;
          }
          else {
            uVar19 = uVar19 >> 8 & 0xff;
            uVar21 = uVar21 - uVar5;
          }
          pbVar13 = pbVar16 + 1;
          *pbVar16 = *pbVar16 |
                     (byte)((uVar19 & 0xffff) >> (ulong)(uVar21 & 0x1f)) &
                     (byte)(~(0xff << (ulong)(uVar5 & 0x1f)) << (ulong)(uVar4 - uVar5 & 0x1f));
          uVar19 = uVar19 << 8;
          if ((int)uVar17 < 8) {
            uVar22 = uVar17;
            if (0 < (int)uVar17) goto LAB_00e5c470;
          }
          else {
            lVar8 = 0;
            uVar20 = uVar19;
            uVar22 = uVar17;
            do {
              uVar22 = uVar22 - 8;
              uVar19 = (uint)param_2[lVar8] << 8;
              pbVar16[lVar8 + 1] =
                   pbVar16[lVar8 + 1] |
                   (byte)((uVar20 & 0xffff | (uint)param_2[lVar8]) >> (ulong)(uVar21 & 0x1f));
              lVar8 = lVar8 + 1;
              uVar20 = uVar19;
            } while (7 < (int)uVar22);
            param_2 = param_2 + uVar10 + 1;
            pbVar13 = pbVar9;
            uVar22 = uVar14;
            if (uVar14 != 0) {
LAB_00e5c470:
              if ((int)uVar21 < (int)uVar22) {
                pbVar7 = param_2;
                if (param_2 < param_3) {
                  pbVar7 = param_2 + 1;
                  uVar19 = uVar19 | *param_2;
                }
                *pbVar13 = *pbVar13 |
                           (byte)((uVar19 & 0xffff) >> (ulong)(uVar21 & 0x1f)) &
                           (byte)(0xff00 >> (ulong)(uVar22 & 0x1f));
                uVar19 = uVar19 << 8;
                param_2 = pbVar7;
                uVar21 = (uVar21 + 8) - uVar22;
              }
              else {
                *pbVar13 = *pbVar13 |
                           (byte)(0xff00 >> (ulong)(uVar22 & 0x1f)) &
                           (byte)((uVar19 & 0xffff) >> (ulong)(uVar21 & 0x1f));
                uVar21 = uVar21 - uVar22;
              }
            }
          }
          uVar11 = uVar11 - 1;
          pbVar16 = pbVar16 + (int)uVar3;
          pbVar9 = pbVar9 + (int)uVar3;
          if ((int)uVar11 < 1) {
            return 0;
          }
        } while( true );
      }
      uVar10 = (ulong)(uVar17 - 8 >> 3);
      uVar15 = 0;
      pbVar9 = (byte *)(lVar12 + uVar10 + lVar8 + 1);
      uVar18 = 0;
      do {
        uVar5 = uVar17;
        pbVar13 = pbVar16;
        if (7 < uVar17) {
          lVar8 = 0;
          do {
            uVar5 = uVar5 - 8;
            uVar4 = uVar15 & 0xffff | (uint)param_2[lVar8];
            uVar15 = uVar4 << 8;
            pbVar16[lVar8] = pbVar16[lVar8] | (byte)(uVar4 >> (ulong)(uVar18 & 0x1f));
            lVar8 = lVar8 + 1;
          } while (7 < (int)uVar5);
          param_2 = param_2 + uVar10 + 1;
          uVar5 = uVar17 - 8 & 7;
          pbVar13 = pbVar9;
        }
        if (uVar5 != 0) {
          if ((int)uVar18 < (int)uVar5) {
            pbVar7 = param_2;
            if (param_2 < param_3) {
              pbVar7 = param_2 + 1;
              uVar15 = uVar15 | *param_2;
            }
            uVar4 = uVar15 & 0xffff;
            uVar15 = uVar15 << 8;
            *pbVar13 = *pbVar13 |
                       (byte)(uVar4 >> (ulong)(uVar18 & 0x1f)) &
                       (byte)(0xff00 >> (ulong)(uVar5 & 0x1f));
            param_2 = pbVar7;
            uVar18 = (uVar18 + 8) - uVar5;
          }
          else {
            *pbVar13 = *pbVar13 |
                       (byte)(0xff00 >> (ulong)(uVar5 & 0x1f)) &
                       (byte)((uVar15 & 0xffff) >> (ulong)(uVar18 & 0x1f));
            uVar18 = uVar18 - uVar5;
          }
        }
        uVar14 = uVar14 - 1;
        uVar6 = 0;
        pbVar16 = pbVar16 + (int)uVar3;
        pbVar9 = pbVar9 + (int)uVar3;
      } while (0 < (int)uVar14);
    }
  }
  return uVar6;
}

