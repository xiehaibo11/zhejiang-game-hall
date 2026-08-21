
void FUN_00e69da0(int *param_1,long param_2,int param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  int *piVar17;
  
  if ((*(byte *)(param_1 + 6) >> 3 & 1) != 0) {
    return;
  }
  uVar16 = *(undefined8 *)(param_2 + (long)param_3 * 0x198 + 400);
  lVar15 = *(long *)(param_2 + (long)param_3 * 0x198 + 0x198);
  lVar6 = FT_MulFix((long)*param_1,uVar16);
  uVar9 = lVar6 + lVar15;
  uVar7 = FT_MulFix((long)param_1[1],uVar16);
  if (param_3 == 1) {
    if (*(char *)(param_4 + 0xcd) == '\0') {
LAB_00e69f90:
      *(ulong *)(param_1 + 2) = uVar9;
      *(ulong *)(param_1 + 4) = uVar7;
      goto LAB_00e6a180;
    }
    cVar2 = *(char *)(param_4 + 0xcf);
    *(ulong *)(param_1 + 4) = uVar7;
    iVar3 = *param_1;
    iVar11 = *(int *)(param_2 + 0x338);
    bVar5 = cVar2 != '\0';
    if (iVar11 != 0) {
      plVar14 = (long *)(param_2 + 0x350);
      do {
        lVar6 = (long)(param_1[1] + iVar3) - (long)*(int *)((long)plVar14 + -4);
        if (lVar6 < -(long)*(int *)(param_2 + 0xf68)) break;
        if (param_1[1] + iVar3 <= (int)plVar14[-1] + *(int *)(param_2 + 0xf68)) {
          if ((*(char *)(param_2 + 0xf6c) != '\0') || (lVar6 <= *(int *)(param_2 + 0xf64))) {
            lVar6 = *plVar14;
            iVar13 = 3;
            iVar11 = 1;
            uVar1 = *(uint *)(param_2 + 0x640);
            goto joined_r0x00e6a054;
          }
          break;
        }
        iVar11 = iVar11 + -1;
        plVar14 = plVar14 + 6;
      } while (iVar11 != 0);
    }
    lVar6 = 0;
    iVar11 = 0;
    iVar13 = 2;
    uVar1 = *(uint *)(param_2 + 0x640);
joined_r0x00e6a054:
    if (uVar1 != 0) {
      uVar12 = (ulong)uVar1;
      plVar14 = (long *)(param_2 + uVar12 * 0x30 + 0x628);
      do {
        lVar15 = (long)(int)plVar14[-1] - (long)iVar3;
        if (lVar15 < -(long)*(int *)(param_2 + 0xf68)) break;
        if (*(int *)((long)plVar14 + -4) - *(int *)(param_2 + 0xf68) <= iVar3) {
          if ((*(char *)(param_2 + 0xf6c) != '\0') || (lVar15 < *(int *)(param_2 + 0xf64))) {
            lVar15 = *plVar14;
            iVar11 = iVar13;
            goto joined_r0x00e6a074;
          }
          break;
        }
        uVar1 = (int)uVar12 - 1;
        uVar12 = (ulong)uVar1;
        plVar14 = plVar14 + -6;
      } while (uVar1 != 0);
    }
    lVar15 = 0;
joined_r0x00e6a074:
    if (iVar11 == 1) {
      *(ulong *)(param_1 + 2) = lVar6 - uVar7;
      if (cVar2 == '\0') goto LAB_00e6a180;
      uVar9 = 0x40;
      if (0x3f < (long)uVar7) {
        uVar9 = uVar7 + 0x20 & 0xffffffffffffffc0;
      }
      *(ulong *)(param_1 + 2) = lVar6 - uVar9;
    }
    else if (iVar11 == 3) {
      *(long *)(param_1 + 2) = lVar15;
      uVar9 = lVar6 - lVar15;
    }
    else {
      if (iVar11 != 2) goto LAB_00e69f04;
      *(long *)(param_1 + 2) = lVar15;
      if (cVar2 == '\0') goto LAB_00e6a180;
      uVar9 = 0x40;
      if (0x3f < (long)uVar7) {
        uVar9 = uVar7 + 0x20 & 0xffffffffffffffc0;
      }
    }
    *(ulong *)(param_1 + 4) = uVar9;
    goto LAB_00e6a180;
  }
  if (param_3 == 0) {
    if (*(char *)(param_4 + 0xcc) == '\0') goto LAB_00e69f90;
    bVar5 = *(char *)(param_4 + 0xce) != '\0';
  }
  else {
    bVar5 = false;
  }
  *(ulong *)(param_1 + 4) = uVar7;
LAB_00e69f04:
  piVar17 = *(int **)(param_1 + 8);
  if (piVar17 != (int *)0x0) {
    if ((*(byte *)(piVar17 + 6) >> 3 & 1) == 0) {
      FUN_00e69da0(piVar17,param_2,param_3,param_4);
    }
    lVar6 = *(long *)(piVar17 + 2);
    lVar15 = *(long *)(piVar17 + 4);
    lVar8 = FT_MulFix(((long)*param_1 + (long)(param_1[1] >> 1)) -
                      ((long)*piVar17 + (long)(piVar17[1] >> 1)),uVar16);
    uVar9 = (lVar6 - ((long)uVar7 >> 1)) + (lVar15 >> 1) + lVar8;
  }
  *(ulong *)(param_1 + 2) = uVar9;
  *(ulong *)(param_1 + 4) = uVar7;
  uVar12 = uVar9;
  if (*(char *)(param_4 + 0xd0) != '\0') {
    if ((long)uVar7 < 0x41) {
      if ((long)uVar7 < 0x20) {
        uVar10 = uVar9 + 0x20 & 0xffffffffffffffc0;
        uVar12 = uVar10;
        if (0 < (long)uVar7) {
          lVar15 = uVar10 - uVar9;
          uVar12 = uVar9 + uVar7 + 0x20 & 0xffffffffffffffc0;
          lVar6 = -lVar15;
          if (-1 < lVar15) {
            lVar6 = lVar15;
          }
          lVar8 = uVar12 - (uVar9 + uVar7);
          lVar15 = -lVar8;
          if (-1 < lVar8) {
            lVar15 = lVar8;
          }
          if (lVar6 <= lVar15) {
            uVar12 = uVar10;
          }
        }
      }
      else {
        uVar12 = uVar7 >> 1;
        uVar7 = 0x40;
        uVar12 = uVar9 + uVar12 & 0xffffffffffffffc0;
      }
    }
    else {
      uVar9 = *(ulong *)(param_2 + (long)param_3 * 0x198 + 0x18);
      lVar15 = uVar7 - uVar9;
      lVar6 = -lVar15;
      if (-1 < lVar15) {
        lVar6 = lVar15;
      }
      if ((lVar6 < 0x28) && (uVar7 = uVar9, (long)uVar9 < 0x31)) {
        uVar7 = 0x36;
      }
      else if ((long)uVar7 < 0xc0) {
        uVar9 = uVar7 & 0x3f;
        if (9 < uVar9) {
          if (uVar9 < 0x20) {
            uVar9 = 10;
          }
          else {
            if (0x35 < uVar9) goto LAB_00e6a10c;
            uVar9 = 0x36;
          }
          uVar7 = uVar7 & 0xffffffffffffffc0 | uVar9;
        }
      }
      else {
        uVar7 = uVar7 + 0x20 & 0xffffffffffffffc0;
      }
    }
  }
LAB_00e6a10c:
  lVar15 = (uVar12 + 0x20 & 0xffffffffffffffc0) - uVar12;
  lVar6 = -lVar15;
  if (-1 < lVar15) {
    lVar6 = lVar15;
  }
  lVar4 = ((uVar12 + 0x20 + uVar7 & 0xffffffffffffffc0) - uVar12) - uVar7;
  lVar8 = -lVar4;
  if (-1 < lVar4) {
    lVar8 = lVar4;
  }
  if (lVar6 <= lVar8) {
    lVar4 = lVar15;
  }
  *(ulong *)(param_1 + 2) = lVar4 + uVar12;
  *(ulong *)(param_1 + 4) = uVar7;
  if (bVar5) {
    uVar9 = 0x40;
    if (0x3f < (long)uVar7) {
      uVar9 = uVar7 + 0x20 & 0xffffffffffffffc0;
    }
    uVar7 = ((long)uVar9 >> 1) + lVar4 + uVar12;
    uVar12 = uVar7 + 0x20 & 0xffffffffffffffc0;
    if ((uVar9 & 0x40) != 0) {
      uVar12 = uVar7 & 0xffffffffffffffc0 | 0x20;
    }
    *(ulong *)(param_1 + 2) = uVar12 - ((long)uVar9 >> 1);
    *(ulong *)(param_1 + 4) = uVar9;
  }
LAB_00e6a180:
  param_1[6] = param_1[6] | 8;
  return;
}

