
void FT_Outline_Get_CBox(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  short sVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  sVar8 = *(short *)(param_1 + 2);
  if ((long)sVar8 == 0) {
    lVar13 = 0;
    lVar14 = 0;
    lVar18 = 0;
    lVar20 = 0;
  }
  else {
    plVar16 = *(long **)(param_1 + 8);
    lVar14 = *plVar16;
    lVar13 = plVar16[1];
    lVar18 = lVar13;
    lVar20 = lVar14;
    if (1 < sVar8) {
      plVar2 = plVar16 + (long)sVar8 * 2;
      plVar3 = plVar2;
      if (plVar2 <= plVar16 + 4) {
        plVar3 = plVar16 + 4;
      }
      uVar1 = ((long)plVar3 + (~(ulong)plVar16 - 0x10) >> 4) + 1;
      plVar3 = plVar16 + 2;
      lVar9 = lVar13;
      if ((1 < uVar1) && (uVar21 = uVar1 & 0x1ffffffffffffffe, uVar21 != 0)) {
        lVar9 = lVar14;
        lVar10 = lVar13;
        lVar22 = lVar13;
        lVar15 = lVar14;
        plVar17 = plVar16 + 5;
        uVar19 = uVar21;
        lVar23 = lVar14;
        lVar24 = lVar13;
        do {
          lVar20 = plVar17[-3];
          lVar18 = plVar17[-2];
          lVar12 = plVar17[-1];
          uVar19 = uVar19 - 2;
          lVar4 = lVar20;
          if (lVar15 <= lVar20) {
            lVar4 = lVar15;
          }
          lVar5 = lVar12;
          if (lVar23 <= lVar12) {
            lVar5 = lVar23;
          }
          if (lVar20 <= lVar14) {
            lVar20 = lVar14;
          }
          lVar11 = *plVar17;
          if (lVar12 <= lVar9) {
            lVar12 = lVar9;
          }
          lVar6 = lVar18;
          if (lVar22 <= lVar18) {
            lVar6 = lVar22;
          }
          lVar7 = lVar11;
          if (lVar24 <= lVar11) {
            lVar7 = lVar24;
          }
          if (lVar18 <= lVar13) {
            lVar18 = lVar13;
          }
          if (lVar11 <= lVar10) {
            lVar11 = lVar10;
          }
          lVar14 = lVar20;
          lVar9 = lVar12;
          lVar13 = lVar18;
          lVar10 = lVar11;
          lVar22 = lVar6;
          lVar15 = lVar4;
          plVar17 = plVar17 + 4;
          lVar23 = lVar5;
          lVar24 = lVar7;
        } while (uVar19 != 0);
        if (lVar18 <= lVar11) {
          lVar18 = lVar11;
        }
        if (lVar20 <= lVar12) {
          lVar20 = lVar12;
        }
        lVar13 = lVar6;
        if (lVar7 <= lVar6) {
          lVar13 = lVar7;
        }
        lVar14 = lVar4;
        if (lVar5 <= lVar4) {
          lVar14 = lVar5;
        }
        lVar9 = lVar13;
        plVar3 = plVar3 + uVar21 * 2;
        plVar16 = plVar16 + uVar21 * 2;
        if (uVar1 == uVar21) goto LAB_01061a90;
      }
      do {
        plVar17 = plVar3;
        lVar22 = *plVar17;
        lVar15 = plVar16[3];
        lVar10 = lVar22;
        if (lVar14 <= lVar22) {
          lVar10 = lVar14;
        }
        if (lVar22 <= lVar20) {
          lVar22 = lVar20;
        }
        lVar13 = lVar15;
        if (lVar9 <= lVar15) {
          lVar13 = lVar9;
        }
        if (lVar15 <= lVar18) {
          lVar15 = lVar18;
        }
        lVar9 = lVar13;
        lVar14 = lVar10;
        plVar3 = plVar17 + 2;
        plVar16 = plVar17;
        lVar18 = lVar15;
        lVar20 = lVar22;
      } while (plVar17 + 2 < plVar2);
    }
  }
LAB_01061a90:
  *param_2 = lVar14;
  param_2[1] = lVar13;
  param_2[2] = lVar20;
  param_2[3] = lVar18;
  return;
}

