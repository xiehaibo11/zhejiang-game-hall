
void FUN_0116b940(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 int param_5)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  float local_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  uint local_188;
  float local_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float local_170;
  float fStack_16c;
  uint local_168;
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  float local_c4;
  float fStack_c0;
  float local_bc;
  float fStack_b8;
  float local_b4;
  float fStack_b0;
  uint local_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  
  pfVar5 = (float *)&local_1c0;
  if (0x1e < param_5) {
    fVar8 = *(float *)(param_3 + 2);
    fVar9 = *(float *)((long)param_3 + 0x14);
    fVar10 = *(float *)(param_4 + 2);
    fVar12 = *(float *)((long)param_4 + 0x14);
    iVar1 = *(int *)(param_3 + 3);
    uVar2 = *(ushort *)(param_4 + 3);
    fVar14 = fVar10 - fVar8;
    fVar6 = fVar12 - fVar9;
    fVar17 = fVar14 * fVar14 + fVar6 * fVar6;
    fVar15 = ((fVar10 + fVar8) * fVar14 + fVar6 * (fVar12 + fVar9)) / fVar17;
    if (fVar15 <= -1.0) {
      fVar15 = -1.0;
    }
    bVar3 = 1.0 <= fVar15;
    if (bVar3) {
      fVar15 = 1.0;
    }
    uVar7 = *param_3;
    fVar16 = 0.5 - fVar15 * -0.5;
    uVar11 = *param_4;
    fVar13 = fVar15 * -0.5 + 0.5;
    fVar17 = 1.0 / (SQRT(fVar17) + 1.1754944e-38);
    fVar12 = fVar16 * fVar9 + fVar12 * fVar13;
    fVar10 = fVar16 * fVar8 + fVar10 * fVar13;
    fVar6 = fVar17 * fVar6;
    fVar8 = -(fVar14 * fVar17);
    fVar9 = fVar10 * fVar6 - fVar14 * fVar17 * fVar12;
    if ((bVar3 || fVar15 <= -1.0) && (0.0 < fVar9)) {
      fVar9 = SQRT(fVar12 * fVar12 + fVar10 * fVar10);
      fVar8 = 1.0 / (fVar9 + 1.1754944e-38);
      fVar6 = fVar8 * fVar10;
      fVar8 = fVar8 * fVar12;
    }
    param_1[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) * fVar16 +
                          (float)((ulong)param_4[1] >> 0x20) * fVar13,
                          (float)param_3[1] * fVar16 + (float)param_4[1] * fVar13);
    *param_1 = CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar16 +
                        (float)((ulong)uVar11 >> 0x20) * fVar13,
                        (float)uVar7 * fVar16 + (float)uVar11 * fVar13);
    *(float *)(param_1 + 2) = fVar6;
    *(float *)((long)param_1 + 0x14) = fVar8;
    *(float *)(param_1 + 3) = fVar9;
    *(uint *)((long)param_1 + 0x1c) = (uint)uVar2 | iVar1 << 0x10;
    return;
  }
  fVar8 = *(float *)(param_4 + 2);
  fVar9 = *(float *)((long)param_4 + 0x14);
  fVar10 = *(float *)(param_3 + 2);
  fVar12 = *(float *)((long)param_3 + 0x14);
  fVar14 = fVar8 - fVar10;
  fVar6 = fVar9 - fVar12;
  if ((fVar12 + fVar9) * fVar14 <= fVar6 * (fVar10 + fVar8)) {
    fVar15 = ((fVar10 + fVar8) * fVar14 + fVar6 * (fVar12 + fVar9)) /
             (fVar14 * fVar14 + fVar6 * fVar6);
    if (fVar15 <= -1.0) {
      fVar15 = -1.0;
    }
    fVar17 = (float)NEON_fminnm(fVar15,0x3f800000);
    if ((1.0 <= fVar15) || (fVar17 <= -1.0)) {
      fVar14 = 0.5 - fVar17 * -0.5;
      fVar15 = fVar17 * -0.5 + 0.5;
      fVar6 = fVar14 * fVar10 + fVar8 * fVar15;
      fVar14 = -(fVar14 * fVar12 + fVar9 * fVar15);
    }
    fVar17 = -fVar6;
    auVar18 = (*(code *)param_2[2])(fVar6,-fVar14,*param_2);
    auVar19 = (*(code *)param_2[3])(fVar17,fVar14,param_2[1]);
    local_bc = auVar19._0_4_;
    local_c4 = auVar18._0_4_;
    local_b4 = local_bc - local_c4;
    fVar6 = *(float *)(param_4 + 2);
    fVar8 = *(float *)((long)param_4 + 0x14);
    fStack_b8 = auVar19._4_4_;
    fStack_c0 = auVar18._4_4_;
    fVar9 = *(float *)(param_3 + 2);
    fVar10 = *(float *)((long)param_3 + 0x14);
    fStack_b0 = fStack_b8 - fStack_c0;
    fVar15 = fVar6 - local_b4;
    fVar12 = fVar8 - fStack_b0;
    local_ac = auVar19._8_4_ & 0xff | (auVar18._8_4_ & 0xff) << 8;
    if ((fVar12 * (local_b4 + fVar6) < (fStack_b0 + fVar8) * fVar15) &&
       ((fVar10 + fStack_b0) * (fVar9 - local_b4) < (fVar10 - fStack_b0) * (fVar9 + local_b4))) {
      uStack_12c = *(undefined8 *)((long)param_3 + 0x14);
      uStack_130 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
      uStack_140 = *param_3;
      uStack_138 = (undefined4)param_3[1];
      local_134 = (undefined4)((ulong)param_3[1] >> 0x20);
      uStack_d0 = uStack_130;
      uStack_94 = *(undefined8 *)((long)param_4 + 0x14);
      uStack_98 = (undefined4)((ulong)*(undefined8 *)((long)param_4 + 0xc) >> 0x20);
      uStack_a8 = *param_4;
      uStack_a0 = (undefined4)param_4[1];
      local_9c = (undefined4)((ulong)param_4[1] >> 0x20);
      uStack_e0 = uStack_140;
      uStack_d8 = uStack_138;
      local_d4 = local_134;
      uStack_cc = uStack_12c;
      FUN_0116be68(param_1,param_2,3,&uStack_e0,1);
      return;
    }
    fVar13 = fVar9 * fVar17 + fVar14 * fVar10;
    fVar16 = fVar6 * fVar17 + fVar14 * fVar8;
    if (fVar13 <= fVar16) {
      fVar13 = fVar16;
    }
    if (local_b4 * fVar17 + fVar14 * fStack_b0 <= fVar13) {
      fVar12 = fVar8 - fVar10;
      fVar15 = fVar6 - fVar9;
      fVar17 = fVar12 * fVar12 + fVar15 * fVar15;
      fVar14 = ((fVar8 + fVar10) * fVar12 + fVar15 * (fVar6 + fVar9)) / fVar17;
      if (fVar14 <= -1.0) {
        fVar14 = -1.0;
      }
      bVar3 = 1.0 <= fVar14;
      if (bVar3) {
        fVar14 = 1.0;
      }
      iVar1 = *(int *)(param_3 + 3);
      uVar2 = *(ushort *)(param_4 + 3);
      uVar7 = *param_3;
      fVar16 = 0.5 - fVar14 * -0.5;
      uVar11 = *param_4;
      fVar13 = fVar14 * -0.5 + 0.5;
      fVar17 = 1.0 / (SQRT(fVar17) + 1.1754944e-38);
      fVar8 = fVar16 * fVar10 + fVar8 * fVar13;
      fVar9 = fVar16 * fVar9 + fVar6 * fVar13;
      fVar12 = fVar17 * fVar12;
      fVar10 = -(fVar15 * fVar17);
      fVar6 = fVar9 * fVar12 - fVar15 * fVar17 * fVar8;
      if ((bVar3 || fVar14 <= -1.0) && (0.0 < fVar6)) {
        fVar6 = SQRT(fVar8 * fVar8 + fVar9 * fVar9);
        fVar10 = 1.0 / (fVar6 + 1.1754944e-38);
        fVar12 = fVar10 * fVar9;
        fVar10 = fVar10 * fVar8;
      }
      param_1[1] = CONCAT44((float)((ulong)param_3[1] >> 0x20) * fVar16 +
                            (float)((ulong)param_4[1] >> 0x20) * fVar13,
                            (float)param_3[1] * fVar16 + (float)param_4[1] * fVar13);
      *param_1 = CONCAT44((float)((ulong)uVar7 >> 0x20) * fVar16 +
                          (float)((ulong)uVar11 >> 0x20) * fVar13,
                          (float)uVar7 * fVar16 + (float)uVar11 * fVar13);
      *(float *)(param_1 + 2) = fVar12;
      *(float *)((long)param_1 + 0x14) = fVar10;
      *(float *)(param_1 + 3) = fVar6;
      *(uint *)((long)param_1 + 0x1c) = (uint)uVar2 | iVar1 << 0x10;
      return;
    }
    fVar14 = local_b4 - fVar9;
    fVar17 = fStack_b0 - fVar10;
    fVar12 = ((local_b4 + fVar6) * fVar15 + fVar12 * (fStack_b0 + fVar8)) /
             (fVar15 * fVar15 + fVar12 * fVar12);
    fVar14 = ((fVar9 + local_b4) * fVar14 + fVar17 * (fVar10 + fStack_b0)) /
             (fVar14 * fVar14 + fVar17 * fVar17);
    if (fVar12 <= -1.0) {
      fVar12 = -1.0;
    }
    if (fVar14 <= -1.0) {
      fVar14 = -1.0;
    }
    fVar12 = (float)NEON_fminnm(fVar12,0x3f800000);
    fVar14 = (float)NEON_fminnm(fVar14,0x3f800000);
    fVar15 = 0.5 - fVar12 * -0.5;
    fVar17 = 0.5 - fVar14 * -0.5;
    fVar12 = fVar12 * -0.5 + 0.5;
    fVar14 = fVar14 * -0.5 + 0.5;
    fVar8 = fVar15 * fStack_b0 + fVar8 * fVar12;
    fVar10 = fVar17 * fVar10 + fStack_b0 * fVar14;
    fVar6 = fVar15 * local_b4 + fVar6 * fVar12;
    fVar9 = fVar17 * fVar9 + local_b4 * fVar14;
    param_5 = param_5 + 1;
    if (fVar8 * fVar8 + fVar6 * fVar6 <= fVar10 * fVar10 + fVar9 * fVar9) {
      local_1c0 = *param_4;
      pfVar4 = &local_1a0;
      uStack_1b8 = (undefined4)param_4[1];
      uStack_1ac = *(undefined8 *)((long)param_4 + 0x14);
      uStack_1b4 = (undefined4)*(undefined8 *)((long)param_4 + 0xc);
      uStack_1b0 = (undefined4)((ulong)*(undefined8 *)((long)param_4 + 0xc) >> 0x20);
      local_1a0 = local_c4;
      fStack_19c = fStack_c0;
      local_198 = local_bc;
      fStack_194 = fStack_b8;
      local_190 = local_b4;
      fStack_18c = fStack_b0;
      local_188 = local_ac;
    }
    else {
      local_160 = *param_3;
      pfVar4 = (float *)&local_160;
      pfVar5 = &local_180;
      uStack_158 = (undefined4)param_3[1];
      uStack_14c = *(undefined8 *)((long)param_3 + 0x14);
      uStack_154 = (undefined4)*(undefined8 *)((long)param_3 + 0xc);
      uStack_150 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
      local_180 = local_c4;
      fStack_17c = fStack_c0;
      local_178 = local_bc;
      fStack_174 = fStack_b8;
      local_170 = local_b4;
      fStack_16c = fStack_b0;
      local_168 = local_ac;
    }
  }
  else {
    uStack_ec = *(undefined8 *)((long)param_4 + 0x14);
    pfVar4 = (float *)&uStack_100;
    pfVar5 = (float *)&uStack_120;
    uStack_f0 = (undefined4)((ulong)*(undefined8 *)((long)param_4 + 0xc) >> 0x20);
    uStack_100 = *param_4;
    uStack_f8 = (undefined4)param_4[1];
    local_f4 = (undefined4)((ulong)param_4[1] >> 0x20);
    uStack_10c = *(undefined8 *)((long)param_3 + 0x14);
    uStack_110 = (undefined4)((ulong)*(undefined8 *)((long)param_3 + 0xc) >> 0x20);
    uStack_120 = *param_3;
    uStack_118 = (undefined4)param_3[1];
    local_114 = (undefined4)((ulong)param_3[1] >> 0x20);
  }
  FUN_0116b940(param_1,param_2,pfVar4,pfVar5,param_5);
  return;
}

