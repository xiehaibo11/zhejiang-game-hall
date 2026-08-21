
undefined8 FUN_00de23e4(long param_1,byte *param_2,long param_3)

{
  long lVar1;
  char *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  byte *pbVar18;
  
  lVar9 = *(long *)(param_1 + 0x358);
  lVar14 = 0;
  if (lVar9 != 0) {
    lVar14 = param_3 / lVar9;
  }
  if (param_3 == lVar14 * lVar9) {
    if (0 < param_3) {
      pbVar18 = *(byte **)(param_1 + 0x388);
      lVar14 = *(long *)(param_1 + 0x390);
      do {
        uVar16 = (ulong)*(uint *)(param_1 + 0x58);
        uVar15 = 0;
        bVar3 = uVar16 != 0;
        if ((*(uint *)(param_1 + 0x58) != 0) && (0 < lVar14)) {
          uVar15 = 0;
          uVar7 = 0;
          pbVar5 = param_2;
          pbVar6 = pbVar18;
          lVar9 = lVar14;
          do {
            pbVar18 = pbVar6 + 1;
            bVar13 = *pbVar6;
            lVar14 = lVar9 + -1;
            bVar12 = bVar13 >> 6;
            uVar17 = (uint)bVar13;
            pbVar6 = pbVar5;
            if (bVar12 == 1) {
              uVar8 = bVar13 >> 4 & 3;
              if (uVar8 != 2) {
                uVar7 = *(int *)(&DAT_0196f974 + (ulong)uVar8 * 4) + uVar7 & 0xf;
                if ((uVar15 & 1) == 0) {
                  bVar12 = (byte)(uVar7 << 4);
                }
                else {
                  pbVar6 = pbVar5 + 1;
                  bVar12 = (byte)uVar7 | *pbVar5;
                }
                *pbVar5 = bVar12;
                uVar15 = uVar15 + 1;
              }
              uVar8 = bVar13 >> 2 & 3;
              if ((uVar8 != 2) &&
                 (uVar7 = *(int *)(&DAT_0196f974 + (ulong)uVar8 * 4) + uVar7 & 0xf,
                 (long)uVar15 < (long)uVar16)) {
                if ((uVar15 & 1) == 0) {
                  *pbVar6 = (byte)(uVar7 << 4);
                  uVar15 = uVar15 + 1;
                }
                else {
                  *pbVar6 = (byte)uVar7 | *pbVar6;
                  pbVar6 = pbVar6 + 1;
                  uVar15 = uVar15 + 1;
                }
              }
              if ((uVar17 & 3) != 2) {
                iVar11 = *(int *)(&DAT_0196f974 + (ulong)(uVar17 & 3) * 4);
LAB_00de2690:
                uVar7 = iVar11 + uVar7 & 0xf;
                if ((long)uVar15 < (long)uVar16) {
                  if ((uVar15 & 1) == 0) {
                    *pbVar6 = (byte)(uVar7 << 4);
                    uVar15 = uVar15 + 1;
                  }
                  else {
                    *pbVar6 = (byte)uVar7 | *pbVar6;
                    pbVar6 = pbVar6 + 1;
                    uVar15 = uVar15 + 1;
                  }
                }
              }
            }
            else if (bVar12 == 2) {
              uVar8 = bVar13 >> 3 & 7;
              if (uVar8 != 4) {
                uVar7 = *(int *)(&DAT_0196f984 + (ulong)uVar8 * 4) + uVar7 & 0xf;
                if ((uVar15 & 1) == 0) {
                  bVar13 = (byte)(uVar7 << 4);
                }
                else {
                  pbVar6 = pbVar5 + 1;
                  bVar13 = (byte)uVar7 | *pbVar5;
                }
                *pbVar5 = bVar13;
                uVar15 = uVar15 + 1;
              }
              if ((uVar17 & 7) != 4) {
                iVar11 = *(int *)(&DAT_0196f984 + (ulong)(uVar17 & 7) * 4);
                goto LAB_00de2690;
              }
            }
            else if (bVar12 == 3) {
              uVar7 = bVar13 & 0xf;
              if ((uVar15 & 1) == 0) {
                *pbVar5 = bVar13 << 4;
                uVar15 = uVar15 + 1;
              }
              else {
                pbVar6 = pbVar5 + 1;
                *pbVar5 = (byte)uVar7 | *pbVar5;
                uVar15 = uVar15 + 1;
              }
            }
            else {
              if ((uVar15 & 1) == 0) {
                uVar7 = uVar7 | uVar7 << 4;
              }
              else {
                uVar15 = uVar15 + 1;
                uVar17 = uVar17 - 1;
                uVar7 = uVar7 | *pbVar5;
                pbVar6 = pbVar5 + 1;
                *pbVar5 = (byte)uVar7;
              }
              lVar1 = (long)(int)uVar17;
              if ((0 < (int)uVar17) && ((long)(uVar15 + lVar1) < (long)uVar16)) {
                uVar8 = 0xfffffffd;
                if (-3 < (int)~uVar17) {
                  uVar8 = ~uVar17;
                }
                uVar8 = uVar17 + uVar8 + 2;
                uVar10 = (ulong)(uVar8 >> 1);
                memset(pbVar6,uVar7,uVar10 + 1);
                uVar17 = (uVar17 - 2) - (uVar8 & 0xfffffffe);
                pbVar6 = pbVar6 + uVar10 + 1;
              }
              if (uVar17 == 0xffffffff) {
                pbVar6 = pbVar6 + -1;
                *pbVar6 = *pbVar6 & 0xf0;
              }
              uVar7 = uVar7 & 0xf;
              uVar15 = uVar15 + lVar1;
            }
            bVar3 = (long)uVar15 < (long)uVar16;
          } while ((1 < lVar9) &&
                  (pbVar5 = pbVar6, pbVar6 = pbVar18, lVar9 = lVar14, (long)uVar15 < (long)uVar16));
        }
        *(byte **)(param_1 + 0x388) = pbVar18;
        *(long *)(param_1 + 0x390) = lVar14;
        if (uVar15 != uVar16) {
          pcVar2 = "Not enough";
          if (!bVar3) {
            pcVar2 = "Too much";
          }
          TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"ThunderDecode",
                       "%s data at scanline %lu (%llu != %llu)",pcVar2,
                       *(undefined4 *)(param_1 + 0x27c),uVar15,uVar16);
          goto LAB_00de2430;
        }
        param_3 = param_3 - *(long *)(param_1 + 0x358);
        param_2 = param_2 + *(long *)(param_1 + 0x358);
      } while (0 < param_3);
    }
    uVar4 = 1;
  }
  else {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"ThunderDecodeRow",
                 "Fractional scanlines cannot be read");
LAB_00de2430:
    uVar4 = 0;
  }
  return uVar4;
}

