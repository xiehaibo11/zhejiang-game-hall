
/* WARNING: Type propagation algorithm not settling */
/* btGjkPairDetector::getClosestPointsNonVirtual(btDiscreteCollisionDetectorInterface::ClosestPointInput
   const&, btDiscreteCollisionDetectorInterface::Result&, btIDebugDraw*) */

void __thiscall
btGjkPairDetector::getClosestPointsNonVirtual
          (btGjkPairDetector *this,ClosestPointInput *param_1,Result *param_2,btIDebugDraw *param_3)

{
  int iVar1;
  btGjkPairDetector bVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  btGjkPairDetector *pbVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_190;
  float fStack_18c;
  float fStack_188;
  undefined4 uStack_184;
  float local_180;
  float fStack_17c;
  float local_178;
  undefined4 local_174;
  float local_170;
  float fStack_16c;
  float fStack_168;
  undefined4 uStack_164;
  float local_160;
  float local_15c;
  float fStack_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  
  *(undefined4 *)(this + 0x4c) = 0;
  local_b0 = 0.0;
  fStack_ac = 0.0;
  fStack_a8 = 0.0;
  uStack_a4 = 0;
  uStack_108 = *(undefined8 *)(param_1 + 8);
  local_110 = *(undefined8 *)param_1;
  bVar4 = false;
  uStack_f8 = *(undefined8 *)(param_1 + 0x18);
  local_100 = *(undefined8 *)(param_1 + 0x10);
  uStack_e8 = *(undefined8 *)(param_1 + 0x28);
  local_f0 = *(undefined8 *)(param_1 + 0x20);
  uStack_148 = *(undefined8 *)(param_1 + 0x48);
  local_150 = *(undefined8 *)(param_1 + 0x40);
  local_e0._0_4_ = (float)*(undefined8 *)(param_1 + 0x30);
  local_e0._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  uStack_d8._0_4_ = (float)*(undefined8 *)(param_1 + 0x38);
  uStack_138 = *(undefined8 *)(param_1 + 0x58);
  local_140 = *(undefined8 *)(param_1 + 0x50);
  uStack_128 = *(undefined8 *)(param_1 + 0x68);
  local_130 = *(undefined8 *)(param_1 + 0x60);
  local_120._0_4_ = (float)*(undefined8 *)(param_1 + 0x70);
  local_120._4_4_ = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  uStack_118._0_4_ = (float)*(undefined8 *)(param_1 + 0x78);
  fVar16 = ((float)local_e0 + (float)local_120) * 0.5;
  fVar17 = (local_e0._4_4_ + local_120._4_4_) * 0.5;
  fVar20 = ((float)uStack_d8 + (float)uStack_118) * 0.5;
  local_e0 = CONCAT44(local_e0._4_4_ - fVar17,(float)local_e0 - fVar16);
  uStack_d8 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20),
                       (float)uStack_d8 - fVar20);
  local_120 = CONCAT44(local_120._4_4_ - fVar17,(float)local_120 - fVar16);
  uStack_118 = CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20),
                        (float)uStack_118 - fVar20);
  if (*(int *)(*(long *)(this + 0x28) + 8) - 0x11U < 2) {
    bVar4 = *(int *)(*(long *)(this + 0x30) + 8) - 0x11U < 2;
  }
  fVar19 = *(float *)(this + 0x40);
  fVar9 = *(float *)(this + 0x44);
  gNumGjkChecks = gNumGjkChecks + 1;
  pbVar7 = this + 8;
  *(undefined4 *)pbVar7 = 0;
  bVar2 = this[0x48];
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0xc) = 0x3f800000;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  if (bVar2 != (btGjkPairDetector)0x0) {
    fVar9 = 0.0;
  }
  btVoronoiSimplexSolver::reset(*(btVoronoiSimplexSolver **)(this + 0x20));
  bVar3 = false;
  fVar11 = 1e+18;
  do {
    fVar10 = *(float *)(this + 8);
    fVar12 = *(float *)(this + 0xc);
    fVar21 = -fVar10;
    fVar14 = *(float *)(this + 0x10);
    local_c0 = CONCAT44((*(float *)(param_1 + 4) * fVar21 - *(float *)(param_1 + 0x14) * fVar12) -
                        *(float *)(param_1 + 0x24) * fVar14,
                        (*(float *)param_1 * fVar21 - *(float *)(param_1 + 0x10) * fVar12) -
                        *(float *)(param_1 + 0x20) * fVar14);
    local_b8 = (ulong)(uint)((*(float *)(param_1 + 8) * fVar21 - *(float *)(param_1 + 0x18) * fVar12
                             ) - *(float *)(param_1 + 0x28) * fVar14);
    fVar15 = fVar14 * *(float *)(param_1 + 0x68);
    fVar13 = *(float *)(param_1 + 0x40) * fVar10 + *(float *)(param_1 + 0x50) * fVar12 +
             *(float *)(param_1 + 0x60) * fVar14;
    local_d0 = CONCAT44(fVar10 * *(float *)(param_1 + 0x44) + fVar12 * *(float *)(param_1 + 0x54) +
                        fVar14 * *(float *)(param_1 + 100),fVar13);
    uStack_c8 = (ulong)(uint)(fVar10 * *(float *)(param_1 + 0x48) +
                              fVar12 * *(float *)(param_1 + 0x58) + fVar15);
    fVar14 = (float)btConvexShape::localGetSupportVertexWithoutMarginNonVirtual
                              (*(btVector3 **)(this + 0x28));
    fVar10 = fVar13;
    fVar12 = fVar15;
    fVar21 = (float)btConvexShape::localGetSupportVertexWithoutMarginNonVirtual
                              (*(btVector3 **)(this + 0x30));
    local_160 = fVar14 * (float)local_110 + fVar13 * local_110._4_4_ + fVar15 * (float)uStack_108 +
                (float)local_e0;
    local_15c = fVar14 * (float)local_100 + fVar13 * local_100._4_4_ + fVar15 * (float)uStack_f8 +
                local_e0._4_4_;
    fStack_158 = fVar14 * (float)local_f0 + fVar13 * local_f0._4_4_ + fVar15 * (float)uStack_e8 +
                 (float)uStack_d8;
    local_170 = fVar21 * (float)local_150 + fVar10 * local_150._4_4_ + fVar12 * (float)uStack_148 +
                (float)local_120;
    fStack_16c = fVar21 * (float)local_140 + fVar10 * local_140._4_4_ + fVar12 * (float)uStack_138 +
                 local_120._4_4_;
    fStack_168 = fVar21 * (float)local_130 + fVar10 * local_130._4_4_ + fVar12 * (float)uStack_128 +
                 (float)uStack_118;
    local_154 = 0;
    uStack_164 = 0;
    if (bVar4) {
      fStack_158 = 0.0;
      fStack_168 = 0.0;
    }
    local_180 = local_160 - local_170;
    fStack_17c = local_15c - fStack_16c;
    local_178 = fStack_158 - fStack_168;
    local_174 = 0;
    fVar12 = *(float *)(this + 8) * local_180 + *(float *)(this + 0xc) * fStack_17c +
             *(float *)(this + 0x10) * local_178;
    fVar10 = fVar11;
    if ((0.0 < fVar12) && (fVar11 * *(float *)(param_1 + 0x80) < fVar12 * fVar12)) {
      *(undefined4 *)(this + 0x58) = 10;
LAB_01231a3c:
      bVar3 = true;
      goto LAB_01231ac0;
    }
    uVar6 = btVoronoiSimplexSolver::inSimplex
                      (*(btVoronoiSimplexSolver **)(this + 0x20),(btVector3 *)&local_180);
    if ((uVar6 & 1) != 0) {
      bVar3 = true;
      *(undefined4 *)(this + 0x58) = 1;
      goto LAB_01231ac0;
    }
    if (fVar11 - fVar12 <= fVar11 * 1e-06) {
      uVar18 = 2;
      if (0.0 < fVar11 - fVar12) {
        uVar18 = 0xb;
      }
      *(undefined4 *)(this + 0x58) = uVar18;
      bVar3 = true;
      goto LAB_01231ac0;
    }
    btVoronoiSimplexSolver::addVertex
              (*(btVoronoiSimplexSolver **)(this + 0x20),(btVector3 *)&local_180,
               (btVector3 *)&local_160,(btVector3 *)&local_170);
    uVar6 = btVoronoiSimplexSolver::closest
                      (*(btVoronoiSimplexSolver **)(this + 0x20),(btVector3 *)&local_190);
    if ((uVar6 & 1) == 0) {
      *(undefined4 *)(this + 0x58) = 3;
      goto LAB_01231a3c;
    }
    fVar10 = local_190 * local_190 + fStack_18c * fStack_18c + fStack_188 * fStack_188;
    if (fVar10 < 1e-06) {
      bVar3 = true;
      *(ulong *)(this + 0x10) = CONCAT44(uStack_184,fStack_188);
      *(ulong *)pbVar7 = CONCAT44(fStack_18c,local_190);
      *(undefined4 *)(this + 0x58) = 6;
      fVar10 = fVar11;
      goto LAB_01231ac0;
    }
    if (fVar11 - fVar10 <= fVar11 * 1.1920929e-07) {
      *(undefined4 *)(this + 0x58) = 0xc;
      bVar3 = true;
      goto LAB_01231ac0;
    }
    *(ulong *)(this + 0x10) = CONCAT44(uStack_184,fStack_188);
    *(ulong *)pbVar7 = CONCAT44(fStack_18c,local_190);
    iVar1 = *(int *)(this + 0x54);
    *(int *)(this + 0x54) = iVar1 + 1;
    if (1000 < iVar1) goto LAB_01231ac0;
    fVar11 = fVar10;
  } while (**(int **)(this + 0x20) != 4);
  *(undefined4 *)(this + 0x58) = 0xd;
