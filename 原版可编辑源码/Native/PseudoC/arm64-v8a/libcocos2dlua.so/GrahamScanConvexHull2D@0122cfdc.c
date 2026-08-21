
/* GrahamScanConvexHull2D(btAlignedObjectArray<GrahamVector3>&,
   btAlignedObjectArray<GrahamVector3>&, btVector3 const&) */

void GrahamScanConvexHull2D
               (btAlignedObjectArray *param_1,btAlignedObjectArray *param_2,btVector3 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  float *pfVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  fVar14 = *(float *)(param_3 + 8);
  if (ABS(fVar14) <= 0.70710677) {
    fVar22 = *(float *)param_3 * *(float *)param_3 +
             *(float *)(param_3 + 4) * *(float *)(param_3 + 4);
    fVar14 = SQRT(fVar22);
    if (NAN(fVar14)) {
      fVar14 = sqrtf(fVar22);
    }
    fVar15 = 0.0;
    fVar22 = -(*(float *)(param_3 + 4) * (1.0 / fVar14));
    fVar14 = (1.0 / fVar14) * *(float *)param_3;
  }
  else {
    fVar14 = fVar14 * fVar14 + *(float *)(param_3 + 4) * *(float *)(param_3 + 4);
    fVar15 = SQRT(fVar14);
    if (NAN(fVar15)) {
      fVar15 = sqrtf(fVar14);
    }
    fVar22 = 0.0;
    fVar14 = -((1.0 / fVar15) * *(float *)(param_3 + 8));
    fVar15 = (1.0 / fVar15) * *(float *)(param_3 + 4);
  }
  iVar11 = *(int *)(param_1 + 4);
  if (iVar11 < 2) {
    if (iVar11 == 1) {
      iVar5 = *(int *)(param_2 + 4);
      iVar11 = 0;
      do {
        puVar12 = *(undefined8 **)(param_1 + 0x10);
        if (iVar5 == *(int *)(param_2 + 8)) {
          iVar13 = iVar5 << 1;
          if (iVar5 == 0) {
            iVar13 = 1;
          }
          if (iVar5 < iVar13) {
            if (iVar13 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = btAlignedAllocInternal((long)iVar13 * 0x18,0x10);
              iVar5 = *(int *)(param_2 + 4);
            }
            if (0 < iVar5) {
              lVar9 = 0;
              lVar6 = (long)iVar5;
              do {
                puVar7 = (undefined8 *)(lVar4 + lVar9);
                lVar6 = lVar6 + -1;
                puVar2 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar9);
                lVar9 = lVar9 + 0x18;
                puVar7[2] = puVar2[2];
                uVar18 = *puVar2;
                puVar7[1] = puVar2[1];
                *puVar7 = uVar18;
              } while (lVar6 != 0);
            }
            if (*(void **)(param_2 + 0x10) != (void *)0x0) {
              if (param_2[0x18] != (btAlignedObjectArray)0x0) {
                btAlignedFreeInternal(*(void **)(param_2 + 0x10));
              }
              *(undefined8 *)(param_2 + 0x10) = 0;
            }
            iVar5 = *(int *)(param_2 + 4);
            param_2[0x18] = (btAlignedObjectArray)0x1;
            *(long *)(param_2 + 0x10) = lVar4;
            *(int *)(param_2 + 8) = iVar13;
          }
        }
        iVar11 = iVar11 + 1;
        puVar7 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)iVar5 * 0x18);
        puVar7[2] = puVar12[2];
        uVar18 = *puVar12;
        puVar7[1] = puVar12[1];
        *puVar7 = uVar18;
        iVar5 = *(int *)(param_2 + 4) + 1;
        *(int *)(param_2 + 4) = iVar5;
      } while (iVar11 < *(int *)(param_1 + 4));
    }
  }
  else {
    pfVar8 = *(float **)(param_1 + 0x10);
    lVar9 = 0;
    lVar4 = 0;
    do {
      pfVar3 = (float *)((long)pfVar8 + lVar9);
      if (fVar22 * *pfVar3 + fVar14 * pfVar3[1] + fVar15 * pfVar3[2] <
          fVar22 * *pfVar8 + fVar14 * pfVar8[1] + fVar15 * pfVar8[2]) {
        local_90 = *(undefined8 *)(pfVar8 + 4);
        uStack_98 = *(undefined8 *)(pfVar8 + 2);
        local_a0 = *(undefined8 *)pfVar8;
        *(undefined8 *)(pfVar8 + 4) = *(undefined8 *)(pfVar3 + 4);
        uVar18 = *(undefined8 *)pfVar3;
        *(undefined8 *)(pfVar8 + 2) = *(undefined8 *)(pfVar3 + 2);
        *(undefined8 *)pfVar8 = uVar18;
        puVar12 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar9);
        puVar12[2] = local_90;
        puVar12[1] = uStack_98;
        *puVar12 = local_a0;
        iVar11 = *(int *)(param_1 + 4);
        pfVar8 = *(float **)(param_1 + 0x10);
      }
      lVar4 = lVar4 + 1;
      lVar9 = lVar9 + 0x18;
    } while (lVar4 < iVar11);
    pfVar8[4] = -1e+30;
    if (1 < iVar11) {
      lVar9 = 0;
      lVar4 = 1;
      do {
        fVar19 = *(float *)((long)pfVar8 + lVar9 + 0x1c) - pfVar8[1];
        fVar23 = *(float *)((long)pfVar8 + lVar9 + 0x20) - pfVar8[2];
        fVar16 = *(float *)((long)pfVar8 + lVar9 + 0x18) - *pfVar8;
        fVar24 = *(float *)param_3;
        fVar25 = *(float *)(param_3 + 4);
        fVar20 = *(float *)(param_3 + 8);
        fVar21 = fVar16 * fVar16 + fVar19 * fVar19 + fVar23 * fVar23;
        fVar17 = SQRT(fVar21);
        if (NAN(fVar17)) {
          fVar17 = sqrtf(fVar21);
        }
        pfVar8 = *(float **)(param_1 + 0x10);
        lVar4 = lVar4 + 1;
        *(float *)((long)pfVar8 + lVar9 + 0x28) =
             ((fVar22 * fVar19 - fVar14 * fVar16) * fVar20 +
             fVar24 * (fVar14 * fVar23 - fVar15 * fVar19) +
             fVar25 * (fVar15 * fVar16 - fVar22 * fVar23)) / fVar17;
        iVar11 = *(int *)(param_1 + 4);
        lVar9 = lVar9 + 0x18;
      } while (lVar4 < iVar11);
    }
    uStack_98 = *(undefined8 *)(pfVar8 + 2);
    local_a0 = *(undefined8 *)pfVar8;
    btAlignedObjectArray<GrahamVector3>::quickSortInternal<btAngleCompareFunc>
              ((btAlignedObjectArray<GrahamVector3> *)param_1,(btAngleCompareFunc *)&local_a0,1,
               iVar11 + -1);
    iVar11 = *(int *)(param_2 + 4);
    puVar12 = *(undefined8 **)(param_1 + 0x10);
    if (iVar11 == *(int *)(param_2 + 8)) {
      iVar5 = iVar11 << 1;
      if (iVar11 == 0) {
        iVar5 = 1;
      }
      if (iVar11 < iVar5) {
        if (iVar5 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = btAlignedAllocInternal((long)iVar5 * 0x18,0x10);
          iVar11 = *(int *)(param_2 + 4);
        }
        if (0 < iVar11) {
          lVar9 = 0;
          lVar6 = (long)iVar11;
          do {
            puVar7 = (undefined8 *)(lVar4 + lVar9);
            lVar6 = lVar6 + -1;
            puVar2 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar9);
            lVar9 = lVar9 + 0x18;
            puVar7[2] = puVar2[2];
            uVar18 = *puVar2;
            puVar7[1] = puVar2[1];
            *puVar7 = uVar18;
          } while (lVar6 != 0);
        }
        if (*(void **)(param_2 + 0x10) != (void *)0x0) {
          if (param_2[0x18] != (btAlignedObjectArray)0x0) {
            btAlignedFreeInternal(*(void **)(param_2 + 0x10));
          }
          *(undefined8 *)(param_2 + 0x10) = 0;
        }
        iVar11 = *(int *)(param_2 + 4);
        param_2[0x18] = (btAlignedObjectArray)0x1;
        *(long *)(param_2 + 0x10) = lVar4;
        *(int *)(param_2 + 8) = iVar5;
      }
    }
    puVar7 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)iVar11 * 0x18);
    puVar7[2] = puVar12[2];
    uVar18 = *puVar12;
    puVar7[1] = puVar12[1];
    *puVar7 = uVar18;
    iVar11 = *(int *)(param_2 + 4) + 1;
    *(int *)(param_2 + 4) = iVar11;
    lVar4 = *(long *)(param_1 + 0x10);
    if (iVar11 == *(int *)(param_2 + 8)) {
      iVar5 = iVar11 * 2;
      if (iVar11 == 0) {
        iVar5 = 1;
      }
      if (iVar11 < iVar5) {
        if (iVar5 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = btAlignedAllocInternal((long)iVar5 * 0x18,0x10);
          iVar11 = *(int *)(param_2 + 4);
        }
        if (0 < iVar11) {
          lVar6 = 0;
          lVar10 = (long)iVar11;
          do {
            puVar12 = (undefined8 *)(lVar9 + lVar6);
            lVar10 = lVar10 + -1;
            puVar7 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar6);
            lVar6 = lVar6 + 0x18;
            puVar12[2] = puVar7[2];
            uVar18 = *puVar7;
            puVar12[1] = puVar7[1];
            *puVar12 = uVar18;
          } while (lVar10 != 0);
        }
        if (*(void **)(param_2 + 0x10) != (void *)0x0) {
          if (param_2[0x18] != (btAlignedObjectArray)0x0) {
            btAlignedFreeInternal(*(void **)(param_2 + 0x10));
          }
          *(undefined8 *)(param_2 + 0x10) = 0;
        }
        iVar11 = *(int *)(param_2 + 4);
        param_2[0x18] = (btAlignedObjectArray)0x1;
        *(long *)(param_2 + 0x10) = lVar9;
        *(int *)(param_2 + 8) = iVar5;
      }
    }
    puVar12 = (undefined8 *)(*(long *)(param_2 + 0x10) + (long)iVar11 * 0x18);
    puVar12[2] = *(undefined8 *)(lVar4 + 0x28);
    uVar18 = *(undefined8 *)(lVar4 + 0x18);
    puVar12[1] = *(undefined8 *)(lVar4 + 0x20);
    *puVar12 = uVar18;
    iVar11 = *(int *)(param_2 + 4) + 1;
    *(int *)(param_2 + 4) = iVar11;
    iVar5 = *(int *)(param_1 + 4);
    if (iVar5 != 2) {
      lVar4 = 2;
      do {
        if (1 < iVar11) {
          lVar6 = *(long *)(param_2 + 0x10);
          fVar14 = *(float *)param_3;
          fVar22 = *(float *)(param_3 + 4);
          fVar19 = *(float *)(param_3 + 8);
          pfVar8 = (float *)(*(long *)(param_1 + 0x10) + lVar4 * 0x18);
          fVar15 = *pfVar8;
          fVar16 = pfVar8[1];
          fVar17 = pfVar8[2];
          iVar13 = iVar11 << 1;
          lVar9 = (long)iVar11 * 0x18;
          iVar5 = iVar11;
LAB_0122d534:
          lVar9 = lVar9 + -0x18;
          pfVar3 = (float *)(lVar6 + lVar9);
          fVar23 = pfVar3[-6] - *pfVar3;
          fVar24 = pfVar3[-5] - pfVar3[1];
          fVar26 = pfVar3[-4] - pfVar3[2];
          fVar20 = pfVar3[-6] - fVar15;
          fVar21 = pfVar3[-5] - fVar16;
          fVar25 = pfVar3[-4] - fVar17;
          if ((fVar23 * fVar21 - fVar24 * fVar20) * fVar19 +
              fVar14 * (fVar24 * fVar25 - fVar26 * fVar21) +
              fVar22 * (fVar26 * fVar20 - fVar23 * fVar25) <= 0.0) goto code_r0x0122d5a0;
          if ((*(int *)(param_2 + 8) == iVar5) && (iVar5 < iVar13)) {
            lVar6 = btAlignedAllocInternal((long)iVar13 * 0x18,0x10);
            lVar9 = (long)*(int *)(param_2 + 4);
            if (0 < *(int *)(param_2 + 4)) {
              lVar10 = 0;
              do {
                puVar12 = (undefined8 *)(lVar6 + lVar10);
                lVar9 = lVar9 + -1;
                puVar7 = (undefined8 *)(*(long *)(param_2 + 0x10) + lVar10);
                lVar10 = lVar10 + 0x18;
                puVar12[2] = puVar7[2];
                uVar18 = *puVar7;
                puVar12[1] = puVar7[1];
                *puVar12 = uVar18;
              } while (lVar9 != 0);
            }
            if (*(void **)(param_2 + 0x10) != (void *)0x0) {
              if (param_2[0x18] != (btAlignedObjectArray)0x0) {
                btAlignedFreeInternal(*(void **)(param_2 + 0x10));
              }
              *(undefined8 *)(param_2 + 0x10) = 0;
            }
            iVar5 = *(int *)(param_2 + 4);
            param_2[0x18] = (btAlignedObjectArray)0x1;
            *(long *)(param_2 + 0x10) = lVar6;
            *(int *)(param_2 + 8) = iVar13;
          }
          puVar12 = (undefined8 *)(lVar6 + (long)iVar5 * 0x18);
          puVar12[2] = *(undefined8 *)(pfVar8 + 4);
          uVar18 = *(undefined8 *)pfVar8;
          puVar12[1] = *(undefined8 *)(pfVar8 + 2);
          *puVar12 = uVar18;
          iVar11 = *(int *)(param_2 + 4) + 1;
          *(int *)(param_2 + 4) = iVar11;
LAB_0122d668:
          iVar5 = *(int *)(param_1 + 4);
        }
        lVar4 = lVar4 + 1;
      } while (iVar5 != (int)lVar4);
    }
  }
  return;
code_r0x0122d5a0:
  iVar11 = iVar5 + -1;
  iVar13 = iVar13 + -2;
  *(int *)(param_2 + 4) = iVar11;
  bVar1 = iVar5 < 3;
  iVar5 = iVar11;
  if (bVar1) goto LAB_0122d668;
  goto LAB_0122d534;
}

