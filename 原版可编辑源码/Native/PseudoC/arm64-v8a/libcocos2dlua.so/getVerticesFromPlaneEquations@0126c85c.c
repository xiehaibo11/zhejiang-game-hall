
/* btGeometryUtil::getVerticesFromPlaneEquations(btAlignedObjectArray<btVector3> const&,
   btAlignedObjectArray<btVector3>&) */

void btGeometryUtil::getVerticesFromPlaneEquations
               (btAlignedObjectArray *param_1,btAlignedObjectArray *param_2)

{
  ulong uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  long lVar16;
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
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  uVar5 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar5) {
    iVar15 = 2;
    uVar12 = 1;
    uVar11 = 0;
    do {
      uVar1 = uVar11 + 1;
      if ((long)uVar1 < (long)(int)uVar5) {
        lVar8 = *(long *)(param_1 + 0x10);
        lVar14 = (long)iVar15;
        pfVar3 = (float *)(lVar8 + uVar11 * 0x10);
        uVar11 = uVar12;
        do {
          uVar2 = uVar11 + 1;
          if ((long)uVar2 < (long)(int)uVar5) {
            pfVar4 = (float *)(lVar8 + uVar11 * 0x10);
            lVar16 = lVar14;
            do {
              pfVar9 = (float *)(lVar8 + lVar16 * 0x10);
              fVar25 = pfVar4[1];
              fVar26 = pfVar4[2];
              fVar23 = pfVar9[1];
              fVar21 = pfVar9[2];
              fVar24 = *pfVar9;
              fVar27 = *pfVar4;
              fVar17 = fVar25 * fVar21 - fVar26 * fVar23;
              fVar19 = fVar26 * fVar24 - fVar21 * fVar27;
              fVar20 = fVar23 * fVar27 - fVar25 * fVar24;
              if (0.0001 < fVar20 * fVar20 + fVar17 * fVar17 + fVar19 * fVar19) {
                fVar29 = pfVar3[2];
                fVar30 = pfVar3[1];
                fVar31 = *pfVar3;
                fVar22 = fVar23 * fVar29 - fVar21 * fVar30;
                fVar21 = fVar21 * fVar31 - fVar24 * fVar29;
                fVar23 = fVar24 * fVar30 - fVar23 * fVar31;
                if (0.0001 < fVar23 * fVar23 + fVar22 * fVar22 + fVar21 * fVar21) {
                  fVar28 = fVar26 * fVar30 - fVar25 * fVar29;
                  fVar24 = fVar27 * fVar29 - fVar26 * fVar31;
                  fVar25 = fVar25 * fVar31 - fVar27 * fVar30;
                  if ((0.0001 < fVar25 * fVar25 + fVar28 * fVar28 + fVar24 * fVar24) &&
                     (fVar26 = fVar29 * fVar20 + fVar30 * fVar19 + fVar17 * fVar31,
                     1e-06 < ABS(fVar26))) {
                    fVar29 = pfVar3[3];
                    fVar31 = pfVar4[3];
                    fVar26 = -1.0 / fVar26;
                    fVar30 = *(float *)(lVar8 + lVar16 * 0x10 + 0xc);
                    fVar27 = fVar26 * (fVar28 * fVar30 + fVar17 * fVar29 + fVar22 * fVar31);
                    fVar17 = fVar26 * (fVar24 * fVar30 + fVar19 * fVar29 + fVar21 * fVar31);
                    fVar26 = fVar26 * (fVar25 * fVar30 + fVar20 * fVar29 + fVar23 * fVar31);
                    if (0 < *(int *)(param_1 + 4)) {
                      lVar13 = 0;
                      pfVar9 = (float *)(lVar8 + 8);
                      do {
                        if (0.0 < pfVar9[1] +
                                  fVar27 * pfVar9[-2] + fVar17 * pfVar9[-1] + fVar26 * *pfVar9 +
                                  -0.01) goto LAB_0126cbc8;
                        lVar13 = lVar13 + 1;
                        pfVar9 = pfVar9 + 4;
                      } while (lVar13 < *(int *)(param_1 + 4));
                    }
                    iVar7 = *(int *)(param_2 + 4);
                    if (iVar7 == *(int *)(param_2 + 8)) {
                      uVar6 = iVar7 << 1;
                      if (iVar7 == 0) {
                        uVar6 = 1;
                      }
                      if (iVar7 < (int)uVar6) {
                        if (uVar6 == 0) {
                          lVar8 = 0;
                        }
                        else {
                          lVar8 = btAlignedAllocInternal
                                            (-(ulong)(uVar6 >> 0x1f) & 0xfffffff000000000 |
                                             (ulong)uVar6 << 4,0x10);
                          iVar7 = *(int *)(param_2 + 4);
                        }
                        if (0 < iVar7) {
                          lVar13 = 0;
                          lVar10 = (long)iVar7;
                          do {
                            lVar10 = lVar10 + -1;
                            uVar18 = *(undefined8 *)(*(long *)(param_2 + 0x10) + lVar13);
                            ((undefined8 *)(lVar8 + lVar13))[1] =
                                 ((undefined8 *)(*(long *)(param_2 + 0x10) + lVar13))[1];
                            *(undefined8 *)(lVar8 + lVar13) = uVar18;
                            lVar13 = lVar13 + 0x10;
                          } while (lVar10 != 0);
                        }
                        if (*(void **)(param_2 + 0x10) != (void *)0x0) {
                          if (param_2[0x18] != (btAlignedObjectArray)0x0) {
                            btAlignedFreeInternal(*(void **)(param_2 + 0x10));
                          }
                          *(undefined8 *)(param_2 + 0x10) = 0;
                        }
                        param_2[0x18] = (btAlignedObjectArray)0x1;
                        *(long *)(param_2 + 0x10) = lVar8;
                        iVar7 = *(int *)(param_2 + 4);
                        *(uint *)(param_2 + 8) = uVar6;
                      }
                    }
                    pfVar9 = (float *)(*(long *)(param_2 + 0x10) + (long)iVar7 * 0x10);
                    *pfVar9 = fVar27;
                    pfVar9[1] = fVar17;
                    pfVar9[2] = fVar26;
                    pfVar9[3] = 0.0;
                    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
                  }
                }
              }
LAB_0126cbc8:
              lVar16 = lVar16 + 1;
              if (uVar5 == (uint)lVar16) break;
              lVar8 = *(long *)(param_1 + 0x10);
            } while( true );
          }
          if (uVar2 == uVar5) break;
          lVar8 = *(long *)(param_1 + 0x10);
          lVar14 = lVar14 + 1;
          uVar11 = uVar2;
        } while( true );
      }
      iVar15 = iVar15 + 1;
      uVar12 = uVar12 + 1;
      uVar11 = uVar1;
    } while (uVar1 != uVar5);
  }
  return;
}

