
bool FUN_00e14d30(long *param_1,int param_2,ulong *param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  int iVar28;
  undefined1 uVar29;
  ulong *puVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  ulong *puVar34;
  ulong *puVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  ulong uVar42;
  
  if ((int)param_1[0x12] != 0x6f75746c) {
    return true;
  }
  if (param_3 == (ulong *)0x0) {
    uVar17 = 0;
    uVar19 = 0;
    sVar11 = *(short *)((long)param_1 + 0xca);
  }
  else {
    uVar17 = *param_3;
    uVar19 = param_3[1];
    sVar11 = *(short *)((long)param_1 + 0xca);
  }
  if ((long)sVar11 == 0) {
    uVar21 = 0;
    uVar25 = 0;
    uVar36 = 0;
    uVar37 = 0;
  }
  else {
    puVar34 = (ulong *)param_1[0x1a];
    uVar25 = *puVar34;
    uVar21 = puVar34[1];
    uVar36 = uVar21;
    uVar37 = uVar25;
    if (1 < sVar11) {
      puVar1 = puVar34 + (long)sVar11 * 2;
      puVar35 = puVar1;
      if (puVar1 <= puVar34 + 4) {
        puVar35 = puVar34 + 4;
      }
      uVar14 = ((long)puVar35 + (~(ulong)puVar34 - 0x10) >> 4) + 1;
      uVar23 = uVar21;
      uVar15 = uVar25;
      puVar35 = puVar34 + 2;
      if (1 < uVar14) {
        uVar13 = uVar14 & 0x1ffffffffffffffe;
        uVar31 = uVar25;
        uVar16 = uVar21;
        uVar22 = uVar21;
        uVar26 = uVar25;
        puVar35 = puVar34 + 5;
        uVar23 = uVar13;
        uVar40 = uVar21;
        do {
          uVar37 = puVar35[-3];
          uVar36 = puVar35[-2];
          uVar42 = puVar35[-1];
          uVar3 = uVar37;
          if ((long)uVar26 <= (long)uVar37) {
            uVar3 = uVar26;
          }
          uVar4 = uVar42;
          if ((long)uVar25 <= (long)uVar42) {
            uVar4 = uVar25;
          }
          if ((long)uVar37 <= (long)uVar15) {
            uVar37 = uVar15;
          }
          uVar41 = *puVar35;
          if ((long)uVar42 <= (long)uVar31) {
            uVar42 = uVar31;
          }
          uVar5 = uVar36;
          if ((long)uVar22 <= (long)uVar36) {
            uVar5 = uVar22;
          }
          uVar6 = uVar41;
          if ((long)uVar21 <= (long)uVar41) {
            uVar6 = uVar21;
          }
          if ((long)uVar36 <= (long)uVar16) {
            uVar36 = uVar16;
          }
          if ((long)uVar41 <= (long)uVar40) {
            uVar41 = uVar40;
          }
          uVar23 = uVar23 - 2;
          uVar25 = uVar4;
          uVar21 = uVar6;
          uVar15 = uVar37;
          uVar31 = uVar42;
          uVar16 = uVar36;
          uVar22 = uVar5;
          uVar26 = uVar3;
          puVar35 = puVar35 + 4;
          uVar40 = uVar41;
        } while (uVar23 != 0);
        if ((long)uVar36 <= (long)uVar41) {
          uVar36 = uVar41;
        }
        if ((long)uVar37 <= (long)uVar42) {
          uVar37 = uVar42;
        }
        uVar21 = uVar5;
        if ((long)uVar6 <= (long)uVar5) {
          uVar21 = uVar6;
        }
        uVar25 = uVar3;
        if ((long)uVar4 <= (long)uVar3) {
          uVar25 = uVar4;
        }
        uVar23 = uVar21;
        uVar15 = uVar25;
        puVar35 = puVar34 + 2 + uVar13 * 2;
        puVar34 = puVar34 + uVar13 * 2;
        if (uVar14 == uVar13) goto LAB_00e14ed0;
      }
      do {
        puVar30 = puVar35;
        uVar14 = *puVar30;
        uVar31 = puVar34[3];
        uVar25 = uVar14;
        if ((long)uVar15 <= (long)uVar14) {
          uVar25 = uVar15;
        }
        if ((long)uVar14 <= (long)uVar37) {
          uVar14 = uVar37;
        }
        uVar21 = uVar31;
        if ((long)uVar23 <= (long)uVar31) {
          uVar21 = uVar23;
        }
        if ((long)uVar31 <= (long)uVar36) {
          uVar31 = uVar36;
        }
        uVar23 = uVar21;
        uVar15 = uVar25;
        puVar35 = puVar30 + 2;
        puVar34 = puVar30;
        uVar36 = uVar31;
        uVar37 = uVar14;
      } while (puVar30 + 2 < puVar1);
    }
  }
LAB_00e14ed0:
  lVar18 = ((long)uVar17 >> 6) + ((long)uVar25 >> 6);
  lVar20 = ((long)uVar17 >> 6) + ((long)uVar37 >> 6);
  lVar27 = ((long)uVar19 >> 6) + ((long)uVar21 >> 6);
  lVar24 = ((long)uVar19 >> 6) + ((long)uVar36 >> 6);
  uVar25 = (uVar25 & 0x3f) + (uVar17 & 0x3f);
  uVar21 = (uVar21 & 0x3f) + (uVar19 & 0x3f);
  lVar32 = (uVar37 & 0x3f) + (uVar17 & 0x3f);
  lVar2 = (uVar36 & 0x3f) + (uVar19 & 0x3f);
  if (param_2 == 2) {
    lVar38 = lVar18 + (uVar25 + 0x1f >> 6);
    lVar20 = lVar20 + (lVar32 + 0x20U >> 6);
    lVar18 = lVar38;
    if (lVar38 == lVar20) {
      if ((long)((lVar32 + 0x20U & 0x3f) + (uVar25 + 0x1f & 0x3f) + -0x1f) < 0x20) {
        lVar18 = lVar38 + -1;
        lVar20 = lVar38;
      }
      else {
        lVar20 = lVar38 + 1;
      }
    }
    lVar27 = lVar27 + (uVar21 + 0x1f >> 6);
    lVar24 = lVar24 + (lVar2 + 0x20U >> 6);
    if (lVar27 == lVar24) {
      if ((long)((lVar2 + 0x20U & 0x3f) + (uVar21 + 0x1f & 0x3f) + -0x1f) < 0x20) {
        lVar24 = lVar27;
        lVar27 = lVar27 + -1;
      }
      else {
        lVar24 = lVar27 + 1;
      }
    }
    lVar32 = lVar20 - lVar18;
    iVar28 = (int)lVar24 - (int)lVar27;
    uVar33 = (uint)((lVar32 + 0xf >> 4) << 1);
    uVar29 = 1;
  }
  else if (param_2 == 3) {
    lVar38 = *param_1;
    lVar7 = *(long *)(lVar38 + 0x160);
    lVar9 = *(long *)(lVar38 + 0x168);
    lVar12 = *(long *)(lVar38 + 0x158);
    lVar8 = *(long *)(lVar38 + 0x170);
    lVar10 = *(long *)(lVar38 + 0x178);
    lVar39 = *(long *)(lVar38 + 0x180);
    lVar38 = lVar12;
    if (lVar12 <= lVar9) {
      lVar38 = lVar9;
    }
    if (lVar9 <= lVar12) {
      lVar12 = lVar9;
    }
    if (lVar38 <= lVar10) {
      lVar38 = lVar10;
    }
    if (lVar10 <= lVar12) {
      lVar12 = lVar10;
    }
    lVar9 = lVar7;
    if (lVar7 <= lVar8) {
      lVar9 = lVar8;
    }
    if (lVar8 <= lVar7) {
      lVar7 = lVar8;
    }
    lVar18 = lVar18 + ((long)(uVar25 - lVar38) >> 6);
    lVar20 = lVar20 + ((lVar32 + 0x3f) - lVar12 >> 6);
    if (lVar9 <= lVar39) {
      lVar9 = lVar39;
    }
    if (lVar39 <= lVar7) {
      lVar7 = lVar39;
    }
    lVar32 = (lVar20 - lVar18) * 3;
    lVar27 = lVar27 + ((long)(uVar21 - lVar9) >> 6);
    lVar24 = lVar24 + ((lVar2 + 0x3f) - lVar7 >> 6);
    uVar33 = (int)lVar32 + 3U & 0xfffffffc;
    iVar28 = (int)lVar24 - (int)lVar27;
    uVar29 = 5;
  }
  else {
    if (param_2 == 4) {
      lVar38 = *param_1;
      lVar7 = *(long *)(lVar38 + 0x158);
      lVar12 = *(long *)(lVar38 + 0x160);
      lVar8 = *(long *)(lVar38 + 0x168);
      lVar10 = *(long *)(lVar38 + 0x170);
      lVar9 = *(long *)(lVar38 + 0x178);
      lVar39 = *(long *)(lVar38 + 0x180);
      lVar38 = lVar12;
      if (lVar12 <= lVar10) {
        lVar38 = lVar10;
      }
      if (lVar10 <= lVar12) {
        lVar12 = lVar10;
      }
      if (lVar38 <= lVar39) {
        lVar38 = lVar39;
      }
      if (lVar39 <= lVar12) {
        lVar12 = lVar39;
      }
      lVar10 = lVar7;
      if (lVar8 <= lVar7) {
        lVar10 = lVar8;
      }
      if (lVar7 <= lVar8) {
        lVar7 = lVar8;
      }
      lVar18 = lVar18 + ((long)(uVar25 - lVar38) >> 6);
      if (lVar9 <= lVar10) {
        lVar10 = lVar9;
      }
      if (lVar7 <= lVar9) {
        lVar7 = lVar9;
      }
      lVar27 = lVar27 + ((long)(lVar10 + uVar21) >> 6);
      lVar24 = lVar24 + (lVar2 + lVar7 + 0x3f >> 6);
      lVar20 = lVar20 + ((lVar32 + 0x3f) - lVar12 >> 6);
      lVar32 = lVar20 - lVar18;
      iVar28 = ((int)lVar24 - (int)lVar27) * 3;
      uVar29 = 6;
    }
    else {
      lVar27 = lVar27 + (uVar21 >> 6);
      lVar18 = lVar18 + (uVar25 >> 6);
      lVar20 = lVar20 + (lVar32 + 0x3fU >> 6);
      lVar24 = lVar24 + (lVar2 + 0x3fU >> 6);
      lVar32 = lVar20 - lVar18;
      iVar28 = (int)lVar24 - (int)lVar27;
      uVar29 = 2;
    }
    uVar33 = (uint)lVar32;
  }
  *(int *)(param_1 + 0x18) = (int)lVar18;
  *(int *)((long)param_1 + 0xc4) = (int)lVar24;
  *(undefined1 *)((long)param_1 + 0xb2) = uVar29;
  *(int *)(param_1 + 0x13) = iVar28;
  *(int *)((long)param_1 + 0x9c) = (int)lVar32;
  *(uint *)(param_1 + 0x14) = uVar33;
  *(undefined2 *)(param_1 + 0x16) = 0x100;
  return 0x7fff < lVar24 || (lVar27 < -0x8000 || (lVar18 < -0x8000 || 0x7fff < lVar20));
}

