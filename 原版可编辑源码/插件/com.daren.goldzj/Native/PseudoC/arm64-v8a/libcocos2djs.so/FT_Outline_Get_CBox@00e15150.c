
void FT_Outline_Get_CBox(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  sVar7 = *(short *)(param_1 + 2);
  if ((long)sVar7 == 0) {
    lVar12 = 0;
    lVar13 = 0;
    lVar19 = 0;
    lVar21 = 0;
  }
  else {
    plVar17 = *(long **)(param_1 + 8);
    lVar13 = *plVar17;
    lVar12 = plVar17[1];
    lVar19 = lVar12;
    lVar21 = lVar13;
    if (1 < sVar7) {
      plVar2 = plVar17 + (long)sVar7 * 2;
      plVar18 = plVar2;
      if (plVar2 <= plVar17 + 4) {
        plVar18 = plVar17 + 4;
      }
      uVar1 = ((long)plVar18 + (~(ulong)plVar17 - 0x10) >> 4) + 1;
      lVar8 = lVar12;
      lVar9 = lVar13;
      plVar18 = plVar17 + 2;
      if (1 < uVar1) {
        uVar22 = uVar1 & 0x1ffffffffffffffe;
        lVar8 = lVar13;
        lVar9 = lVar12;
        lVar23 = lVar12;
        lVar16 = lVar12;
        lVar14 = lVar13;
        plVar18 = plVar17 + 5;
        uVar20 = uVar22;
        lVar24 = lVar13;
        do {
          lVar21 = plVar18[-3];
          lVar19 = plVar18[-2];
          lVar11 = plVar18[-1];
          lVar3 = lVar21;
          if (lVar14 <= lVar21) {
            lVar3 = lVar14;
          }
          lVar4 = lVar11;
          if (lVar24 <= lVar11) {
            lVar4 = lVar24;
          }
          if (lVar21 <= lVar13) {
            lVar21 = lVar13;
          }
          lVar10 = *plVar18;
          if (lVar11 <= lVar8) {
            lVar11 = lVar8;
          }
          lVar5 = lVar19;
          if (lVar16 <= lVar19) {
            lVar5 = lVar16;
          }
          lVar6 = lVar10;
          if (lVar12 <= lVar10) {
            lVar6 = lVar12;
          }
          if (lVar19 <= lVar9) {
            lVar19 = lVar9;
          }
          if (lVar10 <= lVar23) {
            lVar10 = lVar23;
          }
          uVar20 = uVar20 - 2;
          lVar12 = lVar6;
          lVar13 = lVar21;
          lVar8 = lVar11;
          lVar9 = lVar19;
          lVar23 = lVar10;
          lVar16 = lVar5;
          lVar14 = lVar3;
          plVar18 = plVar18 + 4;
          lVar24 = lVar4;
        } while (uVar20 != 0);
        if (lVar19 <= lVar10) {
          lVar19 = lVar10;
        }
        if (lVar21 <= lVar11) {
          lVar21 = lVar11;
        }
        lVar12 = lVar5;
        if (lVar6 <= lVar5) {
          lVar12 = lVar6;
        }
        lVar13 = lVar3;
        if (lVar4 <= lVar3) {
          lVar13 = lVar4;
        }
        lVar8 = lVar12;
        lVar9 = lVar13;
        plVar18 = plVar17 + 2 + uVar22 * 2;
        plVar17 = plVar17 + uVar22 * 2;
        if (uVar1 == uVar22) goto LAB_00e152bc;
      }
      do {
        plVar15 = plVar18;
        lVar23 = *plVar15;
        lVar16 = plVar17[3];
        lVar13 = lVar23;
        if (lVar9 <= lVar23) {
          lVar13 = lVar9;
        }
        if (lVar23 <= lVar21) {
          lVar23 = lVar21;
        }
        lVar12 = lVar16;
        if (lVar8 <= lVar16) {
          lVar12 = lVar8;
        }
        if (lVar16 <= lVar19) {
          lVar16 = lVar19;
        }
        lVar8 = lVar12;
        lVar9 = lVar13;
        plVar18 = plVar15 + 2;
        plVar17 = plVar15;
        lVar19 = lVar16;
        lVar21 = lVar23;
      } while (plVar15 + 2 < plVar2);
    }
  }
LAB_00e152bc:
  *param_2 = lVar13;
  param_2[1] = lVar12;
  param_2[2] = lVar21;
  param_2[3] = lVar19;
  return;
}

