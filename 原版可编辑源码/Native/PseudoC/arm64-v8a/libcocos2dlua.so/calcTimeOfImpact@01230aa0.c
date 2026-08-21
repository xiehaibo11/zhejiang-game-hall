
/* btContinuousConvexCollision::calcTimeOfImpact(btTransform const&, btTransform const&, btTransform
   const&, btTransform const&, btConvexCast::CastResult&) */

undefined8 __thiscall
btContinuousConvexCollision::calcTimeOfImpact
          (btContinuousConvexCollision *this,btTransform *param_1,btTransform *param_2,
          btTransform *param_3,btTransform *param_4,CastResult *param_5)

{
  long *plVar1;
  int iVar2;
  float fVar3;
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
  float local_1e4;
  undefined **local_1d0;
  undefined8 local_1c8;
  float fStack_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  float local_1a8;
  char local_1a4;
  float local_1a0 [16];
  float local_160 [12];
  undefined1 auStack_130 [16];
  undefined **local_120;
  float local_118;
  float fStack_114;
  float local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  char local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float fStack_c8;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  undefined4 local_a4;
  
  fVar7 = *(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x30);
  fVar3 = (float)*(undefined8 *)(param_2 + 0x34) - (float)*(undefined8 *)(param_1 + 0x34);
  fVar6 = (float)((ulong)*(undefined8 *)(param_2 + 0x34) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 0x34) >> 0x20);
  local_a4 = 0;
  local_b0 = fVar7;
  local_ac = fVar3;
  fStack_a8 = fVar6;
  btTransformUtil::calculateDiffAxisAngle(param_1,param_2,(btVector3 *)local_160,local_1a0);
  local_b4 = 0;
  fVar15 = local_160[0] * local_1a0[0];
  fVar8 = local_1a0[0] * local_160[1];
  fVar14 = local_1a0[0] * local_160[2];
  local_1e4 = *(float *)(param_4 + 0x30) - *(float *)(param_3 + 0x30);
  fVar12 = (float)*(undefined8 *)(param_4 + 0x34) - (float)*(undefined8 *)(param_3 + 0x34);
  fVar13 = (float)((ulong)*(undefined8 *)(param_4 + 0x34) >> 0x20) -
           (float)((ulong)*(undefined8 *)(param_3 + 0x34) >> 0x20);
  local_c4 = 0;
  local_d0 = local_1e4;
  local_c0 = fVar15;
  fStack_bc = fVar8;
  local_b8 = fVar14;
  local_cc = fVar12;
  fStack_c8 = fVar13;
  btTransformUtil::calculateDiffAxisAngle(param_3,param_4,(btVector3 *)local_160,local_1a0);
  local_d4 = 0;
  fVar10 = local_160[0] * local_1a0[0];
  fVar11 = local_1a0[0] * local_160[1];
  fVar9 = local_1a0[0] * local_160[2];
  local_e0 = fVar10;
  fStack_dc = fVar11;
  local_d8 = fVar9;
  fVar4 = (float)(**(code **)(**(long **)(this + 0x18) + 0x20))();
  if (*(long **)(this + 0x20) == (long *)0x0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = (float)(**(code **)(**(long **)(this + 0x20) + 0x20))();
    local_1e4 = local_d0;
    fVar15 = local_c0;
    fVar8 = fStack_bc;
    fVar14 = local_b8;
    fVar10 = local_e0;
    fVar11 = fStack_dc;
    fVar9 = local_d8;
    fVar7 = local_b0;
    fVar12 = local_cc;
    fVar13 = fStack_c8;
    fVar3 = local_ac;
    fVar6 = fStack_a8;
  }
  fVar8 = fVar15 * fVar15 + fVar8 * fVar8 + fVar14 * fVar14;
  fVar15 = SQRT(fVar8);
  if (NAN(fVar15)) {
    fVar15 = sqrtf(fVar8);
  }
  fVar14 = fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9;
  fVar8 = SQRT(fVar14);
  if (NAN(fVar8)) {
    fVar8 = sqrtf(fVar14);
  }
  local_1e4 = local_1e4 - fVar7;
  fVar12 = fVar12 - fVar3;
  fVar13 = fVar13 - fVar6;
  fVar14 = local_1e4 * local_1e4 + fVar12 * fVar12 + fVar13 * fVar13;
  fVar7 = SQRT(fVar14);
  fVar15 = fVar4 * fVar15 + fVar5 * fVar8;
  if (NAN(fVar7)) {
    fVar7 = sqrtf(fVar14);
  }
  if (fVar15 + fVar7 != 0.0) {
    local_f8 = 1e+18;
    local_120 = &PTR__Result_01733b08;
    local_f4 = '\0';
    computeClosestPoints(this,param_1,param_3,(btPointCollector *)&local_120);
    uStack_e8 = uStack_100;
    local_f0 = local_108;
    if ((local_f4 != '\0') &&
       (1.1920929e-07 < fVar15 + local_1e4 * local_118 + fStack_114 * fVar12 + local_110 * fVar13))
    {
      fVar7 = local_f8 + *(float *)(param_5 + 0xb8);
      if (fVar7 <= 0.001) {
        fVar8 = 0.0;
      }
      else {
        fVar14 = local_118;
        fVar10 = fStack_114;
        fVar11 = local_110;
        iVar2 = 0;
        fVar9 = 0.0;
        do {
          plVar1 = *(long **)(param_5 + 0xb0);
          if (plVar1 != (long *)0x0) {
            local_160[0] = 1.0;
            local_160[1] = 1.0;
            local_160[2] = 1.0;
            local_160[3] = 0.0;
            (**(code **)(*plVar1 + 0x28))(0x3e4ccccd,plVar1,&local_f0,local_160);
          }
          fVar8 = fVar15 + local_1e4 * fVar14 + fVar12 * fVar10 + fVar13 * fVar11;
          if (fVar8 <= 1.1920929e-07) {
            return 0;
          }
          fVar8 = fVar9 + fVar7 / fVar8;
          if (fVar8 <= fVar9) {
            return 0;
          }
          if (fVar8 < 0.0) {
            return 0;
          }
          if (1.0 < fVar8) {
            return 0;
          }
          btTransformUtil::integrateTransform
                    (param_1,(btVector3 *)&local_b0,(btVector3 *)&local_c0,fVar8,
                     (btTransform *)local_160);
          btTransformUtil::integrateTransform
                    (param_3,(btVector3 *)&local_d0,(btVector3 *)&local_e0,fVar8,
                     (btTransform *)local_1a0);
          plVar1 = *(long **)(param_5 + 0xb0);
          if (plVar1 != (long *)0x0) {
            local_1d0 = (undefined **)0x3f800000;
            local_1c8 = 0;
            (**(code **)(*plVar1 + 0x28))(0x3e4ccccd,plVar1,auStack_130,&local_1d0);
          }
          (*(code *)**(undefined8 **)param_5)(fVar8,param_5);
          local_1a8 = 1e+18;
          local_1a4 = '\0';
          local_1d0 = &PTR__Result_01733b08;
          computeClosestPoints
                    (this,(btTransform *)local_160,(btTransform *)local_1a0,
                     (btPointCollector *)&local_1d0);
          if (local_1a4 == '\0') {
            (**(code **)(*(long *)param_5 + 0x10))(param_5,0xffffffff,iVar2);
            return 0;
          }
          uStack_e8 = uStack_1b0;
          local_f0 = local_1b8;
          if (0x3f < iVar2) {
            (**(code **)(*(long *)param_5 + 0x10))(param_5,0xfffffffe,iVar2 + 1);
            return 0;
          }
          fVar7 = local_1a8 + *(float *)(param_5 + 0xb8);
          local_118 = (float)local_1c8;
          fVar14 = (float)local_1c8;
          fStack_114 = local_1c8._4_4_;
          fVar10 = local_1c8._4_4_;
          local_110 = fStack_1c0;
          fVar11 = fStack_1c0;
          iVar2 = iVar2 + 1;
          local_10c = local_1bc;
          fVar9 = fVar8;
        } while (0.001 < fVar7);
      }
      *(float *)(param_5 + 0xa8) = fVar8;
      *(float *)(param_5 + 0x88) = local_118;
      *(float *)(param_5 + 0x8c) = fStack_114;
      *(float *)(param_5 + 0x90) = local_110;
      *(undefined4 *)(param_5 + 0x94) = local_10c;
      *(undefined8 *)(param_5 + 0xa0) = uStack_e8;
      *(undefined8 *)(param_5 + 0x98) = local_f0;
      return 1;
    }
  }
  return 0;
}

