
uint * spTriangulator_decompose(undefined8 *param_1,long param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  float *pfVar16;
  short *psVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  uint *puVar25;
  long lVar26;
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  puVar25 = (uint *)*param_1;
  lVar26 = *(long *)(param_2 + 8);
  if (0 < (int)*puVar25) {
    lVar20 = 0;
    do {
      spArrayFloatArray_add(param_1[5],*(undefined8 *)(*(long *)(puVar25 + 2) + lVar20 * 8));
      lVar20 = lVar20 + 1;
    } while (lVar20 < (int)*puVar25);
  }
  spArrayFloatArray_clear(puVar25);
  piVar22 = (int *)param_1[1];
  if (0 < *piVar22) {
    lVar20 = 0;
    do {
      spArrayShortArray_add(param_1[6],*(undefined8 *)(*(long *)(piVar22 + 2) + lVar20 * 8));
      lVar20 = lVar20 + 1;
    } while (lVar20 < *piVar22);
  }
  spArrayShortArray_clear(piVar22);
  if (*(int *)param_1[6] == 0) {
    uVar9 = spShortArray_create(0x10);
  }
  else {
    uVar9 = spArrayShortArray_pop();
  }
  spShortArray_clear();
  if (*(int *)param_1[5] == 0) {
    piVar10 = (int *)spFloatArray_create(0x10);
  }
  else {
    piVar10 = (int *)spArrayFloatArray_pop();
  }
  spFloatArray_clear();
  iVar18 = *param_3;
  if (0 < iVar18) {
    lVar13 = *(long *)(param_3 + 2);
    lVar20 = 0;
    iVar12 = 0;
    iVar19 = -1;
    do {
      psVar17 = (short *)(lVar13 + lVar20 * 2);
      sVar5 = *psVar17;
      sVar6 = psVar17[1];
      fVar32 = *(float *)(lVar26 + (-((ulong)(long)sVar5 >> 0x1f & 1) & 0xfffffff800000000 |
                                   ((long)sVar5 & 0xffffffffU) << 3));
      sVar7 = psVar17[2];
      fVar38 = *(float *)(lVar26 + (-((ulong)(long)sVar6 >> 0x1f & 1) & 0xfffffff800000000 |
                                   ((long)sVar6 & 0xffffffffU) << 3));
      fVar36 = *(float *)(lVar26 + (long)(int)((int)sVar5 << 1 | 1) * 4);
      fVar39 = *(float *)(lVar26 + (long)(int)((int)sVar6 << 1 | 1) * 4);
      fVar37 = *(float *)(lVar26 + (-((ulong)(long)sVar7 >> 0x1f & 1) & 0xfffffff800000000 |
                                   ((long)sVar7 & 0xffffffffU) << 3));
      fVar34 = *(float *)(lVar26 + (long)(int)((int)sVar7 << 1 | 1) * 4);
      iVar3 = *piVar10;
      iVar21 = sVar5 * 2;
      iVar8 = (int)sVar7 << 1;
      if (iVar19 == iVar21) {
        pfVar16 = *(float **)(piVar10 + 2);
        fVar28 = pfVar16[iVar3 + -2] - pfVar16[iVar3 + -4];
        fVar29 = pfVar16[iVar3 + -1] - pfVar16[iVar3 + -3];
                    /* catch() { ... } // from try @ 00d6d048 with catch @ 00d6d11c */
        iVar15 = -1;
        iVar2 = iVar15;
        if (0.0 <= (pfVar16[iVar3 + -3] * fVar28 + (fVar37 * fVar29 - fVar34 * fVar28)) -
                   pfVar16[iVar3 + -4] * fVar29) {
          iVar2 = 1;
        }
        if (0.0 <= (fVar34 * (*pfVar16 - fVar37) +
                   ((pfVar16[1] - fVar34) * pfVar16[2] - (*pfVar16 - fVar37) * pfVar16[3])) -
                   fVar37 * (pfVar16[1] - fVar34)) {
          iVar15 = 1;
        }
        if ((iVar2 != iVar12) || (iVar15 != iVar12)) goto LAB_00d6d1ac;
        spFloatArray_add(fVar37,piVar10);
        spFloatArray_add(fVar34,piVar10);
        spShortArray_add(uVar9,iVar8);
        iVar21 = iVar19;
      }
      else {
LAB_00d6d1ac:
        if (iVar3 < 1) {
          spArrayFloatArray_add(param_1[5],piVar10);
          piVar10 = (int *)param_1[6];
        }
        else {
          spArrayFloatArray_add(puVar25,piVar10);
          piVar10 = piVar22;
        }
        spArrayShortArray_add(piVar10,uVar9);
        if (*(int *)param_1[5] == 0) {
          piVar10 = (int *)spFloatArray_create(0x10);
        }
        else {
          piVar10 = (int *)spArrayFloatArray_pop();
        }
        spFloatArray_clear();
        spFloatArray_add(fVar32,piVar10);
        spFloatArray_add(fVar36,piVar10);
        spFloatArray_add(fVar38,piVar10);
        spFloatArray_add(fVar39,piVar10);
        spFloatArray_add(fVar37,piVar10);
        spFloatArray_add(fVar34,piVar10);
        if (*(int *)param_1[6] == 0) {
          uVar9 = spShortArray_create(0x10);
        }
        else {
          uVar9 = spArrayShortArray_pop();
        }
        spShortArray_clear();
        spShortArray_add(uVar9,iVar21);
        spShortArray_add(uVar9,(int)sVar6 << 1);
        spShortArray_add(uVar9,iVar8);
        fVar38 = fVar38 - fVar32;
                    /* try { // try from 00d6d048 to 00e6d04f has its CatchHandler @ 00d6d11c */
        fVar39 = fVar39 - fVar36;
                    /* try { // try from 00d6d050 to 00e6d12f has its CatchHandler @ 00d6cecc */
        iVar12 = -1;
        if (0.0 <= (fVar36 * fVar38 + (fVar39 * fVar37 - fVar38 * fVar34)) - fVar32 * fVar39) {
          iVar12 = 1;
        }
      }
      lVar20 = lVar20 + 3;
      iVar19 = iVar21;
    } while ((int)lVar20 < iVar18);
  }
  if (0 < *piVar10) {
    spArrayFloatArray_add(puVar25,piVar10);
    spArrayShortArray_add(piVar22,uVar9);
  }
  uVar4 = *puVar25;
  if (0 < (int)uVar4) {
    uVar27 = 0;
    do {
      piVar10 = *(int **)(*(long *)(piVar22 + 2) + uVar27 * 8);
      if (*piVar10 != 0) {
        uVar14 = 0;
        piVar23 = *(int **)(*(long *)(puVar25 + 2) + uVar27 * 8);
        sVar6 = (*(short **)(piVar10 + 2))[*piVar10 + -1];
        sVar5 = **(short **)(piVar10 + 2);
        iVar18 = *piVar23;
        pfVar16 = *(float **)(piVar23 + 2);
        fVar38 = pfVar16[iVar18 + -4];
        fVar32 = pfVar16[iVar18 + -3];
        fVar39 = pfVar16[iVar18 + -2];
        fVar34 = pfVar16[iVar18 + -1];
        fVar36 = *pfVar16;
        fVar37 = pfVar16[1];
        fVar28 = pfVar16[2];
        fVar29 = pfVar16[3];
        iVar18 = -1;
        if (0.0 <= (fVar32 * (fVar39 - fVar38) +
                   ((fVar34 - fVar32) * fVar36 - (fVar39 - fVar38) * fVar37)) -
                   fVar38 * (fVar34 - fVar32)) {
          iVar18 = 1;
        }
        do {
          if (uVar27 != uVar14) {
            piVar24 = *(int **)(*(long *)(piVar22 + 2) + (long)(int)uVar14 * 8);
            if (((*piVar24 == 3) && (psVar17 = *(short **)(piVar24 + 2), *psVar17 == sVar5)) &&
               (psVar17[1] == sVar6)) {
              piVar11 = *(int **)(*(long *)(puVar25 + 2) + (long)(int)uVar14 * 8);
              iVar12 = *piVar11;
              lVar26 = *(long *)(piVar11 + 2);
              fVar35 = *(float *)(lVar26 + (long)(iVar12 + -2) * 4);
              fVar33 = *(float *)(lVar26 + (long)(iVar12 + -1) * 4);
              fVar30 = fVar36 - fVar35;
              fVar31 = fVar37 - fVar33;
              iVar19 = -1;
              iVar12 = iVar19;
              if (0.0 <= (fVar32 * (fVar39 - fVar38) +
                         ((fVar34 - fVar32) * fVar35 - (fVar39 - fVar38) * fVar33)) -
                         (fVar34 - fVar32) * fVar38) {
                iVar12 = 1;
              }
              if (0.0 <= (fVar30 * fVar33 + (fVar28 * fVar31 - fVar29 * fVar30)) - fVar35 * fVar31)
              {
                iVar19 = 1;
              }
              if ((iVar12 == iVar18) && (iVar19 == iVar18)) {
                sVar7 = psVar17[2];
                spFloatArray_clear();
                spShortArray_clear(piVar24);
                spFloatArray_add(fVar35,piVar23);
                spFloatArray_add(fVar33,piVar23);
                spShortArray_add(piVar10,sVar7);
                uVar14 = 0;
                fVar38 = fVar39;
                fVar39 = fVar35;
                fVar32 = fVar34;
                fVar34 = fVar33;
              }
            }
          }
          uVar1 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar1;
        } while ((int)uVar1 < (int)uVar4);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar4);
    uVar27 = (ulong)(int)*puVar25;
    if (0 < (int)*puVar25) {
      do {
        uVar27 = uVar27 - 1;
        piVar10 = *(int **)(*(long *)(puVar25 + 2) + uVar27 * 8);
        if (*piVar10 == 0) {
          spArrayFloatArray_removeAt(puVar25,uVar27 & 0xffffffff);
          spArrayFloatArray_add(param_1[5],piVar10);
          uVar9 = *(undefined8 *)(*(long *)(piVar22 + 2) + uVar27 * 8);
          spArrayShortArray_removeAt(piVar22,uVar27 & 0xffffffff);
          spArrayShortArray_add(param_1[6],uVar9);
        }
      } while (0 < (long)uVar27);
    }
  }
  return puVar25;
}

