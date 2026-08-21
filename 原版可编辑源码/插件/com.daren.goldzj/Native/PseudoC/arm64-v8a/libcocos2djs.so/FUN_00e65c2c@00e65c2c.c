
void FUN_00e65c2c(long param_1,long param_2,uint param_3)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  
  lVar10 = 0x18;
  lVar13 = 8;
  if (param_3 != 0) {
    lVar13 = 0x10;
  }
  lVar7 = param_1 + (ulong)param_3 * 0x4858;
  lVar13 = *(long *)(param_2 + lVar13);
  if (param_3 != 0) {
    lVar10 = 0x20;
  }
  lVar10 = *(long *)(param_2 + lVar10);
  uVar14 = (ulong)param_3;
  if ((*(long *)(lVar7 + 0x4898) != lVar13) || (*(long *)(lVar7 + 0x48a0) != lVar10)) {
    *(long *)(lVar7 + 0x4898) = lVar13;
    *(long *)(lVar7 + 0x48a0) = lVar10;
    uVar4 = *(uint *)(param_1 + 0x4a54);
    lVar7 = lVar13;
    if (uVar4 != 0) {
      uVar9 = 0;
      puVar11 = (undefined8 *)(param_1 + 0x4a70);
      do {
        if ((*(byte *)(param_1 + (ulong)uVar9 * 0x48 + 0x4a98) >> 4 & 1) != 0) {
          uVar17 = FT_MulFix(*puVar11,lVar13);
          uVar4 = *(uint *)(*(long *)(param_1 + 0x40) + 0x18);
          if (uVar4 == 0) {
            lVar16 = 0x28;
          }
          else {
            uVar5 = *(ushort *)(*(long *)(*(long *)(param_1 + 8) + 0xa0) + 0x18);
            lVar16 = 0x34;
            if (uVar4 < uVar5 || uVar5 < 6) {
              lVar16 = 0x28;
            }
          }
          if ((param_3 == 1) && (uVar17 != (lVar16 + uVar17 & 0xffffffffffffffc0))) {
            lVar7 = FT_MulDiv(lVar13);
            uVar4 = *(uint *)(param_1 + 0x4a54);
            uVar17 = (ulong)*(uint *)(param_1 + 0x48);
            if (uVar4 != 0) {
              uVar12 = 0;
              plVar8 = (long *)(param_1 + 0x4a90);
              do {
                puVar1 = (ulong *)(plVar8 + -1);
                lVar16 = *plVar8;
                uVar12 = uVar12 + 1;
                plVar8 = plVar8 + 9;
                if ((long)uVar17 <= (long)*puVar1) {
                  uVar17 = *puVar1;
                }
                if ((long)uVar17 <= -lVar16) {
                  uVar17 = -lVar16;
                }
              } while (uVar12 < uVar4);
            }
            lVar16 = FT_MulFix(uVar17,lVar7 - lVar13);
            uVar12 = FT_MulFix(uVar17,lVar7 - lVar13);
            uVar17 = -uVar12;
            if (-1 < lVar16) {
              uVar17 = uVar12;
            }
            if (0x7f < uVar17) {
              lVar7 = lVar13;
            }
          }
          break;
        }
        uVar9 = uVar9 + 1;
        puVar11 = puVar11 + 9;
      } while (uVar9 < uVar4);
    }
    lVar13 = param_1 + uVar14 * 0x4858;
    *(long *)(lVar13 + 0x50) = lVar7;
    *(long *)(lVar13 + 0x58) = lVar10;
    if (param_3 == 0) {
      *(long *)(param_1 + 0x10) = lVar7;
      plVar8 = (long *)(param_1 + 0x20);
    }
    else {
      plVar8 = (long *)(param_1 + 0x28);
      *(long *)(param_1 + 0x18) = lVar7;
    }
    *plVar8 = lVar10;
    puVar15 = (uint *)(param_1 + uVar14 * 0x4858 + 0x60);
    if (*puVar15 != 0) {
      uVar17 = 0;
      puVar11 = (undefined8 *)(param_1 + uVar14 * 0x4858 + 0x78);
      do {
        uVar6 = FT_MulFix(puVar11[-2],lVar7);
        puVar11[-1] = uVar6;
        *puVar11 = uVar6;
        uVar17 = uVar17 + 1;
        puVar11 = puVar11 + 3;
      } while (uVar17 < *puVar15);
    }
    lVar16 = param_1 + uVar14 * 0x4858;
    lVar13 = FT_MulFix(*(undefined8 *)(lVar16 + 0x1f0),lVar7);
    *(bool *)(lVar16 + 0x1f8) = lVar13 < 0x28;
    if ((param_3 == 1) && (*(int *)(param_1 + 0x4a54) != 0)) {
      uVar14 = 0;
      puVar15 = (uint *)(param_1 + 0x4a98);
      do {
        lVar13 = FT_MulFix(*(undefined8 *)(puVar15 + -0x10),lVar7);
        *(long *)(puVar15 + -0xe) = lVar13 + lVar10;
        *(long *)(puVar15 + -0xc) = lVar13 + lVar10;
        lVar13 = FT_MulFix(*(undefined8 *)(puVar15 + -10),lVar7);
        *(long *)(puVar15 + -8) = lVar13 + lVar10;
        *(long *)(puVar15 + -6) = lVar13 + lVar10;
        *puVar15 = *puVar15 & 0xfffffffe;
        lVar13 = FT_MulFix(*(long *)(puVar15 + -0x10) - *(long *)(puVar15 + -10),lVar7);
        if (lVar13 + 0x30U < 0x61) {
          lVar16 = -lVar13;
          if (-1 < lVar13) {
            lVar16 = lVar13;
          }
          lVar2 = 0x20;
          if (0x2f < lVar16) {
            lVar2 = 0x40;
          }
          lVar3 = 0;
          if (0x1f < lVar16) {
            lVar3 = lVar2;
          }
          lVar16 = -lVar3;
          if (-1 < lVar13) {
            lVar16 = lVar3;
          }
          uVar17 = *(long *)(puVar15 + -0xe) + 0x20U & 0xffffffffffffffc0;
          *(ulong *)(puVar15 + -0xc) = uVar17;
          *(ulong *)(puVar15 + -6) = uVar17 - lVar16;
          *puVar15 = *puVar15 | 1;
        }
        uVar17 = (ulong)*(uint *)(param_1 + 0x4a54);
        uVar14 = uVar14 + 1;
        puVar15 = puVar15 + 0x12;
      } while (uVar14 < uVar17);
      if (*(uint *)(param_1 + 0x4a54) != 0) {
        uVar14 = 0;
        do {
          lVar13 = param_1 + 0x4858 + uVar14 * 0x48;
          uVar4 = *(uint *)(lVar13 + 0x240);
          if (((uVar4 ^ 0xffffffff) & 5) == 0) {
            lVar10 = param_1 + 0x4858 + uVar14 * 0x48;
            uVar12 = 0;
            puVar15 = (uint *)(param_1 + 0x4a98);
            do {
              if ((((*puVar15 & 5) == 1) && (*(long *)(puVar15 + -0xc) <= *(long *)(lVar10 + 0x228))
                  ) && (*(long *)(lVar10 + 0x210) <= *(long *)(puVar15 + -6))) {
                *(uint *)(lVar13 + 0x240) = uVar4 & 0xfffffffe;
                break;
              }
              uVar12 = uVar12 + 1;
              puVar15 = puVar15 + 0x12;
            } while (uVar12 < uVar17);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar17);
      }
    }
  }
  return;
}