LAB_01231ac0:
  fVar11 = 0.0;
  if (bVar2 != (btGjkPairDetector)0x0) {
    fVar19 = 0.0;
  }
  fVar12 = fVar19 + fVar9;
  if (bVar3) {
    btVoronoiSimplexSolver::compute_points
              (*(btVoronoiSimplexSolver **)(this + 0x20),(btVector3 *)&local_c0,
               (btVector3 *)&local_d0);
    fStack_a8 = (float)*(undefined8 *)(this + 0x10);
    uStack_a4 = (undefined4)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
    local_b0 = (float)*(undefined8 *)pbVar7;
    fStack_ac = (float)((ulong)*(undefined8 *)pbVar7 >> 0x20);
    fVar11 = *(float *)(this + 8) * *(float *)(this + 8) +
             *(float *)(this + 0xc) * *(float *)(this + 0xc) +
             *(float *)(this + 0x10) * *(float *)(this + 0x10);
    if (fVar11 < 0.0001) {
      *(undefined4 *)(this + 0x58) = 5;
    }
    if (fVar11 <= 1.4210855e-14) {
      bVar4 = false;
      fVar11 = 0.0;
      uVar18 = 2;
    }
    else {
      fVar14 = SQRT(fVar11);
      if (NAN(fVar14)) {
        fVar14 = sqrtf(fVar11);
      }
      fVar14 = 1.0 / fVar14;
      local_b0 = fVar14 * local_b0;
      fStack_ac = fVar14 * fStack_ac;
      fVar21 = SQRT(fVar10);
      fStack_a8 = fVar14 * fStack_a8;
      if (NAN(fVar21)) {
        fVar21 = sqrtf(fVar10);
      }
      fVar10 = fVar19 / fVar21;
      fVar21 = fVar9 / fVar21;
      fVar11 = 1.0 / fVar14 - fVar12;
      local_c0 = CONCAT44(local_c0._4_4_ - fVar10 * *(float *)(this + 0xc),
                          (float)local_c0 - *(float *)(this + 8) * fVar10);
      local_d0 = CONCAT44(fVar21 * *(float *)(this + 0xc) + local_d0._4_4_,
                          fVar21 * *(float *)(this + 8) + (float)local_d0);
      uVar18 = 1;
      bVar4 = true;
      local_b8 = CONCAT44(local_b8._4_4_,(float)local_b8 - fVar10 * *(float *)(this + 0x10));
      uStack_c8 = CONCAT44(uStack_c8._4_4_,fVar21 * *(float *)(this + 0x10) + (float)uStack_c8);
    }
    *(undefined4 *)(this + 0x50) = uVar18;
    if (*(int *)(this + 0x5c) == 0) goto LAB_01231c60;
LAB_01231c14:
    if ((*(long *)(this + 0x18) == 0) || (*(int *)(this + 0x58) == 0)) goto LAB_01231c60;
    bVar3 = (bool)(bVar4 ^ 1);
    bVar8 = bVar3;
    if (0.01 <= fVar12 + fVar11) goto LAB_01231c68;
LAB_01231c6c:
    plVar5 = *(long **)(this + 0x18);
    if (plVar5 != (long *)0x0) {
      gNumDeepPenetrationChecks = gNumDeepPenetrationChecks + 1;
      *(undefined8 *)pbVar7 = 0;
      *(undefined8 *)(this + 0x10) = 0;
      uVar6 = (**(code **)(*plVar5 + 0x10))
                        (plVar5,*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28),
                         *(undefined8 *)(this + 0x30),&local_110,&local_150,pbVar7,&local_160,
                         &local_170,param_3);
      if ((uVar6 & 1) == 0) {
        if (*(float *)(this + 8) * *(float *)(this + 8) +
            *(float *)(this + 0xc) * *(float *)(this + 0xc) +
            *(float *)(this + 0x10) * *(float *)(this + 0x10) <= 0.0) goto joined_r0x012320b0;
        fVar14 = (local_160 - local_170) * (local_160 - local_170) +
                 (local_15c - fStack_16c) * (local_15c - fStack_16c) +
                 (fStack_158 - fStack_168) * (fStack_158 - fStack_168);
        fVar10 = SQRT(fVar14);
        if (NAN(fVar10)) {
          fVar10 = sqrtf(fVar14);
        }
        if ((bool)(fVar10 - fVar12 < fVar11 | bVar8)) {
          local_c0 = CONCAT44(local_15c - fVar19 * *(float *)(this + 0xc),
                              local_160 - fVar19 * *(float *)(this + 8));
          local_d0 = CONCAT44(fVar9 * *(float *)(this + 0xc) + fStack_16c,
                              fVar9 * *(float *)(this + 8) + local_170);
          local_b8 = CONCAT44(local_154,fStack_158 - fVar19 * *(float *)(this + 0x10));
          uStack_c8 = CONCAT44(uStack_164,fVar9 * *(float *)(this + 0x10) + fStack_168);
          fStack_a8 = (float)*(undefined8 *)(this + 0x10);
          uStack_a4 = (undefined4)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
          local_b0 = (float)*(undefined8 *)pbVar7;
          fStack_ac = (float)((ulong)*(undefined8 *)pbVar7 >> 0x20);
          fVar19 = local_b0 * local_b0 + fStack_ac * fStack_ac + fStack_a8 * fStack_a8;
          fVar9 = SQRT(fVar19);
          if (NAN(fVar9)) {
            fVar9 = sqrtf(fVar19);
          }
          fVar9 = 1.0 / fVar9;
          local_b0 = fVar9 * local_b0;
          fStack_ac = fVar9 * fStack_ac;
          fStack_a8 = fVar9 * fStack_a8;
          *(undefined4 *)(this + 0x50) = 6;
          fVar11 = fVar10 - fVar12;
          goto joined_r0x01231dcc;
        }
        uVar18 = 5;
      }
      else {
        fVar19 = local_170 - local_160;
        fVar10 = fStack_16c - local_15c;
        fVar12 = fStack_168 - fStack_158;
        fVar9 = fVar19 * fVar19 + fVar10 * fVar10 + fVar12 * fVar12;
        uVar18 = 0;
        if (fVar9 <= 1.4210855e-14) {
          fVar19 = *(float *)(this + 8);
          fVar10 = *(float *)(this + 0xc);
          fVar12 = *(float *)(this + 0x10);
          uVar18 = *(undefined4 *)(this + 0x14);
          fVar9 = fVar19 * fVar19 + fVar10 * fVar10 + fVar12 * fVar12;
        }
        if (fVar9 <= 1.4210855e-14) {
          uVar18 = 9;
        }
        else {
          fVar14 = SQRT(fVar9);
          if (NAN(fVar14)) {
            fVar14 = sqrtf(fVar9);
          }
          fVar21 = (local_160 - local_170) * (local_160 - local_170) +
                   (local_15c - fStack_16c) * (local_15c - fStack_16c) +
                   (fStack_158 - fStack_168) * (fStack_158 - fStack_168);
          fVar9 = SQRT(fVar21);
          if (NAN(fVar9)) {
            fVar9 = sqrtf(fVar21);
          }
          if ((bool)(-fVar9 < fVar11 | bVar8)) {
            uStack_c8 = CONCAT44(uStack_164,fStack_168);
            local_d0 = CONCAT44(fStack_16c,local_170);
            local_b8 = CONCAT44(local_154,fStack_158);
            local_c0 = CONCAT44(local_15c,local_160);
            fVar14 = 1.0 / fVar14;
            fStack_a8 = fVar12 * fVar14;
            fStack_ac = fVar10 * fVar14;
            local_b0 = fVar19 * fVar14;
            *(undefined4 *)(this + 0x50) = 3;
            fVar11 = -fVar9;
            uStack_a4 = uVar18;
            goto joined_r0x01231dcc;
          }
          uVar18 = 8;
        }
      }
      *(undefined4 *)(this + 0x50) = uVar18;
    }
  }
  else {
    bVar4 = false;
    if (*(int *)(this + 0x5c) != 0) goto LAB_01231c14;
LAB_01231c60:
    bVar3 = (bool)(bVar4 ^ 1);
LAB_01231c68:
    bVar8 = true;
    if (bVar3) goto LAB_01231c6c;
  }
