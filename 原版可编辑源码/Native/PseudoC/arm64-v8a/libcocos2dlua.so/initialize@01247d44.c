
/* btConvexPolyhedron::initialize() */

void __thiscall btConvexPolyhedron::initialize(btConvexPolyhedron *this)

{
  float *pfVar1;
  ulong uVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short sVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  btConvexPolyhedron *pbVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  float *pfVar18;
  btConvexPolyhedron *pbVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined2 local_118;
  undefined2 local_116;
  btHashMap<btInternalVertexPair,btInternalEdge> abStack_110 [4];
  undefined8 local_10c;
  long local_100;
  undefined1 local_f8;
  undefined4 local_ec;
  undefined4 uStack_e8;
  long local_e0;
  undefined1 local_d8;
  undefined8 local_cc;
  long local_c0;
  undefined1 local_b8;
  undefined8 local_ac;
  long local_a0;
  undefined1 local_98;
  short local_88;
  short local_86;
  int local_84;
  
  local_f8 = 1;
  local_100 = 0;
  local_10c = 0;
  local_d8 = 1;
  local_e0 = 0;
  local_ec = 0;
  uStack_e8 = 0;
  local_b8 = 1;
  local_c0 = 0;
  local_cc = 0;
  local_98 = 1;
  local_a0 = 0;
  local_ac = 0;
  iVar10 = *(int *)(this + 0x2c);
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  if (0 < iVar10) {
    lVar22 = 0;
LAB_01247dd0:
    lVar14 = *(long *)(this + 0x38);
    uVar20 = *(uint *)(lVar14 + lVar22 * 0x30 + 4);
    if (0 < (int)uVar20) {
      uVar8 = 0;
      do {
        lVar15 = *(long *)(lVar14 + lVar22 * 0x30 + 0x10);
        uVar2 = uVar8 + 1;
        lVar14 = 0;
        if (uVar2 != uVar20) {
          lVar14 = (long)(int)uVar2;
        }
        uVar4 = *(uint *)(lVar15 + uVar8 * 4);
        uVar5 = *(uint *)(lVar15 + lVar14 * 4);
        sVar7 = (short)uVar4;
        local_86 = (short)uVar5;
        uVar9 = (int)sVar7;
        uVar13 = (int)local_86;
        local_88 = sVar7;
        if ((int)sVar7 < (int)local_86) {
          uVar9 = uVar5;
          uVar13 = uVar4;
          local_88 = local_86;
          local_86 = sVar7;
        }
        uVar4 = uVar13 * 0x10000 + (int)(short)uVar9 & local_cc._4_4_ - 1U;
        if (uVar4 < (uint)local_10c) {
          uVar4 = *(uint *)(local_100 + (long)(int)uVar4 * 4);
          while (uVar4 != 0xffffffff) {
            lVar14 = (long)(int)uVar4;
            if (((uVar9 & 0xffff) ==
                 (uint)*(ushort *)
                        (local_a0 +
                        (-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2))) &&
               ((uVar13 & 0xffff) == (uint)*(ushort *)(local_a0 + lVar14 * 4 + 2))) {
              lVar14 = local_c0 + lVar14 * 4;
              goto LAB_01247eb8;
            }
            uVar4 = *(uint *)(local_e0 + lVar14 * 4);
          }
        }
        lVar14 = 0;
LAB_01247eb8:
        pfVar18 = (float *)(*(long *)(this + 0x18) + (long)(short)uVar13 * 0x10);
        pfVar1 = (float *)(*(long *)(this + 0x18) + (long)(short)uVar9 * 0x10);
        fVar32 = *pfVar18 - *pfVar1;
        fVar30 = pfVar18[1] - pfVar1[1];
        fVar31 = pfVar18[2] - pfVar1[2];
        fVar25 = fVar32 * fVar32 + fVar30 * fVar30 + fVar31 * fVar31;
        fVar23 = SQRT(fVar25);
        if (NAN(fVar23)) {
          fVar23 = sqrtf(fVar25);
        }
        iVar10 = *(int *)(this + 0x4c);
        fVar23 = 1.0 / fVar23;
        fVar32 = fVar32 * fVar23;
        fVar30 = fVar30 * fVar23;
        fVar31 = fVar31 * fVar23;
        if (0 < iVar10) {
          lVar15 = 0;
          pfVar18 = (float *)(*(long *)(this + 0x58) + 4);
          do {
            if ((((ABS(pfVar18[-1] - fVar32) <= 1e-06) && (ABS(*pfVar18 - fVar30) <= 1e-06)) &&
                (ABS(pfVar18[1] - fVar31) <= 1e-06)) ||
               (((ABS(fVar32 + pfVar18[-1]) <= 1e-06 && (ABS(fVar30 + *pfVar18) <= 1e-06)) &&
                (ABS(fVar31 + pfVar18[1]) <= 1e-06)))) goto LAB_01248094;
            lVar15 = lVar15 + 1;
            pfVar18 = pfVar18 + 4;
          } while (lVar15 < iVar10);
        }
        if (iVar10 == *(int *)(this + 0x50)) {
          uVar4 = iVar10 << 1;
          if (iVar10 == 0) {
            uVar4 = 1;
          }
          if (iVar10 < (int)uVar4) {
            if (uVar4 == 0) {
              lVar15 = 0;
            }
            else {
              lVar15 = btAlignedAllocInternal
                                 (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4,
                                  0x10);
              iVar10 = *(int *)(this + 0x4c);
            }
            if (0 < iVar10) {
              lVar16 = 0;
              lVar11 = (long)iVar10;
              do {
                lVar11 = lVar11 + -1;
                uVar24 = *(undefined8 *)(*(long *)(this + 0x58) + lVar16);
                ((undefined8 *)(lVar15 + lVar16))[1] =
                     ((undefined8 *)(*(long *)(this + 0x58) + lVar16))[1];
                *(undefined8 *)(lVar15 + lVar16) = uVar24;
                lVar16 = lVar16 + 0x10;
              } while (lVar11 != 0);
            }
            if (*(void **)(this + 0x58) != (void *)0x0) {
              if (this[0x60] != (btConvexPolyhedron)0x0) {
                btAlignedFreeInternal(*(void **)(this + 0x58));
              }
              *(undefined8 *)(this + 0x58) = 0;
            }
            iVar10 = *(int *)(this + 0x4c);
            this[0x60] = (btConvexPolyhedron)0x1;
            *(long *)(this + 0x58) = lVar15;
            *(uint *)(this + 0x50) = uVar4;
          }
        }
        pfVar18 = (float *)(*(long *)(this + 0x58) + (long)iVar10 * 0x10);
        *pfVar18 = fVar32;
        pfVar18[1] = fVar30;
        pfVar18[2] = fVar31;
        pfVar18[3] = 0.0;
        *(int *)(this + 0x4c) = *(int *)(this + 0x4c) + 1;
LAB_01248094:
        if (lVar14 == 0) {
          local_116 = 0xffff;
          local_118 = (short)lVar22;
          btHashMap<btInternalVertexPair,btInternalEdge>::insert
                    (abStack_110,(btInternalVertexPair *)&local_88,(btInternalEdge *)&local_118);
        }
        else {
          *(short *)(lVar14 + 2) = (short)lVar22;
        }
        if ((long)(int)uVar20 <= (long)uVar2) goto LAB_012480c8;
        lVar14 = *(long *)(this + 0x38);
        uVar8 = uVar2;
      } while( true );
    }
    goto LAB_012480cc;
  }
LAB_012482b4:
  fVar23 = 0.0;
LAB_012482b8:
  *(undefined4 *)(this + 0x88) = 0x7f7fffff;
  fVar31 = *(float *)(this + 0x68);
  fVar32 = *(float *)(this + 0x6c);
  fVar26 = *(float *)(this + 0x70);
  fVar25 = 3.4028235e+38;
  fVar23 = 1.0 / fVar23;
  *(float *)(this + 0x68) = fVar23 * fVar31;
  *(float *)(this + 0x6c) = fVar23 * fVar32;
  *(float *)(this + 0x70) = fVar23 * fVar26;
  fVar30 = fVar25;
  if (0 < iVar10) {
    fVar30 = 3.4028235e+38;
    lVar22 = 0;
    pfVar18 = (float *)(*(long *)(this + 0x38) + 0x2c);
    do {
      fVar27 = ABS(*pfVar18 +
                   pfVar18[-3] * fVar23 * fVar31 + pfVar18[-2] * fVar23 * fVar32 +
                   pfVar18[-1] * fVar23 * fVar26);
      if (fVar27 < fVar30) {
        *(float *)(this + 0x88) = fVar27;
        fVar30 = fVar27;
      }
      lVar22 = lVar22 + 1;
      pfVar18 = pfVar18 + 0xc;
    } while (lVar22 < iVar10);
  }
  if (*(int *)(this + 0xc) < 1) {
    fVar27 = -3.4028235e+38;
    fVar26 = fVar25;
    fVar31 = fVar25;
    fVar23 = fVar27;
    fVar32 = fVar27;
  }
  else {
    fVar25 = 3.4028235e+38;
    fVar27 = -3.4028235e+38;
    lVar22 = 0;
    pfVar18 = (float *)(*(long *)(this + 0x18) + 4);
    fVar26 = fVar25;
    fVar31 = fVar25;
    fVar23 = fVar27;
    fVar32 = fVar27;
    do {
      fVar29 = pfVar18[-1];
      fVar33 = *pfVar18;
      lVar22 = lVar22 + 1;
      fVar28 = fVar29;
      if (fVar25 <= fVar29) {
        fVar28 = fVar25;
      }
      fVar25 = fVar28;
      if (fVar29 <= fVar23) {
        fVar29 = fVar23;
      }
      fVar23 = fVar29;
      fVar29 = pfVar18[1];
      fVar28 = fVar33;
      if (fVar31 <= fVar33) {
        fVar28 = fVar31;
      }
      fVar31 = fVar28;
      if (fVar33 <= fVar32) {
        fVar33 = fVar32;
      }
      fVar32 = fVar33;
      fVar28 = fVar29;
      if (fVar26 <= fVar29) {
        fVar28 = fVar26;
      }
      fVar26 = fVar28;
      if (fVar29 <= fVar27) {
        fVar29 = fVar27;
      }
      fVar27 = fVar29;
      pfVar18 = pfVar18 + 4;
    } while (lVar22 < *(int *)(this + 0xc));
  }
  fVar28 = fVar23 - fVar25;
  fVar29 = fVar32 - fVar31;
  *(undefined4 *)(this + 0x98) = 0;
  *(float *)(this + 0x8c) = fVar25 + fVar23;
  *(float *)(this + 0x90) = fVar31 + fVar32;
  *(float *)(this + 0x94) = fVar26 + fVar27;
  pbVar12 = this + 0x9c;
  *(float *)pbVar12 = fVar28;
  fVar23 = fVar29;
  if (fVar28 >= fVar29) {
    fVar23 = fVar28;
  }
  uVar20 = 2;
  if (fVar27 - fVar26 <= fVar23) {
    uVar20 = (uint)(fVar28 < fVar29);
  }
  *(float *)(this + 0xa0) = fVar29;
  *(float *)(this + 0xa4) = fVar27 - fVar26;
  *(undefined4 *)(this + 0xa8) = 0;
  fVar30 = fVar30 / 1.7320508;
  lVar22 = (ulong)uVar20 * 4;
  fVar23 = *(float *)(pbVar12 + lVar22);
  pbVar19 = this + 0x78;
  *(float *)pbVar19 = fVar30;
  *(float *)(this + 0x7c) = fVar30;
  *(float *)(this + 0x80) = fVar30;
  fVar25 = *(float *)(pbVar12 + lVar22) * 0.5;
  iVar10 = -1;
  *(float *)(pbVar19 + lVar22) = fVar25;
  do {
    uVar8 = testContainment();
    if ((uVar8 & 1) != 0) {
      uVar20 = 1 << (ulong)uVar20 & 3;
      pbVar12 = this + (ulong)(1 << (ulong)uVar20 & 3) * 4 + 0x78;
      fVar25 = (*(float *)(this + 0x88) - fVar30) * 0.0009765625;
      pbVar19 = this + (ulong)uVar20 * 4 + 0x78;
      iVar10 = -1;
      fVar23 = *(float *)pbVar12;
      goto LAB_012484dc;
    }
    iVar10 = iVar10 + 1;
    fVar25 = fVar25 - (fVar23 * 0.5 - fVar30) * 0.0009765625;
    *(float *)(pbVar19 + lVar22) = fVar25;
  } while (iVar10 < 0x3ff);
  *(float *)(this + 0x7c) = fVar30;
  *(float *)(this + 0x80) = fVar30;
  *(float *)(this + 0x78) = fVar30;
LAB_01248520:
  btHashMap<btInternalVertexPair,btInternalEdge>::~btHashMap(abStack_110);
  return;
LAB_012480c8:
  iVar10 = *(int *)(this + 0x2c);
LAB_012480cc:
  lVar22 = lVar22 + 1;
  if (iVar10 <= lVar22) goto code_r0x012480d8;
  goto LAB_01247dd0;
code_r0x012480d8:
  if (iVar10 < 1) goto LAB_012482b4;
  lVar22 = 0;
  fVar23 = 0.0;
  do {
    lVar14 = *(long *)(this + 0x38) + lVar22 * 0x30;
    iVar21 = *(int *)(lVar14 + 4);
    if (2 < iVar21) {
      piVar17 = *(int **)(lVar14 + 0x10);
      lVar15 = *(long *)(this + 0x18);
      uVar20 = iVar21 - 1;
      lVar14 = 0;
      pfVar18 = (float *)(lVar15 + (long)*piVar17 * 0x10);
      local_84 = iVar21;
      while( true ) {
        iVar10 = (int)lVar14 + 2;
        iVar6 = 0;
        if (iVar21 != 0) {
          iVar6 = iVar10 / iVar21;
        }
        pfVar1 = (float *)(lVar15 + (long)piVar17[lVar14 + 1] * 0x10);
        pfVar3 = (float *)(lVar15 + (long)piVar17[iVar10 - iVar6 * iVar21] * 0x10);
        fVar30 = pfVar18[1];
        fVar27 = pfVar18[2];
        fVar31 = *pfVar18 - *pfVar1;
        fVar25 = *pfVar18 - *pfVar3;
        fVar26 = fVar30 - pfVar1[1];
        fVar28 = fVar27 - pfVar1[2];
        fVar30 = fVar30 - pfVar3[1];
        fVar27 = fVar27 - pfVar3[2];
        fVar32 = fVar26 * fVar27 - fVar28 * fVar30;
        fVar27 = fVar28 * fVar25 - fVar31 * fVar27;
        fVar25 = fVar31 * fVar30 - fVar26 * fVar25;
        fVar30 = fVar25 * fVar25 + fVar32 * fVar32 + fVar27 * fVar27;
        fVar25 = SQRT(fVar30);
        if (NAN(fVar25)) {
          fVar25 = sqrtf(fVar30);
          iVar21 = local_84;
        }
        fVar30 = pfVar18[1];
        fVar31 = pfVar1[1];
        fVar26 = pfVar18[2];
        fVar27 = pfVar1[2];
        fVar32 = pfVar3[1];
        fVar28 = pfVar3[2];
        fVar25 = fVar25 * 0.5;
        fVar23 = fVar23 + fVar25;
        *(float *)(this + 0x68) =
             fVar25 * (*pfVar18 + *pfVar1 + *pfVar3) * 0.33333334 + *(float *)(this + 0x68);
        *(float *)(this + 0x6c) =
             fVar25 * (fVar30 + fVar31 + fVar32) * 0.33333334 + *(float *)(this + 0x6c);
        *(float *)(this + 0x70) =
             fVar25 * (fVar26 + fVar27 + fVar28) * 0.33333334 + *(float *)(this + 0x70);
        if ((ulong)uVar20 - 2 == lVar14) break;
        lVar14 = lVar14 + 1;
        piVar17 = *(int **)(*(long *)(this + 0x38) + lVar22 * 0x30 + 0x10);
        lVar15 = *(long *)(this + 0x18);
      }
      iVar10 = *(int *)(this + 0x2c);
    }
    lVar22 = lVar22 + 1;
  } while (lVar22 < iVar10);
  goto LAB_012482b8;
  while (iVar10 = iVar10 + 1, fVar23 = fVar31, iVar10 < 0x3ff) {
LAB_012484dc:
    fVar30 = *(float *)pbVar19;
    *(float *)pbVar19 = fVar25 + fVar30;
    fVar31 = fVar25 + *(float *)pbVar12;
    *(float *)pbVar12 = fVar31;
    uVar8 = testContainment();
    if ((uVar8 & 1) == 0) {
      *(float *)pbVar19 = fVar30;
      *(float *)pbVar12 = fVar23;
      break;
    }
  }
  goto LAB_01248520;
}

