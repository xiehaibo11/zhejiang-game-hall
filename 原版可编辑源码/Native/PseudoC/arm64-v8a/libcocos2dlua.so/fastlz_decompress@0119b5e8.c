
int fastlz_decompress(byte *param_1,int param_2,byte *param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  bVar4 = *param_1;
  pbVar1 = param_1 + param_2;
  pbVar2 = param_3 + param_4;
  if (bVar4 >> 5 == 1) {
    uVar17 = bVar4 & 0x1f;
    bVar5 = true;
    pbVar8 = param_1 + 1;
    pbVar15 = param_3;
    do {
      if (uVar17 < 0x20) {
        if (pbVar2 < pbVar15 + (uVar17 + 1)) {
          return 0;
        }
        if (pbVar1 < pbVar8 + (uVar17 + 1)) {
          return 0;
        }
        pbVar10 = pbVar8 + 1;
        pbVar6 = pbVar15 + 1;
        *pbVar15 = *pbVar8;
        if (uVar17 != 0) {
          uVar12 = (ulong)(uVar17 - 1);
          uVar9 = uVar12 + 1;
          pbVar14 = pbVar6;
          if ((0x1f < uVar9) &&
             ((pbVar8 + uVar12 + 2 <= pbVar6 || (pbVar15 + uVar12 + 2 <= pbVar10)))) {
            uVar13 = uVar9 & 0x1ffffffe0;
            pbVar15 = pbVar15 + 0x11;
            pbVar10 = pbVar10 + uVar13;
            pbVar6 = pbVar6 + uVar13;
            uVar17 = uVar17 - (int)uVar13;
            pbVar14 = pbVar8 + 0x11;
            uVar12 = uVar13;
            do {
              pbVar7 = pbVar14 + -8;
              uVar19 = *(undefined8 *)(pbVar14 + -0x10);
              uVar21 = *(undefined8 *)(pbVar14 + 8);
              uVar20 = *(undefined8 *)pbVar14;
              uVar12 = uVar12 - 0x20;
              pbVar14 = pbVar14 + 0x20;
              *(undefined8 *)(pbVar15 + -8) = *(undefined8 *)pbVar7;
              *(undefined8 *)(pbVar15 + -0x10) = uVar19;
              *(undefined8 *)(pbVar15 + 8) = uVar21;
              *(undefined8 *)pbVar15 = uVar20;
              pbVar15 = pbVar15 + 0x20;
            } while (uVar12 != 0);
            pbVar14 = pbVar6;
            if (uVar9 == uVar13) {
              pbVar8 = pbVar8 + uVar13;
              goto joined_r0x0119ba98;
            }
          }
          do {
            pbVar8 = pbVar10;
            pbVar10 = pbVar8 + 1;
            uVar17 = uVar17 - 1;
            pbVar6 = pbVar14 + 1;
            *pbVar14 = *pbVar8;
            pbVar14 = pbVar6;
          } while (uVar17 != 0);
        }
joined_r0x0119ba98:
        if (pbVar1 <= pbVar10) break;
        uVar17 = (uint)*pbVar10;
        pbVar14 = pbVar8 + 2;
        bVar5 = true;
      }
      else {
        uVar18 = (uVar17 >> 5) - 1;
        pbVar10 = pbVar8;
        if (uVar18 == 6) {
          do {
            pbVar8 = pbVar10 + 1;
            bVar4 = *pbVar10;
            uVar18 = uVar18 + bVar4;
            pbVar10 = pbVar8;
          } while (bVar4 == 0xff);
        }
        pbVar14 = pbVar8 + 1;
        pbVar10 = pbVar15 + (-(ulong)*pbVar8 - (ulong)((uVar17 & 0x1f) << 8));
        if (((uVar17 & 0x1f) == 0x1f) && (*pbVar8 == 0xff)) {
          pbVar14 = pbVar8 + 3;
          pbVar10 = pbVar15 + (-0x1fff - (ulong)CONCAT11(pbVar8[1],pbVar8[2]));
        }
        pbVar6 = pbVar15 + 3;
        if (pbVar2 < pbVar6 + uVar18) {
          return 0;
        }
        if (pbVar10 + -1 < param_3) {
          return 0;
        }
        if (pbVar14 < pbVar1) {
          uVar17 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        }
        else {
          bVar5 = false;
        }
        bVar4 = pbVar10[-1];
        *pbVar15 = bVar4;
        if (pbVar10 == pbVar15) {
          pbVar15[1] = bVar4;
          pbVar15[2] = bVar4;
          if (uVar18 != 0) {
            memset(pbVar6,(uint)bVar4,(ulong)uVar18);
            pbVar6 = pbVar15 + (ulong)(uVar18 - 1) + 4;
          }
        }
        else {
          pbVar15[1] = *pbVar10;
          pbVar15[2] = pbVar10[1];
          if (uVar18 != 0) {
            uVar12 = (ulong)(uVar18 - 1);
            uVar9 = uVar12 + 1;
            pbVar8 = pbVar10 + 2;
            pbVar7 = pbVar6;
            if ((0x1f < uVar9) &&
               ((pbVar10 + uVar12 + 3 <= pbVar6 || (pbVar15 + uVar12 + 4 <= pbVar8)))) {
              uVar13 = uVar9 & 0x1ffffffe0;
              pbVar15 = pbVar15 + 0x13;
              uVar18 = uVar18 - (int)uVar13;
              pbVar6 = pbVar6 + uVar13;
              pbVar10 = pbVar10 + 0x12;
              uVar12 = uVar13;
              do {
                pbVar7 = pbVar10 + -8;
                uVar19 = *(undefined8 *)(pbVar10 + -0x10);
                uVar21 = *(undefined8 *)(pbVar10 + 8);
                uVar20 = *(undefined8 *)pbVar10;
                uVar12 = uVar12 - 0x20;
                pbVar10 = pbVar10 + 0x20;
                *(undefined8 *)(pbVar15 + -8) = *(undefined8 *)pbVar7;
                *(undefined8 *)(pbVar15 + -0x10) = uVar19;
                *(undefined8 *)(pbVar15 + 8) = uVar21;
                *(undefined8 *)pbVar15 = uVar20;
                pbVar15 = pbVar15 + 0x20;
              } while (uVar12 != 0);
              pbVar7 = pbVar6;
              pbVar8 = pbVar8 + uVar13;
              if (uVar9 == uVar13) goto LAB_0119b8a4;
            }
            do {
              uVar18 = uVar18 - 1;
              pbVar6 = pbVar7 + 1;
              *pbVar7 = *pbVar8;
              pbVar7 = pbVar6;
              pbVar8 = pbVar8 + 1;
            } while (uVar18 != 0);
          }
        }
      }
LAB_0119b8a4:
      pbVar8 = pbVar14;
      pbVar15 = pbVar6;
    } while (bVar5);
  }
  else {
    if (bVar4 >> 5 != 0) {
      return 0;
    }
    param_1 = param_1 + 1;
    uVar17 = bVar4 & 0x1f;
    bVar5 = true;
    pbVar15 = param_3;
    do {
      if (uVar17 < 0x20) {
        if (pbVar2 < pbVar15 + (uVar17 + 1)) {
          return 0;
        }
        if (pbVar1 < param_1 + (uVar17 + 1)) {
          return 0;
        }
        pbVar8 = param_1 + 1;
        pbVar6 = pbVar15 + 1;
        *pbVar15 = *param_1;
        if (uVar17 != 0) {
          uVar12 = (ulong)(uVar17 - 1);
          uVar9 = uVar12 + 1;
          pbVar10 = pbVar6;
          if ((0x1f < uVar9) &&
             ((param_1 + uVar12 + 2 <= pbVar6 || (pbVar15 + uVar12 + 2 <= pbVar8)))) {
            uVar13 = uVar9 & 0x1ffffffe0;
            pbVar15 = pbVar15 + 0x11;
            pbVar8 = pbVar8 + uVar13;
            pbVar6 = pbVar6 + uVar13;
            uVar17 = uVar17 - (int)uVar13;
            pbVar10 = param_1 + 0x11;
            uVar12 = uVar13;
            do {
              pbVar14 = pbVar10 + -8;
              uVar19 = *(undefined8 *)(pbVar10 + -0x10);
              uVar21 = *(undefined8 *)(pbVar10 + 8);
              uVar20 = *(undefined8 *)pbVar10;
              uVar12 = uVar12 - 0x20;
              pbVar10 = pbVar10 + 0x20;
              *(undefined8 *)(pbVar15 + -8) = *(undefined8 *)pbVar14;
              *(undefined8 *)(pbVar15 + -0x10) = uVar19;
              *(undefined8 *)(pbVar15 + 8) = uVar21;
              *(undefined8 *)pbVar15 = uVar20;
              pbVar15 = pbVar15 + 0x20;
            } while (uVar12 != 0);
            pbVar10 = pbVar6;
            if (uVar9 == uVar13) {
              param_1 = param_1 + uVar13;
              goto joined_r0x0119b830;
            }
          }
          do {
            param_1 = pbVar8;
            pbVar8 = param_1 + 1;
            uVar17 = uVar17 - 1;
            pbVar6 = pbVar10 + 1;
            *pbVar10 = *param_1;
            pbVar10 = pbVar6;
          } while (uVar17 != 0);
        }
joined_r0x0119b830:
        if (pbVar1 <= pbVar8) break;
        uVar17 = (uint)*pbVar8;
        param_1 = param_1 + 2;
        bVar5 = true;
      }
      else {
        uVar18 = (uVar17 >> 5) - 1;
        pbVar8 = param_1;
        if (uVar18 == 6) {
          pbVar8 = param_1 + 1;
          uVar18 = *param_1 + 6;
        }
        uVar12 = (ulong)uVar18;
        param_1 = pbVar8 + 1;
        uVar9 = (ulong)*pbVar8;
        pbVar10 = pbVar15 + 3;
        if (pbVar2 < pbVar10 + uVar12) {
          return 0;
        }
        uVar13 = (ulong)((uVar17 & 0x1f) << 8);
        pbVar14 = pbVar15 + (-uVar9 - uVar13);
        pbVar7 = pbVar14 + -1;
        if (pbVar7 < param_3) {
          return 0;
        }
        if (param_1 < pbVar1) {
          uVar17 = (uint)pbVar8[1];
          param_1 = pbVar8 + 2;
        }
        else {
          bVar5 = false;
        }
        pbVar6 = pbVar10;
        if (pbVar14 == pbVar15) {
          bVar4 = *pbVar7;
          *pbVar15 = bVar4;
          pbVar15[1] = bVar4;
          pbVar15[2] = bVar4;
          if (uVar18 != 0) {
            memset(pbVar10,(uint)bVar4,uVar12);
            pbVar6 = pbVar15 + (ulong)(uVar18 - 1) + 4;
          }
        }
        else {
          *pbVar15 = *pbVar7;
          pbVar15[1] = *pbVar14;
          pbVar14 = pbVar14 + 1;
          pbVar15[2] = *pbVar14;
          if (uVar18 != 0) {
            uVar16 = (ulong)(uVar18 - 1);
            uVar3 = uVar16 + 1;
            if ((0x1f < uVar3) &&
               ((pbVar15 + ((uVar16 - uVar9) - uVar13) + 3 <= pbVar10 ||
                (pbVar15 + uVar16 + 4 <= pbVar15 + (-uVar13 - uVar9) + 2)))) {
              uVar11 = uVar3 & 0x1ffffffe0;
              pbVar14 = pbVar14 + uVar11;
              uVar12 = (ulong)(uVar18 - (int)uVar11);
              pbVar10 = pbVar10 + uVar11;
              pbVar15 = pbVar15 + 0x12;
              uVar16 = uVar11;
              do {
                pbVar8 = pbVar15 + (-uVar13 - uVar9);
                uVar19 = *(undefined8 *)(pbVar8 + -0x10);
                uVar21 = *(undefined8 *)(pbVar8 + 8);
                uVar20 = *(undefined8 *)pbVar8;
                uVar16 = uVar16 - 0x20;
                *(undefined8 *)(pbVar15 + -7) = *(undefined8 *)(pbVar8 + -8);
                *(undefined8 *)(pbVar15 + -0xf) = uVar19;
                *(undefined8 *)(pbVar15 + 9) = uVar21;
                *(undefined8 *)(pbVar15 + 1) = uVar20;
                pbVar15 = pbVar15 + 0x20;
              } while (uVar16 != 0);
              pbVar6 = pbVar10;
              if (uVar3 == uVar11) goto LAB_0119b640;
            }
            do {
              pbVar14 = pbVar14 + 1;
              uVar18 = (int)uVar12 - 1;
              uVar12 = (ulong)uVar18;
              pbVar6 = pbVar10 + 1;
              *pbVar10 = *pbVar14;
              pbVar10 = pbVar6;
            } while (uVar18 != 0);
          }
        }
      }
LAB_0119b640:
      pbVar15 = pbVar6;
    } while (bVar5);
  }
  return (int)pbVar6 - (int)param_3;
}