joined_r0x012320b0:
  if (!bVar4) {
    return;
  }
joined_r0x01231dcc:
  if ((fVar11 < 0.0) || (fVar11 * fVar11 < *(float *)(param_1 + 0x80))) {
    if (*(int *)(this + 0x60) != 0) {
      (**(code **)(**(long **)(this + 0x28) + 0x10))
                (*(long **)(this + 0x28),&local_110,&local_160,&local_170);
      fVar9 = local_170 + local_160;
      fVar19 = fStack_16c + local_15c;
      fVar10 = fStack_168 + fStack_158;
      (**(code **)(**(long **)(this + 0x30) + 0x10))
                (*(long **)(this + 0x30),&local_150,&local_160,&local_170);
      if ((fVar9 * 0.5 - (local_160 + local_170) * 0.5) * local_b0 +
          (fVar19 * 0.5 - (local_15c + fStack_16c) * 0.5) * fStack_ac +
          (fVar10 * 0.5 - (fStack_158 + fStack_168) * 0.5) * fStack_a8 < 0.0) {
        fStack_ac = -fStack_ac;
        local_b0 = -local_b0;
        fStack_a8 = -fStack_a8;
      }
    }
    *(ulong *)(this + 0x10) = CONCAT44(uStack_a4,fStack_a8);
    *(ulong *)pbVar7 = CONCAT44(fStack_ac,local_b0);
    *(float *)(this + 0x4c) = fVar11;
    local_160 = fVar16 + (float)local_d0;
    fStack_158 = fVar20 + (float)uStack_c8;
    local_15c = fVar17 + local_d0._4_4_;
    local_154 = 0;
    (**(code **)(*(long *)param_2 + 0x20))(fVar11,param_2,&local_b0,&local_160);
  }
  return;
}

