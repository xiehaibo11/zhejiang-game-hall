
void FUN_00e69764(int param_1,ulong *param_2,long param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  
  if (param_1 != 0) {
    uVar9 = *(undefined8 *)(param_3 + (long)param_4 * 0x198 + 400);
    lVar12 = *(long *)(param_3 + (long)param_4 * 0x198 + 0x198);
    do {
      while( true ) {
        uVar1 = (uint)param_2[1];
        if (uVar1 != 0) break;
joined_r0x00e69960:
        param_2 = param_2 + 2;
        param_1 = param_1 + -1;
        if (param_1 == 0) {
          return;
        }
      }
      uVar7 = *param_2;
      uVar5 = 0;
      uVar10 = uVar7 + (ulong)uVar1 * 0x48;
      uVar17 = uVar7;
      uVar14 = 0;
      do {
        uVar16 = uVar14;
        if ((*(byte *)(uVar17 + 0x1c) >> 5 & 1) != 0) {
          uVar16 = uVar17;
          if (uVar14 != 0) {
            uVar16 = uVar14;
          }
          uVar5 = uVar5 + 1;
        }
        uVar17 = uVar17 + 0x48;
        uVar14 = uVar16;
      } while (uVar17 < uVar10);
      uVar17 = uVar16;
      if (1 < uVar5) {
        do {
          do {
            uVar7 = uVar17;
            uVar17 = *(ulong *)(uVar7 + 8);
            if (uVar17 == uVar16) goto joined_r0x00e69960;
            uVar14 = uVar17;
          } while ((*(byte *)(uVar17 + 0x1c) >> 5 & 1) != 0);
          do {
            uVar14 = *(ulong *)(uVar14 + 8);
          } while ((*(byte *)(uVar14 + 0x1c) >> 5 & 1) == 0);
          lVar15 = *(long *)(uVar7 + 0x30);
          lVar6 = *(long *)(uVar14 + 0x30);
          lVar2 = lVar15 - lVar6;
          if (lVar2 == 0 || lVar15 < lVar6) {
            lVar8 = *(long *)(uVar7 + 0x40);
            lVar2 = lVar6 - lVar15;
            lVar13 = *(long *)(uVar14 + 0x40) - lVar8;
            if (0 < lVar2) goto LAB_00e698d4;
LAB_00e698b0:
            uVar11 = 0x10000;
          }
          else {
            lVar8 = *(long *)(uVar14 + 0x40);
            lVar13 = *(long *)(uVar7 + 0x40) - lVar8;
            lVar15 = lVar6;
            if (lVar2 < 1) goto LAB_00e698b0;
LAB_00e698d4:
            uVar11 = FT_DivFix(lVar13,lVar2);
            uVar17 = *(ulong *)(uVar7 + 8);
          }
          do {
            lVar6 = *(long *)(uVar17 + 0x30) - lVar15;
            uVar4 = uVar9;
            if ((lVar6 < 1) || (uVar4 = uVar11, lVar6 < lVar2)) {
              lVar6 = FT_MulFix(lVar6,uVar4);
              lVar3 = lVar8;
            }
            else {
              lVar3 = FT_MulFix(lVar6 - lVar2,uVar9);
              lVar6 = lVar13 + lVar8;
            }
            *(long *)(uVar17 + 0x40) = lVar6 + lVar3;
            uVar17 = *(ulong *)(uVar17 + 8);
          } while (uVar17 != uVar14);
          uVar17 = uVar14;
        } while (uVar14 != uVar16);
        goto joined_r0x00e69960;
      }
      if (uVar5 == 1) {
        lVar12 = *(long *)(uVar16 + 0x40);
        lVar2 = FT_MulFix(*(undefined8 *)(uVar16 + 0x30),uVar9);
        lVar12 = lVar12 - lVar2;
      }
      if (uVar1 != 0) {
        do {
          if (uVar16 != uVar7) {
            lVar2 = FT_MulFix(*(undefined8 *)(uVar7 + 0x30),uVar9);
            *(long *)(uVar7 + 0x40) = lVar2 + lVar12;
          }
          uVar7 = uVar7 + 0x48;
        } while (uVar7 < uVar10);
        goto joined_r0x00e69960;
      }
      param_1 = param_1 + -1;
      param_2 = param_2 + 2;
    } while (param_1 != 0);
  }
  return;
}

