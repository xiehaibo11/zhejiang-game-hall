
void FUN_010aaf40(int *param_1,long param_2,int param_3,long param_4)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  int *piVar19;
  
  if ((*(byte *)(param_1 + 6) >> 3 & 1) != 0) {
    return;
  }
  uVar18 = *(undefined8 *)(param_2 + (long)param_3 * 0x198 + 400);
  lVar17 = *(long *)(param_2 + (long)param_3 * 0x198 + 0x198);
  lVar8 = FT_MulFix((long)*param_1,uVar18);
  uVar11 = lVar8 + lVar17;
  uVar9 = FT_MulFix((long)param_1[1],uVar18);
  if (param_3 == 1) {
    if (*(char *)(param_4 + 0xcd) == '\0') {
LAB_010ab154:
      *(ulong *)(param_1 + 2) = uVar11;
      *(ulong *)(param_1 + 4) = uVar9;
      goto LAB_010ab358;
    }
    cVar4 = *(char *)(param_4 + 0xcf);
    *(ulong *)(param_1 + 4) = uVar9;
    iVar2 = *param_1;
    iVar13 = *(int *)(param_2 + 0x338);
    bVar7 = cVar4 != '\0';
    if (iVar13 != 0) {
      plVar15 = (long *)(param_2 + 0x350);
      do {
        iVar14 = (param_1[1] + iVar2) - *(int *)((long)plVar15 + -4);
        if (iVar14 < -*(int *)(param_2 + 0xf68)) break;
        if (param_1[1] + iVar2 <= (int)plVar15[-1] + *(int *)(param_2 + 0xf68)) {
          if ((*(char *)(param_2 + 0xf6c) != '\0') || (iVar14 <= *(int *)(param_2 + 0xf64))) {
            lVar8 = *plVar15;
            iVar14 = 3;
            iVar13 = 1;
            uVar3 = *(uint *)(param_2 + 0x640);
            goto joined_r0x010ab234;
          }
          break;
        }
        iVar13 = iVar13 + -1;
        plVar15 = plVar15 + 6;
      } while (iVar13 != 0);
    }
    lVar8 = 0;
    iVar13 = 0;
    iVar14 = 2;
    uVar3 = *(uint *)(param_2 + 0x640);
joined_r0x010ab234:
    if (uVar3 != 0) {
      uVar16 = (ulong)uVar3;
      plVar15 = (long *)(param_2 + uVar16 * 0x30 + 0x628);
      do {
        iVar5 = (int)plVar15[-1] - iVar2;
        if (iVar5 < -*(int *)(param_2 + 0xf68)) break;
        if (*(int *)((long)plVar15 + -4) - *(int *)(param_2 + 0xf68) <= iVar2) {
          if ((*(char *)(param_2 + 0xf6c) != '\0') || (iVar5 < *(int *)(param_2 + 0xf64))) {
            lVar17 = *plVar15;
            iVar13 = iVar14;
            goto joined_r0x010ab254;
          }
          break;
        }
        uVar3 = (int)uVar16 - 1;
        uVar16 = (ulong)uVar3;
        plVar15 = plVar15 + -6;
      } while (uVar3 != 0);
    }
    lVar17 = 0;
joined_r0x010ab254:
    if (iVar13 == 1) {
      *(ulong *)(param_1 + 2) = lVar8 - uVar9;
      if (cVar4 == '\0') goto LAB_010ab358;
      uVar11 = 0x40;
      if (0x3f < (long)uVar9) {
        uVar11 = uVar9 + 0x20 & 0xffffffffffffffc0;
      }
      lVar8 = lVar8 - uVar11;
      goto LAB_010ab350;
    }
    if (iVar13 == 3) {
      *(long *)(param_1 + 2) = lVar17;
      *(long *)(param_1 + 4) = lVar8 - lVar17;
      goto LAB_010ab358;
    }
    if (iVar13 != 2) goto LAB_010ab0ac;
    *(long *)(param_1 + 2) = lVar17;
    if (cVar4 == '\0') goto LAB_010ab358;
    uVar11 = 0x40;
    if (0x3f < (long)uVar9) {
      uVar11 = uVar9 + 0x20 & 0xffffffffffffffc0;
    }
  }
  else {
    if (param_3 == 0) {
      if (*(char *)(param_4 + 0xcc) == '\0') goto LAB_010ab154;
      bVar7 = *(char *)(param_4 + 0xce) != '\0';
    }
    else {
      bVar7 = false;
    }
    *(ulong *)(param_1 + 4) = uVar9;
LAB_010ab0ac:
    piVar19 = *(int **)(param_1 + 8);
    if (piVar19 != (int *)0x0) {
      if ((*(byte *)(piVar19 + 6) >> 3 & 1) == 0) {
        FUN_010aaf40(piVar19,param_2,param_3,param_4);
      }
      lVar8 = *(long *)(piVar19 + 2);
      lVar17 = *(long *)(piVar19 + 4);
      lVar10 = FT_MulFix(((long)*param_1 + (long)(param_1[1] >> 1)) -
                         ((long)*piVar19 + (long)(piVar19[1] >> 1)),uVar18);
      uVar11 = (lVar8 - ((long)uVar9 >> 1)) + (lVar17 >> 1) + lVar10;
    }
    *(ulong *)(param_1 + 2) = uVar11;
    puVar1 = (ulong *)(param_1 + 4);
    *puVar1 = uVar9;
    uVar16 = uVar11;
    if (*(char *)(param_4 + 0xd0) != '\0') {
      if ((long)uVar9 < 0x41) {
                    /* catch() { ... } // from try @ 010aaea0 with catch @ 010ab13c */
        if ((long)uVar9 < 0x20) {
          uVar12 = uVar11 + 0x20 & 0xffffffffffffffc0;
          uVar16 = uVar12;
          if (0 < (long)uVar9) {
            lVar17 = uVar12 - uVar11;
            uVar16 = uVar11 + uVar9 + 0x20 & 0xffffffffffffffc0;
            lVar8 = -lVar17;
            if (-1 < lVar17) {
              lVar8 = lVar17;
            }
            lVar10 = uVar16 - (uVar11 + uVar9);
            lVar17 = -lVar10;
            if (-1 < lVar10) {
              lVar17 = lVar10;
            }
            if (lVar8 <= lVar17) {
              uVar16 = uVar12;
            }
          }
        }
        else {
          uVar16 = uVar9 >> 1;
          uVar9 = 0x40;
          uVar16 = uVar11 + uVar16 & 0xffffffffffffffc0;
        }
      }
      else {
        uVar11 = *(ulong *)(param_2 + (long)param_3 * 0x198 + 0x18);
        lVar17 = uVar9 - uVar11;
        lVar8 = -lVar17;
        if (-1 < lVar17) {
          lVar8 = lVar17;
        }
                    /* catch() { ... } // from try @ 010aae74 with catch @ 010ab174 */
        uVar12 = uVar9;
        if ((lVar8 < 0x28) && (uVar12 = uVar11, (long)uVar11 < 0x31)) {
          uVar9 = 0;
          uVar12 = 0x30;
          uVar11 = 0x30;
LAB_010ab200:
          uVar9 = uVar9 | 0x36;
          if (0x35 < uVar11) {
            uVar9 = uVar12;
          }
        }
        else if ((long)uVar12 < 0xc0) {
          uVar11 = uVar12 & 0x3f;
          uVar9 = uVar12;
          if (9 < uVar11) {
            uVar9 = uVar12 & 0xffffffffffffffc0;
            if (0x1f < uVar11) goto LAB_010ab200;
            uVar9 = uVar9 | 10;
          }
        }
        else {
          uVar9 = uVar12 + 0x20 & 0xffffffffffffffc0;
        }
      }
    }
    lVar17 = (uVar16 + 0x20 & 0xffffffffffffffc0) - uVar16;
    lVar8 = -lVar17;
    if (-1 < lVar17) {
      lVar8 = lVar17;
    }
    lVar6 = ((uVar16 + 0x20 + uVar9 & 0xffffffffffffffc0) - uVar16) - uVar9;
    lVar10 = -lVar6;
    if (-1 < lVar6) {
      lVar10 = lVar6;
    }
    if (lVar8 <= lVar10) {
      lVar6 = lVar17;
    }
    *(ulong *)(param_1 + 2) = lVar6 + uVar16;
    *puVar1 = uVar9;
    if (!bVar7) goto LAB_010ab358;
    uVar11 = 0x40;
    if (0x3f < (long)uVar9) {
      uVar11 = uVar9 + 0x20 & 0xffffffffffffffc0;
    }
    uVar9 = ((long)uVar11 >> 1) + lVar6 + uVar16;
    uVar16 = uVar9 + 0x20 & 0xffffffffffffffc0;
    if ((uVar11 & 0x40) != 0) {
      uVar16 = uVar9 & 0xffffffffffffffc0 | 0x20;
    }
    *puVar1 = uVar11;
    lVar8 = uVar16 - ((long)uVar11 >> 1);
LAB_010ab350:
    *(long *)(param_1 + 2) = lVar8;
  }
  *(ulong *)(param_1 + 4) = uVar11;
LAB_010ab358:
  param_1[6] = param_1[6] | 8;
  return;
}

