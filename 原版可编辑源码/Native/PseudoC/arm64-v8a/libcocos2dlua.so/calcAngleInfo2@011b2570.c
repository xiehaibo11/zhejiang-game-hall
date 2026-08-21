
/* btConeTwistConstraint::calcAngleInfo2(btTransform const&, btTransform const&, btMatrix3x3 const&,
   btMatrix3x3 const&) */

void __thiscall
btConeTwistConstraint::calcAngleInfo2
          (btConeTwistConstraint *this,btTransform *param_1,btTransform *param_2,
          btMatrix3x3 *param_3,btMatrix3x3 *param_4)

{
  float fVar1;
  float fVar2;
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
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  
  *(undefined8 *)(this + 0x20c) = 0;
  *(undefined2 *)(this + 0x225) = 0;
  if ((this[0x240] != (btConeTwistConstraint)0x0) && (this[0x227] == (btConeTwistConstraint)0x0)) {
    fVar45 = *(float *)(this + 0x164);
    fVar47 = *(float *)(param_1 + 8);
    fVar14 = *(float *)param_1;
    fVar31 = *(float *)(param_1 + 4);
    fVar42 = *(float *)(this + 0x14c);
    fVar48 = *(float *)(this + 0x15c);
    fVar38 = *(float *)(this + 0x144);
    fVar51 = *(float *)(param_1 + 0x10);
    fVar34 = *(float *)(param_1 + 0x14);
    fVar32 = *(float *)(this + 0x154);
    fVar26 = *(float *)(this + 0x148);
    fVar15 = *(float *)(this + 0x158);
    fVar46 = *(float *)(this + 0x168);
    fVar49 = *(float *)(this + 0x16c);
    fVar16 = *(float *)(param_1 + 0x18);
    fVar40 = *(float *)(param_1 + 0x20);
    fVar37 = *(float *)(param_1 + 0x24);
    fVar1 = *(float *)(param_1 + 0x28);
    fVar41 = *(float *)(this + 0x174);
    fVar44 = *(float *)(this + 0x178);
    fVar36 = *(float *)(this + 0x17c);
    fVar18 = *(float *)(this + 0x184);
    fVar30 = *(float *)param_2;
    fVar33 = *(float *)(param_2 + 4);
    fVar21 = *(float *)(param_2 + 0x10);
    fVar28 = *(float *)(param_2 + 0x14);
    fVar35 = *(float *)(param_2 + 0x20);
    fVar5 = *(float *)(param_2 + 0x24);
    fVar8 = *(float *)(this + 0x188);
    fVar20 = *(float *)(this + 0x18c);
    fVar2 = *(float *)(this + 0x1b4);
    fVar22 = *(float *)(this + 0x194);
    fVar3 = *(float *)(this + 0x198);
    fVar9 = *(float *)(param_2 + 0x28);
    fVar27 = *(float *)(this + 0x19c);
    fVar19 = *(float *)(this + 0x1b8);
    fVar6 = *(float *)(this + 0x1a4);
    fVar29 = *(float *)(param_2 + 8);
    fVar4 = *(float *)(param_2 + 0x18);
    fVar23 = *(float *)(this + 0x1a8);
    fVar7 = *(float *)(this + 0x1ac);
    fVar24 = *(float *)(this + 0x1bc);
    fVar17 = *(float *)(this + 0x244);
    fVar52 = *(float *)(this + 0x248);
    fVar39 = *(float *)(this + 0x24c);
    fVar12 = fVar38 * fVar14 + fVar32 * fVar31 + fVar45 * fVar47;
    fVar10 = fVar14 * fVar26 + fVar31 * fVar15 + fVar47 * fVar46;
    fVar43 = fVar14 * fVar42 + fVar31 * fVar48 + fVar47 * fVar49;
    fVar11 = fVar38 * fVar51 + fVar32 * fVar34 + fVar45 * fVar16;
    fVar25 = fVar26 * fVar51 + fVar15 * fVar34 + fVar46 * fVar16;
    fVar13 = fVar42 * fVar51 + fVar48 * fVar34 + fVar49 * fVar16;
    fVar32 = fVar38 * fVar40 + fVar32 * fVar37 + fVar45 * fVar1;
    fVar26 = fVar26 * fVar40 + fVar15 * fVar37 + fVar46 * fVar1;
    fVar15 = fVar42 * fVar40 + fVar48 * fVar37 + fVar49 * fVar1;
    fVar45 = fVar30 * fVar20 + fVar33 * fVar27 + fVar29 * fVar7;
    fVar48 = fVar20 * fVar21 + fVar27 * fVar28 + fVar7 * fVar4;
    fVar38 = fVar30 * fVar8 + fVar33 * fVar3 + fVar29 * fVar23;
    fVar42 = *(float *)(this + 0x250);
    fVar50 = fVar18 * fVar30 + fVar22 * fVar33 + fVar6 * fVar29;
    fVar40 = fVar40 * fVar41 + fVar37 * fVar44 + fVar1 * fVar36 + *(float *)(param_1 + 0x38);
    fVar37 = fVar18 * fVar21 + fVar22 * fVar28 + fVar6 * fVar4;
    fVar46 = fVar8 * fVar21 + fVar3 * fVar28 + fVar23 * fVar4;
    fVar49 = fVar18 * fVar35 + fVar22 * fVar5 + fVar6 * fVar9;
    fVar6 = fVar8 * fVar35 + fVar3 * fVar5 + fVar23 * fVar9;
    fVar7 = fVar20 * fVar35 + fVar27 * fVar5 + fVar7 * fVar9;
    fVar23 = fVar51 * fVar41 + fVar34 * fVar44 + fVar16 * fVar36 + *(float *)(param_1 + 0x34);
    local_d4 = 0.0;
    fVar1 = 2.0 / (fVar17 * fVar17 + fVar52 * fVar52 + fVar39 * fVar39 + fVar42 * fVar42);
    fVar18 = fVar52 * fVar1;
    fVar31 = -(*(float *)(param_1 + 0x30) + fVar14 * fVar41 + fVar31 * fVar44 + fVar47 * fVar36);
    fVar27 = fVar39 * fVar1;
    fVar3 = fVar42 * fVar17 * fVar1;
    fVar34 = fVar17 * fVar18 - fVar42 * fVar27;
    fVar22 = fVar17 * fVar18 + fVar42 * fVar27;
    fVar36 = (fVar12 * fVar31 - fVar11 * fVar23) - fVar32 * fVar40;
    fVar8 = fVar17 * fVar17 * fVar1;
    fVar20 = fVar17 * fVar27 + fVar42 * fVar18;
    fVar1 = fVar17 * fVar27 - fVar42 * fVar18;
    fVar16 = fVar52 * fVar27 - fVar3;
    fVar17 = (fVar10 * fVar31 - fVar25 * fVar23) - fVar26 * fVar40;
    fVar3 = fVar52 * fVar27 + fVar3;
    fVar23 = (fVar43 * fVar31 - fVar13 * fVar23) - fVar15 * fVar40;
    fVar40 = 1.0 - (fVar52 * fVar18 + fVar39 * fVar27);
    fVar39 = 1.0 - (fVar8 + fVar39 * fVar27);
    fVar31 = 1.0 - (fVar8 + fVar52 * fVar18);
    fVar27 = fVar20 * fVar50 + fVar16 * fVar38 + fVar31 * fVar45;
    fVar8 = fVar3 * fVar48 + fVar34 * fVar37 + fVar39 * fVar46;
    fVar18 = fVar31 * fVar7 + fVar20 * fVar49 + fVar16 * fVar6;
    fVar31 = fVar31 * fVar48 + fVar20 * fVar37 + fVar16 * fVar46;
    fVar14 = fVar40 * fVar50 + fVar22 * fVar38 + fVar1 * fVar45;
    fVar20 = fVar1 * fVar48 + fVar40 * fVar37 + fVar22 * fVar46;
    fVar22 = fVar1 * fVar7 + fVar40 * fVar49 + fVar22 * fVar6;
    fVar16 = fVar3 * fVar7 + fVar34 * fVar49 + fVar39 * fVar6;
    fVar1 = fVar34 * fVar50 + fVar39 * fVar38 + fVar3 * fVar45;
    local_c0 = fVar43 * fVar18 + fVar12 * fVar22 + fVar10 * fVar16;
    fStack_dc = fVar13 * fVar27 + fVar11 * fVar14 + fVar25 * fVar1;
    local_d8 = fVar15 * fVar27 + fVar32 * fVar14 + fVar26 * fVar1;
    local_d0 = fVar43 * fVar31 + fVar12 * fVar20 + fVar10 * fVar8;
    fStack_cc = fVar13 * fVar31 + fVar11 * fVar20 + fVar25 * fVar8;
    local_e0 = fVar43 * fVar27 + fVar12 * fVar14 + fVar10 * fVar1;
    local_c8 = fVar15 * fVar31 + fVar32 * fVar20 + fVar26 * fVar8;
    fStack_bc = fVar13 * fVar18 + fVar11 * fVar22 + fVar25 * fVar16;
    local_b0 = fVar23 * fVar27 + fVar36 * fVar14 + fVar17 * fVar1 +
               fVar50 * 0.0 + fVar38 * 0.0 + fVar45 * 0.0 +
               *(float *)(param_2 + 0x30) + fVar30 * fVar2 + fVar33 * fVar19 + fVar29 * fVar24;
    local_b8 = fVar15 * fVar18 + fVar32 * fVar22 + fVar26 * fVar16;
    local_ac = fVar23 * fVar31 + fVar36 * fVar20 + fVar17 * fVar8 +
               fVar48 * 0.0 + fVar37 * 0.0 + fVar46 * 0.0 +
               fVar21 * fVar2 + fVar28 * fVar19 + fVar4 * fVar24 + *(float *)(param_2 + 0x34);
    local_c4 = 0;
    local_a8 = fVar23 * fVar18 + fVar36 * fVar22 + fVar17 * fVar16 +
               fVar7 * 0.0 + fVar49 * 0.0 + fVar6 * 0.0 +
               fVar35 * fVar2 + fVar5 * fVar19 + fVar9 * fVar24 + *(float *)(param_2 + 0x38);
    local_b4 = 0;
    local_a4 = 0;
    btMatrix3x3::getRotation((btMatrix3x3 *)&local_e0,(btQuaternion *)&local_a0);
    fVar1 = local_a0 * local_a0 + fStack_9c * fStack_9c + local_98 * local_98;
    if (ABS(fVar1) < 1.1920929e-07) {
      return;
    }
    *(float *)(this + 0x1e4) = local_a0;
    fVar8 = SQRT(fVar1);
    *(float *)(this + 0x1e8) = fStack_9c;
    *(float *)(this + 0x1ec) = local_98;
    *(undefined4 *)(this + 0x1f0) = 0;
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar1);
    }
    fVar8 = 1.0 / fVar8;
    *(float *)(this + 0x1ec) = fVar8 * *(float *)(this + 0x1ec);
    if (1.0 < local_94) {
      local_94 = 1.0;
    }
    *(float *)(this + 0x1e4) = fVar8 * *(float *)(this + 0x1e4);
    *(float *)(this + 0x1e8) = fVar8 * *(float *)(this + 0x1e8);
    fVar1 = acosf(local_94);
    *(float *)(this + 0x210) = fVar1 + fVar1;
    if (ABS(fVar1 + fVar1) < 1.1920929e-07) {
      return;
    }
    this[0x226] = (btConeTwistConstraint)0x1;
    return;
  }
  btMatrix3x3::getRotation((btMatrix3x3 *)param_1,(btQuaternion *)&local_e0);
  fVar3 = local_d4;
  fVar2 = local_d8;
  fVar8 = fStack_dc;
  fVar1 = local_e0;
  btMatrix3x3::getRotation((btMatrix3x3 *)(this + 0x144),(btQuaternion *)&local_e0);
  fVar15 = (fVar8 * local_d8 + fVar3 * local_e0 + fVar1 * local_d4) - fVar2 * fStack_dc;
  fVar18 = (fVar2 * local_e0 + fVar3 * fStack_dc + fVar8 * local_d4) - fVar1 * local_d8;
  fVar22 = (fVar1 * fStack_dc + fVar3 * local_d8 + fVar2 * local_d4) - fVar8 * local_e0;
  fVar20 = ((fVar3 * local_d4 - fVar1 * local_e0) - fVar8 * fStack_dc) - fVar2 * local_d8;
  btMatrix3x3::getRotation((btMatrix3x3 *)param_2,(btQuaternion *)&local_e0);
  fVar3 = local_d4;
  fVar2 = local_d8;
  fVar8 = fStack_dc;
  fVar1 = local_e0;
  btMatrix3x3::getRotation((btMatrix3x3 *)(this + 0x184),(btQuaternion *)&local_e0);
  fVar29 = (fVar8 * local_d8 + fVar3 * local_e0 + fVar1 * local_d4) - fVar2 * fStack_dc;
  fVar31 = (fVar2 * local_e0 + fVar3 * fStack_dc + fVar8 * local_d4) - fVar1 * local_d8;
  fVar27 = ((fVar3 * local_d4 - fVar1 * local_e0) - fVar8 * fStack_dc) - fVar2 * local_d8;
  fVar35 = (fVar1 * fStack_dc + fVar3 * local_d8 + fVar2 * local_d4) - fVar8 * local_e0;
  fVar13 = ((fVar18 * fVar27 - fVar20 * fVar31) - fVar15 * fVar35) + fVar22 * fVar29;
  fVar16 = fVar20 * fVar27 + fVar15 * fVar29 + fVar18 * fVar31 + fVar22 * fVar35;
  fVar10 = ((fVar15 * fVar27 - fVar20 * fVar29) - fVar22 * fVar31) + fVar18 * fVar35;
  fVar11 = ((fVar22 * fVar27 - fVar20 * fVar35) - fVar18 * fVar29) + fVar15 * fVar31;
  fVar1 = (DAT_01781888 * fVar16 + DAT_01781890 * fVar13) - DAT_0178188c * fVar11;
  fVar4 = (-(DAT_01781888 * fVar10) - DAT_0178188c * fVar13) - DAT_01781890 * fVar11;
  fVar3 = (DAT_01781888 * fVar11 + DAT_0178188c * fVar16) - DAT_01781890 * fVar10;
  fVar2 = (DAT_01781890 * fVar16 + DAT_0178188c * fVar10) - DAT_01781888 * fVar13;
  fVar8 = ((fVar16 * fVar1 - fVar4 * fVar10) - fVar3 * fVar11) + fVar2 * fVar13;
  fVar19 = ((fVar16 * fVar3 - fVar4 * fVar13) - fVar2 * fVar10) + fVar1 * fVar11;
  fVar3 = ((fVar16 * fVar2 - fVar4 * fVar11) - fVar1 * fVar13) + fVar3 * fVar10;
  fVar2 = fVar3 * fVar3 + fVar8 * fVar8 + fVar19 * fVar19;
  fVar1 = SQRT(fVar2);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar2);
  }
  fVar1 = 1.0 / fVar1;
  fVar8 = fVar1 * fVar8;
  fVar19 = fVar1 * fVar19;
  fVar1 = fVar1 * fVar3;
  fVar2 = DAT_01781890 * fVar1 + DAT_0178188c * fVar19 + DAT_01781888 * fVar8;
  if (-0.9999999 <= fVar2) {
    fVar9 = DAT_0178188c * fVar1;
    fVar12 = DAT_01781890 * fVar19;
    fVar4 = DAT_01781890 * fVar8;
    fVar1 = DAT_01781888 * fVar1;
    fVar19 = DAT_01781888 * fVar19;
    fVar8 = DAT_0178188c * fVar8;
    fVar2 = fVar2 + 1.0;
    fVar2 = fVar2 + fVar2;
    fVar3 = SQRT(fVar2);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar2);
    }
    fVar2 = 1.0 / fVar3;
    fVar9 = (fVar9 - fVar12) * fVar2;
    fVar1 = (fVar4 - fVar1) * fVar2;
    fVar2 = (fVar19 - fVar8) * fVar2;
    fVar3 = fVar3 * 0.5;
  }
  else {
    if (ABS(DAT_01781890) <= 0.70710677) {
      fVar8 = DAT_0178188c * DAT_0178188c + DAT_01781888 * DAT_01781888;
      fVar1 = SQRT(fVar8);
      if (NAN(fVar1)) {
        fVar1 = sqrtf(fVar8);
      }
      fVar2 = 0.0;
      fVar9 = -(DAT_0178188c * (1.0 / fVar1));
      fVar1 = (1.0 / fVar1) * DAT_01781888;
    }
    else {
      fVar1 = DAT_0178188c * DAT_0178188c + DAT_01781890 * DAT_01781890;
      fVar8 = SQRT(fVar1);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar1);
      }
      fVar9 = 0.0;
      fVar1 = -((1.0 / fVar8) * DAT_01781890);
      fVar2 = (1.0 / fVar8) * DAT_0178188c;
    }
    fVar3 = 0.0;
  }
  fVar19 = fVar9 * fVar9 + fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar8 = SQRT(fVar19);
  if (NAN(fVar8)) {
    fVar8 = sqrtf(fVar19);
  }
  fVar8 = 1.0 / fVar8;
  fVar9 = fVar9 * fVar8;
  fVar1 = fVar1 * fVar8;
  fVar3 = fVar3 * fVar8;
  fVar2 = fVar2 * fVar8;
  fVar4 = ((fVar10 * fVar3 - fVar16 * fVar9) - fVar11 * fVar1) + fVar13 * fVar2;
  fVar12 = ((fVar13 * fVar3 - fVar16 * fVar1) - fVar10 * fVar2) + fVar11 * fVar9;
  fVar14 = ((fVar11 * fVar3 - fVar16 * fVar2) - fVar13 * fVar9) + fVar10 * fVar1;
  fVar10 = fVar16 * fVar3 + fVar10 * fVar9 + fVar13 * fVar1 + fVar11 * fVar2;
  fVar19 = fVar10 * fVar10 + fVar14 * fVar14 + fVar4 * fVar4 + fVar12 * fVar12;
  fVar8 = SQRT(fVar19);
  if (NAN(fVar8)) {
    fVar8 = sqrtf(fVar19);
  }
  fVar11 = -fVar29;
  fVar13 = -fVar31;
  fVar19 = -fVar35;
  if ((*(float *)(this + 0x1d4) < *(float *)(this + 0x1e0)) ||
     (*(float *)(this + 0x1d8) < *(float *)(this + 0x1e0))) {
    fVar16 = *(float *)(this + 0x144);
    fVar3 = *(float *)param_1;
    fVar2 = *(float *)(param_1 + 4);
    fVar5 = *(float *)(this + 0x164);
    fVar1 = *(float *)(param_1 + 8);
    fVar24 = *(float *)(param_1 + 0x10);
    fVar6 = *(float *)(param_1 + 0x14);
    fVar7 = *(float *)(param_1 + 0x18);
    fVar25 = *(float *)(param_1 + 0x20);
    fVar26 = *(float *)(param_1 + 0x24);
    fVar28 = *(float *)(param_1 + 0x28);
    fVar34 = *(float *)(this + 0x168);
    fVar40 = *(float *)(this + 0x16c);
    fVar9 = *(float *)(this + 0x154);
    fVar30 = *(float *)(this + 0x148);
    fVar32 = *(float *)(this + 0x158);
    fVar36 = *(float *)(this + 0x14c);
    fVar39 = *(float *)(this + 0x15c);
    fVar43 = *(float *)(this + 0x184);
    fVar45 = *(float *)(this + 0x194);
    fVar48 = *(float *)(this + 0x1a4);
    fVar21 = fVar16 * fVar3 + fVar9 * fVar2 + fVar5 * fVar1;
    fVar41 = fVar16 * fVar24 + fVar9 * fVar6 + fVar5 * fVar7;
    fVar33 = fVar16 * fVar25 + fVar9 * fVar26 + fVar5 * fVar28;
    fVar44 = fVar3 * fVar30 + fVar2 * fVar32 + fVar1 * fVar34;
    fVar37 = fVar24 * fVar30 + fVar6 * fVar32 + fVar7 * fVar34;
    fVar17 = fVar43 * *(float *)param_2 + fVar45 * *(float *)(param_2 + 4) +
             fVar48 * *(float *)(param_2 + 8);
    fVar23 = fVar43 * *(float *)(param_2 + 0x10) + fVar45 * *(float *)(param_2 + 0x14) +
             fVar48 * *(float *)(param_2 + 0x18);
    fVar5 = fVar3 * fVar36 + fVar2 * fVar39 + fVar1 * fVar40;
    fVar9 = fVar24 * fVar36 + fVar6 * fVar39 + fVar7 * fVar40;
    fVar6 = fVar43 * *(float *)(param_2 + 0x20) + fVar45 * *(float *)(param_2 + 0x24) +
            fVar48 * *(float *)(param_2 + 0x28);
    fVar1 = *(float *)(this + 0x1e0);
    fVar24 = fVar25 * fVar30 + fVar26 * fVar32 + fVar28 * fVar34;
    fVar7 = fVar25 * fVar36 + fVar26 * fVar39 + fVar28 * fVar40;
    fVar3 = fVar21 * fVar17 + fVar41 * fVar23 + fVar33 * fVar6;
    fVar2 = fVar44 * fVar17 + fVar37 * fVar23 + fVar24 * fVar6;
    fVar16 = fVar5 * fVar17 + fVar9 * fVar23 + fVar7 * fVar6;
    if (fVar1 <= *(float *)(this + 0x1d4)) {
      if (((1.1920929e-07 <= ABS(fVar3)) || (1.1920929e-07 <= ABS(fVar2))) &&
         (this[0x226] = (btConeTwistConstraint)0x1, fVar1 <= *(float *)(this + 0x1d4))) {
        fVar1 = atan2f(fVar2,fVar3);
        fVar25 = *(float *)(this + 0x1d4);
        if (fVar1 <= fVar25) {
          fVar16 = 0.0;
          if (fVar1 < -fVar25) {
            fVar3 = cosf(fVar25);
            fVar2 = sinf(*(float *)(this + 0x1d4));
            fVar2 = -fVar2;
          }
        }
        else {
          fVar3 = cosf(fVar25);
          fVar2 = sinf(*(float *)(this + 0x1d4));
          fVar16 = 0.0;
        }
      }
    }
    else {
      if (*(float *)(this + 0x1d8) < fVar1) {
        if ((1.1920929e-07 <= ABS(fVar2)) || (1.1920929e-07 <= ABS(fVar16))) {
          this[0x226] = (btConeTwistConstraint)0x1;
          *(float *)(this + 0x1e4) = -(fVar33 * fVar23 - fVar41 * fVar6);
          *(float *)(this + 0x1e8) = -(fVar21 * fVar6 - fVar33 * fVar17);
          *(float *)(this + 0x1ec) = -(fVar41 * fVar17 - fVar21 * fVar23);
          *(undefined4 *)(this + 0x1f0) = 0;
        }
        goto LAB_011b3b40;
      }
      if (((1.1920929e-07 <= ABS(fVar3)) || (1.1920929e-07 <= ABS(fVar16))) &&
         (this[0x226] = (btConeTwistConstraint)0x1, fVar1 <= *(float *)(this + 0x1d8))) {
        fVar1 = atan2f(fVar16,fVar3);
        fVar25 = *(float *)(this + 0x1d8);
        if (fVar1 <= fVar25) {
          fVar2 = 0.0;
          if (fVar1 < -fVar25) {
            fVar3 = cosf(fVar25);
            fVar16 = sinf(*(float *)(this + 0x1d8));
            fVar16 = -fVar16;
          }
        }
        else {
          fVar3 = cosf(fVar25);
          fVar16 = sinf(*(float *)(this + 0x1d8));
          fVar2 = 0.0;
        }
      }
    }
    fVar5 = fVar5 * fVar16 + fVar44 * fVar2 + fVar21 * fVar3;
    fVar9 = fVar9 * fVar16 + fVar37 * fVar2 + fVar41 * fVar3;
    fVar3 = fVar7 * fVar16 + fVar24 * fVar2 + fVar33 * fVar3;
    fVar2 = fVar3 * fVar3 + fVar5 * fVar5 + fVar9 * fVar9;
    fVar1 = SQRT(fVar2);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar2);
    }
    fVar1 = 1.0 / fVar1;
    fVar7 = fVar23 * fVar1 * fVar3 - fVar6 * fVar1 * fVar9;
    fVar2 = fVar6 * fVar1 * fVar5 - fVar17 * fVar1 * fVar3;
    fVar3 = fVar17 * fVar1 * fVar9 - fVar23 * fVar1 * fVar5;
    fVar16 = fVar7 * fVar7 + fVar2 * fVar2 + fVar3 * fVar3;
    fVar1 = SQRT(fVar16);
    *(float *)(this + 0x1e4) = -fVar7;
    *(float *)(this + 0x1e8) = -fVar2;
    *(float *)(this + 0x1ec) = -fVar3;
    *(undefined4 *)(this + 0x1f0) = 0;
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar16);
    }
    *(float *)(this + 0x210) = fVar1;
    fVar2 = *(float *)(this + 0x1e4) * *(float *)(this + 0x1e4) +
            *(float *)(this + 0x1e8) * *(float *)(this + 0x1e8) +
            *(float *)(this + 0x1ec) * *(float *)(this + 0x1ec);
    fVar1 = SQRT(fVar2);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar2);
    }
    fVar1 = 1.0 / fVar1;
    *(float *)(this + 0x1e4) = fVar1 * *(float *)(this + 0x1e4);
    *(float *)(this + 0x1e8) = fVar1 * *(float *)(this + 0x1e8);
    *(float *)(this + 0x1ec) = fVar1 * *(float *)(this + 0x1ec);
  }
  else {
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    fVar3 = acosf(fVar3);
    fVar3 = fVar3 + fVar3;
    if (fVar3 <= 1.1920929e-07) {
      fVar16 = 0.0;
      fVar1 = fVar4;
      fVar2 = fVar12;
    }
    else {
      fVar16 = fVar2 * fVar2 + fVar9 * fVar9 + fVar1 * fVar1;
      fVar5 = SQRT(fVar16);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar16);
      }
      fVar5 = 1.0 / fVar5;
      fVar16 = *(float *)(this + 0x1d4);
      fVar1 = fVar1 * fVar5;
      fVar9 = fVar9 * fVar5;
      fVar2 = fVar2 * fVar5;
      if (1.1920929e-07 < ABS(fVar1)) {
        fVar5 = (fVar2 * fVar2) / (fVar1 * fVar1);
        fVar5 = (fVar5 + 1.0) /
                (1.0 / (*(float *)(this + 0x1d8) * *(float *)(this + 0x1d8)) +
                fVar5 / (fVar16 * fVar16));
        fVar16 = SQRT(fVar5);
        if (NAN(fVar16)) {
          fVar16 = sqrtf(fVar5);
        }
      }
    }
    fVar5 = fVar16 * *(float *)(this + 0x1c4);
    if (fVar5 < fVar3) {
      fVar6 = 1.0;
      this[0x226] = (btConeTwistConstraint)0x1;
      if ((fVar3 < fVar16) && (fVar6 = 1.0, *(float *)(this + 0x1c4) < 0.9999999)) {
        fVar6 = (fVar3 - fVar5) / (fVar16 - fVar5);
      }
      *(float *)(this + 0x228) = fVar6;
      *(float *)(this + 0x210) = fVar3 - fVar5;
      if (1.1920929e-07 < ABS(fVar1)) {
        fVar3 = ABS(fVar1 * (-fVar2 / fVar1) * (*(float *)(this + 0x1d8) / *(float *)(this + 0x1d4))
                   );
        if (-0.0 <= fVar2) {
          fVar3 = -fVar3;
        }
        fVar16 = fVar9 * fVar9 + fVar1 * fVar1 + fVar3 * fVar3;
        fVar2 = SQRT(fVar16);
        if (NAN(fVar2)) {
          fVar2 = sqrtf(fVar16);
        }
        fVar2 = 1.0 / fVar2;
        fVar9 = fVar9 * fVar2;
        fVar1 = fVar1 * fVar2;
        fVar2 = -(fVar2 * fVar3);
      }
      *(undefined4 *)(this + 0x1f0) = 0;
      *(undefined8 *)(this + 0x238) = 0;
      *(undefined8 *)(this + 0x230) = 0;
      fVar5 = fVar31 * fVar1 + fVar29 * fVar9 + fVar35 * fVar2;
      fVar16 = (fVar27 * -fVar9 - fVar31 * fVar2) + fVar35 * fVar1;
      fVar3 = (fVar35 * -fVar9 - fVar27 * fVar1) + fVar29 * fVar2;
      fVar1 = (fVar29 * -fVar1 - fVar27 * fVar2) + fVar31 * fVar9;
      fVar2 = (fVar3 * fVar19 + fVar5 * fVar11 + fVar27 * fVar16) - fVar1 * fVar13;
      fVar9 = (fVar1 * fVar11 + fVar27 * fVar3 + fVar5 * fVar13) - fVar16 * fVar19;
      fVar1 = (fVar16 * fVar13 + fVar5 * fVar19 + fVar27 * fVar1) - fVar3 * fVar11;
      *(float *)(this + 0x1e4) = fVar2;
      *(float *)(this + 0x1e8) = fVar9;
      *(float *)(this + 0x1ec) = fVar1;
      *(float *)(this + 0x204) =
           1.0 / (fVar2 * (*(float *)param_3 * fVar2 + *(float *)(param_3 + 0x10) * fVar9 +
                          *(float *)(param_3 + 0x20) * fVar1) +
                  fVar9 * (fVar2 * *(float *)(param_3 + 4) + fVar9 * *(float *)(param_3 + 0x14) +
                          fVar1 * *(float *)(param_3 + 0x24)) +
                  fVar1 * (fVar2 * *(float *)(param_3 + 8) + fVar9 * *(float *)(param_3 + 0x18) +
                          fVar1 * *(float *)(param_3 + 0x28)) +
                 fVar2 * (fVar2 * *(float *)param_4 + fVar9 * *(float *)(param_4 + 0x10) +
                         fVar1 * *(float *)(param_4 + 0x20)) +
                 fVar9 * (fVar2 * *(float *)(param_4 + 4) + fVar9 * *(float *)(param_4 + 0x14) +
                         fVar1 * *(float *)(param_4 + 0x24)) +
                 fVar1 * (fVar2 * *(float *)(param_4 + 8) + fVar9 * *(float *)(param_4 + 0x18) +
                         fVar1 * *(float *)(param_4 + 0x28)));
    }
  }
