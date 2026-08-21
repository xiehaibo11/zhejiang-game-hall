
/* btSubsimplexConvexCast::calcTimeOfImpact(btTransform const&, btTransform const&, btTransform
   const&, btTransform const&, btConvexCast::CastResult&) */

undefined8 __thiscall
btSubsimplexConvexCast::calcTimeOfImpact
          (btSubsimplexConvexCast *this,btTransform *param_1,btTransform *param_2,
          btTransform *param_3,btTransform *param_4,CastResult *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
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
  undefined4 local_170;
  float local_168;
  float local_164;
  float local_160;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  
  btVoronoiSimplexSolver::reset(*(btVoronoiSimplexSolver **)(this + 8));
  fVar22 = *(float *)param_3;
  local_108 = *(float *)(param_1 + 0x30);
  local_10c = *(float *)(param_1 + 0x34);
  local_110 = *(float *)(param_1 + 0x38);
  local_114 = *(float *)(param_3 + 0x30);
  local_118 = *(float *)(param_3 + 0x34);
  local_11c = *(float *)(param_3 + 0x38);
  fVar7 = *(float *)param_1;
  fVar8 = *(float *)(param_1 + 4);
  fVar15 = *(float *)(param_1 + 8);
  fVar16 = *(float *)(param_1 + 0x10);
  fVar17 = *(float *)(param_1 + 0x14);
  fVar18 = *(float *)(param_1 + 0x18);
  fVar19 = *(float *)(param_1 + 0x20);
  fVar20 = *(float *)(param_1 + 0x24);
  fVar21 = *(float *)(param_1 + 0x28);
  fVar23 = *(float *)(param_3 + 4);
  fVar24 = *(float *)(param_3 + 8);
  fVar9 = (*(float *)(param_2 + 0x30) - local_108) - (*(float *)(param_4 + 0x30) - local_114);
  fVar10 = (*(float *)(param_2 + 0x34) - local_10c) - (*(float *)(param_4 + 0x34) - local_118);
  fVar25 = *(float *)(param_3 + 0x10);
  fVar4 = -fVar9;
  fVar26 = *(float *)(param_3 + 0x14);
  fVar14 = (*(float *)(param_2 + 0x38) - local_110) - (*(float *)(param_4 + 0x38) - local_11c);
  fVar27 = *(float *)(param_3 + 0x18);
  fVar28 = *(float *)(param_3 + 0x20);
  fVar29 = *(float *)(param_3 + 0x24);
  fVar5 = (fVar7 * fVar4 - fVar16 * fVar10) - fVar19 * fVar14;
  fVar30 = *(float *)(param_3 + 0x28);
  fVar6 = (fVar8 * fVar4 - fVar17 * fVar10) - fVar20 * fVar14;
  local_a8 = (fVar15 * fVar4 - fVar18 * fVar10) - fVar21 * fVar14;
  local_a4 = 0;
  local_b0 = fVar5;
  fStack_ac = fVar6;
  fVar4 = (float)(**(code **)(**(long **)(this + 0x10) + 0x80))(*(long **)(this + 0x10),&local_b0);
  fVar13 = *(float *)param_1 * fVar4 + fVar5 * *(float *)(param_1 + 4) +
           fVar6 * *(float *)(param_1 + 8) + *(float *)(param_1 + 0x30);
  fVar11 = fVar4 * *(float *)(param_1 + 0x10) + fVar5 * *(float *)(param_1 + 0x14) +
           fVar6 * *(float *)(param_1 + 0x18) + *(float *)(param_1 + 0x34);
  fVar12 = fVar4 * *(float *)(param_1 + 0x20) + fVar5 * *(float *)(param_1 + 0x24) +
           fVar6 * *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x38);
  local_b4 = 0;
  local_b0 = fVar9 * *(float *)param_3 + fVar10 * *(float *)(param_3 + 0x10) +
             fVar14 * *(float *)(param_3 + 0x20);
  fVar5 = fVar9 * *(float *)(param_3 + 4) + fVar10 * *(float *)(param_3 + 0x14) +
          fVar14 * *(float *)(param_3 + 0x24);
  fVar6 = fVar9 * *(float *)(param_3 + 8) + fVar10 * *(float *)(param_3 + 0x18) +
          fVar14 * *(float *)(param_3 + 0x28);
  local_a4 = 0;
  local_c0 = fVar13;
  fStack_bc = fVar11;
  local_b8 = fVar12;
  fStack_ac = fVar5;
  local_a8 = fVar6;
  fVar4 = (float)(**(code **)(**(long **)(this + 0x18) + 0x80))(*(long **)(this + 0x18),&local_b0);
  local_d0 = *(float *)param_3 * fVar4 + fVar5 * *(float *)(param_3 + 4) +
             fVar6 * *(float *)(param_3 + 8) + *(float *)(param_3 + 0x30);
  local_160 = 0.0;
  local_cc = fVar4 * *(float *)(param_3 + 0x10) + fVar5 * *(float *)(param_3 + 0x14) +
             fVar6 * *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x34);
  local_c8 = fVar4 * *(float *)(param_3 + 0x20) + fVar5 * *(float *)(param_3 + 0x24) +
             fVar6 * *(float *)(param_3 + 0x28) + *(float *)(param_3 + 0x38);
  local_168 = 0.0;
  local_164 = 0.0;
  local_b0 = fVar13 - local_d0;
  fStack_ac = fVar11 - local_cc;
  local_a8 = fVar12 - local_c8;
  fVar4 = 0.0;
  local_c4 = 0;
  local_a4 = 0;
  local_170 = 0;
  if (0.0001 < local_b0 * local_b0 + fStack_ac * fStack_ac + local_a8 * local_a8) {
    local_170 = 0;
    local_164 = 0.0;
    fVar4 = 0.0;
    iVar3 = -0x21;
    local_168 = 0.0;
    local_160 = 0.0;
    while (iVar3 = iVar3 + 1, iVar3 != 0) {
      fVar5 = -local_b0;
      fVar11 = fVar21 * local_a8;
      local_f0 = (fVar7 * fVar5 - fVar16 * fStack_ac) - fVar19 * local_a8;
      fVar6 = (fVar8 * fVar5 - fVar17 * fStack_ac) - fVar20 * local_a8;
      local_e8 = (fVar15 * fVar5 - fVar18 * fStack_ac) - fVar11;
      local_e4 = 0;
      fStack_ec = fVar6;
      fVar5 = (float)(**(code **)(**(long **)(this + 0x10) + 0x80))
                               (*(long **)(this + 0x10),&local_f0);
      local_c0 = local_108 + fVar15 * fVar11 + fVar7 * fVar5 + fVar8 * fVar6;
      fStack_bc = local_10c + fVar18 * fVar11 + fVar16 * fVar5 + fVar17 * fVar6;
      local_b8 = local_110 + fVar21 * fVar11 + fVar19 * fVar5 + fVar20 * fVar6;
      local_b4 = 0;
      local_f0 = fVar22 * local_b0 + fVar25 * fStack_ac + fVar28 * local_a8;
      fVar6 = fVar23 * local_b0 + fVar26 * fStack_ac + fVar29 * local_a8;
      fVar11 = fVar24 * local_b0 + fVar27 * fStack_ac + fVar30 * local_a8;
      local_e4 = 0;
      fStack_ec = fVar6;
      local_e8 = fVar11;
      fVar5 = (float)(**(code **)(**(long **)(this + 0x18) + 0x80))
                               (*(long **)(this + 0x18),&local_f0);
      local_d0 = local_114 + fVar24 * fVar11 + fVar22 * fVar5 + fVar23 * fVar6;
      local_cc = local_118 + fVar27 * fVar11 + fVar25 * fVar5 + fVar26 * fVar6;
      local_c8 = local_11c + fVar30 * fVar11 + fVar28 * fVar5 + fVar29 * fVar6;
      local_e0 = local_c0 - local_d0;
      fStack_dc = fStack_bc - local_cc;
      local_d8 = local_b8 - local_c8;
      local_c4 = 0;
      if (1.0 < fVar4) goto LAB_01234ebc;
      fVar5 = local_b0 * local_e0 + fStack_ac * fStack_dc + local_a8 * local_d8;
      if (0.0 < fVar5) {
        fVar6 = fVar9 * local_b0 + fVar10 * fStack_ac + fVar14 * local_a8;
        if (-1.4210855e-14 <= fVar6) goto LAB_01234ebc;
        fVar4 = fVar4 - fVar5 / fVar6;
        fVar5 = 1.0 - fVar4;
        local_108 = fVar5 * *(float *)(param_1 + 0x30) + fVar4 * *(float *)(param_2 + 0x30);
        local_10c = fVar5 * *(float *)(param_1 + 0x34) + fVar4 * *(float *)(param_2 + 0x34);
        local_110 = fVar5 * *(float *)(param_1 + 0x38) + fVar4 * *(float *)(param_2 + 0x38);
        local_170 = local_a4;
        local_114 = fVar5 * *(float *)(param_3 + 0x30) + fVar4 * *(float *)(param_4 + 0x30);
        local_118 = fVar5 * *(float *)(param_3 + 0x34) + fVar4 * *(float *)(param_4 + 0x34);
        local_11c = fVar5 * *(float *)(param_3 + 0x38) + fVar4 * *(float *)(param_4 + 0x38);
        local_164 = local_a8;
        local_160 = local_b0;
        local_168 = fStack_ac;
      }
      local_d4 = 0;
      uVar1 = btVoronoiSimplexSolver::inSimplex
                        (*(btVoronoiSimplexSolver **)(this + 8),(btVector3 *)&local_e0);
      if ((uVar1 & 1) == 0) {
        btVoronoiSimplexSolver::addVertex
                  (*(btVoronoiSimplexSolver **)(this + 8),(btVector3 *)&local_e0,
                   (btVector3 *)&local_c0,(btVector3 *)&local_d0);
      }
      uVar1 = btVoronoiSimplexSolver::closest
                        (*(btVoronoiSimplexSolver **)(this + 8),(btVector3 *)&local_b0);
      if (((uVar1 & 1) == 0) ||
         (local_b0 * local_b0 + fStack_ac * fStack_ac + local_a8 * local_a8 <= 0.0001)) break;
    }
  }
  *(float *)(param_5 + 0xa8) = fVar4;
  fVar4 = local_160 * local_160 + local_168 * local_168 + local_164 * local_164;
  if (1.4210855e-14 <= fVar4) {
    fVar5 = SQRT(fVar4);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar4);
    }
    fVar5 = 1.0 / fVar5;
    local_160 = local_160 * fVar5;
    local_168 = local_168 * fVar5;
    local_164 = local_164 * fVar5;
    *(float *)(param_5 + 0x88) = local_160;
    *(float *)(param_5 + 0x8c) = local_168;
    *(float *)(param_5 + 0x90) = local_164;
  }
  else {
    local_164 = 0.0;
    local_168 = 0.0;
    local_160 = 0.0;
    local_170 = 0;
    *(undefined4 *)(param_5 + 0x88) = 0;
    *(undefined8 *)(param_5 + 0x8c) = 0;
  }
  *(undefined4 *)(param_5 + 0x94) = local_170;
  if (-*(float *)(param_5 + 0xb8) <= fVar9 * local_160 + fVar10 * local_168 + fVar14 * local_164) {
LAB_01234ebc:
    uVar2 = 0;
  }
  else {
    btVoronoiSimplexSolver::compute_points
              (*(btVoronoiSimplexSolver **)(this + 8),(btVector3 *)&local_f0,(btVector3 *)&local_100
              );
    uVar2 = 1;
    *(undefined8 *)(param_5 + 0xa0) = uStack_f8;
    *(undefined8 *)(param_5 + 0x98) = local_100;
  }
  return uVar2;
}

