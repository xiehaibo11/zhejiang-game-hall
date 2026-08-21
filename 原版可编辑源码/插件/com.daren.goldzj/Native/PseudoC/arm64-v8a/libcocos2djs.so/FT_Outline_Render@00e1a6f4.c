
uint FT_Outline_Render(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  short sVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  
  if (param_1 == 0) {
    return 0x21;
  }
  if (param_2 == 0) {
    return 0x14;
  }
  if (param_3 == 0) {
    return 6;
  }
  sVar7 = *(short *)(param_2 + 2);
  if ((long)sVar7 == 0) goto LAB_00e1a8b4;
  plVar19 = *(long **)(param_2 + 8);
  lVar14 = *plVar19;
  lVar25 = plVar19[1];
  lVar22 = lVar14;
  lVar17 = lVar25;
  if (1 < sVar7) {
    plVar2 = plVar19 + (long)sVar7 * 2;
    plVar18 = plVar2;
    if (plVar2 <= plVar19 + 4) {
      plVar18 = plVar19 + 4;
    }
    uVar1 = ((long)plVar18 + (~(ulong)plVar19 - 0x10) >> 4) + 1;
    plVar18 = plVar19 + 2;
    lVar9 = lVar14;
    lVar10 = lVar25;
    if (1 < uVar1) {
      uVar21 = uVar1 & 0x1ffffffffffffffe;
      lVar11 = lVar25;
      lVar13 = lVar14;
      lVar15 = lVar25;
      plVar18 = plVar19 + 5;
      uVar20 = uVar21;
      lVar23 = lVar14;
      do {
        lVar22 = plVar18[-3];
        lVar17 = plVar18[-2];
        lVar24 = plVar18[-1];
        lVar3 = lVar22;
        if (lVar13 <= lVar22) {
          lVar3 = lVar13;
        }
        lVar4 = lVar24;
        if (lVar23 <= lVar24) {
          lVar4 = lVar23;
        }
        if (lVar22 <= lVar14) {
          lVar22 = lVar14;
        }
        lVar12 = *plVar18;
        if (lVar24 <= lVar9) {
          lVar24 = lVar9;
        }
        lVar5 = lVar17;
        if (lVar15 <= lVar17) {
          lVar5 = lVar15;
        }
        lVar6 = lVar12;
        if (lVar25 <= lVar12) {
          lVar6 = lVar25;
        }
        if (lVar17 <= lVar10) {
          lVar17 = lVar10;
        }
        if (lVar12 <= lVar11) {
          lVar12 = lVar11;
        }
        uVar20 = uVar20 - 2;
        lVar25 = lVar6;
        lVar14 = lVar22;
        lVar9 = lVar24;
        lVar10 = lVar17;
        lVar11 = lVar12;
        lVar13 = lVar3;
        lVar15 = lVar5;
        plVar18 = plVar18 + 4;
        lVar23 = lVar4;
      } while (uVar20 != 0);
      if (lVar17 <= lVar12) {
        lVar17 = lVar12;
      }
      if (lVar22 <= lVar24) {
        lVar22 = lVar24;
      }
      lVar25 = lVar5;
      if (lVar6 <= lVar5) {
        lVar25 = lVar6;
      }
      lVar14 = lVar3;
      if (lVar4 <= lVar3) {
        lVar14 = lVar4;
      }
      plVar18 = plVar19 + 2 + uVar21 * 2;
      plVar19 = plVar19 + uVar21 * 2;
      lVar9 = lVar22;
      lVar10 = lVar17;
      if (uVar1 == uVar21) goto joined_r0x00e1a798;
    }
    do {
      plVar16 = plVar18;
      lVar22 = *plVar16;
      lVar17 = plVar19[3];
      lVar11 = lVar22;
      if (lVar14 <= lVar22) {
        lVar11 = lVar14;
      }
      if (lVar22 <= lVar9) {
        lVar22 = lVar9;
      }
      lVar9 = lVar17;
      if (lVar25 <= lVar17) {
        lVar9 = lVar25;
      }
      if (lVar17 <= lVar10) {
        lVar17 = lVar10;
      }
      lVar14 = lVar11;
      lVar25 = lVar9;
      plVar18 = plVar16 + 2;
      plVar19 = plVar16;
      lVar9 = lVar22;
      lVar10 = lVar17;
    } while (plVar16 + 2 < plVar2);
  }
joined_r0x00e1a798:
  if (0x1000000 < lVar17) {
    return 0x14;
  }
  if (0x1000000 < lVar22) {
    return 0x14;
  }
  if (lVar25 < -0x1000000) {
    return 0x14;
  }
  if (lVar14 < -0x1000000) {
    return 0x14;
  }
LAB_00e1a8b4:
  lVar14 = *(long *)(param_1 + 0x128);
  lVar25 = *(long *)(param_1 + 0x118);
  *(long *)(param_3 + 8) = param_2;
  if (lVar14 == 0) {
    uVar8 = 0x13;
  }
  else {
    while ((uVar8 = (**(code **)(lVar14 + 0x70))(*(undefined8 *)(lVar14 + 0x68),param_3), uVar8 != 0
           && ((uVar8 & 0xff) == 0x13))) {
      plVar19 = (long *)(param_1 + 0x118);
      if (lVar25 != 0) {
        plVar19 = (long *)(lVar25 + 8);
      }
      lVar25 = *plVar19;
      while( true ) {
        if (lVar25 == 0) {
          return uVar8;
        }
        lVar14 = *(long *)(lVar25 + 0x10);
        if (*(int *)(lVar14 + 0x20) == 0x6f75746c) break;
        lVar25 = *(long *)(lVar25 + 8);
      }
      if (lVar14 == 0) {
        return uVar8;
      }
    }
  }
  return uVar8;
}

