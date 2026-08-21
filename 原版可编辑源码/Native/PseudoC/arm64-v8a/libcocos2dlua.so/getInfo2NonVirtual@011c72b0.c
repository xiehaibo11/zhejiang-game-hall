
/* btSliderConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2*, btTransform const&,
   btTransform const&, btVector3 const&, btVector3 const&, float, float) */

void __thiscall
btSliderConstraint::getInfo2NonVirtual
          (btSliderConstraint *this,btConstraintInfo2 *param_1,btTransform *param_2,
          btTransform *param_3,btVector3 *param_4,btVector3 *param_5,float param_6,float param_7)

{
  btSliderConstraint *pbVar1;
  uint uVar2;
  btSliderConstraint bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  float *pfVar16;
  undefined4 *puVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  float *pfVar24;
  ulong uVar25;
  float fVar26;
  undefined4 uVar27;
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
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float local_f4;
  undefined8 local_d0;
  float local_c8;
  float local_c0 [6];
  float local_a8;
  undefined4 local_a4;
  
  fVar29 = 1.0;
  if (this[0xcc] == (btSliderConstraint)0x0) {
    fVar29 = -1.0;
  }
  iVar20 = *(int *)(param_1 + 0x28);
  uVar25 = (ulong)iVar20;
  fVar48 = *(float *)(this + 0x3c0);
  fVar49 = *(float *)(this + 0x380);
  fVar50 = *(float *)(this + 0x3c4);
  fVar30 = *(float *)(this + 900);
  fVar32 = *(float *)(this + 0x3c8);
  fVar35 = *(float *)(this + 0x388);
  fVar38 = *(float *)(this + 0x350);
  fVar43 = *(float *)(this + 0x360);
  fVar39 = *(float *)(this + 0x370);
  fVar44 = *(float *)(this + 0x390);
  fVar45 = *(float *)(this + 0x3a0);
  fVar46 = *(float *)(this + 0x3b0);
  fVar37 = param_7 / (param_6 + param_7);
  if (param_6 + param_7 <= 0.0) {
    fVar37 = 0.5;
  }
  fVar47 = 1.0 - fVar37;
  if (this[0x49] == (btSliderConstraint)0x0) {
    local_c0[4] = *(float *)(this + 0x354);
    local_c0[5] = *(float *)(this + 0x364);
    local_a8 = *(float *)(this + 0x374);
    local_a4 = 0;
    local_c0[0] = *(float *)(this + 0x358);
    local_c0[1] = *(float *)(this + 0x368);
    local_c0[2] = *(float *)(this + 0x378);
    fVar26 = 0.0;
    lVar8 = 3;
    fVar40 = fVar38;
    fVar36 = fVar43;
    local_f4 = fVar39;
  }
  else {
    fVar40 = fVar37 * fVar38 + fVar47 * fVar44;
    fVar36 = fVar37 * fVar43 + fVar47 * fVar45;
    local_f4 = fVar37 * fVar39 + fVar47 * fVar46;
    fVar28 = fVar40 * fVar40 + fVar36 * fVar36 + local_f4 * local_f4;
    fVar26 = SQRT(fVar28);
    if (NAN(fVar26)) {
      fVar26 = sqrtf(fVar28);
    }
    fVar26 = 1.0 / fVar26;
    local_f4 = local_f4 * fVar26;
    fVar40 = fVar40 * fVar26;
    fVar36 = fVar36 * fVar26;
    if (ABS(local_f4) <= 0.70710677) {
      fVar26 = fVar40 * fVar40 + fVar36 * fVar36;
      fVar28 = SQRT(fVar26);
      if (NAN(fVar28)) {
        fVar28 = sqrtf(fVar26);
      }
      fVar28 = 1.0 / fVar28;
      local_c0[4] = -(fVar36 * fVar28);
      local_c0[5] = fVar40 * fVar28;
      local_c0[0] = -(local_f4 * local_c0[5]);
      local_c0[1] = local_f4 * local_c0[4];
      fVar26 = fVar26 * fVar28;
      local_a8 = 0.0;
    }
    else {
      fVar26 = local_f4 * local_f4 + fVar36 * fVar36;
      local_c0[0] = SQRT(fVar26);
      if (NAN(local_c0[0])) {
        local_c0[0] = sqrtf(fVar26);
      }
      local_c0[0] = 1.0 / local_c0[0];
      local_a8 = fVar36 * local_c0[0];
      local_c0[5] = -(local_f4 * local_c0[0]);
      local_c0[0] = fVar26 * local_c0[0];
      local_c0[1] = -(fVar40 * local_a8);
      local_c0[4] = 0.0;
      fVar26 = fVar40 * local_c0[5];
    }
    lVar8 = 2;
  }
  pfVar24 = (float *)((ulong)(local_c0 + 4) | 4);
  pfVar7 = (float *)((ulong)local_c0 | 4);
  local_c0[lVar8] = fVar26;
  pfVar9 = *(float **)(param_1 + 0x10);
  uVar15 = -(ulong)(iVar20 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar20 + 1U) << 2;
  *pfVar9 = local_c0[4];
  uVar21 = -(ulong)(iVar20 + 2U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar20 + 2U) << 2;
  pfVar9[1] = *pfVar24;
  pfVar9[2] = local_a8;
  pfVar9[uVar25] = local_c0[0];
  *(float *)((long)pfVar9 + uVar15) = *pfVar7;
  *(float *)((long)pfVar9 + uVar21) = local_c0[2];
  pfVar11 = *(float **)(param_1 + 0x20);
  *pfVar11 = -local_c0[4];
  pfVar11[1] = -local_c0[5];
  pfVar11[2] = -local_a8;
  pfVar11[uVar25] = -local_c0[0];
  *(float *)((long)pfVar11 + uVar15) = -local_c0[1];
  *(float *)((long)pfVar11 + uVar21) = -local_c0[2];
  uVar2 = *(uint *)(this + 0x144);
  fVar26 = *(float *)(this + 0x130);
  if ((uVar2 >> 7 & 1) == 0) {
    fVar26 = fVar26 * *(float *)(param_1 + 4);
  }
  fVar28 = *(float *)param_1;
  fVar33 = fVar43 * fVar46 - fVar39 * fVar45;
  fVar39 = fVar39 * fVar44 - fVar38 * fVar46;
  pfVar16 = *(float **)(param_1 + 0x30);
  fVar38 = fVar38 * fVar45 - fVar43 * fVar44;
  *pfVar16 = fVar26 * fVar28 * (fVar33 * local_c0[4] + fVar39 * local_c0[5] + fVar38 * local_a8);
  pfVar16[uVar25] =
       fVar26 * fVar28 * (fVar33 * local_c0[0] + fVar39 * local_c0[1] + fVar38 * local_c0[2]);
  if ((uVar2 >> 6 & 1) != 0) {
    puVar17 = *(undefined4 **)(param_1 + 0x38);
    *puVar17 = *(undefined4 *)(this + 0x13c);
    puVar17[uVar25] = *(undefined4 *)(this + 0x13c);
  }
  uVar21 = uVar25 * 2;
  uVar15 = uVar25 * 3;
  iVar20 = (int)uVar21;
  if (this[0x49] == (btSliderConstraint)0x0) {
    fVar44 = *(float *)(param_3 + 0x30) - *(float *)(param_2 + 0x30);
    fVar46 = *(float *)(param_3 + 0x34) - *(float *)(param_2 + 0x34);
    fVar28 = *(float *)(param_3 + 0x38) - *(float *)(param_2 + 0x38);
    uVar21 = -((uVar25 & 0x7fffffffffffffff) >> 0x1e & 1) & 0xfffffffc00000000 |
             (uVar21 & 0xffffffff) << 2;
    fVar43 = fVar46 * local_a8 - fVar28 * local_c0[5];
    fVar38 = fVar28 * local_c0[4] - fVar44 * local_a8;
    fVar39 = fVar44 * local_c0[5] - fVar46 * local_c0[4];
    *(float *)((long)pfVar9 + uVar21) = fVar37 * fVar43;
    uVar18 = (long)iVar20 | 1;
    lVar8 = uVar21 + 8;
    pfVar9[uVar18] = fVar37 * fVar38;
    lVar14 = uVar25 * 0xc;
    *(float *)((long)pfVar9 + lVar8) = fVar37 * fVar39;
    fVar34 = 0.0;
    fVar31 = 0.0;
    fVar33 = 0.0;
    *(float *)((long)pfVar11 + uVar21) = fVar47 * fVar43;
    fVar43 = 0.0;
    fVar45 = 0.0;
    fVar26 = 0.0;
    pfVar11[uVar18] = fVar47 * fVar38;
    *(float *)((long)pfVar11 + lVar8) = fVar47 * fVar39;
    fVar41 = fVar46 * local_c0[2] - fVar28 * local_c0[1];
    fVar38 = fVar28 * local_c0[0] - fVar44 * local_c0[2];
    fVar39 = fVar44 * local_c0[1] - fVar46 * local_c0[0];
    pfVar9[uVar25 * 3] = fVar37 * fVar41;
    pfVar9[uVar25 * 3 + 1] = fVar37 * fVar38;
    pfVar9[uVar25 * 3 + 2] = fVar37 * fVar39;
    pfVar11[uVar25 * 3] = fVar47 * fVar41;
    pfVar11[uVar25 * 3 + 1] = fVar47 * fVar38;
    pfVar11[uVar25 * 3 + 2] = fVar47 * fVar39;
    lVar12 = *(long *)(param_1 + 8);
    *(float *)(lVar12 + uVar21) = local_c0[4];
    fVar38 = *pfVar24;
    *(float *)(lVar12 + uVar18 * 4) = fVar38;
    *(float *)(lVar12 + lVar8) = local_a8;
    *(float *)(lVar12 + lVar14) = local_c0[0];
    fVar39 = *pfVar7;
    *(float *)(lVar12 + lVar14 + 4) = fVar39;
    *(float *)(lVar12 + lVar14 + 8) = local_c0[2];
    lVar19 = *(long *)(param_1 + 0x18);
    *(float *)(lVar19 + uVar21) = -local_c0[4];
    *(float *)(lVar19 + uVar18 * 4) = -fVar38;
    *(float *)(lVar19 + lVar8) = -local_a8;
    *(float *)(lVar19 + lVar14) = -local_c0[0];
    *(float *)(lVar19 + lVar14 + 4) = -fVar39;
    *(float *)(lVar19 + lVar14 + 8) = -local_c0[2];
  }
  else {
    fVar34 = *(float *)(this + 0x3c0) - *(float *)(param_3 + 0x30);
    fVar31 = *(float *)(this + 0x3c4) - *(float *)(param_3 + 0x34);
    fVar43 = *(float *)(this + 0x380) - *(float *)(param_2 + 0x30);
    fVar45 = *(float *)(this + 900) - *(float *)(param_2 + 0x34);
    fVar33 = *(float *)(this + 0x3c8) - *(float *)(param_3 + 0x38);
    fVar26 = *(float *)(this + 0x388) - *(float *)(param_2 + 0x38);
    fVar38 = *(float *)(this + 0x450) - *(float *)(this + 0x420);
    fVar39 = fVar40 * fVar34 + fVar36 * fVar31 + local_f4 * fVar33;
    fVar44 = fVar40 * fVar43 + fVar36 * fVar45 + local_f4 * fVar26;
    fVar34 = fVar34 - fVar40 * fVar39;
    fVar31 = fVar31 - fVar36 * fVar39;
    fVar43 = fVar43 - fVar40 * fVar44;
    fVar45 = fVar45 - fVar36 * fVar44;
    fVar33 = fVar33 - local_f4 * fVar39;
    fVar26 = fVar26 - local_f4 * fVar44;
    fVar41 = (fVar40 * fVar44 + fVar40 * fVar38) - fVar40 * fVar39;
    fVar42 = (fVar36 * fVar44 + fVar36 * fVar38) - fVar36 * fVar39;
    fVar44 = (local_f4 * fVar44 + local_f4 * fVar38) - local_f4 * fVar39;
    fVar46 = fVar37 * fVar34 + fVar47 * fVar43;
    fVar38 = fVar37 * fVar31 + fVar47 * fVar45;
    fVar28 = fVar37 * fVar33 + fVar47 * fVar26;
    fVar43 = fVar43 + fVar37 * fVar41;
    fVar45 = fVar45 + fVar37 * fVar42;
    fVar39 = fVar28 * fVar28 + fVar46 * fVar46 + fVar38 * fVar38;
    fVar26 = fVar26 + fVar37 * fVar44;
    fVar34 = fVar34 - fVar47 * fVar41;
    fVar31 = fVar31 - fVar47 * fVar42;
    fVar33 = fVar33 - fVar47 * fVar44;
    local_a4 = 0;
    local_c0[5] = fVar38;
    if (fVar39 <= 1.1920929e-07) {
      local_c0[4] = *(float *)(this + 0x354);
      fVar38 = *(float *)(this + 0x364);
      local_a8 = *(float *)(this + 0x374);
      *pfVar24 = fVar38;
      local_a4 = 0;
    }
    else {
      local_a8 = SQRT(fVar39);
      if (NAN(local_a8)) {
        local_c0[4] = fVar46;
        local_a8 = fVar28;
        local_a8 = sqrtf(fVar39);
      }
      local_a8 = 1.0 / local_a8;
      local_c0[4] = local_a8 * fVar46;
      fVar38 = local_a8 * fVar38;
      local_a8 = local_a8 * fVar28;
      pfVar9 = *(float **)(param_1 + 0x10);
      local_c0[5] = fVar38;
    }
    local_c0[2] = fVar40 * fVar38 - fVar36 * local_c0[4];
    local_c0[0] = fVar36 * local_a8 - local_f4 * fVar38;
    fVar39 = local_f4 * local_c0[4] - fVar40 * local_a8;
    lVar14 = uVar25 * 8;
    local_c0[3] = 0.0;
    local_d0 = CONCAT44(fVar26 * local_c0[4] - fVar43 * local_a8,fVar45 * local_a8 - fVar26 * fVar38
                       );
    (pfVar9 + uVar25 * 2)[2] = fVar43 * fVar38 - fVar45 * local_c0[4];
    *(undefined8 *)(pfVar9 + uVar25 * 2) = local_d0;
    lVar8 = *(long *)(param_1 + 0x20);
    *(float *)(lVar8 + lVar14) = -(fVar31 * local_a8 - fVar33 * fVar38);
    *(float *)(lVar8 + (uVar21 | 1) * 4) = -(fVar33 * local_c0[4] - fVar34 * local_a8);
    *(float *)(lVar8 + (uVar21 + 2) * 4) = -(fVar34 * fVar38 - fVar31 * local_c0[4]);
    fVar28 = fVar45 * local_c0[2] - fVar26 * fVar39;
    fVar41 = fVar26 * local_c0[0] - fVar43 * local_c0[2];
    local_c8 = fVar43 * fVar39 - fVar45 * local_c0[0];
    fVar44 = fVar31 * local_c0[2] - fVar33 * fVar39;
    fVar46 = fVar33 * local_c0[0] - fVar34 * local_c0[2];
    fVar38 = fVar34 * fVar39 - fVar31 * local_c0[0];
    local_d0 = CONCAT44(fVar41,fVar28);
    if ((1.1920929e-07 > param_6 || 1.1920929e-07 > param_7) &&
       (this[0x141] != (btSliderConstraint)0x0)) {
      fVar44 = fVar47 * fVar44;
      fVar46 = fVar47 * fVar46;
      fVar38 = fVar47 * fVar38;
      local_c8 = fVar37 * local_c8;
      local_d0 = CONCAT44(fVar37 * fVar41,fVar37 * fVar28);
    }
    lVar12 = *(long *)(param_1 + 0x10);
    uVar25 = -(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar15 & 0xffffffff) << 2;
    *(float *)((undefined8 *)(lVar12 + uVar25) + 1) = local_c8;
    lVar8 = uVar25 + 8;
    *(undefined8 *)(lVar12 + uVar25) = local_d0;
    lVar12 = *(long *)(param_1 + 0x20);
    lVar22 = uVar25 + 4;
    lVar10 = (uVar21 | 1) * 4;
    lVar23 = (uVar21 + 2) * 4;
    *(float *)(lVar12 + uVar25) = -fVar44;
    *(float *)(lVar12 + lVar22) = -fVar46;
    *(float *)(lVar12 + lVar8) = -fVar38;
    lVar12 = *(long *)(param_1 + 8);
    *(float *)(lVar12 + lVar14) = local_c0[4];
    *(float *)(lVar12 + lVar10) = *pfVar24;
    *(float *)(lVar12 + lVar23) = local_a8;
    *(float *)(lVar12 + uVar25) = local_c0[0];
    *(float *)(lVar12 + lVar22) = *pfVar7;
    *(float *)(lVar12 + lVar8) = local_c0[2];
    lVar19 = *(long *)(param_1 + 0x18);
    *(float *)(lVar19 + lVar14) = -local_c0[4];
    *(float *)(lVar19 + lVar10) = -local_c0[5];
    *(float *)(lVar19 + lVar23) = -local_a8;
    *(float *)(lVar19 + uVar25) = -local_c0[0];
    fVar44 = 0.0;
    *(float *)(lVar19 + lVar22) = -fVar39;
    fVar46 = 0.0;
    *(float *)(lVar19 + lVar8) = -local_c0[2];
    fVar28 = 0.0;
    fVar38 = local_c0[5];
    local_c0[1] = fVar39;
  }
  uVar2 = *(uint *)(this + 0x144);
  fVar41 = *(float *)(this + 0x120);
  if ((uVar2 >> 5 & 1) == 0) {
    fVar41 = fVar41 * *(float *)(param_1 + 4);
  }
  fVar42 = *(float *)param_1;
  lVar8 = *(long *)(param_1 + 0x30);
  *(float *)(lVar8 + (long)iVar20 * 4) =
       fVar41 * fVar42 *
       ((fVar48 - fVar49) * local_c0[4] + (fVar50 - fVar30) * fVar38 + (fVar32 - fVar35) * local_a8)
  ;
  *(float *)(lVar8 + (long)(int)uVar15 * 4) =
       fVar41 * fVar42 *
       ((fVar48 - fVar49) * local_c0[0] + (fVar50 - fVar30) * fVar39 +
       (fVar32 - fVar35) * local_c0[2]);
  if ((uVar2 >> 4 & 1) != 0) {
    lVar14 = *(long *)(param_1 + 0x38);
    *(undefined4 *)(lVar14 + (long)iVar20 * 4) = *(undefined4 *)(this + 300);
    *(undefined4 *)(lVar14 + (long)(int)uVar15 * 4) = *(undefined4 *)(this + 300);
  }
  if (this[0x140] == (btSliderConstraint)0x0) {
    iVar20 = 0;
    fVar30 = 0.0;
  }
  else {
    fVar30 = fVar29 * *(float *)(this + 0x420);
    iVar20 = 2;
    if (fVar30 <= 0.0) {
      iVar20 = 1;
    }
  }
  bVar3 = this[0x460];
  if (iVar20 == 0 && bVar3 == (btSliderConstraint)0x0) {
    iVar20 = 4;
    if (this[0x141] == (btSliderConstraint)0x0) goto LAB_011c7f04;
LAB_011c8198:
    fVar29 = *(float *)(this + 0x458);
    iVar13 = 2;
    if (0.0 < fVar29) {
      iVar13 = 1;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x28);
    lVar14 = (long)(int)uVar4;
    uVar5 = uVar4 * 4 | 1;
    uVar25 = -(ulong)((uVar4 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
    *(float *)(lVar12 + lVar14 * 0x10) = fVar40;
    *(float *)(lVar12 + uVar25) = fVar36;
    uVar6 = uVar4 * 4 | 2;
    uVar15 = -(ulong)((uVar4 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
    *(float *)(lVar12 + uVar15) = local_f4;
    *(float *)(lVar19 + lVar14 * 0x10) = -fVar40;
    *(float *)(lVar19 + uVar25) = -fVar36;
    *(float *)(lVar19 + uVar15) = -local_f4;
    lVar12 = (long)(int)uVar6;
    if (this[0x49] == (btSliderConstraint)0x0) {
      lVar19 = *(long *)(param_1 + 0x10);
      fVar38 = local_f4 * fVar46 - fVar36 * fVar28;
      fVar35 = fVar40 * fVar28 - local_f4 * fVar44;
      fVar32 = fVar36 * fVar44 - fVar40 * fVar46;
      lVar22 = (long)(int)uVar5 * 4;
      *(float *)(lVar19 + lVar14 * 0x10) = fVar37 * fVar38;
      *(float *)(lVar19 + lVar22) = fVar37 * fVar35;
      *(float *)(lVar19 + lVar12 * 4) = fVar37 * fVar32;
      lVar19 = *(long *)(param_1 + 0x20);
      fVar32 = fVar47 * fVar32;
      *(float *)(lVar19 + lVar14 * 0x10) = fVar47 * fVar38;
      *(float *)(lVar19 + lVar22) = fVar47 * fVar35;
LAB_011c7f74:
      *(float *)(lVar19 + lVar12 * 4) = fVar32;
    }
    else if (1.1920929e-07 <= param_6 && 1.1920929e-07 <= param_7) {
      lVar19 = *(long *)(param_1 + 0x10);
      lVar22 = (long)(int)uVar5 * 4;
      *(float *)(lVar19 + lVar14 * 0x10) = local_f4 * fVar45 - fVar36 * fVar26;
      *(float *)(lVar19 + lVar22) = fVar40 * fVar26 - local_f4 * fVar43;
      *(float *)(lVar19 + lVar12 * 4) = fVar36 * fVar43 - fVar40 * fVar45;
      lVar19 = *(long *)(param_1 + 0x20);
      *(float *)(lVar19 + lVar14 * 0x10) = -(local_f4 * fVar31 - fVar36 * fVar33);
      *(float *)(lVar19 + lVar22) = -(fVar40 * fVar33 - local_f4 * fVar34);
      fVar32 = -(fVar36 * fVar34 - fVar40 * fVar31);
      goto LAB_011c7f74;
    }
    lVar22 = lVar14 * 0x10;
    fVar37 = *(float *)(this + 0xd0);
    fVar32 = *(float *)(this + 0xd4);
    *(undefined4 *)(lVar8 + lVar22) = 0;
    lVar12 = *(long *)(param_1 + 0x40);
    *(undefined4 *)(lVar12 + lVar22) = 0;
    lVar19 = *(long *)(param_1 + 0x48);
    *(undefined4 *)(lVar19 + lVar22) = 0;
    pbVar1 = (btSliderConstraint *)(param_1 + 4);
    if ((uVar2 & 0x200) != 0) {
      pbVar1 = this + 0x100;
    }
    fVar35 = *(float *)pbVar1;
    if ((bVar3 != (btSliderConstraint)0x0) && (iVar20 == 0 || fVar37 != fVar32)) {
      if ((uVar2 & 1) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar14 * 0x10) = *(undefined4 *)(this + 0xec);
      }
      fVar38 = (float)btTypedConstraint::getMotorFactor
                                (*(float *)(this + 0x450),*(float *)(this + 0xd0),
                                 *(float *)(this + 0xd4),*(float *)(this + 0x464),
                                 fVar35 * *(float *)param_1);
      lVar8 = *(long *)(param_1 + 0x30);
      *(float *)(lVar8 + lVar22) =
           *(float *)(lVar8 + lVar22) - fVar29 * fVar38 * *(float *)(this + 0x464);
      lVar12 = *(long *)(param_1 + 0x40);
      *(float *)(lVar12 + lVar22) =
           *(float *)(lVar12 + lVar22) - *(float *)(this + 0x468) * *(float *)param_1;
      lVar19 = *(long *)(param_1 + 0x48);
      *(float *)(lVar19 + lVar22) =
           *(float *)(this + 0x468) * *(float *)param_1 + *(float *)(lVar19 + lVar22);
    }
    if (iVar20 != 0) {
      *(float *)(lVar8 + lVar22) = *(float *)(lVar8 + lVar22) + fVar30 * fVar35 * *(float *)param_1;
      if (((byte)this[0x145] & 1) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar14 * 0x10) = *(undefined4 *)(this + 0x10c);
      }
      if (fVar37 == fVar32) {
        uVar27 = 0x7f7fffff;
        *(undefined4 *)(lVar12 + lVar14 * 0x10) = 0xff7fffff;
      }
      else if (iVar20 == 1) {
        *(undefined4 *)(lVar12 + lVar14 * 0x10) = 0xff7fffff;
        uVar27 = 0;
      }
      else {
        uVar27 = 0x7f7fffff;
        *(undefined4 *)(lVar12 + lVar14 * 0x10) = 0;
      }
      *(undefined4 *)(lVar19 + lVar14 * 0x10) = uVar27;
      fVar37 = 1.0 - *(float *)(this + 0x108);
      if ((fVar37 != 0.0) && (!NAN(fVar37))) {
        fVar29 = fVar29 * ((fVar40 * *(float *)param_4 + fVar36 * *(float *)(param_4 + 4) +
                           local_f4 * *(float *)(param_4 + 8)) -
                          (fVar40 * *(float *)param_5 + fVar36 * *(float *)(param_5 + 4) +
                          local_f4 * *(float *)(param_5 + 8)));
        if (iVar20 == 1) {
          if ((fVar29 < 0.0) &&
             (fVar29 = -(ABS(fVar37) * fVar29), *(float *)(lVar8 + lVar14 * 0x10) < fVar29)) {
LAB_011c8178:
            *(float *)(lVar8 + lVar14 * 0x10) = fVar29;
          }
        }
        else if ((0.0 < fVar29) &&
                (fVar29 = -(ABS(fVar37) * fVar29), fVar29 < *(float *)(lVar8 + lVar14 * 0x10)))
        goto LAB_011c8178;
      }
      *(float *)(lVar8 + lVar22) = *(float *)(this + 0x100) * *(float *)(lVar8 + lVar22);
    }
    iVar20 = 5;
    if (this[0x141] != (btSliderConstraint)0x0) goto LAB_011c8198;
LAB_011c7f04:
    iVar13 = 0;
    fVar29 = 0.0;
  }
  bVar3 = this[0x470];
  if (iVar13 == 0 && bVar3 == (btSliderConstraint)0x0) {
    return;
  }
  lVar12 = *(long *)(param_1 + 0x10);
  lVar14 = (long)*(int *)(param_1 + 0x28) * (long)iVar20;
  lVar19 = lVar14 * 4;
  *(float *)(lVar12 + lVar19) = fVar40;
  *(float *)(lVar12 + lVar19 + 4) = fVar36;
  *(float *)(lVar12 + lVar19 + 8) = local_f4;
  lVar12 = *(long *)(param_1 + 0x20);
  *(float *)(lVar12 + lVar19) = -fVar40;
  *(float *)(lVar12 + lVar19 + 4) = -fVar36;
  *(float *)(lVar12 + lVar19 + 8) = -local_f4;
  fVar37 = *(float *)(this + 0xd8);
  fVar30 = *(float *)(this + 0xdc);
  pbVar1 = (btSliderConstraint *)(param_1 + 4);
  if ((*(uint *)(this + 0x144) & 0x800) != 0) {
    pbVar1 = this + 0x110;
  }
  fVar32 = *(float *)pbVar1;
  if ((bVar3 != (btSliderConstraint)0x0) && (iVar13 == 0 || fVar37 != fVar30)) {
    fVar35 = fVar37;
    fVar38 = fVar30;
    if ((*(uint *)(this + 0x144) >> 2 & 1) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar14 * 4) = *(undefined4 *)(this + 0xfc);
      fVar35 = *(float *)(this + 0xd8);
      fVar38 = *(float *)(this + 0xdc);
    }
    fVar35 = (float)btTypedConstraint::getMotorFactor
                              (*(float *)(this + 0x454),fVar35,fVar38,*(float *)(this + 0x474),
                               fVar32 * *(float *)param_1);
    lVar8 = *(long *)(param_1 + 0x30);
    *(float *)(lVar8 + lVar19) = fVar35 * *(float *)(this + 0x474);
    *(float *)(*(long *)(param_1 + 0x40) + lVar19) = -(*(float *)(this + 0x478) * *(float *)param_1)
    ;
    *(float *)(*(long *)(param_1 + 0x48) + lVar19) = *(float *)(this + 0x478) * *(float *)param_1;
  }
  if (iVar13 == 0) {
    return;
  }
  *(float *)(lVar8 + lVar19) = *(float *)(lVar8 + lVar19) + fVar29 * fVar32 * *(float *)param_1;
  if (((byte)this[0x145] >> 2 & 1) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar14 * 4) = *(undefined4 *)(this + 0x11c);
  }
  if (fVar37 == fVar30) {
    lVar12 = *(long *)(param_1 + 0x40);
    uVar27 = 0x7f7fffff;
LAB_011c8328:
    *(undefined4 *)(lVar12 + lVar14 * 4) = 0xff7fffff;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x40);
    if (iVar13 != 1) {
      uVar27 = 0;
      goto LAB_011c8328;
    }
    uVar27 = 0x7f7fffff;
    *(undefined4 *)(lVar12 + lVar14 * 4) = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x48) + lVar14 * 4) = uVar27;
  fVar29 = 1.0 - *(float *)(this + 0x118);
  if ((fVar29 != 0.0) && (!NAN(fVar29))) {
    lVar12 = *(long *)(this + 0x28);
    lVar22 = *(long *)(this + 0x30);
    fVar37 = (fVar40 * *(float *)(lVar12 + 0x164) + fVar36 * *(float *)(lVar12 + 0x168) +
             local_f4 * *(float *)(lVar12 + 0x16c)) -
             (fVar40 * *(float *)(lVar22 + 0x164) + fVar36 * *(float *)(lVar22 + 0x168) +
             local_f4 * *(float *)(lVar22 + 0x16c));
    if (iVar13 == 1) {
      if ((0.0 <= fVar37) ||
         (fVar29 = -(ABS(fVar29) * fVar37), fVar29 <= *(float *)(lVar8 + lVar14 * 4)))
      goto LAB_011c83dc;
    }
    else if ((fVar37 <= 0.0) ||
            (fVar29 = -(ABS(fVar29) * fVar37), *(float *)(lVar8 + lVar14 * 4) <= fVar29))
    goto LAB_011c83dc;
    *(float *)(lVar8 + lVar14 * 4) = fVar29;
  }
LAB_011c83dc:
  *(float *)(lVar8 + lVar19) = *(float *)(this + 0x110) * *(float *)(lVar8 + lVar19);
  return;
}

