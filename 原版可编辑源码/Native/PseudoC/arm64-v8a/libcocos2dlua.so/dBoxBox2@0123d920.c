
/* dBoxBox2(btVector3 const&, float const*, btVector3 const&, btVector3 const&, float const*,
   btVector3 const&, btVector3&, float*, int*, int, dContactGeom*, int,
   btDiscreteCollisionDetectorInterface::Result&) */

uint dBoxBox2(btVector3 *param_1,float *param_2,btVector3 *param_3,btVector3 *param_4,float *param_5
             ,btVector3 *param_6,btVector3 *param_7,float *param_8,int *param_9,int param_10,
             dContactGeom *param_11,int param_12,Result *param_13)

{
  bool bVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  undefined8 uVar21;
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
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float local_2b0;
  float local_2a0;
  float local_29c;
  float local_208;
  float fStack_204;
  float local_200;
  undefined4 local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  undefined4 local_1ec;
  float local_1e8 [8];
  float local_1c8;
  float local_1c4;
  float local_1c0;
  undefined4 local_1bc;
  float local_1b8 [8];
  float local_198;
  undefined8 uStack_194;
  undefined8 local_138;
  float local_130 [14];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  
  fVar20 = *param_2;
  fVar22 = param_2[4];
  fVar49 = param_2[5];
  fVar54 = param_2[8];
  fVar23 = param_2[9];
  fVar51 = param_2[1];
  fVar46 = param_2[2];
  fVar47 = param_2[6];
  fVar42 = param_2[10];
  fVar55 = *(float *)param_3 * 0.5;
  fVar26 = *(float *)param_4 - *(float *)param_1;
  fVar25 = *(float *)(param_4 + 4) - *(float *)(param_1 + 4);
  fVar24 = *(float *)(param_4 + 8) - *(float *)(param_1 + 8);
  fVar37 = *(float *)(param_3 + 4) * 0.5;
  local_ac = fVar55;
  local_a8 = fVar37;
  fVar38 = *(float *)(param_3 + 8) * 0.5;
  local_a4 = fVar38;
  fVar27 = fVar26 * fVar20 + fVar25 * fVar22 + fVar24 * fVar54;
  fVar30 = *(float *)param_6 * 0.5;
  fVar33 = *(float *)(param_6 + 4) * 0.5;
  local_b8 = fVar30;
  local_b4 = fVar33;
  fVar31 = *(float *)(param_6 + 8) * 0.5;
  local_b0 = fVar31;
  fVar45 = *param_5;
  fVar44 = param_5[4];
  fVar40 = param_5[5];
  fVar43 = param_5[8];
  fVar39 = param_5[9];
  fVar41 = param_5[1];
  fVar36 = param_5[2];
  fVar29 = param_5[6];
  fVar28 = param_5[10];
  fVar32 = fVar20 * fVar45 + fVar22 * fVar44 + fVar54 * fVar43;
  fVar60 = fVar20 * fVar41 + fVar22 * fVar40 + fVar54 * fVar39;
  fVar35 = ABS(fVar32);
  fVar34 = fVar20 * fVar36 + fVar22 * fVar29 + fVar54 * fVar28;
  fVar22 = ABS(fVar60);
  fVar54 = ABS(fVar34);
  fVar20 = ABS(fVar27) - (fVar31 * fVar54 + fVar55 + fVar35 * fVar30 + fVar22 * fVar33);
  if (0.0 < fVar20) {
    return 0;
  }
  fVar61 = fVar26 * fVar51 + fVar25 * fVar49 + fVar24 * fVar23;
  fVar56 = fVar45 * fVar51 + fVar44 * fVar49 + fVar43 * fVar23;
  fVar52 = fVar41 * fVar51 + fVar40 * fVar49 + fVar39 * fVar23;
  fVar58 = fVar36 * fVar51 + fVar29 * fVar49 + fVar28 * fVar23;
  fVar23 = ABS(fVar56);
  fVar51 = ABS(fVar52);
  fVar49 = ABS(fVar58);
  bVar1 = fVar20 <= -3.4028235e+38;
  pfVar19 = param_2;
  if (bVar1) {
    pfVar19 = (float *)0x0;
    fVar20 = -3.4028235e+38;
  }
  bVar5 = !bVar1 && fVar27 < 0.0;
  uVar17 = (uint)!bVar1;
  fVar50 = ABS(fVar61) - (fVar37 + fVar23 * fVar30 + fVar51 * fVar33 + fVar49 * fVar31);
  if (0.0 < fVar50) {
    return 0;
  }
  fVar53 = fVar45 * fVar46 + fVar44 * fVar47 + fVar43 * fVar42;
  fVar48 = fVar41 * fVar46 + fVar40 * fVar47 + fVar39 * fVar42;
  fVar57 = fVar36 * fVar46 + fVar29 * fVar47 + fVar28 * fVar42;
  fVar59 = fVar26 * fVar46 + fVar25 * fVar47 + fVar24 * fVar42;
  fVar47 = ABS(fVar53);
  fVar46 = ABS(fVar48);
  fVar42 = ABS(fVar57);
  if (fVar20 < fVar50) {
    bVar5 = fVar61 < 0.0;
    uVar17 = 2;
    pfVar19 = param_2 + 1;
    fVar20 = fVar50;
  }
  fVar50 = ABS(fVar59) - (fVar38 + fVar47 * fVar30 + fVar46 * fVar33 + fVar42 * fVar31);
  if (0.0 < fVar50) {
    return 0;
  }
  if (fVar20 < fVar50) {
    bVar5 = fVar59 < 0.0;
    uVar17 = 3;
    pfVar19 = param_2 + 2;
    fVar20 = fVar50;
  }
  fVar44 = fVar26 * fVar45 + fVar25 * fVar44 + fVar24 * fVar43;
  fVar43 = ABS(fVar44) - (fVar30 + fVar35 * fVar55 + fVar23 * fVar37 + fVar47 * fVar38);
  if (0.0 < fVar43) {
    return 0;
  }
  if (fVar20 < fVar43) {
    bVar5 = fVar44 < 0.0;
    uVar17 = 4;
    pfVar19 = param_5;
    fVar20 = fVar43;
  }
  fVar40 = fVar26 * fVar41 + fVar25 * fVar40 + fVar24 * fVar39;
  fVar39 = ABS(fVar40) - (fVar33 + fVar22 * fVar55 + fVar51 * fVar37 + fVar46 * fVar38);
  if (0.0 < fVar39) {
    return 0;
  }
  if (fVar20 < fVar39) {
    bVar5 = fVar40 < 0.0;
    uVar17 = 5;
    pfVar19 = param_5 + 1;
    fVar20 = fVar39;
  }
  fVar25 = fVar26 * fVar36 + fVar25 * fVar29 + fVar24 * fVar28;
  fVar24 = ABS(fVar25) - (fVar31 + fVar54 * fVar55 + fVar49 * fVar37 + fVar42 * fVar38);
  if (0.0 < fVar24) {
    return 0;
  }
  if (fVar20 < fVar24) {
    bVar5 = fVar25 < 0.0;
    uVar17 = 6;
    pfVar19 = param_5 + 2;
    fVar20 = fVar24;
  }
  fVar23 = fVar23 + 1e-05;
  fVar47 = fVar47 + 1e-05;
  fVar22 = fVar22 + 1e-05;
  fVar54 = fVar54 + 1e-05;
  fVar25 = fVar59 * fVar56 - fVar61 * fVar53;
  fVar24 = ABS(fVar25) - (fVar47 * fVar37 + fVar23 * fVar38 + fVar54 * fVar33 + fVar22 * fVar31);
  if (1.1920929e-07 < fVar24) {
    return 0;
  }
  fVar29 = fVar53 * fVar53 + 0.0;
  fVar28 = fVar56 * fVar56 + fVar29;
  fVar26 = SQRT(fVar28);
  if (NAN(fVar26)) {
    fVar26 = sqrtf(fVar28);
  }
  local_2b0 = 0.0;
  fVar35 = fVar35 + 1e-05;
  fVar51 = fVar51 + 1e-05;
  fVar46 = fVar46 + 1e-05;
  if (fVar26 <= 1.1920929e-07) {
    local_29c = 0.0;
    local_2a0 = 0.0;
  }
  else {
    fVar24 = fVar24 / fVar26;
    local_29c = 0.0;
    local_2a0 = 0.0;
    if (fVar20 < fVar24 * 1.05) {
      bVar5 = fVar25 < 0.0;
      pfVar19 = (float *)0x0;
      local_2a0 = fVar56 / fVar26;
      local_2b0 = 0.0 / fVar26;
      local_29c = -fVar53 / fVar26;
      uVar17 = 7;
      fVar20 = fVar24;
    }
  }
  fVar25 = fVar59 * fVar52 - fVar61 * fVar48;
  fVar24 = ABS(fVar25) - (fVar46 * fVar37 + fVar51 * fVar38 + fVar54 * fVar30 + fVar35 * fVar31);
  if (1.1920929e-07 < fVar24) {
    return 0;
  }
  fVar36 = fVar48 * fVar48 + 0.0;
  fVar28 = fVar52 * fVar52 + fVar36;
  fVar26 = SQRT(fVar28);
  if (NAN(fVar26)) {
    fVar26 = sqrtf(fVar28);
  }
  fVar49 = fVar49 + 1e-05;
  fVar42 = fVar42 + 1e-05;
  if ((1.1920929e-07 < fVar26) && (fVar24 = fVar24 / fVar26, fVar20 < fVar24 * 1.05)) {
    bVar5 = fVar25 < 0.0;
    pfVar19 = (float *)0x0;
    local_2a0 = fVar52 / fVar26;
    local_2b0 = 0.0 / fVar26;
    local_29c = -fVar48 / fVar26;
    uVar17 = 8;
    fVar20 = fVar24;
  }
  fVar25 = fVar59 * fVar58 - fVar61 * fVar57;
  fVar24 = ABS(fVar25) - (fVar42 * fVar37 + fVar49 * fVar38 + fVar22 * fVar30 + fVar35 * fVar33);
  if (1.1920929e-07 < fVar24) {
    return 0;
  }
  fVar39 = fVar57 * fVar57 + 0.0;
  fVar28 = fVar58 * fVar58 + fVar39;
  fVar26 = SQRT(fVar28);
  if (NAN(fVar26)) {
    fVar26 = sqrtf(fVar28);
  }
  if ((1.1920929e-07 < fVar26) && (fVar24 = fVar24 / fVar26, fVar20 < fVar24 * 1.05)) {
    bVar5 = fVar25 < 0.0;
    pfVar19 = (float *)0x0;
    local_2a0 = fVar58 / fVar26;
    local_2b0 = 0.0 / fVar26;
    local_29c = -fVar57 / fVar26;
    uVar17 = 9;
    fVar20 = fVar24;
  }
  fVar25 = fVar27 * fVar53 - fVar59 * fVar32;
  fVar24 = ABS(fVar25) - (fVar47 * fVar55 + fVar35 * fVar38 + fVar49 * fVar33 + fVar51 * fVar31);
  if (1.1920929e-07 < fVar24) {
    return 0;
  }
  fVar29 = fVar32 * fVar32 + fVar29;
  fVar26 = SQRT(fVar29);
  if (NAN(fVar26)) {
    fVar26 = sqrtf(fVar29);
  }
  if ((1.1920929e-07 < fVar26) && (fVar24 = fVar24 / fVar26, fVar20 < fVar24 * 1.05)) {
    bVar5 = fVar25 < 0.0;
    pfVar19 = (float *)0x0;
    local_2b0 = fVar53 / fVar26;
    local_29c = 0.0 / fVar26;
    local_2a0 = -fVar32 / fVar26;
    uVar17 = 10;
    fVar20 = fVar24;
  }
  fVar25 = fVar27 * fVar48 - fVar59 * fVar60;
  fVar24 = ABS(fVar25) - (fVar46 * fVar55 + fVar22 * fVar38 + fVar49 * fVar30 + fVar23 * fVar31);
  if (1.1920929e-07 < fVar24) {
    return 0;
  }
  fVar36 = fVar60 * fVar60 + fVar36;
  fVar26 = SQRT(fVar36);
  if (NAN(fVar26)) {
    fVar26 = sqrtf(fVar36);
  }
  if ((1.1920929e-07 < fVar26) && (fVar24 = fVar24 / fVar26, fVar20 < fVar24 * 1.05)) {
    bVar5 = fVar25 < 0.0;
    pfVar19 = (float *)0x0;
    local_2b0 = fVar48 / fVar26;
    local_29c = 0.0 / fVar26;
    local_2a0 = -fVar60 / fVar26;
    uVar17 = 0xb;
    fVar20 = fVar24;
  }
  fVar25 = fVar27 * fVar57 - fVar59 * fVar34;
  fVar24 = ABS(fVar25) - (fVar42 * fVar55 + fVar54 * fVar38 + fVar51 * fVar30 + fVar23 * fVar33);
  if (1.1920929e-07 < fVar24) {
    return 0;
  }
  fVar39 = fVar34 * fVar34 + fVar39;
  fVar26 = SQRT(fVar39);
  if (NAN(fVar26)) {
    fVar26 = sqrtf(fVar39);
  }
  if ((1.1920929e-07 < fVar26) && (fVar24 = fVar24 / fVar26, fVar20 < fVar24 * 1.05)) {
    bVar5 = fVar25 < 0.0;
    pfVar19 = (float *)0x0;
    local_2b0 = fVar57 / fVar26;
    local_29c = 0.0 / fVar26;
    local_2a0 = -fVar34 / fVar26;
    uVar17 = 0xc;
    fVar20 = fVar24;
  }
  fVar24 = fVar61 * fVar32 - fVar27 * fVar56;
  fVar23 = ABS(fVar24) - (fVar23 * fVar55 + fVar35 * fVar37 + fVar42 * fVar33 + fVar46 * fVar31);
  if (1.1920929e-07 < fVar23) {
    return 0;
  }
  fVar26 = fVar32 * fVar32 + fVar56 * fVar56 + 0.0;
  fVar25 = SQRT(fVar26);
  if (NAN(fVar25)) {
    fVar25 = sqrtf(fVar26);
  }
  if ((1.1920929e-07 < fVar25) && (fVar23 = fVar23 / fVar25, fVar20 < fVar23 * 1.05)) {
    bVar5 = fVar24 < 0.0;
    pfVar19 = (float *)0x0;
    local_29c = fVar32 / fVar25;
    local_2b0 = -fVar56 / fVar25;
    local_2a0 = 0.0 / fVar25;
    uVar17 = 0xd;
    fVar20 = fVar23;
  }
  fVar23 = fVar61 * fVar60 - fVar27 * fVar52;
  fVar22 = ABS(fVar23) - (fVar51 * fVar55 + fVar22 * fVar37 + fVar42 * fVar30 + fVar47 * fVar31);
  if (1.1920929e-07 < fVar22) {
    return 0;
  }
  fVar25 = fVar60 * fVar60 + fVar52 * fVar52 + 0.0;
  fVar24 = SQRT(fVar25);
  if (NAN(fVar24)) {
    fVar24 = sqrtf(fVar25);
  }
  if ((1.1920929e-07 < fVar24) && (fVar22 = fVar22 / fVar24, fVar20 < fVar22 * 1.05)) {
    bVar5 = fVar23 < 0.0;
    pfVar19 = (float *)0x0;
    local_29c = fVar60 / fVar24;
    local_2b0 = -fVar52 / fVar24;
    local_2a0 = 0.0 / fVar24;
    uVar17 = 0xe;
    fVar20 = fVar22;
  }
  fVar23 = fVar61 * fVar34 - fVar27 * fVar58;
  fVar22 = ABS(fVar23) - (fVar49 * fVar55 + fVar54 * fVar37 + fVar46 * fVar30 + fVar47 * fVar33);
  if (1.1920929e-07 < fVar22) {
    return 0;
  }
  fVar24 = fVar34 * fVar34 + fVar58 * fVar58 + 0.0;
  fVar54 = SQRT(fVar24);
  if (NAN(fVar54)) {
    fVar54 = sqrtf(fVar24);
  }
  if ((fVar54 <= 1.1920929e-07) || (fVar22 = fVar22 / fVar54, fVar22 * 1.05 <= fVar20)) {
    if (uVar17 == 0) {
      return 0;
    }
    if (pfVar19 == (float *)0x0) goto LAB_0123e6f0;
    fVar22 = *pfVar19;
    *(float *)param_7 = fVar22;
    fVar54 = pfVar19[4];
    *(float *)(param_7 + 4) = fVar54;
    fVar23 = pfVar19[8];
  }
  else {
    bVar5 = fVar23 < 0.0;
    local_29c = fVar34 / fVar54;
    local_2b0 = -fVar58 / fVar54;
    local_2a0 = 0.0 / fVar54;
    uVar17 = 0xf;
    fVar20 = fVar22;
LAB_0123e6f0:
    fVar22 = local_2b0 * *param_2 + local_29c * param_2[1] + local_2a0 * param_2[2];
    *(float *)param_7 = fVar22;
    fVar54 = local_2b0 * param_2[4] + local_29c * param_2[5] + local_2a0 * param_2[6];
    *(float *)(param_7 + 4) = fVar54;
    fVar23 = local_2b0 * param_2[8] + local_29c * param_2[9] + local_2a0 * param_2[10];
  }
  *(float *)(param_7 + 8) = fVar23;
  if (bVar5) {
    *(float *)param_7 = -fVar22;
    *(float *)(param_7 + 4) = -fVar54;
    *(float *)(param_7 + 8) = -fVar23;
  }
  *param_8 = -fVar20;
  if (6 < uVar17) {
    fVar22 = -1.0;
    fVar20 = -1.0;
    fVar25 = *(float *)param_7;
    fVar26 = *(float *)(param_7 + 4);
    fVar24 = *(float *)(param_7 + 8);
    fVar23 = 1.0;
    fVar54 = 1.0;
    if (fVar25 * *param_2 + fVar26 * param_2[4] + fVar24 * param_2[8] <= 0.0) {
      fVar23 = -1.0;
    }
    local_198 = (float)*(undefined8 *)param_1;
    fVar23 = fVar23 * fVar55;
    fVar27 = fVar54;
    if (fVar25 * param_2[1] + fVar26 * param_2[5] + fVar24 * param_2[9] <= 0.0) {
      fVar27 = -1.0;
    }
    uStack_194._0_4_ = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
    fVar27 = fVar27 * fVar37;
    if (fVar25 * param_2[2] + fVar26 * param_2[6] + fVar24 * param_2[10] <= 0.0) {
      fVar54 = -1.0;
    }
    fVar54 = fVar54 * fVar38;
    fVar28 = local_198 + fVar23 * *param_2 + fVar27 * param_2[1] + fVar54 * param_2[2];
    fVar29 = (float)uStack_194 + fVar23 * param_2[4] + fVar27 * param_2[5] + fVar54 * param_2[6];
    uStack_194._4_4_ =
         *(float *)(param_1 + 8) + fVar23 * param_2[8] + fVar27 * param_2[9] + fVar54 * param_2[10];
    _local_198 = CONCAT44(fVar29,fVar28);
    fVar54 = fVar22;
    if (fVar25 * *param_5 + fVar26 * param_5[4] + fVar24 * param_5[8] <= 0.0) {
      fVar54 = 1.0;
    }
    fVar54 = fVar54 * fVar30;
    if (fVar25 * param_5[1] + fVar26 * param_5[5] + fVar24 * param_5[9] <= 0.0) {
      fVar20 = 1.0;
    }
    local_138._0_4_ = (float)*(undefined8 *)param_4;
    local_138._4_4_ = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
    fVar20 = fVar20 * local_b4;
    if (fVar25 * param_5[2] + fVar26 * param_5[6] + fVar24 * param_5[10] <= 0.0) {
      fVar22 = 1.0;
    }
    fVar22 = fVar22 * local_b0;
    pfVar19 = param_2 + (int)(uVar17 - 7) / 3;
    fVar23 = (float)local_138 + fVar54 * *param_5 + fVar20 * param_5[1] + fVar22 * param_5[2];
    fVar24 = local_138._4_4_ + fVar54 * param_5[4] + fVar20 * param_5[5] + fVar22 * param_5[6];
    local_130[0] = *(float *)(param_4 + 8) + fVar54 * param_5[8] + fVar20 * param_5[9] +
                   fVar22 * param_5[10];
    pfVar18 = param_5 + (int)(uVar17 - 7) % 3;
    fVar54 = *pfVar18;
    fVar22 = pfVar18[4];
    fVar20 = pfVar18[8];
    fVar25 = *pfVar19 * fVar54 + pfVar19[4] * fVar22 + pfVar19[8] * fVar20;
    fVar26 = 1.0 - fVar25 * fVar25;
    fVar27 = 0.0;
    if (0.0001 < fVar26) {
      fVar28 = fVar23 - fVar28;
      fVar29 = fVar24 - fVar29;
      fVar27 = local_130[0] - uStack_194._4_4_;
      fVar27 = ((fVar28 * *pfVar19 + fVar29 * pfVar19[4] + fVar27 * pfVar19[8]) * fVar25 -
               (fVar28 * fVar54 + fVar29 * fVar22 + fVar27 * fVar20)) * (1.0 / fVar26);
    }
    local_130[0] = local_130[0] + fVar27 * fVar20;
    local_138 = CONCAT44(fVar24 + fVar27 * fVar22,fVar23 + fVar27 * fVar54);
    local_f8 = -*(float *)param_7;
    local_f4 = -*(float *)(param_7 + 4);
    local_f0 = -*(float *)(param_7 + 8);
    local_ec = 0.0;
    (**(code **)(*(long *)param_13 + 0x20))(-*param_8,param_13,&local_f8,&local_138);
    uVar16 = 1;
    goto LAB_0123f65c;
  }
  fVar20 = *(float *)param_7;
  pfVar19 = &local_b8;
  if (uVar17 < 4) {
    uVar21 = *(undefined8 *)(param_7 + 4);
    pfVar18 = param_5;
    pfVar10 = pfVar19;
    pfVar19 = &local_ac;
  }
  else {
    uVar21 = CONCAT44(-(float)((ulong)*(undefined8 *)(param_7 + 4) >> 0x20),
                      -(float)*(undefined8 *)(param_7 + 4));
    fVar20 = -fVar20;
    pfVar18 = param_2;
    param_2 = param_5;
    pfVar10 = &local_ac;
    param_4 = param_1;
    param_1 = param_4;
  }
  fVar24 = (float)uVar21;
  fVar25 = (float)((ulong)uVar21 >> 0x20);
  fVar22 = (float)*(undefined8 *)pfVar18 * fVar20 + (float)*(undefined8 *)(pfVar18 + 4) * fVar24 +
           (float)*(undefined8 *)(pfVar18 + 8) * fVar25;
  fVar54 = (float)((ulong)*(undefined8 *)pfVar18 >> 0x20) * fVar20 +
           (float)((ulong)*(undefined8 *)(pfVar18 + 4) >> 0x20) * fVar24 +
           (float)((ulong)*(undefined8 *)(pfVar18 + 8) >> 0x20) * fVar25;
  local_c8 = CONCAT44(fVar54,fVar22);
  fVar22 = ABS(fVar22);
  fVar54 = ABS(fVar54);
  local_c0 = fVar20 * pfVar18[2] + pfVar18[6] * fVar24 + pfVar18[10] * fVar25;
  fVar23 = ABS(local_c0);
  uVar11 = 2;
  uVar16 = 0;
  if (fVar22 <= fVar23) {
    uVar16 = uVar11;
  }
  if (fVar23 < fVar54) {
    uVar11 = 1;
  }
  if (fVar54 <= fVar22) {
    uVar11 = uVar16;
  }
  uVar12 = (ulong)uVar11;
  bVar1 = fVar23 < fVar54;
  if (fVar54 <= fVar22) {
    bVar1 = fVar23 < fVar22;
  }
  uVar16 = (uint)(fVar23 < fVar22 && fVar54 <= fVar22);
  fVar22 = pfVar10[uVar12];
  uVar14 = 1;
  if (bVar1) {
    uVar14 = 2;
  }
  if (0.0 <= *(float *)((long)&local_c8 + uVar12 * 4)) {
    local_d8 = (*(float *)param_4 - *(float *)param_1) - fVar22 * pfVar18[uVar12];
    fStack_d4 = (*(float *)(param_4 + 4) - *(float *)(param_1 + 4)) - fVar22 * pfVar18[uVar11 | 4];
    local_d0 = (*(float *)(param_4 + 8) - *(float *)(param_1 + 8)) - fVar22 * pfVar18[uVar11 | 8];
  }
  else {
    local_d8 = (*(float *)param_4 - *(float *)param_1) + fVar22 * pfVar18[uVar12];
    fStack_d4 = (*(float *)(param_4 + 4) - *(float *)(param_1 + 4)) + fVar22 * pfVar18[uVar11 | 4];
    local_d0 = (*(float *)(param_4 + 8) - *(float *)(param_1 + 8)) + fVar22 * pfVar18[uVar11 | 8];
  }
  iVar8 = -4;
  if (uVar17 < 4) {
    iVar8 = -1;
  }
  iVar8 = iVar8 + uVar17;
  if (iVar8 == 0) {
    lVar13 = 2;
    lVar9 = 1;
  }
  else if (iVar8 == 1) {
    lVar9 = 0;
    lVar13 = 2;
  }
  else {
    lVar9 = 0;
    lVar13 = 1;
  }
  pfVar15 = param_2 + lVar9;
  pfVar3 = param_2 + lVar13;
  fVar27 = *pfVar15;
  fVar26 = pfVar15[4];
  pfVar2 = pfVar18 + uVar16;
  fVar28 = *pfVar3;
  fVar34 = pfVar3[4];
  fVar23 = pfVar15[8];
  fVar22 = pfVar19[lVar13];
  pfVar15 = pfVar18 + uVar14;
  fVar35 = pfVar3[8];
  fVar54 = pfVar19[lVar9];
  fVar30 = local_d8 * fVar28 + fStack_d4 * fVar34 + local_d0 * fVar35;
  fVar31 = fVar27 * *pfVar2 + fVar26 * pfVar2[4] + fVar23 * pfVar2[8];
  fVar32 = fVar28 * *pfVar2 + fVar34 * pfVar2[4] + fVar35 * pfVar2[8];
  fVar29 = local_d8 * fVar27 + fStack_d4 * fVar26 + local_d0 * fVar23;
  fVar33 = fVar27 * *pfVar15 + fVar26 * pfVar15[4] + fVar23 * pfVar15[8];
  fVar27 = fVar28 * *pfVar15 + fVar34 * pfVar15[4] + fVar35 * pfVar15[8];
  local_e0 = fVar31 * pfVar10[uVar16];
  local_dc = fVar32 * pfVar10[uVar16];
  fVar23 = fVar33 * pfVar10[uVar14];
  fVar26 = fVar27 * pfVar10[uVar14];
  local_f0 = fVar29 - local_e0;
  local_ec = fVar30 - local_dc;
  local_e0 = fVar29 + local_e0;
  local_dc = fVar30 + local_dc;
  local_f8 = local_f0 - fVar23;
  local_f4 = local_ec - fVar26;
  local_f0 = local_f0 + fVar23;
  local_ec = local_ec + fVar26;
  local_e8 = local_e0 + fVar23;
  local_e0 = local_e0 - fVar23;
  local_e4 = local_dc + fVar26;
  local_dc = local_dc - fVar26;
  fVar23 = -local_f8;
  fVar26 = -fVar54;
  if (fVar54 <= fVar23) {
    bVar1 = -local_f0 < fVar54;
    pfVar10 = (float *)&local_138;
    if (fVar23 < fVar54 != bVar1) {
      uVar11 = 1;
      goto LAB_0123ee2c;
    }
    uVar11 = 0;
    if (-local_f0 < fVar54) goto LAB_0123ee64;
  }
  else {
    bVar1 = -local_f0 < fVar54;
    pfVar10 = local_130;
    local_138 = CONCAT44(local_f4,local_f8);
    if (fVar23 < fVar54 == bVar1) {
      uVar11 = 1;
    }
    else {
      uVar11 = 2;
LAB_0123ee2c:
      *pfVar10 = fVar26;
      pfVar10[1] = local_f4 + (fVar26 - local_f8) * ((local_ec - local_f4) / (local_f0 - local_f8));
      pfVar10 = pfVar10 + 2;
    }
    if (bVar1) {
LAB_0123ee64:
      uVar11 = uVar11 + 1;
      *pfVar10 = local_f0;
      pfVar10[1] = local_ec;
      pfVar10 = pfVar10 + 2;
    }
  }
  if (-local_f0 < fVar54 == -local_e8 < fVar54) {
LAB_0123eed4:
    if (-local_e8 < fVar54) {
      uVar11 = uVar11 + 1;
      *pfVar10 = local_e8;
      pfVar10[1] = local_e4;
      if ((uVar11 >> 3 & 1) != 0) goto LAB_0123f1f0;
      pfVar10 = pfVar10 + 2;
    }
    if (-local_e8 < fVar54 != -local_e0 < fVar54) {
      uVar11 = uVar11 + 1;
      *pfVar10 = fVar26;
      pfVar10[1] = local_e4 + (fVar26 - local_e8) * ((local_dc - local_e4) / (local_e0 - local_e8));
      if ((uVar11 >> 3 & 1) != 0) goto LAB_0123f1f0;
      pfVar10 = pfVar10 + 2;
    }
    if (-local_e0 < fVar54) {
      uVar11 = uVar11 + 1;
      *pfVar10 = local_e0;
      pfVar10[1] = local_dc;
      if ((uVar11 >> 3 & 1) != 0) goto LAB_0123f1f0;
      pfVar10 = pfVar10 + 2;
    }
    if (-local_e0 < fVar54 == -local_f8 < fVar54) {
      if (uVar11 != 0) goto LAB_0123efdc;
      goto LAB_0123f1cc;
    }
    uVar11 = uVar11 + 1;
    *pfVar10 = fVar26;
    pfVar10[1] = local_dc + (fVar26 - local_e0) * ((local_f4 - local_dc) / (local_f8 - local_e0));
    if ((uVar11 >> 3 & 1) != 0) goto LAB_0123f1f0;
LAB_0123efdc:
    uVar7 = 0;
    pfVar10 = &local_198;
    pfVar15 = local_130;
    uVar6 = uVar11;
    do {
      fVar23 = pfVar15[-2];
      if (fVar23 < fVar54) {
        fVar26 = pfVar15[-1];
        uVar7 = uVar7 + 1;
        *pfVar10 = fVar23;
        pfVar10[1] = fVar26;
        uVar11 = uVar7;
        if ((uVar7 >> 3 & 1) != 0) goto LAB_0123f1d0;
        fVar23 = pfVar15[-2];
        pfVar10 = pfVar10 + 2;
      }
      pfVar3 = pfVar15;
      if ((int)uVar6 < 2) {
        pfVar3 = (float *)&local_138;
      }
      if (fVar23 < fVar54 != *pfVar3 < fVar54) {
        uVar11 = uVar7 + 1;
        pfVar10[1] = pfVar15[-1] +
                     (fVar54 - fVar23) * ((pfVar3[1] - pfVar15[-1]) / (*pfVar3 - fVar23));
        *pfVar10 = fVar54;
        if ((uVar11 >> 3 & 1) != 0) goto LAB_0123f1d0;
        pfVar10 = pfVar10 + 2;
        uVar7 = uVar11;
      }
      uVar11 = uVar6 - 1;
      pfVar15 = pfVar15 + 2;
      bVar1 = 0 < (int)uVar6;
      uVar6 = uVar11;
    } while (uVar11 != 0 && bVar1);
    if ((int)uVar7 < 1) {
LAB_0123f1cc:
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      pfVar10 = (float *)&local_138;
      pfVar15 = (float *)((long)&uStack_194 + 4);
      do {
        fVar54 = pfVar15[-1];
        if (-fVar54 < fVar22) {
          fVar54 = pfVar15[-1];
          uVar11 = uVar11 + 1;
          *pfVar10 = pfVar15[-2];
          pfVar10[1] = fVar54;
          if ((uVar11 >> 3 & 1) != 0) goto LAB_0123f1e8;
          fVar54 = pfVar15[-1];
          pfVar10 = pfVar10 + 2;
        }
        pfVar3 = pfVar15;
        if ((int)uVar7 < 2) {
          pfVar3 = &local_198;
        }
        if (-fVar54 < fVar22 != -pfVar3[1] < fVar22) {
          uVar11 = uVar11 + 1;
          *pfVar10 = pfVar15[-2] +
                     (-fVar22 - fVar54) * ((*pfVar3 - pfVar15[-2]) / (pfVar3[1] - fVar54));
          pfVar10[1] = -fVar22;
          if ((uVar11 >> 3 & 1) != 0) goto LAB_0123f1e8;
          pfVar10 = pfVar10 + 2;
        }
        uVar6 = uVar7 - 1;
        pfVar15 = pfVar15 + 2;
        bVar1 = 0 < (int)uVar7;
        uVar7 = uVar6;
      } while (uVar6 != 0 && bVar1);
      if ((int)uVar11 < 1) goto LAB_0123f1cc;
      pfVar10 = &local_198;
      pfVar15 = local_130;
      uVar7 = uVar11;
      uVar11 = 0;
      do {
        fVar54 = pfVar15[-1];
        if (fVar54 < fVar22) {
          fVar54 = pfVar15[-1];
          uVar11 = uVar11 + 1;
          *pfVar10 = pfVar15[-2];
          pfVar10[1] = fVar54;
          if ((uVar11 >> 3 & 1) != 0) break;
          fVar54 = pfVar15[-1];
          pfVar10 = pfVar10 + 2;
        }
        pfVar3 = pfVar15;
        if ((int)uVar7 < 2) {
          pfVar3 = (float *)&local_138;
        }
        if (fVar54 < fVar22 != pfVar3[1] < fVar22) {
          uVar11 = uVar11 + 1;
          *pfVar10 = pfVar15[-2] +
                     (fVar22 - fVar54) * ((*pfVar3 - pfVar15[-2]) / (pfVar3[1] - fVar54));
          pfVar10[1] = fVar22;
          if ((uVar11 >> 3 & 1) != 0) break;
          pfVar10 = pfVar10 + 2;
        }
        uVar6 = uVar7 - 1;
        pfVar15 = pfVar15 + 2;
        bVar1 = 0 < (int)uVar7;
        uVar7 = uVar6;
      } while (uVar6 != 0 && bVar1);
    }
LAB_0123f1d0:
    memcpy(&local_138,&local_198,
           -(ulong)((uVar11 & 0x7fffffff) >> 0x1e) & 0xfffffffc00000000 | (ulong)(uVar11 << 1) << 2)
    ;
LAB_0123f1e8:
    if ((int)uVar11 < 1) {
      return 0;
    }
  }
  else {
    uVar11 = uVar11 + 1;
    *pfVar10 = fVar26;
    pfVar10[1] = local_ec + (fVar26 - local_f0) * ((local_e4 - local_ec) / (local_e8 - local_f0));
    if (uVar11 >> 3 == 0) {
      pfVar10 = pfVar10 + 2;
      goto LAB_0123eed4;
    }
  }
LAB_0123f1f0:
  fVar23 = local_d0;
  fVar54 = fStack_d4;
  fVar22 = local_d8;
  fVar26 = pfVar19[iVar8];
  fVar28 = pfVar18[uVar16];
  fVar34 = pfVar18[uVar14];
  fVar35 = pfVar18[uVar16 | 4];
  fVar36 = pfVar18[uVar14 | 4];
  fVar38 = 1.0 / (fVar31 * fVar27 - fVar32 * fVar33);
  fVar37 = pfVar18[uVar16 | 8];
  fVar39 = pfVar18[uVar14 | 8];
  uVar14 = 0;
  uVar12 = (ulong)uVar11;
  pfVar19 = (float *)((long)&local_138 + 4);
  do {
    fVar40 = pfVar19[-1];
    fVar41 = *pfVar19;
    lVar9 = (long)(int)uVar14 * 0xc;
    fVar42 = fVar40 - fVar29;
    fVar43 = fVar41 - fVar30;
    fVar44 = fVar27 * fVar38 * fVar42 - fVar33 * fVar38 * fVar43;
    fVar42 = fVar31 * fVar38 * fVar43 - fVar32 * fVar38 * fVar42;
    *(float *)((long)&uStack_194 + lVar9) = fVar54 + fVar44 * fVar35 + fVar42 * fVar36;
    *(float *)((long)&uStack_194 + lVar9 + 4) = fVar23 + fVar44 * fVar37 + fVar42 * fVar39;
    uVar21 = *(undefined8 *)((long)&uStack_194 + lVar9);
    fVar42 = fVar22 + fVar44 * fVar28 + fVar42 * fVar34;
    (&local_198)[(long)(int)uVar14 * 3] = fVar42;
    fVar42 = fVar26 - (fVar20 * fVar42 + fVar24 * (float)uVar21 +
                      fVar25 * (float)((ulong)uVar21 >> 0x20));
    local_1b8[(int)uVar14] = fVar42;
    if (0.0 <= fVar42) {
      lVar9 = (long)(int)uVar14;
      uVar16 = uVar14 << 1;
      uVar14 = uVar14 + 1;
      *(float *)(&local_138 + lVar9) = fVar40;
      *(float *)((long)&local_138 + (long)(int)(uVar16 | 1) * 4) = fVar41;
    }
    uVar12 = uVar12 - 1;
    pfVar19 = pfVar19 + 2;
  } while (uVar12 != 0);
  if ((int)uVar14 < 1) {
    return 0;
  }
  uVar16 = uVar14;
  if (param_10 <= (int)uVar14) {
    uVar16 = param_10;
  }
  if ((int)uVar16 < 2) {
    uVar16 = 1;
  }
  if ((int)uVar16 < (int)uVar14) {
    if ((int)uVar14 < 2) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      uVar12 = 1;
      do {
        fVar20 = local_1b8[uVar12];
        iVar4 = (int)uVar12;
        if (local_1b8[uVar12] <= local_1b8[0]) {
          fVar20 = local_1b8[0];
          iVar4 = iVar8;
        }
        iVar8 = iVar4;
        local_1b8[0] = fVar20;
        uVar12 = uVar12 + 1;
      } while (uVar14 != uVar12);
    }
    cullPoints2(uVar14,(float *)&local_138,uVar16,iVar8,(int *)local_1e8);
    if (0 < (int)uVar16) {
      lVar9 = 0;
      if (uVar17 < 4) {
        do {
          lVar13 = (long)(int)local_1e8[lVar9];
          local_1c8 = (&local_198)[lVar13 * 3] + *(float *)param_1;
          local_1c4 = *(float *)((long)&uStack_194 + lVar13 * 0xc) + *(float *)(param_1 + 4);
          local_1c0 = *(float *)((long)&uStack_194 + lVar13 * 0xc + 4) + *(float *)(param_1 + 8);
          local_1f8 = -*(float *)param_7;
          local_1f4 = -*(float *)(param_7 + 4);
          local_1f0 = -*(float *)(param_7 + 8);
          local_1ec = 0;
          (**(code **)(*(long *)param_13 + 0x20))(-local_1b8[lVar13],param_13,&local_1f8,&local_1c8)
          ;
          lVar9 = lVar9 + 1;
        } while (lVar9 < (long)(ulong)uVar16);
      }
      else {
        do {
          lVar13 = (long)(int)local_1e8[lVar9];
          fVar20 = local_1b8[lVar13];
          local_1c8 = (&local_198)[lVar13 * 3] + *(float *)param_1;
          local_1c4 = *(float *)((long)&uStack_194 + lVar13 * 0xc) + *(float *)(param_1 + 4);
          local_1c0 = *(float *)((long)&uStack_194 + lVar13 * 0xc + 4) + *(float *)(param_1 + 8);
          local_1f8 = -*(float *)param_7;
          local_1f4 = -*(float *)(param_7 + 4);
          local_1f0 = -*(float *)(param_7 + 8);
          local_208 = local_1c8 - *(float *)param_7 * fVar20;
          fStack_204 = local_1c4 - fVar20 * *(float *)(param_7 + 4);
          local_200 = local_1c0 - fVar20 * *(float *)(param_7 + 8);
          local_1ec = 0;
          local_1fc = 0;
          (**(code **)(*(long *)param_13 + 0x20))(-fVar20,param_13,&local_1f8,&local_208);
          lVar9 = lVar9 + 1;
        } while (lVar9 < (long)(ulong)uVar16);
      }
    }
  }
  else if (uVar17 < 4) {
    uVar12 = (ulong)uVar14;
    pfVar19 = (float *)((long)&uStack_194 + 4);
    pfVar18 = local_1b8;
    do {
      local_1e8[0] = pfVar19[-2] + *(float *)param_1;
      local_1e8[1] = pfVar19[-1] + *(float *)(param_1 + 4);
      local_1e8[2] = *pfVar19 + *(float *)(param_1 + 8);
      local_1c8 = -*(float *)param_7;
      local_1c4 = -*(float *)(param_7 + 4);
      local_1c0 = -*(float *)(param_7 + 8);
      local_1bc = 0;
      (**(code **)(*(long *)param_13 + 0x20))(-*pfVar18,param_13,&local_1c8,local_1e8);
      uVar12 = uVar12 - 1;
      pfVar19 = pfVar19 + 3;
      pfVar18 = pfVar18 + 1;
      uVar16 = uVar14;
    } while (uVar12 != 0);
  }
  else {
    uVar12 = (ulong)uVar14;
    pfVar19 = (float *)((long)&uStack_194 + 4);
    pfVar18 = local_1b8;
    do {
      fVar20 = *pfVar18;
      local_1e8[0] = (pfVar19[-2] + *(float *)param_1) - *(float *)param_7 * fVar20;
      local_1e8[1] = (pfVar19[-1] + *(float *)(param_1 + 4)) - *(float *)(param_7 + 4) * fVar20;
      local_1c4 = -*(float *)(param_7 + 4);
      local_1e8[2] = (*pfVar19 + *(float *)(param_1 + 8)) - *(float *)(param_7 + 8) * fVar20;
      local_1c8 = -*(float *)param_7;
      local_1c0 = -*(float *)(param_7 + 8);
      local_1bc = 0;
      (**(code **)(*(long *)param_13 + 0x20))(-fVar20,param_13,&local_1c8,local_1e8);
      uVar12 = uVar12 - 1;
      pfVar19 = pfVar19 + 3;
      pfVar18 = pfVar18 + 1;
      uVar16 = uVar14;
    } while (uVar12 != 0);
  }
LAB_0123f65c:
  *param_9 = uVar17;
  return uVar16;
}

