
void FUN_010a5784(uint *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  uVar6 = *param_1;
  if (uVar6 != 0) {
    if (uVar6 == 1) {
      return;
    }
    uVar7 = 0;
    uVar8 = 1;
    do {
      if (uVar8 != 0) {
        plVar5 = param_2 + (ulong)uVar8 * 3;
        uVar6 = uVar7;
        do {
          plVar11 = param_2 + (ulong)uVar6 * 3;
          if (*plVar11 <= *plVar5) break;
          lVar12 = plVar5[2];
          uVar6 = uVar6 - 1;
          lVar3 = plVar5[1];
          lVar4 = *plVar5;
          plVar5[2] = plVar11[2];
          lVar13 = *plVar11;
          plVar5[1] = plVar11[1];
          *plVar5 = lVar13;
          plVar11[1] = lVar3;
          *plVar11 = lVar4;
          plVar11[2] = lVar12;
          plVar5 = plVar5 + -3;
        } while (uVar6 != 0xffffffff);
        uVar6 = *param_1;
      }
      uVar8 = uVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar8 < uVar6);
    if (1 < uVar6) {
      lVar12 = *param_2;
      uVar8 = 0;
      uVar7 = uVar6 - 1;
      uVar10 = 1;
      do {
        uVar9 = (uint)uVar10;
        if ((uVar9 == uVar7) || (param_3 < param_2[uVar10 * 3] - lVar12)) {
          uVar9 = uVar9 + (uVar9 == uVar7 && param_2[uVar10 * 3] - lVar12 <= param_3);
          uVar10 = (ulong)uVar8;
          if (uVar8 < uVar9) {
            uVar2 = uVar9 - uVar10;
            if (uVar2 < 4) {
LAB_010a590c:
              lVar4 = 0;
              uVar2 = uVar10;
            }
            else {
              uVar1 = 4;
              if ((uVar2 & 3) != 0) {
                uVar1 = uVar2 & 3;
              }
              lVar4 = uVar2 - uVar1;
              if (lVar4 == 0) goto LAB_010a590c;
              uVar2 = lVar4 + uVar10;
              plVar5 = param_2 + uVar10 * 3 + 6;
              lVar13 = 0;
              lVar3 = 0;
              lVar14 = 0;
              lVar15 = 0;
              do {
                lVar16 = *plVar5;
                lVar17 = plVar5[3];
                lVar18 = plVar5[-6];
                lVar19 = plVar5[-3];
                lVar4 = lVar4 + -4;
                plVar5[-6] = 0;
                plVar5[-3] = 0;
                *plVar5 = 0;
                plVar5[3] = 0;
                lVar14 = lVar16 + lVar14;
                lVar15 = lVar17 + lVar15;
                lVar13 = lVar18 + lVar13;
                lVar3 = lVar19 + lVar3;
                plVar5 = plVar5 + 0xc;
              } while (lVar4 != 0);
              lVar4 = lVar14 + lVar13 + lVar15 + lVar3;
            }
            lVar13 = uVar9 - uVar2;
            plVar5 = param_2 + uVar2 * 3;
            do {
              lVar3 = *plVar5;
              lVar13 = lVar13 + -1;
              *plVar5 = 0;
              lVar4 = lVar3 + lVar4;
              plVar5 = plVar5 + 3;
            } while (lVar13 != 0);
            uVar2 = uVar10 + ((uVar9 - 1) - uVar8) + 1;
          }
          else {
            lVar4 = 0;
            uVar2 = uVar10;
          }
          lVar13 = 0;
          if (uVar2 != 0) {
            lVar13 = lVar4 / (long)uVar2;
          }
          param_2[uVar10 * 3] = lVar13;
          if (uVar9 < uVar7) {
            uVar8 = uVar9 + 1;
            lVar12 = param_2[(ulong)uVar8 * 3];
          }
        }
        uVar10 = (ulong)(uVar9 + 1);
      } while (uVar9 + 1 < uVar6);
      uVar10 = 1;
      uVar8 = 1;
      if (1 < uVar6) {
        uVar2 = 1;
        do {
          plVar5 = param_2 + uVar2 * 3;
          if (*plVar5 != 0) {
            plVar11 = param_2 + uVar10 * 3;
            uVar10 = (ulong)((int)uVar10 + 1);
            plVar11[2] = plVar5[2];
            lVar12 = *plVar5;
            plVar11[1] = plVar5[1];
            *plVar11 = lVar12;
            uVar6 = *param_1;
          }
          uVar8 = (uint)uVar10;
          uVar7 = (int)uVar2 + 1;
          uVar2 = (ulong)uVar7;
        } while (uVar7 < uVar6);
      }
      goto LAB_010a59b4;
    }
  }
  uVar8 = 1;
LAB_010a59b4:
  *param_1 = uVar8;
  return;
}

