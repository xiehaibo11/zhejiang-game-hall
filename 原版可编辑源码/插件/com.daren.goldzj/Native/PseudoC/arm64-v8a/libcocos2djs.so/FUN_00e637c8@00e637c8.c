
void FUN_00e637c8(uint *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      return;
    }
    uVar9 = 0;
    uVar11 = 1;
    plVar6 = param_2;
    do {
      plVar6 = plVar6 + 3;
      plVar12 = plVar6;
      uVar8 = uVar9;
      do {
        plVar14 = param_2 + (ulong)uVar8 * 3;
        if (*plVar14 <= *plVar12) break;
        lVar16 = plVar12[2];
        lVar5 = plVar12[1];
        lVar3 = *plVar12;
        uVar8 = uVar8 - 1;
        lVar19 = plVar14[1];
        lVar17 = *plVar14;
        plVar12[2] = plVar14[2];
        plVar12[1] = lVar19;
        *plVar12 = lVar17;
        plVar14[2] = lVar16;
        plVar14[1] = lVar5;
        *plVar14 = lVar3;
        plVar12 = plVar12 + -3;
      } while (uVar8 != 0xffffffff);
      uVar8 = *param_1;
      uVar11 = uVar11 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar11 < uVar8);
    if (1 < uVar8) {
      lVar16 = *param_2;
      uVar11 = 0;
      uVar9 = uVar8 - 1;
      uVar15 = 1;
      do {
        while( true ) {
          uVar13 = (uint)uVar15;
          if ((uVar13 == uVar9) || (param_3 < param_2[uVar15 * 3] - lVar16)) break;
          uVar15 = (ulong)(uVar13 + 1);
          if (uVar8 <= uVar13 + 1) goto LAB_00e63990;
        }
        uVar2 = (uint)(uVar13 == uVar9 && param_2[uVar15 * 3] - lVar16 <= param_3);
        uVar1 = uVar13 + uVar2;
        uVar15 = (ulong)uVar11;
        if (uVar11 < uVar1) {
          uVar10 = uVar1 - uVar15;
          if (uVar10 < 3) {
            lVar3 = 0;
            uVar4 = uVar15;
LAB_00e63944:
            lVar17 = uVar1 - uVar4;
            plVar6 = param_2 + uVar4 * 3;
            do {
              lVar5 = *plVar6;
              lVar17 = lVar17 + -1;
              *plVar6 = 0;
              lVar3 = lVar5 + lVar3;
              plVar6 = plVar6 + 3;
            } while (lVar17 != 0);
          }
          else {
            uVar7 = uVar10 & 0xfffffffffffffffe;
            lVar17 = 0;
            lVar3 = 0;
            uVar4 = uVar7 + uVar15;
            plVar6 = param_2 + uVar15 * 3;
            uVar18 = uVar7;
            do {
              lVar5 = *plVar6;
              lVar19 = plVar6[3];
              *plVar6 = 0;
              plVar6[3] = 0;
              uVar18 = uVar18 - 2;
              lVar17 = lVar5 + lVar17;
              lVar3 = lVar19 + lVar3;
              plVar6 = plVar6 + 6;
            } while (uVar18 != 0);
            lVar3 = lVar3 + lVar17;
            if (uVar10 != uVar7) goto LAB_00e63944;
          }
          uVar10 = (ulong)(uVar13 + uVar2);
        }
        else {
          lVar3 = 0;
          uVar10 = uVar15;
        }
        lVar17 = 0;
        if (uVar10 != 0) {
          lVar17 = lVar3 / (long)uVar10;
        }
        param_2[uVar15 * 3] = lVar17;
        if (uVar1 < uVar9) {
          uVar11 = uVar1 + 1;
          lVar16 = param_2[(ulong)uVar11 * 3];
        }
        uVar15 = (ulong)(uVar1 + 1);
      } while (uVar1 + 1 < uVar8);
LAB_00e63990:
      if (1 < uVar8) {
        uVar15 = 1;
        uVar10 = 1;
        plVar6 = param_2;
        do {
          plVar12 = plVar6 + 3;
          if (*plVar12 != 0) {
            lVar3 = plVar6[4];
            lVar16 = *plVar12;
            plVar14 = param_2 + uVar10 * 3;
            uVar10 = (ulong)((int)uVar10 + 1);
            plVar14[2] = plVar6[5];
            plVar14[1] = lVar3;
            *plVar14 = lVar16;
            uVar8 = *param_1;
          }
          uVar11 = (uint)uVar10;
          uVar15 = uVar15 + 1;
          plVar6 = plVar12;
        } while (uVar15 < uVar8);
        goto LAB_00e639e8;
      }
    }
  }
  uVar11 = 1;
LAB_00e639e8:
  *param_1 = uVar11;
  return;
}

