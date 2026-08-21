
/* btHingeConstraint::buildJacobian() */

void __thiscall btHingeConstraint::buildJacobian(btHingeConstraint *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
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
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  float local_a0 [4];
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  
  if (this[0x2fa] != (btHingeConstraint)0x0) {
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x300) = 0;
    if (this[0x2f8] == (btHingeConstraint)0x0) {
      lVar1 = *(long *)(this + 0x28);
      lVar2 = *(long *)(this + 0x30);
      fVar4 = *(float *)(this + 0x274);
      fVar5 = *(float *)(this + 0x278);
      fVar6 = *(float *)(this + 0x2b4);
      fVar7 = *(float *)(this + 0x2b8);
      fVar24 = *(float *)(this + 0x270);
      fVar18 = *(float *)(this + 0x2b0);
      fVar12 = fVar24 * *(float *)(lVar1 + 0x18) + fVar4 * *(float *)(lVar1 + 0x1c) +
               fVar5 * *(float *)(lVar1 + 0x20) + *(float *)(lVar1 + 0x3c);
      fVar8 = fVar18 * *(float *)(lVar2 + 0x18) + fVar6 * *(float *)(lVar2 + 0x1c) +
              fVar7 * *(float *)(lVar2 + 0x20) + *(float *)(lVar2 + 0x3c);
      fVar13 = fVar24 * *(float *)(lVar1 + 8) + fVar4 * *(float *)(lVar1 + 0xc) +
               fVar5 * *(float *)(lVar1 + 0x10) + *(float *)(lVar1 + 0x38);
      fVar10 = fVar18 * *(float *)(lVar2 + 8) + fVar6 * *(float *)(lVar2 + 0xc) +
               fVar7 * *(float *)(lVar2 + 0x10) + *(float *)(lVar2 + 0x38);
      fVar7 = fVar18 * *(float *)(lVar2 + 0x28) + fVar6 * *(float *)(lVar2 + 0x2c) +
              fVar7 * *(float *)(lVar2 + 0x30) + *(float *)(lVar2 + 0x40);
      fVar18 = fVar24 * *(float *)(lVar1 + 0x28) + fVar4 * *(float *)(lVar1 + 0x2c) +
               fVar5 * *(float *)(lVar1 + 0x30) + *(float *)(lVar1 + 0x40);
      fVar5 = fVar8 - fVar12;
      fVar6 = fVar10 - fVar13;
      fVar24 = fVar7 - fVar18;
      fVar4 = fVar6 * fVar6 + fVar5 * fVar5 + fVar24 * fVar24;
      if (fVar4 <= 1.1920929e-07) {
        fVar6 = 1.0;
        fVar5 = 0.0;
        local_a0[0] = 1.0;
        local_a0[1] = 0.0;
        local_a0[2] = 0.0;
      }
      else {
        local_a0[2] = SQRT(fVar4);
        if (NAN(local_a0[2])) {
          local_a0[2] = sqrtf(fVar4);
        }
        local_a0[2] = 1.0 / local_a0[2];
        fVar6 = fVar6 * local_a0[2];
        fVar5 = fVar5 * local_a0[2];
        local_a0[2] = fVar24 * local_a0[2];
        local_a0[1] = fVar5;
        local_a0[0] = fVar6;
      }
      local_a0[3] = 0.0;
      if (ABS(local_a0[2]) <= 0.70710677) {
        fVar4 = fVar6 * fVar6 + fVar5 * fVar5;
        local_78 = SQRT(fVar4);
        if (NAN(local_78)) {
          local_78 = sqrtf(fVar4);
        }
        local_78 = 1.0 / local_78;
        local_90 = -(local_a0[1] * local_78);
        local_8c = local_78 * local_a0[0];
        local_78 = fVar4 * local_78;
        local_80 = -(local_8c * local_a0[2]);
        fStack_7c = local_a0[2] * local_90;
        local_88 = 0.0;
      }
      else {
        fVar4 = local_a0[2] * local_a0[2] + fVar5 * fVar5;
        local_80 = SQRT(fVar4);
        if (NAN(local_80)) {
          local_80 = sqrtf(fVar4);
        }
        local_80 = 1.0 / local_80;
        local_90 = 0.0;
        local_8c = -(local_80 * local_a0[2]);
        local_88 = local_80 * local_a0[1];
        local_80 = fVar4 * local_80;
        fStack_7c = -(local_88 * local_a0[0]);
        local_78 = local_a0[0] * local_8c;
      }
      lVar1 = *(long *)(this + 0x28);
      local_d0 = *(undefined4 *)(lVar1 + 8);
      local_cc = *(undefined4 *)(lVar1 + 0x18);
      local_c8 = *(undefined4 *)(lVar1 + 0x28);
      uStack_c4 = 0;
      local_c0 = *(undefined4 *)(lVar1 + 0xc);
      local_bc = *(undefined4 *)(lVar1 + 0x1c);
      local_b8 = *(undefined4 *)(lVar1 + 0x2c);
      uStack_b4 = 0;
      local_b0 = *(undefined4 *)(lVar1 + 0x10);
      local_ac = *(undefined4 *)(lVar1 + 0x20);
      local_a8 = *(undefined4 *)(lVar1 + 0x30);
      uStack_a4 = 0;
      lVar2 = *(long *)(this + 0x30);
      local_100 = *(undefined4 *)(lVar2 + 8);
      local_fc = *(undefined4 *)(lVar2 + 0x18);
      local_f8 = *(undefined4 *)(lVar2 + 0x28);
      uStack_f4 = 0;
      local_f0 = *(undefined4 *)(lVar2 + 0xc);
      local_ec = *(undefined4 *)(lVar2 + 0x1c);
      local_e8 = *(undefined4 *)(lVar2 + 0x2c);
      uStack_e4 = 0;
      local_e0 = *(undefined4 *)(lVar2 + 0x10);
      local_dc = *(undefined4 *)(lVar2 + 0x20);
      local_d8 = *(undefined4 *)(lVar2 + 0x30);
      uStack_d4 = 0;
      local_104 = 0;
      local_110 = fVar13 - *(float *)(lVar1 + 0x38);
      fStack_10c = fVar12 - *(float *)(lVar1 + 0x3c);
      local_108 = fVar18 - *(float *)(lVar1 + 0x40);
      local_114 = 0;
      local_120 = fVar10 - *(float *)(lVar2 + 0x38);
      fStack_11c = fVar8 - *(float *)(lVar2 + 0x3c);
      local_118 = fVar7 - *(float *)(lVar2 + 0x40);
      btJacobianEntry::btJacobianEntry
                ((btJacobianEntry *)(this + 0x48),(btMatrix3x3 *)&local_d0,(btMatrix3x3 *)&local_100
                 ,(btVector3 *)&local_110,(btVector3 *)&local_120,(btVector3 *)local_a0,
                 (btVector3 *)(*(long *)(this + 0x28) + 0x1a8),
                 *(float *)(*(long *)(this + 0x28) + 0x174),(btVector3 *)(lVar2 + 0x1a8),
                 *(float *)(lVar2 + 0x174));
      lVar1 = *(long *)(this + 0x28);
      local_d0 = *(undefined4 *)(lVar1 + 8);
      local_cc = *(undefined4 *)(lVar1 + 0x18);
      local_c8 = *(undefined4 *)(lVar1 + 0x28);
      uStack_c4 = 0;
      local_c0 = *(undefined4 *)(lVar1 + 0xc);
      local_bc = *(undefined4 *)(lVar1 + 0x1c);
      local_b8 = *(undefined4 *)(lVar1 + 0x2c);
      uStack_b4 = 0;
      local_b0 = *(undefined4 *)(lVar1 + 0x10);
      local_ac = *(undefined4 *)(lVar1 + 0x20);
      local_a8 = *(undefined4 *)(lVar1 + 0x30);
      uStack_a4 = 0;
      lVar2 = *(long *)(this + 0x30);
      local_100 = *(undefined4 *)(lVar2 + 8);
      local_fc = *(undefined4 *)(lVar2 + 0x18);
      local_f8 = *(undefined4 *)(lVar2 + 0x28);
      uStack_f4 = 0;
      local_f0 = *(undefined4 *)(lVar2 + 0xc);
      local_ec = *(undefined4 *)(lVar2 + 0x1c);
      local_e8 = *(undefined4 *)(lVar2 + 0x2c);
      uStack_e4 = 0;
      local_e0 = *(undefined4 *)(lVar2 + 0x10);
      local_dc = *(undefined4 *)(lVar2 + 0x20);
      local_d8 = *(undefined4 *)(lVar2 + 0x30);
      uStack_d4 = 0;
      local_104 = 0;
      local_110 = fVar13 - *(float *)(lVar1 + 0x38);
      fStack_10c = fVar12 - *(float *)(lVar1 + 0x3c);
      local_108 = fVar18 - *(float *)(lVar1 + 0x40);
      local_114 = 0;
      local_120 = fVar10 - *(float *)(lVar2 + 0x38);
      fStack_11c = fVar8 - *(float *)(lVar2 + 0x3c);
      local_118 = fVar7 - *(float *)(lVar2 + 0x40);
      btJacobianEntry::btJacobianEntry
                ((btJacobianEntry *)(this + 0x9c),(btMatrix3x3 *)&local_d0,(btMatrix3x3 *)&local_100
                 ,(btVector3 *)&local_110,(btVector3 *)&local_120,(btVector3 *)&local_90,
                 (btVector3 *)(*(long *)(this + 0x28) + 0x1a8),
                 *(float *)(*(long *)(this + 0x28) + 0x174),(btVector3 *)(lVar2 + 0x1a8),
                 *(float *)(lVar2 + 0x174));
      lVar1 = *(long *)(this + 0x28);
      local_d0 = *(undefined4 *)(lVar1 + 8);
      local_cc = *(undefined4 *)(lVar1 + 0x18);
      local_c8 = *(undefined4 *)(lVar1 + 0x28);
      uStack_c4 = 0;
      local_c0 = *(undefined4 *)(lVar1 + 0xc);
      local_bc = *(undefined4 *)(lVar1 + 0x1c);
      local_b8 = *(undefined4 *)(lVar1 + 0x2c);
      uStack_b4 = 0;
      local_b0 = *(undefined4 *)(lVar1 + 0x10);
      local_ac = *(undefined4 *)(lVar1 + 0x20);
      local_a8 = *(undefined4 *)(lVar1 + 0x30);
      uStack_a4 = 0;
      lVar2 = *(long *)(this + 0x30);
      local_100 = *(undefined4 *)(lVar2 + 8);
      local_fc = *(undefined4 *)(lVar2 + 0x18);
      local_f8 = *(undefined4 *)(lVar2 + 0x28);
      uStack_f4 = 0;
      local_f0 = *(undefined4 *)(lVar2 + 0xc);
      local_ec = *(undefined4 *)(lVar2 + 0x1c);
      local_e8 = *(undefined4 *)(lVar2 + 0x2c);
      uStack_e4 = 0;
      local_e0 = *(undefined4 *)(lVar2 + 0x10);
      local_dc = *(undefined4 *)(lVar2 + 0x20);
      local_d8 = *(undefined4 *)(lVar2 + 0x30);
      uStack_d4 = 0;
      local_104 = 0;
      local_110 = fVar13 - *(float *)(lVar1 + 0x38);
      fStack_10c = fVar12 - *(float *)(lVar1 + 0x3c);
      local_108 = fVar18 - *(float *)(lVar1 + 0x40);
      local_114 = 0;
      local_120 = fVar10 - *(float *)(lVar2 + 0x38);
      fStack_11c = fVar8 - *(float *)(lVar2 + 0x3c);
      local_118 = fVar7 - *(float *)(lVar2 + 0x40);
      btJacobianEntry::btJacobianEntry
                ((btJacobianEntry *)(this + 0xf0),(btMatrix3x3 *)&local_d0,(btMatrix3x3 *)&local_100
                 ,(btVector3 *)&local_110,(btVector3 *)&local_120,(btVector3 *)&local_80,
                 (btVector3 *)(*(long *)(this + 0x28) + 0x1a8),
                 *(float *)(*(long *)(this + 0x28) + 0x174),(btVector3 *)(lVar2 + 0x1a8),
                 *(float *)(lVar2 + 0x174));
    }
    fVar4 = *(float *)(this + 0x268);
    fVar5 = *(float *)(this + 0x248);
    fVar6 = *(float *)(this + 600);
    if (ABS(fVar4) <= 0.70710677) {
      fVar8 = fVar5 * fVar5 + fVar6 * fVar6;
      fVar7 = SQRT(fVar8);
      if (NAN(fVar7)) {
        fVar7 = sqrtf(fVar8);
      }
      fVar7 = 1.0 / fVar7;
      fVar12 = -(fVar6 * fVar7);
      fVar10 = fVar5 * fVar7;
      fVar5 = fVar8 * fVar7;
      fVar7 = -(fVar4 * fVar10);
      fVar4 = fVar4 * fVar12;
      fVar6 = 0.0;
    }
    else {
      fVar7 = fVar6 * fVar6 + fVar4 * fVar4;
      fVar8 = SQRT(fVar7);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar7);
      }
      fVar8 = 1.0 / fVar8;
      fVar10 = -(fVar4 * fVar8);
      fVar6 = fVar6 * fVar8;
      fVar7 = fVar7 * fVar8;
      fVar4 = -(fVar5 * fVar6);
      fVar5 = fVar5 * fVar10;
      fVar12 = 0.0;
    }
    fVar8 = *(float *)(this + 0x248);
    lVar1 = *(long *)(this + 0x28);
    lVar2 = *(long *)(this + 0x30);
    fVar18 = *(float *)(this + 600);
    fVar13 = *(float *)(this + 0x268);
    fVar21 = *(float *)(lVar1 + 8);
    fVar24 = *(float *)(lVar1 + 0xc);
    fVar14 = *(float *)(lVar1 + 0x18);
    fVar15 = *(float *)(lVar1 + 0x1c);
    fVar9 = *(float *)(lVar1 + 0x10);
    fVar16 = *(float *)(lVar1 + 0x20);
    fVar17 = *(float *)(lVar1 + 0x28);
    fVar19 = *(float *)(lVar1 + 0x2c);
    fVar20 = *(float *)(lVar1 + 0x30);
    fVar22 = fVar12 * fVar21 + fVar10 * fVar24 + fVar6 * fVar9;
    fVar11 = fVar12 * fVar14 + fVar10 * fVar15 + fVar6 * fVar16;
    fVar6 = fVar12 * fVar17 + fVar10 * fVar19 + fVar6 * fVar20;
    fVar12 = -fVar22;
    fVar23 = fVar22 * fVar21 + fVar11 * fVar14 + fVar6 * fVar17;
    fVar26 = fVar22 * fVar9 + fVar11 * fVar16 + fVar6 * fVar20;
    fVar25 = fVar22 * fVar24 + fVar11 * fVar15 + fVar6 * fVar19;
    fVar10 = (*(float *)(lVar2 + 8) * fVar12 - *(float *)(lVar2 + 0x18) * fVar11) -
             *(float *)(lVar2 + 0x28) * fVar6;
    fVar22 = (*(float *)(lVar2 + 0xc) * fVar12 - *(float *)(lVar2 + 0x1c) * fVar11) -
             *(float *)(lVar2 + 0x2c) * fVar6;
    fVar6 = (*(float *)(lVar2 + 0x10) * fVar12 - *(float *)(lVar2 + 0x20) * fVar11) -
            *(float *)(lVar2 + 0x30) * fVar6;
    *(undefined8 *)(this + 0x14c) = 0;
    *(undefined8 *)(this + 0x144) = 0;
    *(undefined4 *)(this + 0x160) = 0;
    *(undefined4 *)(this + 0x170) = 0;
    *(float *)(this + 0x154) = fVar23;
    *(float *)(this + 0x158) = fVar25;
    *(float *)(this + 0x15c) = fVar26;
    *(float *)(this + 0x164) = fVar10;
    *(float *)(this + 0x168) = fVar22;
    *(float *)(this + 0x16c) = fVar6;
    fVar27 = *(float *)(lVar1 + 0x1a8);
    fVar29 = *(float *)(lVar1 + 0x1ac);
    fVar30 = *(float *)(lVar1 + 0x1b0);
    *(undefined4 *)(this + 0x180) = 0;
    fVar27 = fVar23 * fVar27;
    fVar29 = fVar25 * fVar29;
    fVar30 = fVar26 * fVar30;
    *(float *)(this + 0x174) = fVar27;
    *(float *)(this + 0x178) = fVar29;
    *(float *)(this + 0x17c) = fVar30;
    fVar12 = fVar10 * *(float *)(lVar2 + 0x1a8);
    fVar11 = fVar22 * *(float *)(lVar2 + 0x1ac);
    fVar28 = fVar6 * *(float *)(lVar2 + 0x1b0);
    lVar1 = *(long *)(this + 0x28);
    lVar2 = *(long *)(this + 0x30);
    *(undefined4 *)(this + 400) = 0;
    *(float *)(this + 0x184) = fVar12;
    *(float *)(this + 0x188) = fVar11;
    *(float *)(this + 0x18c) = fVar28;
    *(float *)(this + 0x194) =
         fVar23 * fVar27 + fVar25 * fVar29 + fVar26 * fVar30 +
         fVar10 * fVar12 + fVar22 * fVar11 + fVar6 * fVar28;
    lVar3 = *(long *)(this + 0x28);
    fVar6 = fVar7 * fVar21 + fVar4 * fVar24 + fVar5 * fVar9;
    fVar10 = fVar7 * fVar14 + fVar4 * fVar15 + fVar5 * fVar16;
    fVar4 = fVar7 * fVar17 + fVar4 * fVar19 + fVar5 * fVar20;
    fVar5 = -fVar6;
    fVar12 = fVar6 * *(float *)(lVar3 + 8) + fVar10 * *(float *)(lVar3 + 0x18) +
             fVar4 * *(float *)(lVar3 + 0x28);
    fVar22 = fVar6 * *(float *)(lVar3 + 0xc) + fVar10 * *(float *)(lVar3 + 0x1c) +
             fVar4 * *(float *)(lVar3 + 0x2c);
    fVar23 = fVar6 * *(float *)(lVar3 + 0x10) + fVar10 * *(float *)(lVar3 + 0x20) +
             fVar4 * *(float *)(lVar3 + 0x30);
    fVar25 = (*(float *)(lVar2 + 8) * fVar5 - *(float *)(lVar2 + 0x18) * fVar10) -
             *(float *)(lVar2 + 0x28) * fVar4;
    fVar26 = (*(float *)(lVar2 + 0xc) * fVar5 - *(float *)(lVar2 + 0x1c) * fVar10) -
             *(float *)(lVar2 + 0x2c) * fVar4;
    fVar6 = (*(float *)(lVar2 + 0x10) * fVar5 - *(float *)(lVar2 + 0x20) * fVar10) -
            *(float *)(lVar2 + 0x30) * fVar4;
    *(undefined8 *)(this + 0x198) = 0;
    *(undefined8 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x1b4) = 0;
    *(undefined4 *)(this + 0x1c4) = 0;
    *(float *)(this + 0x1a8) = fVar12;
    *(float *)(this + 0x1ac) = fVar22;
    *(float *)(this + 0x1b0) = fVar23;
    *(float *)(this + 0x1b8) = fVar25;
    *(float *)(this + 0x1bc) = fVar26;
    *(float *)(this + 0x1c0) = fVar6;
    fVar4 = *(float *)(lVar3 + 0x1a8);
    fVar7 = *(float *)(lVar3 + 0x1ac);
    fVar27 = *(float *)(lVar3 + 0x1b0);
    *(undefined4 *)(this + 0x1d4) = 0;
    fVar4 = fVar12 * fVar4;
    fVar7 = fVar22 * fVar7;
    fVar27 = fVar23 * fVar27;
    *(float *)(this + 0x1c8) = fVar4;
    *(float *)(this + 0x1cc) = fVar7;
    *(float *)(this + 0x1d0) = fVar27;
    fVar9 = fVar21 * fVar8 + fVar24 * fVar18 + fVar9 * fVar13;
    fVar5 = fVar14 * fVar8 + fVar15 * fVar18 + fVar16 * fVar13;
    fVar10 = fVar25 * *(float *)(lVar2 + 0x1a8);
    fVar24 = fVar26 * *(float *)(lVar2 + 0x1ac);
    fVar11 = fVar6 * *(float *)(lVar2 + 0x1b0);
    *(float *)(this + 0x1d8) = fVar10;
    *(float *)(this + 0x1dc) = fVar24;
    lVar2 = *(long *)(this + 0x30);
    *(undefined4 *)(this + 0x1e4) = 0;
    *(float *)(this + 0x1e0) = fVar11;
    *(float *)(this + 0x1e8) =
         fVar12 * fVar4 + fVar22 * fVar7 + fVar23 * fVar27 +
         fVar25 * fVar10 + fVar26 * fVar24 + fVar6 * fVar11;
    fVar4 = fVar17 * fVar8 + fVar19 * fVar18 + fVar20 * fVar13;
    fVar6 = -fVar9;
    fVar7 = fVar9 * *(float *)(lVar1 + 8) + fVar5 * *(float *)(lVar1 + 0x18) +
            fVar4 * *(float *)(lVar1 + 0x28);
    fVar8 = fVar9 * *(float *)(lVar1 + 0xc) + fVar5 * *(float *)(lVar1 + 0x1c) +
            fVar4 * *(float *)(lVar1 + 0x2c);
    fVar12 = fVar9 * *(float *)(lVar1 + 0x10) + fVar5 * *(float *)(lVar1 + 0x20) +
             fVar4 * *(float *)(lVar1 + 0x30);
    fVar13 = (*(float *)(lVar2 + 8) * fVar6 - *(float *)(lVar2 + 0x18) * fVar5) -
             *(float *)(lVar2 + 0x28) * fVar4;
    fVar24 = (*(float *)(lVar2 + 0xc) * fVar6 - *(float *)(lVar2 + 0x1c) * fVar5) -
             *(float *)(lVar2 + 0x2c) * fVar4;
    fVar4 = (*(float *)(lVar2 + 0x10) * fVar6 - *(float *)(lVar2 + 0x20) * fVar5) -
            *(float *)(lVar2 + 0x30) * fVar4;
    *(undefined8 *)(this + 500) = 0;
    *(undefined8 *)(this + 0x1ec) = 0;
    *(undefined4 *)(this + 0x208) = 0;
    *(undefined4 *)(this + 0x218) = 0;
    *(float *)(this + 0x1fc) = fVar7;
    *(float *)(this + 0x200) = fVar8;
    *(float *)(this + 0x204) = fVar12;
    *(float *)(this + 0x20c) = fVar13;
    *(float *)(this + 0x210) = fVar24;
    *(float *)(this + 0x214) = fVar4;
    fVar5 = *(float *)(lVar1 + 0x1a8);
    fVar9 = *(float *)(lVar1 + 0x1ac);
    fVar11 = *(float *)(lVar1 + 0x1b0);
    *(undefined4 *)(this + 0x228) = 0;
    fVar5 = fVar7 * fVar5;
    fVar9 = fVar8 * fVar9;
    fVar11 = fVar12 * fVar11;
    *(float *)(this + 0x21c) = fVar5;
    *(float *)(this + 0x220) = fVar9;
    *(float *)(this + 0x224) = fVar11;
    fVar6 = fVar13 * *(float *)(lVar2 + 0x1a8);
    fVar10 = fVar24 * *(float *)(lVar2 + 0x1ac);
    fVar18 = fVar4 * *(float *)(lVar2 + 0x1b0);
    *(float *)(this + 0x22c) = fVar6;
    *(float *)(this + 0x230) = fVar10;
    *(undefined4 *)(this + 0x238) = 0;
    *(undefined4 *)(this + 0x2ec) = 0;
    *(float *)(this + 0x234) = fVar18;
    *(float *)(this + 0x23c) =
         fVar7 * fVar5 + fVar8 * fVar9 + fVar12 * fVar11 +
         fVar13 * fVar6 + fVar24 * fVar10 + fVar4 * fVar18;
    fVar4 = (float)getHingeAngle(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                                 (btTransform *)(*(long *)(this + 0x30) + 8));
    *(float *)(this + 0x2f0) = fVar4;
    btAngularLimit::test((btAngularLimit *)(this + 0x2c8),fVar4);
    lVar1 = *(long *)(this + 0x28);
    lVar2 = *(long *)(this + 0x30);
    fVar4 = *(float *)(this + 0x248);
    fVar5 = *(float *)(this + 600);
    fVar6 = *(float *)(this + 0x268);
    fVar7 = fVar4 * *(float *)(lVar1 + 8) + fVar5 * *(float *)(lVar1 + 0xc) +
            fVar6 * *(float *)(lVar1 + 0x10);
    fVar8 = fVar4 * *(float *)(lVar1 + 0x18) + fVar5 * *(float *)(lVar1 + 0x1c) +
            fVar6 * *(float *)(lVar1 + 0x20);
    fVar4 = fVar4 * *(float *)(lVar1 + 0x28) + fVar5 * *(float *)(lVar1 + 0x2c) +
            fVar6 * *(float *)(lVar1 + 0x30);
    *(float *)(this + 0x2e8) =
         1.0 / (fVar7 * (fVar7 * *(float *)(lVar1 + 0x124) + fVar8 * *(float *)(lVar1 + 0x134) +
                        fVar4 * *(float *)(lVar1 + 0x144)) +
                fVar8 * (fVar7 * *(float *)(lVar1 + 0x128) + fVar8 * *(float *)(lVar1 + 0x138) +
                        fVar4 * *(float *)(lVar1 + 0x148)) +
                fVar4 * (fVar7 * *(float *)(lVar1 + 300) + fVar8 * *(float *)(lVar1 + 0x13c) +
                        fVar4 * *(float *)(lVar1 + 0x14c)) +
               fVar7 * (fVar7 * *(float *)(lVar2 + 0x124) + fVar8 * *(float *)(lVar2 + 0x134) +
                       fVar4 * *(float *)(lVar2 + 0x144)) +
               fVar8 * (fVar7 * *(float *)(lVar2 + 0x128) + fVar8 * *(float *)(lVar2 + 0x138) +
                       fVar4 * *(float *)(lVar2 + 0x148)) +
               fVar4 * (fVar7 * *(float *)(lVar2 + 300) + fVar8 * *(float *)(lVar2 + 0x13c) +
                       fVar4 * *(float *)(lVar2 + 0x14c)));
  }
  return;
}

