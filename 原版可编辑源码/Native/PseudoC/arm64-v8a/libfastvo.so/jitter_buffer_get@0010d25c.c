
undefined8 jitter_buffer_get(int *param_1,long *param_2,int param_3,int *param_4)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  short sVar6;
  void *__ptr;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  int *piVar19;
  
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  if (param_1[0x710] == 0) {
    iVar8 = *param_1;
  }
  else {
    iVar8 = 0;
    bVar4 = false;
    lVar10 = -0x1900;
    do {
      if ((*(long *)((long)param_1 + lVar10 + 0x1910) != 0) &&
         (iVar16 = *(int *)((long)param_1 + lVar10 + 0x191c), !bVar4 || iVar16 - iVar8 < 0)) {
        bVar4 = true;
        iVar8 = iVar16;
      }
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != 0);
    if (!bVar4) {
      *(undefined4 *)((long)param_2 + 0xc) = 0;
      *(int *)(param_2 + 2) = param_1[0x713];
      return 1;
    }
    param_1[0x710] = 0;
    *param_1 = iVar8;
    param_1[2] = iVar8;
  }
  iVar16 = param_1[0x713];
  param_1[1] = iVar8;
  if (iVar16 != 0) {
    *(int *)((long)param_2 + 0xc) = iVar8;
    *(int *)(param_2 + 2) = iVar16;
    *param_1 = iVar16 + iVar8;
    *(undefined4 *)(param_2 + 1) = 0;
    param_1[0x713] = 0;
    param_1[3] = iVar16 - param_3;
    return 2;
  }
  uVar11 = 0;
  piVar19 = param_1;
  do {
    if (((*(long *)(piVar19 + 4) != 0) && (piVar19[7] == iVar8)) && (-1 < piVar19[8] - param_3))
    goto LAB_0010d4dc;
    uVar11 = uVar11 + 1;
    piVar19 = piVar19 + 8;
  } while (uVar11 < 200);
  if ((int)uVar11 == 200) {
    uVar11 = 0;
    piVar19 = param_1;
    do {
      if (((*(long *)(piVar19 + 4) != 0) && (piVar19[7] - iVar8 < 1)) &&
         (-1 < (piVar19[7] - (iVar8 + param_3)) + piVar19[8])) goto LAB_0010d4dc;
      uVar11 = uVar11 + 1;
      piVar19 = piVar19 + 8;
    } while (uVar11 < 200);
    if ((int)uVar11 == 200) {
      uVar11 = 0;
      piVar19 = param_1;
      do {
        if (((*(long *)(piVar19 + 4) != 0) && (piVar19[7] - iVar8 < 1)) &&
           (0 < (piVar19[7] - iVar8) + piVar19[8])) goto LAB_0010d4dc;
        uVar11 = uVar11 + 1;
        piVar19 = piVar19 + 8;
      } while (uVar11 < 200);
      if ((int)uVar11 == 200) {
        lVar10 = 0;
        uVar9 = 0;
        iVar18 = 0;
        iVar16 = 0;
        bVar4 = false;
        piVar19 = param_1;
        do {
          piVar12 = piVar19 + 8;
          if (((*(long *)(piVar19 + 4) != 0) && (iVar3 = piVar19[7], iVar3 - (iVar8 + param_3) < 0))
             && (-1 < iVar3 - iVar8)) {
            if ((bVar4) && (-1 < iVar3 - iVar16)) {
              if ((iVar3 != iVar16) || (iVar5 = *piVar12, *piVar12 - iVar18 < 1)) goto LAB_0010d464;
            }
            else {
              iVar5 = *piVar12;
            }
            iVar18 = iVar5;
            bVar4 = true;
            uVar9 = (uint)lVar10;
            iVar16 = iVar3;
          }
LAB_0010d464:
          lVar10 = lVar10 + 1;
          piVar19 = piVar12;
        } while (lVar10 != 200);
        uVar2 = 200;
        if (bVar4) {
          uVar2 = uVar9;
        }
        uVar11 = (ulong)uVar2;
        if (uVar2 == 200) {
          param_1[0x7db] = param_1[0x7db] + 1;
          sVar6 = FUN_0010d7e0(param_1);
          if (-1 < sVar6) {
            iVar8 = *param_1;
            *(int *)((long)param_2 + 0xc) = iVar8;
            iVar16 = param_1[0x70f];
            if (param_3 < 0) {
              param_3 = (param_3 - iVar16) + 1;
            }
            iVar18 = 0;
            if (iVar16 != 0) {
              iVar18 = param_3 / iVar16;
            }
            *(int *)(param_2 + 2) = iVar18 * iVar16;
            *param_1 = iVar18 * iVar16 + iVar8;
            *(undefined4 *)(param_2 + 1) = 0;
            param_1[3] = 0;
            return 1;
          }
          puVar13 = *(uint **)(param_1 + 2000);
          iVar8 = -(int)sVar6;
          iVar16 = (int)(short)iVar8;
          uVar9 = *puVar13;
          uVar11 = (ulong)(int)uVar9;
          if (0 < (int)uVar9) {
            if (uVar9 < 8) {
              uVar14 = 0;
            }
            else {
              uVar14 = uVar11 & 0xfffffffffffffff8;
              puVar15 = puVar13 + 6;
              uVar17 = uVar14;
              do {
                uVar17 = uVar17 - 8;
                *(ulong *)(puVar15 + -2) =
                     CONCAT44((int)((ulong)*(undefined8 *)(puVar15 + -2) >> 0x20) + iVar16,
                              (int)*(undefined8 *)(puVar15 + -2) + iVar16);
                *(ulong *)(puVar15 + -4) =
                     CONCAT44((int)((ulong)*(undefined8 *)(puVar15 + -4) >> 0x20) + iVar16,
                              (int)*(undefined8 *)(puVar15 + -4) + iVar16);
                *(ulong *)(puVar15 + 2) =
                     CONCAT44((int)((ulong)*(undefined8 *)(puVar15 + 2) >> 0x20) + iVar16,
                              (int)*(undefined8 *)(puVar15 + 2) + iVar16);
                *(ulong *)puVar15 =
                     CONCAT44((int)((ulong)*(undefined8 *)puVar15 >> 0x20) + iVar16,
                              (int)*(undefined8 *)puVar15 + iVar16);
                puVar15 = puVar15 + 8;
              } while (uVar17 != 0);
              if (uVar14 == uVar11) goto LAB_0010d6e0;
            }
            lVar10 = uVar11 - uVar14;
            puVar13 = puVar13 + uVar14 + 2;
            do {
              lVar10 = lVar10 + -1;
              *puVar13 = *puVar13 + iVar16;
              puVar13 = puVar13 + 1;
            } while (lVar10 != 0);
          }
LAB_0010d6e0:
          puVar13 = *(uint **)(param_1 + 0x7d2);
          uVar9 = *puVar13;
          uVar11 = (ulong)(int)uVar9;
          if (0 < (int)uVar9) {
            if (uVar9 < 8) {
              uVar14 = 0;
            }
            else {
              uVar14 = uVar11 & 0xfffffffffffffff8;
              puVar15 = puVar13 + 6;
              uVar17 = uVar14;
              do {
                uVar17 = uVar17 - 8;
                *(ulong *)(puVar15 + -2) =
                     CONCAT44((int)((ulong)*(undefined8 *)(puVar15 + -2) >> 0x20) + iVar16,
                              (int)*(undefined8 *)(puVar15 + -2) + iVar16);
                *(ulong *)(puVar15 + -4) =
                     CONCAT44((int)((ulong)*(undefined8 *)(puVar15 + -4) >> 0x20) + iVar16,
                              (int)*(undefined8 *)(puVar15 + -4) + iVar16);
                *(ulong *)(puVar15 + 2) =
                     CONCAT44((int)((ulong)*(undefined8 *)(puVar15 + 2) >> 0x20) + iVar16,
                              (int)*(undefined8 *)(puVar15 + 2) + iVar16);
                *(ulong *)puVar15 =
                     CONCAT44((int)((ulong)*(undefined8 *)puVar15 >> 0x20) + iVar16,
                              (int)*(undefined8 *)puVar15 + iVar16);
                puVar15 = puVar15 + 8;
              } while (uVar17 != 0);
              if (uVar14 == uVar11) goto LAB_0010d754;
            }
            lVar10 = uVar11 - uVar14;
            puVar13 = puVar13 + uVar14 + 2;
            do {
              lVar10 = lVar10 + -1;
              *puVar13 = *puVar13 + iVar16;
              puVar13 = puVar13 + 1;
            } while (lVar10 != 0);
          }
LAB_0010d754:
          puVar13 = *(uint **)(param_1 + 0x7d4);
          uVar9 = *puVar13;
          uVar11 = (ulong)(int)uVar9;
          if (0 < (int)uVar9) {
            if (uVar9 < 8) {
              uVar14 = 0;
            }
            else {
              uVar14 = uVar11 & 0xfffffffffffffff8;
              puVar15 = puVar13 + 6;
              uVar17 = uVar14;
              do {
                uVar17 = uVar17 - 8;
                *(ulong *)(puVar15 + -2) =
                     CONCAT44((int)((ulong)*(undefined8 *)(puVar15 + -2) >> 0x20) + iVar16,
                              (int)*(undefined8 *)(puVar15 + -2) + iVar16);
                *(ulong *)(puVar15 + -4) =
                     CONCAT44((int)((ulong)*(undefined8 *)(puVar15 + -4) >> 0x20) + iVar16,
                              (int)*(undefined8 *)(puVar15 + -4) + iVar16);
                *(ulong *)(puVar15 + 2) =
                     CONCAT44((int)((ulong)*(undefined8 *)(puVar15 + 2) >> 0x20) + iVar16,
                              (int)*(undefined8 *)(puVar15 + 2) + iVar16);
                *(ulong *)puVar15 =
                     CONCAT44((int)((ulong)*(undefined8 *)puVar15 >> 0x20) + iVar16,
                              (int)*(undefined8 *)puVar15 + iVar16);
                puVar15 = puVar15 + 8;
              } while (uVar17 != 0);
              if (uVar14 == uVar11) goto LAB_0010d7c8;
            }
            lVar10 = uVar11 - uVar14;
            puVar13 = puVar13 + uVar14 + 2;
            do {
              lVar10 = lVar10 + -1;
              *puVar13 = *puVar13 + iVar16;
              puVar13 = puVar13 + 1;
            } while (lVar10 != 0);
          }
LAB_0010d7c8:
          iVar16 = *param_1;
          *(undefined4 *)(param_2 + 1) = 0;
          uVar7 = 2;
          *(int *)((long)param_2 + 0xc) = iVar16;
          *(int *)(param_2 + 2) = iVar8;
          iVar8 = iVar8 - param_3;
          goto LAB_0010d64c;
        }
      }
    }
  }
