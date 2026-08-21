
/* btConeTwistConstraint::buildJacobian() */

void __thiscall btConeTwistConstraint::buildJacobian(btConeTwistConstraint *this)

{
  long lVar1;
  long lVar2;
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
  
  if (this[0x227] != (btConeTwistConstraint)0x0) {
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x220) = 0;
    *(undefined4 *)(this + 0x21c) = 0;
    *(undefined8 *)(this + 0x260) = 0;
    *(undefined8 *)(this + 600) = 0;
    if (this[0x224] == (btConeTwistConstraint)0x0) {
      lVar1 = *(long *)(this + 0x28);
      lVar2 = *(long *)(this + 0x30);
      fVar3 = *(float *)(this + 0x178);
      fVar4 = *(float *)(this + 0x17c);
      fVar5 = *(float *)(this + 0x1b8);
      fVar6 = *(float *)(this + 0x1bc);
      fVar12 = *(float *)(this + 0x174);
      fVar11 = *(float *)(this + 0x1b4);
      fVar9 = fVar12 * *(float *)(lVar1 + 0x18) + fVar3 * *(float *)(lVar1 + 0x1c) +
              fVar4 * *(float *)(lVar1 + 0x20) + *(float *)(lVar1 + 0x3c);
      fVar7 = fVar11 * *(float *)(lVar2 + 0x18) + fVar5 * *(float *)(lVar2 + 0x1c) +
              fVar6 * *(float *)(lVar2 + 0x20) + *(float *)(lVar2 + 0x3c);
      fVar10 = fVar12 * *(float *)(lVar1 + 8) + fVar3 * *(float *)(lVar1 + 0xc) +
               fVar4 * *(float *)(lVar1 + 0x10) + *(float *)(lVar1 + 0x38);
      fVar8 = fVar11 * *(float *)(lVar2 + 8) + fVar5 * *(float *)(lVar2 + 0xc) +
              fVar6 * *(float *)(lVar2 + 0x10) + *(float *)(lVar2 + 0x38);
      fVar6 = fVar11 * *(float *)(lVar2 + 0x28) + fVar5 * *(float *)(lVar2 + 0x2c) +
              fVar6 * *(float *)(lVar2 + 0x30) + *(float *)(lVar2 + 0x40);
      fVar11 = fVar12 * *(float *)(lVar1 + 0x28) + fVar3 * *(float *)(lVar1 + 0x2c) +
               fVar4 * *(float *)(lVar1 + 0x30) + *(float *)(lVar1 + 0x40);
      fVar4 = fVar7 - fVar9;
      fVar5 = fVar8 - fVar10;
      fVar12 = fVar6 - fVar11;
      fVar3 = fVar5 * fVar5 + fVar4 * fVar4 + fVar12 * fVar12;
      if (fVar3 <= 1.1920929e-07) {
        fVar5 = 1.0;
        fVar4 = 0.0;
        local_a0[0] = 1.0;
        local_a0[1] = 0.0;
        local_a0[2] = 0.0;
      }
      else {
        local_a0[2] = SQRT(fVar3);
        if (NAN(local_a0[2])) {
          local_a0[2] = sqrtf(fVar3);
        }
        local_a0[2] = 1.0 / local_a0[2];
        fVar5 = fVar5 * local_a0[2];
        fVar4 = fVar4 * local_a0[2];
        local_a0[2] = fVar12 * local_a0[2];
        local_a0[1] = fVar4;
        local_a0[0] = fVar5;
      }
      local_a0[3] = 0.0;
      if (ABS(local_a0[2]) <= 0.70710677) {
        fVar3 = fVar5 * fVar5 + fVar4 * fVar4;
        local_78 = SQRT(fVar3);
        if (NAN(local_78)) {
          local_78 = sqrtf(fVar3);
        }
        local_78 = 1.0 / local_78;
        local_90 = -(local_a0[1] * local_78);
        local_8c = local_78 * local_a0[0];
        local_78 = fVar3 * local_78;
        local_80 = -(local_8c * local_a0[2]);
        fStack_7c = local_a0[2] * local_90;
        local_88 = 0.0;
      }
      else {
        fVar3 = local_a0[2] * local_a0[2] + fVar4 * fVar4;
        local_80 = SQRT(fVar3);
        if (NAN(local_80)) {
          local_80 = sqrtf(fVar3);
        }
        local_80 = 1.0 / local_80;
        local_90 = 0.0;
        local_8c = -(local_80 * local_a0[2]);
        local_88 = local_80 * local_a0[1];
        local_80 = fVar3 * local_80;
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
      local_110 = fVar10 - *(float *)(lVar1 + 0x38);
      fStack_10c = fVar9 - *(float *)(lVar1 + 0x3c);
      local_108 = fVar11 - *(float *)(lVar1 + 0x40);
      local_114 = 0;
      local_120 = fVar8 - *(float *)(lVar2 + 0x38);
      fStack_11c = fVar7 - *(float *)(lVar2 + 0x3c);
      local_118 = fVar6 - *(float *)(lVar2 + 0x40);
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
      local_110 = fVar10 - *(float *)(lVar1 + 0x38);
      fStack_10c = fVar9 - *(float *)(lVar1 + 0x3c);
      local_108 = fVar11 - *(float *)(lVar1 + 0x40);
      local_114 = 0;
      local_120 = fVar8 - *(float *)(lVar2 + 0x38);
      fStack_11c = fVar7 - *(float *)(lVar2 + 0x3c);
      local_118 = fVar6 - *(float *)(lVar2 + 0x40);
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
      local_110 = fVar10 - *(float *)(lVar1 + 0x38);
      fStack_10c = fVar9 - *(float *)(lVar1 + 0x3c);
      local_108 = fVar11 - *(float *)(lVar1 + 0x40);
      local_114 = 0;
      local_120 = fVar8 - *(float *)(lVar2 + 0x38);
      fStack_11c = fVar7 - *(float *)(lVar2 + 0x3c);
      local_118 = fVar6 - *(float *)(lVar2 + 0x40);
      btJacobianEntry::btJacobianEntry
                ((btJacobianEntry *)(this + 0xf0),(btMatrix3x3 *)&local_d0,(btMatrix3x3 *)&local_100
                 ,(btVector3 *)&local_110,(btVector3 *)&local_120,(btVector3 *)&local_80,
                 (btVector3 *)(*(long *)(this + 0x28) + 0x1a8),
                 *(float *)(*(long *)(this + 0x28) + 0x174),(btVector3 *)(lVar2 + 0x1a8),
                 *(float *)(lVar2 + 0x174));
    }
    calcAngleInfo2(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                   (btTransform *)(*(long *)(this + 0x30) + 8),
                   (btMatrix3x3 *)(*(long *)(this + 0x28) + 0x124),
                   (btMatrix3x3 *)(*(long *)(this + 0x30) + 0x124));
  }
  return;
}

