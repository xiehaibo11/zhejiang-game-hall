
/* btQuantizedBvh::walkStacklessTreeAgainstRay(btNodeOverlapCallback*, btVector3 const&, btVector3
   const&, btVector3 const&, btVector3 const&, int, int) const */

void btQuantizedBvh::walkStacklessTreeAgainstRay
               (btNodeOverlapCallback *param_1,btVector3 *param_2,btVector3 *param_3,
               btVector3 *param_4,btVector3 *param_5,int param_6,int param_7)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  long lVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float local_c0 [4];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  
  pfVar5 = (float *)(ulong)(uint)param_6;
  fVar22 = *(float *)param_3;
  fVar23 = *(float *)(param_3 + 4);
  fVar25 = *(float *)param_4;
  fVar21 = *(float *)(param_4 + 4);
  fVar24 = *(float *)(param_3 + 8);
  fVar26 = *(float *)(param_4 + 8);
  fVar17 = fVar25 - fVar22;
  fVar27 = fVar21 - fVar23;
  fVar20 = fVar26 - fVar24;
  pfVar7 = *(float **)(param_1 + 0x78);
  fVar32 = *(float *)param_5;
  fVar33 = *(float *)(param_5 + 4);
  fVar34 = *(float *)(param_5 + 8);
  fVar35 = *pfVar5;
  fVar36 = pfVar5[1];
  fVar37 = pfVar5[2];
  fVar12 = fVar17 * fVar17 + fVar27 * fVar27 + fVar20 * fVar20;
  fVar10 = SQRT(fVar12);
  if (NAN(fVar10)) {
    fVar10 = sqrtf(fVar12);
  }
  fVar12 = 1e+18;
  fVar10 = 1.0 / fVar10;
  fVar27 = fVar27 * fVar10;
  fVar17 = fVar17 * fVar10;
  fVar20 = fVar20 * fVar10;
  fVar10 = fVar12;
  if (fVar27 != 0.0) {
    fVar10 = 1.0 / fVar27;
  }
  fVar31 = fVar12;
  if (fVar20 != 0.0) {
    fVar31 = 1.0 / fVar20;
  }
  fVar15 = fVar25;
  if (fVar22 <= fVar25) {
    fVar15 = fVar22;
  }
  fVar18 = fVar21;
  if (fVar23 <= fVar21) {
    fVar18 = fVar23;
  }
  fVar19 = fVar26;
  if (fVar24 <= fVar26) {
    fVar19 = fVar24;
  }
  if (fVar25 <= fVar22) {
    fVar25 = fVar22;
  }
  if (fVar21 <= fVar23) {
    fVar21 = fVar23;
  }
  if (fVar26 <= fVar24) {
    fVar26 = fVar24;
  }
  if (fVar17 != 0.0) {
    fVar12 = 1.0 / fVar17;
  }
  if (*(int *)(param_1 + 0x3c) < 1) {
    iVar8 = 0;
  }
  else {
    fVar24 = *(float *)param_4;
    fVar28 = *(float *)(param_4 + 4);
    fVar29 = *(float *)param_3;
    fVar30 = *(float *)(param_3 + 4);
    fVar22 = *(float *)(param_4 + 8);
    fVar23 = *(float *)(param_3 + 8);
    iVar8 = 0;
    iVar9 = 0;
    do {
      local_c0[0] = (float)*(undefined8 *)pfVar7;
      local_c0[1] = (float)((ulong)*(undefined8 *)pfVar7 >> 0x20);
      local_c0[1] = local_c0[1] - pfVar5[1];
      local_c0[0] = local_c0[0] - *pfVar5;
      local_c0[2] = (float)*(undefined8 *)(pfVar7 + 2);
      local_c0[3] = (float)((ulong)*(undefined8 *)(pfVar7 + 2) >> 0x20);
      local_c0[2] = local_c0[2] - pfVar5[2];
      local_b0 = (float)*(undefined8 *)(pfVar7 + 4);
      fStack_ac = (float)((ulong)*(undefined8 *)(pfVar7 + 4) >> 0x20);
      _local_b0 = CONCAT44(fStack_ac - *(float *)(param_5 + 4),local_b0 - *(float *)param_5);
      fStack_a8 = (float)*(undefined8 *)(pfVar7 + 6);
      _fStack_a8 = CONCAT44((int)((ulong)*(undefined8 *)(pfVar7 + 6) >> 0x20),
                            fStack_a8 - *(float *)(param_5 + 8));
      if ((pfVar7[4] < fVar15 + fVar32) || (fVar25 + fVar35 < *pfVar7)) {
        bVar1 = 0;
      }
      else {
        bVar1 = 1;
      }
      if ((pfVar7[6] < fVar19 + fVar34) || (fVar26 + fVar37 < pfVar7[2])) {
        bVar1 = 0;
      }
      iVar8 = iVar8 + 1;
      if (((pfVar7[5] < fVar18 + fVar33) || (fVar21 + fVar36 < pfVar7[1])) || ((bool)(bVar1 ^ 1))) {
LAB_0123b054:
        bVar2 = false;
        bVar4 = pfVar7[8] == -NAN;
LAB_0123b068:
        lVar6 = 1;
        fVar11 = 1.4013e-45;
        if ((!bVar4) && (!bVar2)) {
          fVar11 = pfVar7[8];
          lVar6 = (long)(int)fVar11;
        }
      }
      else {
        fVar13 = fVar12 * (local_c0[(ulong)(fVar12 >= 0.0) * 4] - *(float *)param_3);
        fVar11 = fVar10 * (*(float *)((ulong)(local_c0 + (ulong)(fVar10 < 0.0) * 4) | 4) -
                          *(float *)(param_3 + 4));
        if (fVar13 < fVar11) goto LAB_0123b054;
        fVar16 = fVar12 * (local_c0[(ulong)(fVar12 < 0.0) * 4] - *(float *)param_3);
        fVar14 = fVar10 * (*(float *)((ulong)(local_c0 + (ulong)(fVar10 >= 0.0) * 4) | 4) -
                          *(float *)(param_3 + 4));
        if (fVar14 < fVar16) goto LAB_0123b054;
        if (fVar11 <= fVar16) {
          fVar11 = fVar16;
        }
        if (fVar13 <= fVar14) {
          fVar14 = fVar13;
        }
        fVar13 = fVar31 * (local_c0[(ulong)(fVar31 < 0.0) * 4 + 2] - *(float *)(param_3 + 8));
        if ((fVar14 < fVar13) ||
           (fVar16 = fVar31 * (local_c0[(ulong)(fVar31 >= 0.0) * 4 + 2] - *(float *)(param_3 + 8)),
           fVar16 < fVar11)) goto LAB_0123b054;
        if (fVar13 <= fVar11) {
          fVar13 = fVar11;
        }
        if (fVar14 <= fVar16) {
          fVar16 = fVar14;
        }
        bVar3 = fVar13 < fVar17 * (fVar24 - fVar29) + fVar27 * (fVar28 - fVar30) +
                         fVar20 * (fVar22 - fVar23);
        bVar2 = bVar3 && 0.0 < fVar16;
        bVar4 = pfVar7[8] == -NAN;
        if ((!bVar3 || 0.0 >= fVar16) || (pfVar7[8] != -NAN)) goto LAB_0123b068;
        (**(code **)(*(long *)param_2 + 0x10))(param_2,pfVar7[9],pfVar7[10]);
        lVar6 = 1;
        fVar11 = 1.4013e-45;
      }
      iVar9 = (int)fVar11 + iVar9;
      pfVar7 = pfVar7 + lVar6 * 0x10;
    } while (iVar9 < *(int *)(param_1 + 0x3c));
  }
  if (maxIterations < iVar8) {
    maxIterations = iVar8;
  }
  return;
}

