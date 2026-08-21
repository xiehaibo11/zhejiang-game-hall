
/* gjkepa2_impl::GJK::projectorigin(btVector3 const&, btVector3 const&, btVector3 const&, btVector3
   const&, float*, unsigned int&) */

undefined1  [16]
gjkepa2_impl::GJK::projectorigin
          (btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4,
          float *param_5,uint *param_6)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
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
  uint local_e4;
  float local_e0 [4];
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  btVector3 *local_a0;
  btVector3 *local_98;
  btVector3 *local_90;
  btVector3 *pbStack_88;
  
  fVar7 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 4);
  fVar5 = *(float *)param_4;
  fVar2 = *(float *)(param_4 + 4);
  fVar9 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_4 + 8);
  local_c4 = 0;
  fVar12 = fVar7 - fVar5;
  fVar13 = fVar8 - fVar2;
  fVar14 = fVar9 - fVar6;
  fVar18 = *(float *)param_2;
  fVar19 = *(float *)(param_2 + 4);
  fVar20 = *(float *)(param_2 + 8);
  local_b4 = 0;
  fVar11 = fVar18 - fVar5;
  local_bc = fVar19 - fVar2;
  local_b8 = fVar20 - fVar6;
  fVar16 = *(float *)param_3 - fVar5;
  fVar15 = *(float *)(param_3 + 4) - fVar2;
  fVar17 = *(float *)(param_3 + 8) - fVar6;
  fVar24 = ((((fVar13 * local_b8 * fVar16 + fVar14 * fVar11 * fVar15) - fVar15 * local_b8 * fVar12)
            - fVar13 * fVar11 * fVar17) + fVar17 * fVar12 * local_bc) - fVar16 * fVar14 * local_bc;
  local_a4 = 0;
  auVar3 = ZEXT816(0xbf800000);
  if (((fVar24 != 0.0) && (auVar3 = ZEXT816(0xbf800000), !NAN(fVar24))) &&
     (fVar21 = fVar18 - *(float *)param_3, fVar22 = fVar19 - *(float *)(param_3 + 4),
     fVar23 = fVar20 - *(float *)(param_3 + 8), auVar3 = ZEXT816(0xbf800000),
     fVar24 * (fVar9 * (fVar21 * (fVar8 - fVar19) - fVar22 * (fVar7 - fVar18)) +
              fVar7 * (fVar22 * (fVar9 - fVar20) - fVar23 * (fVar8 - fVar19)) +
              fVar8 * (fVar23 * (fVar7 - fVar18) - fVar21 * (fVar9 - fVar20))) <= 0.0)) {
    local_e0[2] = 0.0;
    local_e0[0] = 0.0;
    local_e0[1] = 0.0;
    local_e4 = 0;
    local_d0 = fVar12;
    fStack_cc = fVar13;
    local_c8 = fVar14;
    local_c0 = fVar11;
    local_b0 = fVar16;
    fStack_ac = fVar15;
    local_a8 = fVar17;
    local_a0 = param_1;
    local_98 = param_2;
    local_90 = param_3;
    pbStack_88 = param_4;
    if (fVar24 * ((fVar13 * local_b8 - fVar14 * local_bc) * fVar5 +
                  fVar2 * (fVar14 * fVar11 - local_b8 * fVar12) +
                 (fVar12 * local_bc - fVar13 * fVar11) * fVar6) <= 0.0) {
      auVar3 = ZEXT816(0xbf800000);
    }
    else {
      auVar3 = projectorigin(param_1,param_2,param_4,local_e0,&local_e4);
      *param_6 = (local_e4 & 4) << 1 | local_e4 & 2 | local_e4 & 1;
      *param_5 = local_e0[0];
      param_5[1] = local_e0[1];
      param_5[2] = 0.0;
      param_5[3] = local_e0[2];
    }
    uVar10 = auVar3._8_8_;
    auVar1 = auVar3;
    if (0.0 < fVar24 * ((local_bc * fVar17 - local_b8 * fVar15) * *(float *)param_4 +
                        *(float *)(param_4 + 4) * (local_b8 * fVar16 - fVar17 * fVar11) +
                       (fVar15 * fVar11 - local_bc * fVar16) * *(float *)(param_4 + 8))) {
      auVar4 = projectorigin(local_98,local_90,param_4,local_e0,&local_e4);
      auVar1._8_8_ = uVar10;
      auVar1._0_8_ = auVar3._0_8_;
      if ((auVar3._0_4_ < 0.0) || (auVar4._0_4_ < auVar3._0_4_)) {
        *param_6 = (local_e4 & 7) << 1;
        *param_5 = 0.0;
        param_5[1] = local_e0[0];
        param_5[2] = local_e0[1];
        param_5[3] = local_e0[2];
        auVar1 = auVar4;
      }
    }
    uVar10 = auVar1._8_8_;
    auVar3 = auVar1;
    if (0.0 < fVar24 * ((fVar15 * fVar14 - fVar17 * fVar13) * *(float *)param_4 +
                        *(float *)(param_4 + 4) * (fVar17 * fVar12 - fVar14 * fVar16) +
                       (fVar13 * fVar16 - fVar15 * fVar12) * *(float *)(param_4 + 8))) {
      auVar4 = projectorigin(local_90,local_a0,param_4,local_e0,&local_e4);
      auVar3._8_8_ = uVar10;
      auVar3._0_8_ = auVar1._0_8_;
      if ((auVar1._0_4_ < 0.0) || (auVar4._0_4_ < auVar1._0_4_)) {
        *param_6 = (local_e4 & 4) << 1 | local_e4 >> 1 & 1 | (local_e4 & 1) << 2;
        param_5[1] = 0.0;
        param_5[2] = local_e0[0];
        *param_5 = local_e0[1];
        param_5[3] = local_e0[2];
        auVar3 = auVar4;
      }
    }
    if (auVar3._0_4_ < 0.0) {
      *param_6 = 0xf;
      fVar2 = (((((*(float *)(param_3 + 4) * *(float *)(param_2 + 8) * *(float *)param_4 +
                  *(float *)(param_3 + 8) * *(float *)param_2 * *(float *)(param_4 + 4)) -
                 *(float *)(param_4 + 4) * *(float *)(param_2 + 8) * *(float *)param_3) -
                *(float *)(param_3 + 4) * *(float *)param_2 * *(float *)(param_4 + 8)) +
               *(float *)(param_4 + 8) * *(float *)param_3 * *(float *)(param_2 + 4)) -
              *(float *)param_4 * *(float *)(param_3 + 8) * *(float *)(param_2 + 4)) / fVar24;
      *param_5 = fVar2;
      fVar5 = (((((*(float *)(param_1 + 4) * *(float *)(param_3 + 8) * *(float *)param_4 +
                  *(float *)(param_1 + 8) * *(float *)param_3 * *(float *)(param_4 + 4)) -
                 *(float *)(param_4 + 4) * *(float *)(param_3 + 8) * *(float *)param_1) -
                *(float *)(param_1 + 4) * *(float *)param_3 * *(float *)(param_4 + 8)) +
               *(float *)(param_4 + 8) * *(float *)param_1 * *(float *)(param_3 + 4)) -
              *(float *)param_4 * *(float *)(param_1 + 8) * *(float *)(param_3 + 4)) / fVar24;
      param_5[1] = fVar5;
      fVar24 = (((((*(float *)(param_2 + 4) * *(float *)(param_1 + 8) * *(float *)param_4 +
                   *(float *)(param_2 + 8) * *(float *)param_1 * *(float *)(param_4 + 4)) -
                  *(float *)(param_4 + 4) * *(float *)(param_1 + 8) * *(float *)param_2) -
                 *(float *)(param_2 + 4) * *(float *)param_1 * *(float *)(param_4 + 8)) +
                *(float *)(param_4 + 8) * *(float *)param_2 * *(float *)(param_1 + 4)) -
               *(float *)param_4 * *(float *)(param_2 + 8) * *(float *)(param_1 + 4)) / fVar24;
      auVar3 = ZEXT816(0);
      param_5[2] = fVar24;
      param_5[3] = 1.0 - (fVar2 + fVar5 + fVar24);
    }
  }
  return auVar3;
}

