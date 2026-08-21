
void spPathConstraint_apply(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  bool bVar5;
  float *__ptr;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float __x;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_d8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float __y;
  
  lVar18 = *param_1;
  fVar26 = *(float *)(param_1 + 5);
  fVar27 = *(float *)((long)param_1 + 0x2c);
  uVar1 = *(uint *)(param_1 + 1);
  uVar16 = (ulong)uVar1;
  iVar2 = *(int *)(lVar18 + 0x28);
  lVar13 = *(long *)(param_1[3] + 0x28);
  uVar15 = uVar1;
  if (iVar2 != 0) {
    uVar15 = uVar1 + 1;
  }
  if (lVar13 == 0) {
    return;
  }
  if (fVar26 <= 0.0 && fVar27 <= 0.0) {
    return;
  }
  if (*(int *)(lVar13 + 8) != 4) {
    return;
  }
  iVar3 = *(int *)(lVar18 + 0x24);
  puVar17 = (undefined8 *)param_1[2];
  __ptr = (float *)param_1[7];
  if (*(uint *)(param_1 + 6) != uVar15) {
    if (__ptr != (float *)0x0) {
      _spFree(__ptr);
    }
    __ptr = (float *)_spMalloc(-(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar15 << 2,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/PathConstraint.c"
                               ,99);
    param_1[7] = (long)__ptr;
    *(uint *)(param_1 + 6) = uVar15;
  }
  *__ptr = 0.0;
  fVar22 = *(float *)((long)param_1 + 0x24);
  if ((iVar3 == 0) || (iVar2 == 2)) {
    if (iVar2 == 2) {
      pfVar12 = (float *)param_1[0xf];
      if (*(uint *)(param_1 + 0xe) != uVar1) {
        if (pfVar12 != (float *)0x0) {
          _spFree(pfVar12);
        }
                    /* try { // try from 00d6fe08 to 00e6fe4f has its CatchHandler @ 00d70f10 */
        pfVar12 = (float *)_spMalloc((long)(int)uVar1 << 2,
                                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/PathConstraint.c"
                                     ,0x6e);
        param_1[0xf] = (long)pfVar12;
        *(uint *)(param_1 + 0xe) = uVar1;
      }
    }
    else {
      pfVar12 = (float *)0x0;
    }
    if (0 < (int)(uVar15 - 1)) {
      uVar9 = 0;
      do {
        plVar14 = (long *)puVar17[uVar9];
        fVar20 = 1e-09;
                    /* try { // try from 00d6fe90 to 00e6fe9b has its CatchHandler @ 00d70ea8 */
        if (*(float *)(*plVar14 + 0x18) != 0.0) {
          fVar20 = *(float *)(*plVar14 + 0x18);
        }
        fVar23 = *(float *)((long)plVar14 + 100) * fVar20;
        fVar23 = SQRT(fVar23 * fVar23 +
                      fVar20 * *(float *)(plVar14 + 0xe) * fVar20 * *(float *)(plVar14 + 0xe));
        if (iVar2 == 2) {
          pfVar12[uVar9] = fVar23;
        }
        fVar24 = fVar22 + fVar20;
        if (iVar3 != 0) {
          fVar24 = fVar22;
        }
                    /* try { // try from 00d6fe5c to 00e6fe63 has its CatchHandler @ 00d70ea4 */
        uVar11 = uVar9 + 1;
                    /* try { // try from 00d6fe64 to 00e6fe8f has its CatchHandler @ 00d6f14c */
        __ptr[uVar9 + 1] = (fVar24 * fVar23) / fVar20;
        uVar9 = uVar11;
      } while (uVar15 - 1 != uVar11);
    }
    goto LAB_00d6ff00;
  }
  if (1 < (int)uVar15) {
    uVar9 = (ulong)uVar15 - 1;
                    /* try { // try from 00d6fdb8 to 00e6fdc7 has its CatchHandler @ 00d70ea4 */
    if (uVar9 < 8) {
      uVar8 = 1;
    }
    else {
      uVar10 = uVar9 & 0xfffffffffffffff8;
      uVar8 = uVar10 | 1;
      pfVar12 = __ptr + 5;
                    /* try { // try from 00d6fecc to 00e6ff43 has its CatchHandler @ 00d70f10 */
      uVar11 = uVar10;
      do {
        *(ulong *)(pfVar12 + -2) = CONCAT44(fVar22,fVar22);
        *(ulong *)(pfVar12 + -4) = CONCAT44(fVar22,fVar22);
        *(ulong *)(pfVar12 + 2) = CONCAT44(fVar22,fVar22);
        *(ulong *)pfVar12 = CONCAT44(fVar22,fVar22);
        uVar11 = uVar11 - 8;
        pfVar12 = pfVar12 + 8;
      } while (uVar11 != 0);
      if (uVar9 == uVar10) goto LAB_00d6fefc;
    }
    lVar7 = uVar15 - uVar8;
    pfVar12 = __ptr + uVar8;
    do {
      lVar7 = lVar7 + -1;
      *pfVar12 = fVar22;
      pfVar12 = pfVar12 + 1;
    } while (lVar7 != 0);
  }
LAB_00d6fefc:
  pfVar12 = (float *)0x0;
LAB_00d6ff00:
  pfVar6 = (float *)spPathConstraint_computeWorldPositions
                              (param_1,lVar13,uVar15,iVar2 == 0,*(int *)(lVar18 + 0x20) == 1,
                               iVar3 == 2);
  fVar22 = *pfVar6;
  fVar20 = pfVar6[1];
  local_d8 = *(float *)(*param_1 + 0x2c);
  if (local_d8 == 0.0) {
    bVar5 = iVar2 == 1;
                    /* try { // try from 00d6ff48 to 00e6ff53 has its CatchHandler @ 00d70e9c */
  }
  else {
                    /* try { // try from 00d6ff58 to 00e6ff5f has its CatchHandler @ 00d70e98 */
    bVar5 = false;
    lVar13 = *(long *)(param_1[3] + 8);
                    /* try { // try from 00d6ff60 to 00e6ff67 has its CatchHandler @ 00d70e94 */
                    /* try { // try from 00d6ff68 to 00e6ff6f has its CatchHandler @ 00d70e90 */
                    /* try { // try from 00d6ff84 to 00e6ff8b has its CatchHandler @ 00d70eb8 */
    fVar23 = 0.017453292;
    if (*(float *)(lVar13 + 100) * *(float *)(lVar13 + 0x74) -
        *(float *)(lVar13 + 0x68) * *(float *)(lVar13 + 0x70) <= 0.0) {
      fVar23 = -0.017453292;
    }
                    /* try { // try from 00d6ff94 to 00e6ffab has its CatchHandler @ 00d70edc */
    local_d8 = local_d8 * fVar23;
  }
  if (0 < (int)uVar1) {
    uVar15 = 5;
    pfVar4 = pfVar6;
    do {
      __ptr = __ptr + 1;
      plVar14 = (long *)*puVar17;
      *(float *)((long)plVar14 + 0x6c) =
           *(float *)((long)plVar14 + 0x6c) + fVar27 * (fVar22 - *(float *)((long)plVar14 + 0x6c));
      *(float *)(plVar14 + 0xf) =
           *(float *)(plVar14 + 0xf) + fVar27 * (fVar20 - *(float *)(plVar14 + 0xf));
      fVar28 = pfVar4[3];
      fVar29 = pfVar6[uVar15 - 1];
      fVar24 = fVar28 - fVar22;
      fVar23 = fVar29 - fVar20;
      if ((iVar2 == 2) && (*pfVar12 != 0.0)) {
        fVar22 = fVar26 * (SQRT(fVar24 * fVar24 + fVar23 * fVar23) / *pfVar12 + -1.0) + 1.0;
        *(float *)((long)plVar14 + 100) = fVar22 * *(float *)((long)plVar14 + 100);
        *(float *)(plVar14 + 0xe) = fVar22 * *(float *)(plVar14 + 0xe);
      }
      fVar22 = fVar28;
      fVar20 = fVar29;
      if (0.0 < fVar26) {
        uVar21 = *(undefined8 *)((long)plVar14 + 100);
        lVar13 = plVar14[0xe];
        if (iVar2 == 0) {
          fVar25 = pfVar4[2];
        }
        else if (*__ptr == 0.0) {
          fVar25 = pfVar6[uVar15];
        }
        else {
          fVar25 = atan2f(fVar23,fVar24);
        }
        __y = (float)lVar13;
        __x = (float)uVar21;
        fVar19 = atan2f(__y,__x);
        fVar25 = fVar25 - (fVar19 - local_d8 * 0.017453292);
        if (bVar5) {
          sincosf(fVar25,&fStack_a4,&local_a8);
          fVar22 = fVar28 + fVar26 * ((__x * local_a8 - __y * fStack_a4) *
                                      *(float *)(*plVar14 + 0x18) - fVar24);
          fVar20 = fVar29 + fVar26 * ((__x * fStack_a4 + __y * local_a8) *
                                      *(float *)(*plVar14 + 0x18) - fVar23);
        }
        else {
          fVar25 = local_d8 + fVar25;
        }
        if (3.1415927 < fVar25) {
          fVar23 = -6.2831855;
LAB_00d6ffd8:
          fVar25 = fVar25 + fVar23;
        }
        else if (fVar25 < -3.1415927) {
          fVar23 = 6.2831855;
          goto LAB_00d6ffd8;
        }
        sincosf(fVar26 * fVar25,&fStack_ac,&local_b0);
        fVar23 = (float)((ulong)uVar21 >> 0x20);
        fVar24 = (float)((ulong)lVar13 >> 0x20);
        *(ulong *)((long)plVar14 + 100) =
             CONCAT44(fVar23 * local_b0 - fVar24 * fStack_ac,__x * local_b0 - __y * fStack_ac);
        plVar14[0xe] = CONCAT44(fVar23 * fStack_ac + fVar24 * local_b0,
                                __x * fStack_ac + __y * local_b0);
      }
      uVar15 = uVar15 + 3;
      uVar16 = uVar16 - 1;
      pfVar12 = pfVar12 + 1;
      puVar17 = puVar17 + 1;
      *(undefined4 *)(plVar14 + 0xc) = 0xffffffff;
      pfVar4 = pfVar4 + 3;
    } while (uVar16 != 0);
  }
  return;
}