LAB_0010d4dc:
  param_1[0x7db] = 0;
  lVar10 = (long)(int)uVar11;
  if (param_1[(long)(int)uVar11 + 0x644] != 0) {
    FUN_0010d0c4(param_1,(param_1[lVar10 * 8 + 7] - param_1[(long)(int)uVar11 + 0x644]) -
                         param_1[0x711]);
  }
  plVar1 = (long *)(param_1 + lVar10 * 8 + 4);
  if (*(long *)(param_1 + 0x70c) == 0) {
    uVar9 = param_1[lVar10 * 8 + 6];
    if (*(uint *)(param_2 + 1) < uVar9) {
      fprintf((FILE *)0x14d168,"warning: %s %d\n",
              "jitter_buffer_get(): packet too large to fit. Size is");
      uVar9 = *(uint *)(param_2 + 1);
      __ptr = (void *)*plVar1;
    }
    else {
      *(uint *)(param_2 + 1) = uVar9;
      __ptr = (void *)*plVar1;
    }
    if (uVar9 != 0) {
      uVar11 = 0;
      do {
        *(undefined1 *)(*param_2 + uVar11) = *(undefined1 *)((long)__ptr + uVar11);
        __ptr = (void *)*plVar1;
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)(param_2 + 1));
    }
    free(__ptr);
  }
  else {
    *param_2 = *plVar1;
    *(int *)(param_2 + 1) = param_1[lVar10 * 8 + 6];
  }
  *plVar1 = 0;
  piVar19 = param_1 + lVar10 * 8 + 7;
  if (param_4 == (int *)0x0) {
    if (*piVar19 - *param_1 != 0) {
      fprintf((FILE *)0x14d168,"warning: %s %d\n",
              "jitter_buffer_get() discarding non-zero start_offset");
    }
  }
  else {
    *param_4 = *piVar19 - *param_1;
  }
  iVar8 = *piVar19;
  uVar7 = 0;
  *(int *)((long)param_2 + 0xc) = iVar8;
  param_1[1] = iVar8;
  iVar8 = param_1[lVar10 * 8 + 8];
  *(int *)(param_2 + 2) = iVar8;
  iVar8 = iVar8 - param_3;
  *(short *)((long)param_2 + 0x14) = (short)param_1[lVar10 * 8 + 9];
  *(int *)(param_2 + 3) = param_1[lVar10 * 8 + 10];
  iVar16 = *piVar19;
  iVar18 = param_1[lVar10 * 8 + 8];
  param_1[3] = iVar8;
  *param_1 = iVar18 + iVar16;
  if (param_4 == (int *)0x0) {
    return 0;
  }
  iVar8 = *param_4 + iVar8;
LAB_0010d64c:
  param_1[3] = iVar8;
  return uVar7;
}

