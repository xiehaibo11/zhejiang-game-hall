
/* btQuantizedBvh::walkStacklessQuantizedTreeAgainstRay(btNodeOverlapCallback*, btVector3 const&,
   btVector3 const&, btVector3 const&, btVector3 const&, int, int) const */

void __thiscall
btQuantizedBvh::walkStacklessQuantizedTreeAgainstRay
          (btQuantizedBvh *this,btNodeOverlapCallback *param_1,btVector3 *param_2,btVector3 *param_3
          ,btVector3 *param_4,btVector3 *param_5,int param_6,int param_7)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
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
  float local_a0 [5];
  float local_8c;
  float local_88;
  undefined4 local_84;
  
  fVar18 = *(float *)param_3 - *(float *)param_2;
  fVar19 = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
  fVar21 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  lVar5 = *(long *)(this + 0xb8);
  fVar10 = fVar18 * fVar18 + fVar19 * fVar19 + fVar21 * fVar21;
  fVar8 = SQRT(fVar10);
  if (NAN(fVar8)) {
    fVar8 = sqrtf(fVar10);
  }
  fVar34 = 1e+18;
  fVar8 = 1.0 / fVar8;
  fVar11 = *(float *)param_3;
  fVar13 = *(float *)(param_3 + 4);
  fVar16 = *(float *)param_2;
  fVar17 = *(float *)(param_2 + 4);
  fVar18 = fVar18 * fVar8;
  fVar19 = fVar19 * fVar8;
  fVar10 = *(float *)(param_3 + 8);
  fVar1 = *(float *)(param_2 + 8);
  fVar21 = fVar21 * fVar8;
  fVar8 = fVar34;
  if (fVar18 != 0.0) {
    fVar8 = 1.0 / fVar18;
  }
  fVar20 = fVar34;
  if (fVar19 != 0.0) {
    fVar20 = 1.0 / fVar19;
  }
  if (fVar21 != 0.0) {
    fVar34 = 1.0 / fVar21;
  }
  fVar27 = fVar11;
  if (fVar16 <= fVar11) {
    fVar27 = fVar16;
  }
  fVar23 = *(float *)(this + 8);
  fVar24 = *(float *)(this + 0xc);
  fVar29 = fVar13;
  if (fVar17 <= fVar13) {
    fVar29 = fVar17;
  }
  fVar28 = fVar10;
  if (fVar1 <= fVar10) {
    fVar28 = fVar1;
  }
  fVar25 = *(float *)(this + 0x10);
  fVar30 = fVar11;
  if (fVar11 <= fVar16) {
    fVar30 = fVar16;
  }
  fVar32 = *(float *)(this + 0x18);
  fVar33 = *(float *)(this + 0x1c);
  fVar31 = fVar13;
  if (fVar13 <= fVar17) {
    fVar31 = fVar17;
  }
  fVar14 = fVar10;
  if (fVar10 <= fVar1) {
    fVar14 = fVar1;
  }
  fVar22 = *(float *)(this + 0x20);
  fVar26 = fVar23;
  if (fVar23 <= fVar27 + *(float *)param_4) {
    fVar26 = fVar27 + *(float *)param_4;
  }
  fVar27 = fVar24;
  if (fVar24 <= fVar29 + *(float *)(param_4 + 4)) {
    fVar27 = fVar29 + *(float *)(param_4 + 4);
  }
  fVar29 = fVar25;
  if (fVar25 <= fVar28 + *(float *)(param_4 + 8)) {
    fVar29 = fVar28 + *(float *)(param_4 + 8);
  }
  fVar28 = fVar32;
  if (fVar26 <= fVar32) {
    fVar28 = fVar26;
  }
  fVar26 = fVar33;
  if (fVar27 <= fVar33) {
    fVar26 = fVar27;
  }
  fVar27 = fVar22;
  if (fVar29 <= fVar22) {
    fVar27 = fVar29;
  }
  fVar29 = fVar23;
  if (fVar23 <= fVar30 + *(float *)param_5) {
    fVar29 = fVar30 + *(float *)param_5;
  }
  fVar30 = fVar24;
  if (fVar24 <= fVar31 + *(float *)(param_5 + 4)) {
    fVar30 = fVar31 + *(float *)(param_5 + 4);
  }
  fVar31 = fVar25;
  if (fVar25 <= fVar14 + *(float *)(param_5 + 8)) {
    fVar31 = fVar14 + *(float *)(param_5 + 8);
  }
  if (fVar29 <= fVar32) {
    fVar32 = fVar29;
  }
  if (fVar30 <= fVar33) {
    fVar33 = fVar30;
  }
  if (fVar31 <= fVar22) {
    fVar22 = fVar31;
  }
  if (param_6 < param_7) {
    fVar29 = *(float *)(this + 0x28);
    fVar30 = *(float *)(this + 0x2c);
    fVar31 = *(float *)(this + 0x30);
    puVar7 = (ushort *)(lVar5 + (long)param_6 * 0x10);
    iVar6 = 0;
    do {
      bVar2 = false;
      iVar6 = iVar6 + 1;
      if ((((((uint)puVar7[3] < ((int)((fVar28 - fVar23) * fVar29) & 0xfffeU)) ||
            (((int)((fVar32 - fVar23) * fVar29 + 1.0) | 1U) < (uint)*puVar7)) ||
           ((uint)puVar7[5] < ((int)((fVar27 - fVar25) * fVar31) & 0xfffeU))) ||
          ((((int)((fVar22 - fVar25) * fVar31 + 1.0) | 1U) < (uint)puVar7[2] ||
           ((uint)puVar7[4] < ((int)((fVar26 - fVar24) * fVar30) & 0xfffeU))))) ||
         (((int)((fVar33 - fVar24) * fVar30 + 1.0) | 1U) < (uint)puVar7[1])) {
LAB_0123b5a8:
        lVar5 = 1;
        iVar4 = 1;
        if ((*(int *)(puVar7 + 6) < 0) && (!bVar2)) {
          lVar5 = -(long)*(int *)(puVar7 + 6);
          iVar4 = (int)lVar5;
        }
      }
      else {
        local_a0[3] = 0.0;
        local_84 = 0;
        local_a0[0] = ((float)(uint)*puVar7 / *(float *)(this + 0x28) + *(float *)(this + 8)) -
                      *(float *)param_5;
        local_a0[1] = ((float)(uint)puVar7[1] / *(float *)(this + 0x2c) + *(float *)(this + 0xc)) -
                      *(float *)(param_5 + 4);
        local_a0[2] = ((float)(uint)puVar7[2] / *(float *)(this + 0x30) + *(float *)(this + 0x10)) -
                      *(float *)(param_5 + 8);
        fVar14 = (float)NEON_ucvtf((uint)puVar7[3]);
        local_a0[4] = (fVar14 / *(float *)(this + 0x28) + *(float *)(this + 8)) - *(float *)param_4;
        fVar14 = (float)NEON_ucvtf((uint)puVar7[4]);
        local_8c = (fVar14 / *(float *)(this + 0x2c) + *(float *)(this + 0xc)) -
                   *(float *)(param_4 + 4);
        fVar14 = (float)NEON_ucvtf((uint)puVar7[5]);
        local_88 = (fVar14 / *(float *)(this + 0x30) + *(float *)(this + 0x10)) -
                   *(float *)(param_4 + 8);
        fVar9 = fVar8 * (local_a0[(ulong)(fVar8 >= 0.0) * 4] - *(float *)param_2);
        fVar14 = fVar20 * (*(float *)((ulong)(local_a0 + (ulong)(fVar20 < 0.0) * 4) | 4) -
                          *(float *)(param_2 + 4));
        if (fVar9 < fVar14) {
LAB_0123b5a4:
          bVar2 = false;
          goto LAB_0123b5a8;
        }
        fVar15 = fVar8 * (local_a0[(ulong)(fVar8 < 0.0) * 4] - *(float *)param_2);
        fVar12 = fVar20 * (*(float *)((ulong)(local_a0 + (ulong)(fVar20 >= 0.0) * 4) | 4) -
                          *(float *)(param_2 + 4));
        if (fVar12 < fVar15) goto LAB_0123b5a4;
        if (fVar14 <= fVar15) {
          fVar14 = fVar15;
        }
        if (fVar9 <= fVar12) {
          fVar12 = fVar9;
        }
        fVar9 = fVar34 * (local_a0[(ulong)(fVar34 < 0.0) * 4 + 2] - *(float *)(param_2 + 8));
        if ((fVar12 < fVar9) ||
           (fVar15 = fVar34 * (local_a0[(ulong)(fVar34 >= 0.0) * 4 + 2] - *(float *)(param_2 + 8)),
           fVar15 < fVar14)) goto LAB_0123b5a4;
        if (fVar9 <= fVar14) {
          fVar9 = fVar14;
        }
        if (fVar12 <= fVar15) {
          fVar15 = fVar12;
        }
        bVar3 = fVar9 < fVar18 * (fVar11 - fVar16) + fVar19 * (fVar13 - fVar17) +
                        fVar21 * (fVar10 - fVar1);
        bVar2 = bVar3 && 0.0 < fVar15;
        if ((*(int *)(puVar7 + 6) < 0) || (!bVar3 || 0.0 >= fVar15)) goto LAB_0123b5a8;
        (**(code **)(*(long *)param_1 + 0x10))
                  (param_1,(int)*(uint *)(puVar7 + 6) >> 0x15,*(uint *)(puVar7 + 6) & 0x1fffff);
        lVar5 = 1;
        iVar4 = 1;
      }
      param_6 = iVar4 + param_6;
      puVar7 = puVar7 + lVar5 * 8;
    } while (param_6 < param_7);
  }
  else {
    iVar6 = 0;
  }
  if (maxIterations < iVar6) {
    maxIterations = iVar6;
  }
  return;
}

