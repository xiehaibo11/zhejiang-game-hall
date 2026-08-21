
/* btGeometryUtil::getPlaneEquationsFromVertices(btAlignedObjectArray<btVector3>&,
   btAlignedObjectArray<btVector3>&) */

void btGeometryUtil::getPlaneEquationsFromVertices
               (btAlignedObjectArray *param_1,btAlignedObjectArray *param_2)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  float *pfVar15;
  int iVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  long local_b8;
  
  uVar7 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar7) {
    iVar16 = 2;
    uVar14 = 1;
    uVar12 = 0;
    do {
      uVar1 = uVar12 + 1;
      if ((long)uVar1 < (long)(int)uVar7) {
        lVar10 = *(long *)(param_1 + 0x10);
        local_b8 = (long)iVar16;
        pfVar5 = (float *)(lVar10 + uVar12 * 0x10);
        pfVar2 = pfVar5 + 1;
        pfVar3 = pfVar5 + 2;
        uVar12 = uVar14;
        do {
          uVar4 = uVar12 + 1;
          if ((long)uVar4 < (long)(int)uVar7) {
            pfVar6 = (float *)(lVar10 + uVar12 * 0x10);
            lVar17 = local_b8;
            do {
              pfVar15 = (float *)(lVar10 + lVar17 * 0x10);
              fVar18 = *pfVar6 - *pfVar5;
              fVar21 = *pfVar15 - *pfVar5;
              fVar22 = pfVar6[1] - *pfVar2;
              fVar24 = pfVar6[2] - *pfVar3;
              fVar23 = pfVar15[1] - *pfVar2;
              fVar25 = pfVar15[2] - *pfVar3;
              fVar26 = fVar22 * fVar25 - fVar24 * fVar23;
              fVar24 = fVar24 * fVar21 - fVar18 * fVar25;
              fVar18 = fVar18 * fVar23 - fVar22 * fVar21;
              fVar21 = fVar18 * fVar18 + fVar26 * fVar26 + fVar24 * fVar24;
              if (0.0001 < fVar21) {
                fVar22 = SQRT(fVar21);
                if (NAN(fVar22)) {
                  fVar22 = sqrtf(fVar21);
                }
                iVar9 = *(int *)(param_2 + 4);
                fVar22 = 1.0 / fVar22;
                fVar25 = fVar26 * fVar22;
                fVar23 = fVar24 * fVar22;
                fVar22 = fVar18 * fVar22;
                if (0 < iVar9) {
                  lVar10 = 0;
                  pfVar15 = (float *)(*(long *)(param_2 + 0x10) + 8);
                  do {
                    if (0.999 < fVar25 * pfVar15[-2] + fVar23 * pfVar15[-1] + fVar22 * *pfVar15)
                    goto code_r0x0126c620;
                    lVar10 = lVar10 + 1;
                    pfVar15 = pfVar15 + 4;
                  } while (lVar10 < iVar9);
                }
                fVar19 = fVar25 * *pfVar5 + fVar23 * *pfVar2 + fVar22 * *pfVar3;
                if (0 < *(int *)(param_1 + 4)) {
                  lVar10 = 0;
                  pfVar15 = (float *)(*(long *)(param_1 + 0x10) + 8);
                  do {
                    if (0.0 < ((fVar25 * pfVar15[-2] + fVar23 * pfVar15[-1] + fVar22 * *pfVar15) -
                              fVar19) + -0.01) goto code_r0x0126c620;
                    lVar10 = lVar10 + 1;
                    pfVar15 = pfVar15 + 4;
                  } while (lVar10 < *(int *)(param_1 + 4));
                }
                if (iVar9 == *(int *)(param_2 + 8)) {
                  uVar8 = iVar9 << 1;
                  if (iVar9 == 0) {
                    uVar8 = 1;
                  }
                  if (iVar9 < (int)uVar8) {
                    if (uVar8 == 0) {
                      lVar10 = 0;
                    }
                    else {
                      lVar10 = btAlignedAllocInternal
                                         (-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 |
                                          (ulong)uVar8 << 4,0x10);
                      iVar9 = *(int *)(param_2 + 4);
                    }
                    if (0 < iVar9) {
                      lVar13 = 0;
                      lVar11 = (long)iVar9;
                      do {
                        lVar11 = lVar11 + -1;
                        uVar20 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar13);
                        ((undefined8 *)(lVar10 + lVar13))[1] =
                             ((undefined8 *)(*(long *)(param_2 + 0x10) + lVar13))[1];
                        *(undefined8 *)(lVar10 + lVar13) = uVar20;
                        lVar13 = lVar13 + 0x10;
                      } while (lVar11 != 0);
                    }
                    if (*(void **)(param_2 + 0x10) != (void *)0x0) {
                      if (param_2[0x18] != (btAlignedObjectArray)0x0) {
                        btAlignedFreeInternal(*(void **)(param_2 + 0x10));
                      }
                      *(undefined8 *)(param_2 + 0x10) = 0;
                    }
                    param_2[0x18] = (btAlignedObjectArray)0x1;
                    *(long *)(param_2 + 0x10) = lVar10;
                    *(uint *)(param_2 + 8) = uVar8;
                    iVar9 = *(int *)(param_2 + 4);
                  }
                }
                pfVar15 = (float *)(*(long *)(param_2 + 0x10) + (long)iVar9 * 0x10);
                *pfVar15 = fVar25;
                pfVar15[1] = fVar23;
                pfVar15[2] = fVar22;
                pfVar15[3] = -fVar19;
                *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
              }
code_r0x0126c620:
              if (0.0001 < fVar21) {
                fVar22 = SQRT(fVar21);
                if (NAN(fVar22)) {
                  fVar22 = sqrtf(fVar21);
                }
                iVar9 = *(int *)(param_2 + 4);
                fVar22 = 1.0 / fVar22;
                fVar23 = -(fVar26 * fVar22);
                fVar21 = -(fVar24 * fVar22);
                fVar18 = -(fVar18 * fVar22);
                if (0 < iVar9) {
                  lVar10 = 0;
                  pfVar15 = (float *)(*(long *)(param_2 + 0x10) + 8);
                  do {
                    if (0.999 < pfVar15[-2] * fVar23 + pfVar15[-1] * fVar21 + *pfVar15 * fVar18)
                    goto LAB_0126c7f0;
                    lVar10 = lVar10 + 1;
                    pfVar15 = pfVar15 + 4;
                  } while (lVar10 < iVar9);
                }
                fVar22 = *pfVar5 * fVar23 + *pfVar2 * fVar21 + *pfVar3 * fVar18;
                if (0 < *(int *)(param_1 + 4)) {
                  lVar10 = 0;
                  pfVar15 = (float *)(*(long *)(param_1 + 0x10) + 8);
                  do {
                    if (0.0 < ((pfVar15[-2] * fVar23 + pfVar15[-1] * fVar21 + *pfVar15 * fVar18) -
                              fVar22) + -0.01) goto LAB_0126c7f0;
                    lVar10 = lVar10 + 1;
                    pfVar15 = pfVar15 + 4;
                  } while (lVar10 < *(int *)(param_1 + 4));
                }
                if (iVar9 == *(int *)(param_2 + 8)) {
                  uVar8 = iVar9 << 1;
                  if (iVar9 == 0) {
                    uVar8 = 1;
                  }
                  if (iVar9 < (int)uVar8) {
                    if (uVar8 == 0) {
                      lVar10 = 0;
                    }
                    else {
                      lVar10 = btAlignedAllocInternal
                                         (-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 |
                                          (ulong)uVar8 << 4,0x10);
                      iVar9 = *(int *)(param_2 + 4);
                    }
                    if (0 < iVar9) {
                      lVar13 = 0;
                      lVar11 = (long)iVar9;
                      do {
                        lVar11 = lVar11 + -1;
                        uVar20 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar13);
                        ((undefined8 *)(lVar10 + lVar13))[1] =
                             ((undefined8 *)(*(long *)(param_2 + 0x10) + lVar13))[1];
                        *(undefined8 *)(lVar10 + lVar13) = uVar20;
                        lVar13 = lVar13 + 0x10;
                      } while (lVar11 != 0);
                    }
                    if (*(void **)(param_2 + 0x10) != (void *)0x0) {
                      if (param_2[0x18] != (btAlignedObjectArray)0x0) {
                        btAlignedFreeInternal(*(void **)(param_2 + 0x10));
                      }
                      *(undefined8 *)(param_2 + 0x10) = 0;
                    }
                    param_2[0x18] = (btAlignedObjectArray)0x1;
                    *(long *)(param_2 + 0x10) = lVar10;
                    *(uint *)(param_2 + 8) = uVar8;
                    iVar9 = *(int *)(param_2 + 4);
                  }
                }
                pfVar15 = (float *)(*(long *)(param_2 + 0x10) + (long)iVar9 * 0x10);
                *pfVar15 = fVar23;
                pfVar15[1] = fVar21;
                pfVar15[2] = fVar18;
                pfVar15[3] = -fVar22;
                *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
              }
LAB_0126c7f0:
              lVar17 = lVar17 + 1;
              if (uVar7 == (uint)lVar17) break;
              lVar10 = *(long *)(param_1 + 0x10);
            } while( true );
          }
          if (uVar4 == uVar7) break;
          lVar10 = *(long *)(param_1 + 0x10);
          local_b8 = local_b8 + 1;
          uVar12 = uVar4;
        } while( true );
      }
      iVar16 = iVar16 + 1;
      uVar14 = uVar14 + 1;
      uVar12 = uVar1;
    } while (uVar1 != uVar7);
  }
  return;
}

