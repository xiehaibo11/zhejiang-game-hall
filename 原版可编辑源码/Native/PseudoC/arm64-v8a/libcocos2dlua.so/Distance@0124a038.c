
/* btGjkEpaSolver2::Distance(btConvexShape const*, btTransform const&, btConvexShape const*,
   btTransform const&, btVector3 const&, btGjkEpaSolver2::sResults&) */

undefined8
btGjkEpaSolver2::Distance
          (btConvexShape *param_1,btTransform *param_2,btConvexShape *param_3,btTransform *param_4,
          btVector3 *param_5,sResults *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
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
  GJK aGStack_2e0 [144];
  undefined8 local_250;
  undefined8 uStack_248;
  undefined4 local_240;
  undefined8 local_128;
  long local_120;
  undefined4 local_118;
  btConvexShape *local_110;
  btConvexShape *local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined4 local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
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
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined4 local_94;
  code *local_90;
  ulong uStack_88;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  
  *(undefined4 *)(param_6 + 0x20) = 0;
  *(undefined8 *)(param_6 + 8) = 0;
  *(undefined8 *)param_6 = 0;
  *(undefined8 *)(param_6 + 0x18) = 0;
  *(undefined8 *)(param_6 + 0x10) = 0;
  fVar14 = *(float *)param_2;
  fVar15 = *(float *)(param_2 + 4);
  fVar16 = *(float *)(param_2 + 0x10);
  fVar17 = *(float *)(param_2 + 0x14);
  fVar20 = *(float *)(param_2 + 8);
  fVar21 = *(float *)(param_2 + 0x18);
  fVar23 = *(float *)param_4;
  fVar8 = *(float *)(param_4 + 4);
  fVar24 = *(float *)(param_4 + 0x10);
  fVar10 = *(float *)(param_4 + 0x14);
  fVar12 = *(float *)(param_4 + 8);
  fVar13 = *(float *)(param_4 + 0x18);
  fVar18 = *(float *)(param_2 + 0x20);
  fVar19 = *(float *)(param_2 + 0x24);
  fVar22 = *(float *)(param_2 + 0x28);
  fVar25 = *(float *)(param_4 + 0x20);
  fVar7 = *(float *)(param_4 + 0x24);
  fVar11 = *(float *)(param_4 + 0x28);
  local_100 = fVar23 * fVar14 + fVar24 * fVar16 + fVar25 * fVar18;
  fStack_fc = fVar23 * fVar15 + fVar24 * fVar17 + fVar25 * fVar19;
  local_f8 = fVar23 * fVar20 + fVar24 * fVar21 + fVar25 * fVar22;
  local_f0 = fVar14 * fVar8 + fVar16 * fVar10 + fVar18 * fVar7;
  fStack_ec = fVar15 * fVar8 + fVar17 * fVar10 + fVar19 * fVar7;
  local_e8 = fVar20 * fVar8 + fVar21 * fVar10 + fVar22 * fVar7;
  local_e0 = fVar14 * fVar12 + fVar16 * fVar13 + fVar18 * fVar11;
  fStack_dc = fVar15 * fVar12 + fVar17 * fVar13 + fVar19 * fVar11;
  local_d8 = fVar20 * fVar12 + fVar21 * fVar13 + fVar22 * fVar11;
  local_f4 = 0;
  local_e4 = 0;
  local_d4 = 0;
  fVar18 = *(float *)param_4;
  fVar19 = *(float *)(param_4 + 0x10);
  fVar21 = *(float *)param_2;
  fVar22 = *(float *)(param_2 + 4);
  fVar23 = *(float *)(param_2 + 0x10);
  fVar24 = *(float *)(param_2 + 0x14);
  fVar27 = *(float *)(param_2 + 8);
  fVar28 = *(float *)(param_2 + 0x18);
  fVar25 = *(float *)(param_2 + 0x20);
  fVar26 = *(float *)(param_2 + 0x24);
  fVar29 = *(float *)(param_2 + 0x28);
  fVar20 = *(float *)(param_4 + 0x20);
  fVar15 = *(float *)(param_4 + 0x30) - *(float *)(param_2 + 0x30);
  fVar16 = *(float *)(param_4 + 0x34) - *(float *)(param_2 + 0x34);
  fVar17 = *(float *)(param_4 + 0x38) - *(float *)(param_2 + 0x38);
  fStack_cc = fVar21 * fVar8 + fVar23 * fVar10 + fVar25 * fVar7;
  fStack_ac = fVar8 * fVar27 + fVar10 * fVar28 + fVar7 * fVar29;
  local_a8 = fVar12 * fVar27 + fVar13 * fVar28 + fVar11 * fVar29;
  uVar9 = (ulong)(uint)local_a8;
  local_d0 = fVar21 * fVar18 + fVar23 * fVar19 + fVar25 * fVar20;
  fVar14 = fVar21 * fVar12 + fVar23 * fVar13 + fVar25 * fVar11;
  local_c0 = fVar18 * fVar22 + fVar19 * fVar24 + fVar20 * fVar26;
  fStack_bc = fVar8 * fVar22 + fVar10 * fVar24 + fVar7 * fVar26;
  local_b8 = fVar12 * fVar22 + fVar13 * fVar24 + fVar11 * fVar26;
  local_b0 = fVar18 * fVar27 + fVar19 * fVar28 + fVar20 * fVar29;
  local_a0 = fVar15 * fVar21 + fVar16 * fVar23 + fVar17 * fVar25;
  fStack_9c = fVar15 * fVar22 + fVar16 * fVar24 + fVar17 * fVar26;
  local_98 = fVar15 * fVar27 + fVar16 * fVar28 + fVar17 * fVar29;
  local_128 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_118 = 2;
  local_c4 = 0;
  local_b4 = 0;
  local_a4 = 0;
  local_94 = 0;
  uStack_88 = 0;
  local_90 = btConvexShape::localGetSupportVertexWithoutMarginNonVirtual;
  local_240 = 0;
  local_110 = param_1;
  local_108 = param_3;
  local_c8 = fVar14;
  iVar1 = gjkepa2_impl::GJK::Evaluate(aGStack_2e0,(MinkowskiDiff *)&local_110,param_5);
  if (iVar1 == 0) {
    if (*(int *)(local_120 + 0x30) == 0) {
      fVar10 = 0.0;
      fVar8 = 0.0;
      fVar7 = 0.0;
      fVar13 = 0.0;
      fVar12 = 0.0;
      fVar11 = 0.0;
    }
    else {
      uVar5 = 0;
      fVar11 = 0.0;
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar7 = 0.0;
      fVar8 = 0.0;
      fVar10 = 0.0;
      do {
        fVar15 = (float)uVar9;
        fVar16 = *(float *)(local_120 + (ulong)uVar5 * 4 + 0x20);
        pcVar4 = local_90;
        if ((uStack_88 & 1) != 0) {
          pcVar4 = *(code **)(local_90 + *(long *)(local_110 + ((long)uStack_88 >> 1)));
        }
        fVar17 = (float)(*pcVar4)(local_110 + ((long)uStack_88 >> 1),
                                  *(undefined8 *)(local_120 + (ulong)uVar5 * 8));
        pfVar6 = *(float **)(local_120 + (ulong)uVar5 * 8);
        fVar20 = -*pfVar6;
        fVar19 = -pfVar6[1];
        fVar18 = -pfVar6[2];
        pcVar4 = local_90;
        if ((uStack_88 & 1) != 0) {
          pcVar4 = *(code **)(local_90 + *(long *)(local_108 + ((long)uStack_88 >> 1)));
        }
        fVar12 = fVar12 + fVar16 * fVar15;
        fVar11 = fVar11 + fVar16 * fVar14;
        fVar13 = fVar13 + fVar16 * fVar17;
        fVar17 = local_e0 * fVar20 + fStack_dc * fVar19;
        fVar21 = local_100 * fVar20 + fStack_fc * fVar19 + local_f8 * fVar18;
        fStack_7c = local_f0 * fVar20 + fStack_ec * fVar19 + local_e8 * fVar18;
        local_78 = fVar17 + local_d8 * fVar18;
        local_74 = 0;
        local_80 = fVar21;
        fVar15 = (float)(*pcVar4)(local_108 + ((long)uStack_88 >> 1),&local_80);
        uVar5 = uVar5 + 1;
        fVar18 = fVar16 * (local_d0 * fVar15 + fVar17 * fStack_cc + fVar21 * local_c8 + local_a0);
        uVar9 = (ulong)(uint)fVar18;
        fVar14 = fVar16 * (fVar15 * local_c0 + fVar17 * fStack_bc + fVar21 * local_b8 + fStack_9c);
        fVar10 = fVar10 + fVar18;
        fVar8 = fVar8 + fVar14;
        fVar7 = fVar7 + fVar16 * (fVar15 * local_b0 + fVar17 * fStack_ac + fVar21 * local_a8 +
                                 local_98);
      } while (uVar5 < *(uint *)(local_120 + 0x30));
    }
    fVar23 = fVar13 - fVar10;
    fVar24 = fVar12 - fVar8;
    fVar25 = fVar11 - fVar7;
    fVar15 = *(float *)param_2;
    fVar17 = *(float *)(param_2 + 4);
    fVar18 = *(float *)(param_2 + 0x10);
    fVar19 = *(float *)(param_2 + 0x14);
    fVar21 = *(float *)(param_2 + 0x20);
    fVar22 = *(float *)(param_2 + 0x24);
    fVar16 = *(float *)(param_2 + 8);
    fVar20 = *(float *)(param_2 + 0x18);
    fVar14 = fVar23 * fVar23 + fVar24 * fVar24 + fVar25 * fVar25;
    fVar26 = *(float *)(param_2 + 0x28);
    fVar27 = *(float *)(param_2 + 0x30);
    fVar28 = *(float *)(param_2 + 0x34);
    fVar29 = *(float *)(param_2 + 0x38);
    *(undefined4 *)(param_6 + 0x10) = 0;
    *(float *)(param_6 + 4) = fVar13 * fVar15 + fVar12 * fVar17 + fVar11 * fVar16 + fVar27;
    *(float *)(param_6 + 8) = fVar13 * fVar18 + fVar12 * fVar19 + fVar11 * fVar20 + fVar28;
    *(float *)(param_6 + 0xc) = fVar13 * fVar21 + fVar12 * fVar22 + fVar11 * fVar26 + fVar29;
    fVar12 = *(float *)param_2;
    fVar13 = *(float *)(param_2 + 4);
    fVar16 = *(float *)(param_2 + 0x10);
    fVar17 = *(float *)(param_2 + 0x14);
    fVar19 = *(float *)(param_2 + 0x20);
    fVar20 = *(float *)(param_2 + 0x24);
    fVar15 = *(float *)(param_2 + 8);
    fVar18 = *(float *)(param_2 + 0x18);
    fVar21 = *(float *)(param_2 + 0x28);
    fVar22 = *(float *)(param_2 + 0x30);
    fVar26 = *(float *)(param_2 + 0x34);
    fVar27 = *(float *)(param_2 + 0x38);
    *(float *)(param_6 + 0x24) = fVar23;
    *(float *)(param_6 + 0x28) = fVar24;
    fVar11 = SQRT(fVar14);
    *(float *)(param_6 + 0x2c) = fVar25;
    *(undefined4 *)(param_6 + 0x20) = 0;
    *(float *)(param_6 + 0x14) = fVar10 * fVar12 + fVar8 * fVar13 + fVar7 * fVar15 + fVar22;
    *(float *)(param_6 + 0x18) = fVar10 * fVar16 + fVar8 * fVar17 + fVar7 * fVar18 + fVar26;
    *(float *)(param_6 + 0x1c) = fVar10 * fVar19 + fVar8 * fVar20 + fVar7 * fVar21 + fVar27;
    *(undefined4 *)(param_6 + 0x30) = 0;
    if (NAN(fVar11)) {
      fVar11 = sqrtf(fVar14);
    }
    *(float *)(param_6 + 0x34) = fVar11;
    fVar7 = 1.0 / fVar11;
    if (fVar11 <= 0.0001) {
      fVar7 = 1.0;
    }
    *(float *)(param_6 + 0x24) = fVar7 * *(float *)(param_6 + 0x24);
    *(float *)(param_6 + 0x28) = fVar7 * *(float *)(param_6 + 0x28);
    *(float *)(param_6 + 0x2c) = fVar7 * *(float *)(param_6 + 0x2c);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    uVar3 = 1;
    if (iVar1 != 1) {
      uVar3 = 2;
    }
    *(undefined4 *)param_6 = uVar3;
  }
  return uVar2;
}

