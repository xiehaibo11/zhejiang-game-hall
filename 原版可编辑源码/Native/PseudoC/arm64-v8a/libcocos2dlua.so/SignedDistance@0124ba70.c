
/* btGjkEpaSolver2::SignedDistance(btVector3 const&, float, btConvexShape const*, btTransform
   const&, btGjkEpaSolver2::sResults&) */

float btGjkEpaSolver2::SignedDistance
                (btVector3 *param_1,float param_2,btConvexShape *param_3,btTransform *param_4,
                sResults *param_5)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
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
  GJK aGStack_380 [144];
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined4 local_2e0;
  undefined8 local_1c8;
  long local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined **local_170;
  undefined4 local_168;
  float local_148;
  float local_138;
  btConvexShape *local_130;
  undefined ***local_128;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  code *local_b0;
  ulong uStack_a8;
  float local_a0 [2];
  ulong local_98;
  
  btConvexInternalShape::btConvexInternalShape((btConvexInternalShape *)&local_170);
  local_1b0 = 0x3f800000;
  uStack_1a4 = 0;
  local_1ac = 0;
  local_19c = 0x3f800000;
  uStack_190 = 0;
  local_198 = 0;
  local_188 = 0x3f800000;
  local_170 = &PTR__btConvexShape_01733760;
  local_168 = 8;
  uStack_178 = *(undefined8 *)(param_1 + 8);
  uVar12 = *(undefined8 *)param_1;
  *(undefined4 *)(param_5 + 0x20) = 0;
  *(undefined8 *)(param_5 + 8) = 0;
  *(undefined8 *)param_5 = 0;
  *(undefined8 *)(param_5 + 0x18) = 0;
  *(undefined8 *)(param_5 + 0x10) = 0;
  fVar7 = *(float *)param_4;
  fVar9 = *(float *)(param_4 + 4);
  fVar16 = *(float *)(param_4 + 0x10);
  fVar13 = *(float *)(param_4 + 0x14);
  fVar17 = *(float *)(param_4 + 0x20);
  fVar18 = *(float *)(param_4 + 0x24);
  fVar22 = *(float *)(param_4 + 0x18) * 0.0;
  fVar19 = *(float *)(param_4 + 8) * 0.0;
  local_120 = fVar7 + fVar16 * 0.0 + fVar17 * 0.0;
  local_110 = fVar7 * 0.0 + fVar16 + fVar17 * 0.0;
  local_11c = fVar9 + fVar13 * 0.0 + fVar18 * 0.0;
  local_108 = *(float *)(param_4 + 0x28) * 0.0;
  local_f8 = fVar19 + fVar22 + *(float *)(param_4 + 0x28);
  local_10c = fVar9 * 0.0 + fVar13 + fVar18 * 0.0;
  local_118 = *(float *)(param_4 + 8) + fVar22 + local_108;
  local_108 = fVar19 + *(float *)(param_4 + 0x18) + local_108;
  local_f0 = fVar7 * 1.0 + fVar16 * 0.0 + fVar17 * 0.0;
  local_100 = fVar7 * 0.0 + fVar16 * 0.0 + fVar17;
  local_fc = fVar9 * 0.0 + fVar13 * 0.0 + fVar18;
  local_ec = fVar7 * 0.0 + fVar16 * 1.0 + fVar17 * 0.0;
  local_114 = 0;
  local_104 = 0;
  local_f4 = 0;
  fVar22 = *(float *)(param_4 + 8);
  fVar20 = *(float *)(param_4 + 0x18);
  fVar21 = *(float *)(param_4 + 0x28);
  local_180._0_4_ = (float)uVar12;
  local_180._4_4_ = (float)((ulong)uVar12 >> 0x20);
  local_e8 = fVar7 * 0.0 + fVar16 * 0.0 + fVar17 * 1.0;
  local_180._0_4_ = (float)local_180 - *(float *)(param_4 + 0x30);
  local_180._4_4_ = local_180._4_4_ - *(float *)(param_4 + 0x34);
  local_e0 = fVar9 * 1.0 + fVar13 * 0.0 + fVar18 * 0.0;
  fVar19 = (float)uStack_178 - *(float *)(param_4 + 0x38);
  local_dc = fVar9 * 0.0 + fVar13 * 1.0 + fVar18 * 0.0;
  local_d8 = fVar9 * 0.0 + fVar13 * 0.0 + fVar18 * 1.0;
  local_d0 = fVar22 * 1.0 + fVar20 * 0.0 + fVar21 * 0.0;
  local_cc = fVar22 * 0.0 + fVar20 * 1.0 + fVar21 * 0.0;
  local_c8 = fVar22 * 0.0 + fVar20 * 0.0 + fVar21 * 1.0;
  local_c0 = (float)local_180 * fVar7 + local_180._4_4_ * fVar16 + fVar19 * fVar17;
  local_bc = (float)local_180 * fVar9 + local_180._4_4_ * fVar13 + fVar19 * fVar18;
  uVar3 = (ulong)(uint)local_bc;
  fVar9 = (float)local_180 * fVar22 + local_180._4_4_ * fVar20 + fVar19 * fVar21;
  local_e4 = 0;
  local_d4 = 0;
  local_1c8 = 0;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_1b8 = 2;
  local_2e0 = 0;
  local_a0[0] = 1.0;
  local_a0[1] = 1.0;
  local_c4 = 0;
  local_b4 = 0;
  uStack_a8 = 0;
  local_b0 = btConvexShape::localGetSupportVertexWithoutMarginNonVirtual;
  local_98 = 0x3f800000;
  local_180 = uVar12;
  local_148 = param_2;
  local_138 = param_2;
  local_130 = param_3;
  local_128 = &local_170;
  local_b8 = fVar9;
  iVar2 = gjkepa2_impl::GJK::Evaluate(aGStack_380,(MinkowskiDiff *)&local_130,(btVector3 *)local_a0)
  ;
  fVar7 = 3.4028235e+38;
  if (iVar2 == 1) {
    uVar3 = Penetration(param_3,param_4,(btConvexShape *)&local_170,(btTransform *)&local_1b0,
                        (btVector3 *)&local_2f0,param_5,true);
    if ((uVar3 & 1) != 0) {
      fVar17 = *(float *)(param_5 + 4) - *(float *)(param_5 + 0x14);
      fVar16 = *(float *)(param_5 + 8) - *(float *)(param_5 + 0x18);
      fVar13 = *(float *)(param_5 + 0xc) - *(float *)(param_5 + 0x1c);
      fVar9 = fVar17 * fVar17 + fVar16 * fVar16 + fVar13 * fVar13;
      fVar7 = SQRT(fVar9);
      if (NAN(fVar7)) {
        fVar7 = sqrtf(fVar9);
      }
      if (1.1920929e-07 <= fVar7) {
        fVar9 = 1.0 / fVar7;
        *(float *)(param_5 + 0x24) = fVar17 * fVar9;
        *(float *)(param_5 + 0x28) = fVar16 * fVar9;
        *(float *)(param_5 + 0x2c) = fVar13 * fVar9;
        *(undefined4 *)(param_5 + 0x30) = 0;
      }
      fVar7 = -fVar7;
    }
  }
  else if (iVar2 == 0) {
    if (*(int *)(local_1c0 + 0x30) == 0) {
      fVar13 = 0.0;
      fVar19 = 0.0;
      fVar18 = 0.0;
      fVar7 = 0.0;
      fVar17 = 0.0;
      fVar16 = 0.0;
    }
    else {
      uVar6 = 0;
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar7 = 0.0;
      fVar18 = 0.0;
      fVar19 = 0.0;
      fVar13 = 0.0;
      do {
        fVar22 = (float)uVar3;
        fVar20 = *(float *)(local_1c0 + (ulong)uVar6 * 4 + 0x20);
        pcVar4 = local_b0;
        if ((uStack_a8 & 1) != 0) {
          pcVar4 = *(code **)(local_b0 + *(long *)(local_130 + ((long)uStack_a8 >> 1)));
        }
        fVar21 = (float)(*pcVar4)(local_130 + ((long)uStack_a8 >> 1),
                                  *(undefined8 *)(local_1c0 + (ulong)uVar6 * 8));
        pfVar5 = *(float **)(local_1c0 + (ulong)uVar6 * 8);
        fVar14 = -*pfVar5;
        fVar10 = -pfVar5[1];
        fVar8 = -pfVar5[2];
        plVar1 = (long *)((long)local_128 + ((long)uStack_a8 >> 1));
        pcVar4 = local_b0;
        if ((uStack_a8 & 1) != 0) {
          pcVar4 = *(code **)(local_b0 + *plVar1);
        }
        fVar11 = local_100 * fVar14 + local_fc * fVar10;
        fVar15 = local_120 * fVar14 + local_11c * fVar10 + local_118 * fVar8;
        local_a0[1] = local_110 * fVar14 + local_10c * fVar10 + local_108 * fVar8;
        local_a0[0] = fVar15;
        local_98 = (ulong)(uint)(fVar11 + local_f8 * fVar8);
        fVar8 = (float)(*pcVar4)(plVar1,local_a0);
        fVar17 = fVar17 + fVar20 * fVar22;
        fVar16 = fVar16 + fVar20 * fVar9;
        fVar7 = fVar7 + fVar20 * fVar21;
        uVar6 = uVar6 + 1;
        fVar22 = fVar20 * (fVar8 * local_f0 + fVar11 * local_ec + fVar15 * local_e8 + local_c0);
        uVar3 = (ulong)(uint)fVar22;
        fVar9 = fVar20 * (fVar8 * local_e0 + fVar11 * local_dc + fVar15 * local_d8 + local_bc);
        fVar13 = fVar13 + fVar22;
        fVar19 = fVar19 + fVar9;
        fVar18 = fVar18 + fVar20 * (fVar8 * local_d0 + fVar11 * local_cc + fVar15 * local_c8 +
                                   local_b8);
      } while (uVar6 < *(uint *)(local_1c0 + 0x30));
    }
    fVar21 = fVar7 * *(float *)param_4 + fVar17 * *(float *)(param_4 + 4) +
             fVar16 * *(float *)(param_4 + 8) + *(float *)(param_4 + 0x30);
    fVar22 = fVar7 * *(float *)(param_4 + 0x10) + fVar17 * *(float *)(param_4 + 0x14) +
             fVar16 * *(float *)(param_4 + 0x18) + *(float *)(param_4 + 0x34);
    fVar7 = fVar7 * *(float *)(param_4 + 0x20) + fVar17 * *(float *)(param_4 + 0x24) +
            fVar16 * *(float *)(param_4 + 0x28) + *(float *)(param_4 + 0x38);
    *(undefined4 *)(param_5 + 0x10) = 0;
    *(float *)(param_5 + 4) = fVar21;
    *(float *)(param_5 + 8) = fVar22;
    *(float *)(param_5 + 0xc) = fVar7;
    fVar8 = fVar13 * *(float *)param_4 + fVar19 * *(float *)(param_4 + 4) +
            fVar18 * *(float *)(param_4 + 8) + *(float *)(param_4 + 0x30);
    fVar20 = fVar13 * *(float *)(param_4 + 0x10) + fVar19 * *(float *)(param_4 + 0x14) +
             fVar18 * *(float *)(param_4 + 0x18) + *(float *)(param_4 + 0x34);
    fVar17 = fVar13 * *(float *)(param_4 + 0x20) + fVar19 * *(float *)(param_4 + 0x24) +
             fVar18 * *(float *)(param_4 + 0x28) + *(float *)(param_4 + 0x38);
    *(float *)(param_5 + 0x14) = fVar8;
    *(float *)(param_5 + 0x18) = fVar20;
    *(float *)(param_5 + 0x1c) = fVar17;
    *(undefined4 *)(param_5 + 0x20) = 0;
    fVar9 = (float)btConvexShape::getMarginNonVirtual(param_3);
    fVar13 = (float)btConvexShape::getMarginNonVirtual((btConvexShape *)&local_170);
    fVar8 = fVar8 - fVar21;
    fVar20 = fVar20 - fVar22;
    fVar17 = fVar17 - fVar7;
    fVar16 = fVar8 * fVar8 + fVar20 * fVar20 + fVar17 * fVar17;
    fVar7 = SQRT(fVar16);
    fVar9 = fVar9 + fVar13;
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar16);
    }
    fVar13 = 1.0 / fVar7;
    *(float *)(param_5 + 0x24) = fVar8 * fVar13;
    *(float *)(param_5 + 0x28) = fVar20 * fVar13;
    *(float *)(param_5 + 0x2c) = fVar17 * fVar13;
    *(undefined4 *)(param_5 + 0x30) = 0;
    *(float *)(param_5 + 4) = fVar9 * fVar8 * fVar13 + *(float *)(param_5 + 4);
    *(float *)(param_5 + 8) = fVar9 * fVar20 * fVar13 + *(float *)(param_5 + 8);
    *(float *)(param_5 + 0xc) = fVar9 * fVar17 * fVar13 + *(float *)(param_5 + 0xc);
    fVar7 = fVar7 - fVar9;
  }
  btConvexShape::~btConvexShape((btConvexShape *)&local_170);
  return fVar7;
}