LAB_011b3b40:
  if (0.0 <= *(float *)(this + 0x1dc)) {
    fVar2 = 1.0;
    fVar8 = 1.0 / fVar8;
    fVar4 = fVar8 * fVar4;
    fVar12 = fVar8 * fVar12;
    fVar14 = fVar8 * fVar14;
    fVar8 = fVar8 * fVar10;
    fVar1 = fVar8;
    if (fVar8 <= -1.0) {
      fVar1 = -1.0;
    }
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    fVar1 = acosf(fVar1);
    fVar1 = fVar1 + fVar1;
    *(float *)(this + 0x218) = fVar1;
    if (3.1415927 < fVar1) {
      fVar8 = -fVar8;
      if (fVar8 <= -1.0) {
        fVar8 = -1.0;
      }
      if (1.0 < fVar8) {
        fVar8 = 1.0;
      }
      fVar4 = -fVar4;
      fVar12 = -fVar12;
      fVar14 = -fVar14;
      fVar1 = acosf(fVar8);
      fVar1 = fVar1 + fVar1;
      *(float *)(this + 0x218) = fVar1;
    }
    if (1.1920929e-07 < fVar1) {
      fVar1 = fVar4 * fVar4 + fVar12 * fVar12 + fVar14 * fVar14;
      fVar8 = SQRT(fVar1);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar1);
      }
      fVar1 = *(float *)(this + 0x218);
      fVar8 = 1.0 / fVar8;
      fVar4 = fVar4 * fVar8;
      fVar12 = fVar12 * fVar8;
      fVar14 = fVar14 * fVar8;
    }
    fVar3 = *(float *)(this + 0x1dc);
    fVar8 = fVar3 * *(float *)(this + 0x1c4);
    if (fVar8 < fVar1) {
      this[0x225] = (btConeTwistConstraint)0x1;
      if ((fVar1 < fVar3) && (fVar2 = 1.0, *(float *)(this + 0x1c4) < 0.9999999)) {
        fVar2 = (fVar1 - fVar8) / (fVar3 - fVar8);
      }
      *(float *)(this + 0x22c) = fVar2;
      *(float *)(this + 0x214) = fVar1 - fVar8;
      fVar1 = fVar31 * fVar12 + fVar29 * fVar4 + fVar35 * fVar14;
      fVar10 = (fVar31 * -fVar14 - fVar27 * fVar4) + fVar35 * fVar12;
      fVar8 = (fVar27 * -fVar12 - fVar35 * fVar4) + fVar29 * fVar14;
      fVar2 = (fVar27 * -fVar14 - fVar29 * fVar12) + fVar31 * fVar4;
      fVar16 = (fVar8 * fVar19 + fVar27 * fVar10 + fVar1 * fVar11) - fVar2 * fVar13;
      fVar3 = (fVar2 * fVar11 + fVar27 * fVar8 + fVar1 * fVar13) - fVar10 * fVar19;
      fVar1 = (fVar10 * fVar13 + fVar27 * fVar2 + fVar1 * fVar19) - fVar8 * fVar11;
      *(undefined4 *)(this + 0x200) = 0;
      *(float *)(this + 500) = fVar16;
      *(float *)(this + 0x1f8) = fVar3;
      *(float *)(this + 0x1fc) = fVar1;
      *(float *)(this + 0x208) =
           1.0 / (fVar16 * (*(float *)param_3 * fVar16 + *(float *)(param_3 + 0x10) * fVar3 +
                           *(float *)(param_3 + 0x20) * fVar1) +
                  fVar3 * (fVar16 * *(float *)(param_3 + 4) + fVar3 * *(float *)(param_3 + 0x14) +
                          fVar1 * *(float *)(param_3 + 0x24)) +
                  fVar1 * (fVar16 * *(float *)(param_3 + 8) + fVar3 * *(float *)(param_3 + 0x18) +
                          fVar1 * *(float *)(param_3 + 0x28)) +
                 fVar16 * (fVar16 * *(float *)param_4 + fVar3 * *(float *)(param_4 + 0x10) +
                          fVar1 * *(float *)(param_4 + 0x20)) +
                 fVar3 * (fVar16 * *(float *)(param_4 + 4) + fVar3 * *(float *)(param_4 + 0x14) +
                         fVar1 * *(float *)(param_4 + 0x24)) +
                 fVar1 * (fVar16 * *(float *)(param_4 + 8) + fVar3 * *(float *)(param_4 + 0x18) +
                         fVar1 * *(float *)(param_4 + 0x28)));
    }
    if (this[0x226] != (btConeTwistConstraint)0x0) {
      fVar3 = fVar18 * fVar12 + fVar15 * fVar4 + fVar22 * fVar14;
      fVar2 = (fVar18 * -fVar14 - fVar20 * fVar4) + fVar22 * fVar12;
      fVar1 = (fVar20 * -fVar12 - fVar22 * fVar4) + fVar15 * fVar14;
      fVar8 = (fVar20 * -fVar14 - fVar15 * fVar12) + fVar18 * fVar4;
      *(float *)(this + 0x230) =
           ((fVar20 * fVar2 - fVar3 * fVar15) - fVar1 * fVar22) + fVar8 * fVar18;
      *(float *)(this + 0x234) =
           ((fVar20 * fVar1 - fVar3 * fVar18) - fVar8 * fVar15) + fVar2 * fVar22;
      *(float *)(this + 0x238) =
           ((fVar20 * fVar8 - fVar3 * fVar22) - fVar2 * fVar18) + fVar1 * fVar15;
      *(undefined4 *)(this + 0x23c) = 0;
    }
  }
  else {
    *(undefined4 *)(this + 0x218) = 0;
  }
  return;
}

