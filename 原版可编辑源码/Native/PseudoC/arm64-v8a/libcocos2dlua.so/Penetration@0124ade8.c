
/* btGjkEpaSolver2::Penetration(btConvexShape const*, btTransform const&, btConvexShape const*,
   btTransform const&, btVector3 const&, btGjkEpaSolver2::sResults&, bool) */

undefined8
btGjkEpaSolver2::Penetration
          (btConvexShape *param_1,btTransform *param_2,btConvexShape *param_3,btTransform *param_4,
          btVector3 *param_5,sResults *param_6,bool param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
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
  float local_3b50;
  float fStack_3b4c;
  float local_3b48;
  undefined4 local_3b44;
  float local_3b40;
  float fStack_3b3c;
  float local_3b38 [8];
  float local_3b18 [4];
  uint local_3b08;
  undefined8 local_3b00;
  undefined8 local_3af8;
  float local_3af0;
  undefined1 auStack_3348 [72];
  undefined8 auStack_3300 [1539];
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined1 *local_2d0;
  undefined4 local_2c8;
  GJK aGStack_2c0 [144];
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_108;
  undefined4 local_f8;
  btConvexShape *local_f0;
  btConvexShape *pbStack_e8;
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
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  code *local_70;
  ulong uStack_68;
  
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
  fVar9 = *(float *)(param_4 + 4);
  fVar24 = *(float *)(param_4 + 0x10);
  fVar10 = *(float *)(param_4 + 0x14);
  fVar12 = *(float *)(param_4 + 8);
  fVar13 = *(float *)(param_4 + 0x18);
  fVar18 = *(float *)(param_2 + 0x20);
  fVar19 = *(float *)(param_2 + 0x24);
  fVar22 = *(float *)(param_2 + 0x28);
  fVar25 = *(float *)(param_4 + 0x20);
  fVar8 = *(float *)(param_4 + 0x24);
  fVar11 = *(float *)(param_4 + 0x28);
  local_e0 = fVar23 * fVar14 + fVar24 * fVar16 + fVar25 * fVar18;
  fStack_dc = fVar23 * fVar15 + fVar24 * fVar17 + fVar25 * fVar19;
  local_d8 = fVar23 * fVar20 + fVar24 * fVar21 + fVar25 * fVar22;
  local_d0 = fVar14 * fVar9 + fVar16 * fVar10 + fVar18 * fVar8;
  fStack_cc = fVar15 * fVar9 + fVar17 * fVar10 + fVar19 * fVar8;
  local_c8 = fVar20 * fVar9 + fVar21 * fVar10 + fVar22 * fVar8;
  local_c0 = fVar14 * fVar12 + fVar16 * fVar13 + fVar18 * fVar11;
  fStack_bc = fVar15 * fVar12 + fVar17 * fVar13 + fVar19 * fVar11;
  local_b8 = fVar20 * fVar12 + fVar21 * fVar13 + fVar22 * fVar11;
  local_d4 = 0;
  local_c4 = 0;
  local_b4 = 0;
  fVar17 = *(float *)param_4;
  fVar18 = *(float *)(param_4 + 0x10);
  fVar20 = *(float *)param_2;
  fVar21 = *(float *)(param_2 + 4);
  fVar22 = *(float *)(param_2 + 0x10);
  fVar23 = *(float *)(param_2 + 0x14);
  fVar26 = *(float *)(param_2 + 8);
  fVar27 = *(float *)(param_2 + 0x18);
  fVar24 = *(float *)(param_2 + 0x20);
  fVar25 = *(float *)(param_2 + 0x24);
  fVar28 = *(float *)(param_2 + 0x28);
  fVar19 = *(float *)(param_4 + 0x20);
  fVar14 = *(float *)(param_4 + 0x30) - *(float *)(param_2 + 0x30);
  fVar15 = *(float *)(param_4 + 0x34) - *(float *)(param_2 + 0x34);
  fVar16 = *(float *)(param_4 + 0x38) - *(float *)(param_2 + 0x38);
  fStack_8c = fVar9 * fVar26 + fVar10 * fVar27 + fVar8 * fVar28;
  local_88 = fVar12 * fVar26 + fVar13 * fVar27 + fVar11 * fVar28;
  local_b0 = fVar20 * fVar17 + fVar22 * fVar18 + fVar24 * fVar19;
  local_70 = btConvexShape::localGetSupportVertexNonVirtual;
  if (!param_7) {
    local_70 = btConvexShape::localGetSupportVertexWithoutMarginNonVirtual;
  }
  fStack_ac = fVar20 * fVar9 + fVar22 * fVar10 + fVar24 * fVar8;
  local_a8 = fVar20 * fVar12 + fVar22 * fVar13 + fVar24 * fVar11;
  local_a0 = fVar17 * fVar21 + fVar18 * fVar23 + fVar19 * fVar25;
  fStack_9c = fVar9 * fVar21 + fVar10 * fVar23 + fVar8 * fVar25;
  local_98 = fVar12 * fVar21 + fVar13 * fVar23 + fVar11 * fVar25;
  local_90 = fVar17 * fVar26 + fVar18 * fVar27 + fVar19 * fVar28;
  local_80 = fVar14 * fVar20 + fVar15 * fVar22 + fVar16 * fVar24;
  fStack_7c = fVar14 * fVar21 + fVar15 * fVar23 + fVar16 * fVar25;
  local_78 = fVar14 * fVar26 + fVar15 * fVar27 + fVar16 * fVar28;
  local_108 = 0;
  local_228 = 0;
  local_230 = 0;
  local_f8 = 2;
  local_220 = 0;
  local_a4 = 0;
  local_94 = 0;
  local_84 = 0;
  local_74 = 0;
  uStack_68 = 0;
  local_3b40 = -*(float *)param_5;
  fStack_3b3c = -*(float *)(param_5 + 4);
  local_3b38[0] = -*(float *)(param_5 + 8);
  local_3b38[1] = 0.0;
  local_f0 = param_1;
  pbStack_e8 = param_3;
  iVar2 = gjkepa2_impl::GJK::Evaluate
                    (aGStack_2c0,(MinkowskiDiff *)&local_f0,(btVector3 *)&local_3b40);
  if (iVar2 == 2) {
    uVar3 = 0;
    *(undefined4 *)param_6 = 2;
  }
  else {
    uVar3 = 0;
    if (iVar2 == 1) {
      lVar6 = 0x3000;
      local_3b40 = 1.26117e-44;
      local_2e0 = 0;
      local_2d8 = 0;
      local_2e8 = 0;
      local_3af0 = 0.0;
      local_3b00 = 0;
      local_3af8 = 0;
      puVar4 = (undefined1 *)0x0;
      do {
        local_2d0 = auStack_3348 + lVar6;
        *(undefined8 *)((long)auStack_3300 + lVar6) = 0;
        *(undefined1 **)((long)auStack_3300 + lVar6 + 8) = puVar4;
        if (puVar4 != (undefined1 *)0x0) {
          *(undefined1 **)(puVar4 + 0x48) = local_2d0;
        }
        lVar6 = lVar6 + -0x60;
        puVar4 = local_2d0;
      } while (lVar6 != 0);
      local_2c8 = 0x80;
      local_3b50 = -*(float *)param_5;
      fVar8 = -*(float *)(param_5 + 4);
      fVar9 = -*(float *)(param_5 + 8);
      local_3b44 = 0;
      fStack_3b4c = fVar8;
      local_3b48 = fVar9;
      iVar2 = gjkepa2_impl::EPA::Evaluate((EPA *)&local_3b40,aGStack_2c0,(btVector3 *)&local_3b50);
      if (iVar2 == 9) {
        uVar3 = 0;
        *(undefined4 *)param_6 = 3;
      }
      else {
        if (local_3b08 == 0) {
          fVar12 = 0.0;
          fVar11 = 0.0;
          fVar10 = 0.0;
        }
        else {
          uVar5 = 0;
          fVar10 = 0.0;
          fVar11 = 0.0;
          fVar12 = 0.0;
          do {
            pcVar7 = local_70;
            if ((uStack_68 & 1) != 0) {
              pcVar7 = *(code **)(local_70 + *(long *)(local_f0 + ((long)uStack_68 >> 1)));
            }
            fVar13 = (float)(*pcVar7)(local_f0 + ((long)uStack_68 >> 1),
                                      *(undefined8 *)(local_3b38 + uVar5 * 2));
            fVar14 = local_3b18[uVar5];
            uVar1 = (int)uVar5 + 1;
            uVar5 = (ulong)uVar1;
            fVar8 = fVar14 * fVar8;
            fVar9 = fVar14 * fVar9;
            fVar12 = fVar12 + fVar14 * fVar13;
            fVar11 = fVar11 + fVar8;
            fVar10 = fVar10 + fVar9;
          } while (uVar1 < local_3b08);
        }
        uVar3 = 1;
        *(undefined4 *)param_6 = 1;
        fVar8 = *(float *)param_2;
        fVar9 = *(float *)(param_2 + 4);
        fVar14 = *(float *)(param_2 + 0x10);
        fVar15 = *(float *)(param_2 + 0x14);
        fVar17 = *(float *)(param_2 + 0x20);
        fVar18 = *(float *)(param_2 + 0x24);
        fVar13 = *(float *)(param_2 + 8);
        fVar16 = *(float *)(param_2 + 0x18);
        fVar19 = *(float *)(param_2 + 0x28);
        fVar20 = *(float *)(param_2 + 0x30);
        fVar21 = *(float *)(param_2 + 0x34);
        fVar22 = *(float *)(param_2 + 0x38);
        *(undefined4 *)(param_6 + 0x10) = 0;
        *(float *)(param_6 + 4) = fVar12 * fVar8 + fVar11 * fVar9 + fVar10 * fVar13 + fVar20;
        *(float *)(param_6 + 8) = fVar12 * fVar14 + fVar11 * fVar15 + fVar10 * fVar16 + fVar21;
        *(float *)(param_6 + 0xc) = fVar12 * fVar17 + fVar11 * fVar18 + fVar10 * fVar19 + fVar22;
        fVar8 = *(float *)param_2;
        fVar9 = *(float *)(param_2 + 4);
        fVar14 = *(float *)(param_2 + 0x10);
        fVar15 = *(float *)(param_2 + 0x14);
        fVar17 = *(float *)(param_2 + 0x20);
        fVar18 = *(float *)(param_2 + 0x24);
        fVar13 = *(float *)(param_2 + 8);
        fVar16 = *(float *)(param_2 + 0x18);
        fVar19 = *(float *)(param_2 + 0x28);
        fVar20 = *(float *)(param_2 + 0x30);
        fVar21 = *(float *)(param_2 + 0x34);
        fVar12 = fVar12 - (float)local_3b00 * local_3af0;
        fVar11 = fVar11 - local_3af0 * local_3b00._4_4_;
        fVar22 = *(float *)(param_2 + 0x38);
        *(float *)(param_6 + 0x24) = -(float)local_3b00;
        *(float *)(param_6 + 0x28) = -local_3b00._4_4_;
        fVar10 = fVar10 - local_3af0 * (float)local_3af8;
        *(float *)(param_6 + 0x2c) = -(float)local_3af8;
        *(undefined4 *)(param_6 + 0x20) = 0;
        *(undefined4 *)(param_6 + 0x30) = 0;
        *(float *)(param_6 + 0x14) = fVar12 * fVar8 + fVar11 * fVar9 + fVar10 * fVar13 + fVar20;
        *(float *)(param_6 + 0x18) = fVar12 * fVar14 + fVar11 * fVar15 + fVar10 * fVar16 + fVar21;
        *(float *)(param_6 + 0x1c) = fVar12 * fVar17 + fVar11 * fVar18 + fVar10 * fVar19 + fVar22;
        *(float *)(param_6 + 0x34) = -local_3af0;
      }
    }
  }
  return uVar3;
}

