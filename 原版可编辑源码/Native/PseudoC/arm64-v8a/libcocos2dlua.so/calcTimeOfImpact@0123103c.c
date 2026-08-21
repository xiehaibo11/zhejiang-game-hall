
/* btGjkConvexCast::calcTimeOfImpact(btTransform const&, btTransform const&, btTransform const&,
   btTransform const&, btConvexCast::CastResult&) */

undefined1 __thiscall
btGjkConvexCast::calcTimeOfImpact
          (btGjkConvexCast *this,btTransform *param_1,btTransform *param_2,btTransform *param_3,
          btTransform *param_4,CastResult *param_5)

{
  undefined1 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  btGjkPairDetector abStack_148 [104];
  undefined **local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  char local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  btVoronoiSimplexSolver::reset(*(btVoronoiSimplexSolver **)(this + 8));
  fVar4 = *(float *)(param_1 + 0x30);
  fVar7 = *(float *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x34);
  uVar8 = *(undefined8 *)(param_1 + 0x34);
  fVar6 = *(float *)(param_3 + 0x30);
  local_e0 = &PTR__Result_01733b08;
  fVar10 = *(float *)(param_4 + 0x30);
  uVar9 = *(undefined8 *)(param_4 + 0x34);
  uVar11 = *(undefined8 *)(param_3 + 0x34);
  local_b8 = 1e+18;
  local_b4 = '\0';
  btGjkPairDetector::btGjkPairDetector
            (abStack_148,*(btConvexShape **)(this + 0x10),*(btConvexShape **)(this + 0x18),
             *(btVoronoiSimplexSolver **)(this + 8),(btConvexPenetrationDepthSolver *)0x0);
  local_150 = 0x5d5e0b6b;
  uStack_1c8 = *(undefined8 *)(param_1 + 8);
  local_1d0 = *(undefined8 *)param_1;
  uStack_1b8 = *(undefined8 *)(param_1 + 0x18);
  local_1c0 = *(undefined8 *)(param_1 + 0x10);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x28);
  local_1b0 = *(undefined8 *)(param_1 + 0x20);
  uStack_198 = *(undefined8 *)(param_1 + 0x38);
  local_1a0 = *(undefined8 *)(param_1 + 0x30);
  uStack_188 = *(undefined8 *)(param_3 + 8);
  local_190 = *(undefined8 *)param_3;
  uStack_178 = *(undefined8 *)(param_3 + 0x18);
  local_180 = *(undefined8 *)(param_3 + 0x10);
  uStack_168 = *(undefined8 *)(param_3 + 0x28);
  local_170 = *(undefined8 *)(param_3 + 0x20);
  uStack_158 = *(undefined8 *)(param_3 + 0x38);
  local_160 = *(undefined8 *)(param_3 + 0x30);
  btGjkPairDetector::getClosestPoints
            ((ClosestPointInput *)abStack_148,(Result *)&local_1d0,(btIDebugDraw *)&local_e0,false);
  uStack_a8 = uStack_c0;
  local_b0 = local_c8;
  uVar1 = 0;
  if (local_b4 != '\0') {
    fVar7 = (fVar7 - fVar4) - (fVar10 - fVar6);
    fVar4 = ((float)uVar5 - (float)uVar8) - ((float)uVar9 - (float)uVar11);
    fVar6 = ((float)((ulong)uVar5 >> 0x20) - (float)((ulong)uVar8 >> 0x20)) -
            ((float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar11 >> 0x20));
    if (local_b8 <= 0.001) {
      fVar10 = 0.0;
    }
    else {
      iVar2 = -1;
      fVar3 = 0.0;
      do {
        iVar2 = iVar2 + 1;
        if (0x1f < iVar2) goto LAB_01231354;
        fVar10 = fVar3 - local_b8 / (fVar6 * fStack_d0 + fVar4 * fStack_d4 + fVar7 * local_d8);
        if (fVar10 <= fVar3) {
          return 0;
        }
        if (fVar10 < 0.0) {
          return 0;
        }
        if (1.0 < fVar10) {
          return 0;
        }
        (*(code *)**(undefined8 **)param_5)(fVar10,param_5);
        fVar3 = 1.0 - fVar10;
        local_1a0 = CONCAT44(fVar3 * *(float *)(param_1 + 0x34) +
                             fVar10 * *(float *)(param_2 + 0x34),
                             fVar3 * *(float *)(param_1 + 0x30) +
                             fVar10 * *(float *)(param_2 + 0x30));
        uStack_198 = CONCAT44(uStack_198._4_4_,
                              fVar3 * *(float *)(param_1 + 0x38) +
                              fVar10 * *(float *)(param_2 + 0x38));
        local_160 = CONCAT44(fVar3 * *(float *)(param_3 + 0x34) +
                             fVar10 * *(float *)(param_4 + 0x34),
                             fVar3 * *(float *)(param_3 + 0x30) +
                             fVar10 * *(float *)(param_4 + 0x30));
        uStack_158 = CONCAT44(uStack_158._4_4_,
                              fVar3 * *(float *)(param_3 + 0x38) +
                              fVar10 * *(float *)(param_4 + 0x38));
        btGjkPairDetector::getClosestPoints
                  ((ClosestPointInput *)abStack_148,(Result *)&local_1d0,(btIDebugDraw *)&local_e0,
                   false);
        if (local_b4 == '\0') {
          return 0;
        }
        if (local_b8 < 0.0) {
          *(float *)(param_5 + 0xa8) = fVar10;
          *(ulong *)(param_5 + 0x90) = CONCAT44(uStack_cc,fStack_d0);
          *(ulong *)(param_5 + 0x88) = CONCAT44(fStack_d4,local_d8);
          local_b0 = local_c8;
          uStack_a8 = uStack_c0;
          goto LAB_01231348;
        }
        uStack_a8 = uStack_c0;
        local_b0 = local_c8;
        fVar3 = fVar10;
      } while (0.001 < local_b8);
    }
    if (-*(float *)(param_5 + 0xb8) <= fStack_d0 * fVar6 + fStack_d4 * fVar4 + fVar7 * local_d8) {
LAB_01231354:
      uVar1 = 0;
    }
    else {
      *(float *)(param_5 + 0xa8) = fVar10;
      *(float *)(param_5 + 0x88) = local_d8;
      *(float *)(param_5 + 0x8c) = fStack_d4;
      *(float *)(param_5 + 0x90) = fStack_d0;
      *(undefined4 *)(param_5 + 0x94) = uStack_cc;
LAB_01231348:
      uVar1 = 1;
      *(undefined8 *)(param_5 + 0xa0) = uStack_a8;
      *(undefined8 *)(param_5 + 0x98) = local_b0;
    }
  }
  return uVar1;
}

