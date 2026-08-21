
void FUN_01236700(long param_1,long param_2)

{
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  float *pfVar19;
  long lVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float fVar24;
  float fVar25;
  
  uVar11 = (ulong)*(uint *)(param_2 + 4);
  if (1 < (int)*(uint *)(param_2 + 4)) {
    do {
      if ((int)uVar11 < 1) {
        iVar12 = -1;
        iVar10 = -1;
      }
      else {
        lVar14 = (long)(int)uVar11;
        iVar10 = -1;
        lVar17 = 1;
        iVar12 = -1;
        lVar15 = 0;
        fVar24 = 3.4028235e+38;
        do {
          lVar1 = lVar15 + 1;
          if (lVar14 <= lVar1) break;
          pfVar19 = *(float **)(*(long *)(param_2 + 0x10) + lVar15 * 8);
          pfVar22 = pfVar19 + 4;
          lVar20 = lVar17;
          do {
            pfVar21 = *(float **)(*(long *)(param_2 + 0x10) + lVar20 * 8);
            pfVar23 = pfVar19;
            if (*pfVar21 <= *pfVar19) {
              pfVar23 = pfVar21;
            }
            pfVar9 = pfVar21 + 4;
            pfVar13 = pfVar22;
            if (*pfVar22 <= *pfVar9) {
              pfVar13 = pfVar9;
            }
            pfVar2 = pfVar19;
            if (pfVar21[1] <= pfVar19[1]) {
              pfVar2 = pfVar21;
            }
            pfVar3 = pfVar22;
            if (pfVar19[5] <= pfVar21[5]) {
              pfVar3 = pfVar9;
            }
            pfVar4 = pfVar19;
            if (pfVar21[2] <= pfVar19[2]) {
              pfVar4 = pfVar21;
            }
            pfVar5 = pfVar22;
            if (pfVar19[6] <= pfVar21[6]) {
              pfVar5 = pfVar9;
            }
            fVar25 = (pfVar5[2] - pfVar4[2]) +
                     (pfVar3[1] - pfVar2[1]) +
                     (*pfVar13 - *pfVar23) +
                     (*pfVar13 - *pfVar23) * (pfVar3[1] - pfVar2[1]) * (pfVar5[2] - pfVar4[2]);
            iVar7 = (int)lVar15;
            iVar8 = (int)lVar20;
            if (fVar24 <= fVar25) {
              fVar25 = fVar24;
              iVar7 = iVar12;
              iVar8 = iVar10;
            }
            iVar10 = iVar8;
            iVar12 = iVar7;
            fVar24 = fVar25;
            lVar20 = lVar20 + 1;
          } while (lVar20 < lVar14);
          lVar17 = lVar17 + 1;
          lVar15 = lVar1;
        } while (lVar1 < lVar14);
      }
      pfVar19 = *(float **)(param_1 + 8);
      pfVar23 = *(float **)(*(long *)(param_2 + 0x10) + (long)iVar12 * 8);
      pfVar22 = *(float **)(*(long *)(param_2 + 0x10) + (long)iVar10 * 8);
      if (pfVar19 == (float *)0x0) {
        pfVar19 = (float *)btAlignedAllocInternal(0x38,0x10);
        pfVar19[10] = 0.0;
        pfVar19[0xb] = 0.0;
        pfVar19[0xc] = 0.0;
        pfVar19[0xd] = 0.0;
        pfVar19[6] = 0.0;
        pfVar19[7] = 0.0;
        pfVar19[8] = 0.0;
        pfVar19[9] = 0.0;
        pfVar19[2] = 0.0;
        pfVar19[3] = 0.0;
        pfVar19[4] = 0.0;
        pfVar19[5] = 0.0;
        pfVar19[0] = 0.0;
        pfVar19[1] = 0.0;
      }
      else {
        *(undefined8 *)(param_1 + 8) = 0;
      }
      pfVar19[8] = 0.0;
      pfVar19[9] = 0.0;
      pfVar21 = pfVar23;
      if (*pfVar22 <= *pfVar23) {
        pfVar21 = pfVar22;
      }
      *pfVar19 = *pfVar21;
      pfVar13 = pfVar23 + 4;
      pfVar9 = pfVar22 + 4;
      pfVar21 = pfVar13;
      if (*pfVar13 <= *pfVar9) {
        pfVar21 = pfVar9;
      }
      pfVar19[4] = *pfVar21;
      pfVar21 = pfVar23;
      if (pfVar22[1] <= pfVar23[1]) {
        pfVar21 = pfVar22;
      }
      pfVar19[1] = pfVar21[1];
      pfVar21 = pfVar13;
      if (pfVar23[5] <= pfVar22[5]) {
        pfVar21 = pfVar9;
      }
      pfVar19[5] = pfVar21[1];
      pfVar21 = pfVar23;
      if (pfVar22[2] <= pfVar23[2]) {
        pfVar21 = pfVar22;
      }
      pfVar19[2] = pfVar21[2];
      if (pfVar23[6] <= pfVar22[6]) {
        pfVar13 = pfVar9;
      }
      fVar24 = pfVar13[2];
      *(float **)(pfVar19 + 10) = pfVar23;
      *(float **)(pfVar19 + 0xc) = pfVar22;
      pfVar19[6] = fVar24;
      *(float **)(pfVar23 + 8) = pfVar19;
      *(float **)(pfVar22 + 8) = pfVar19;
      *(float **)(*(long *)(param_2 + 0x10) + (long)iVar12 * 8) = pfVar19;
      iVar12 = *(int *)(param_2 + 4);
      lVar17 = *(long *)(param_2 + 0x10);
      uVar6 = iVar12 - 1;
      uVar11 = (ulong)uVar6;
      uVar16 = -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3;
      uVar18 = *(undefined8 *)(lVar17 + (long)iVar10 * 8);
      *(undefined8 *)(lVar17 + (long)iVar10 * 8) = *(undefined8 *)(lVar17 + uVar16);
      *(undefined8 *)(*(long *)(param_2 + 0x10) + uVar16) = uVar18;
      *(uint *)(param_2 + 4) = uVar6;
    } while (2 < iVar12);
  }
  return;
}

