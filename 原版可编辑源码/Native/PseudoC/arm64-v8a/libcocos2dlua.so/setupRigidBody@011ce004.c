
/* btRigidBody::setupRigidBody(btRigidBody::btRigidBodyConstructionInfo const&) */

void __thiscall btRigidBody::setupRigidBody(btRigidBody *this,btRigidBodyConstructionInfo *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  long *plVar5;
  float fVar6;
  undefined8 uVar7;
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
  float local_40;
  float fStack_3c;
  float local_38;
  float local_34;
  
  *(undefined4 *)(this + 0x100) = 2;
  *(undefined8 *)(this + 0x16c) = 0;
  *(undefined8 *)(this + 0x164) = 0;
  *(undefined8 *)(this + 0x15c) = 0;
  *(undefined8 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x250) = 0x3f800000;
  *(undefined8 *)(this + 0x254) = 0x3f8000003f800000;
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined4 *)(this + 0x178) = 0x3f800000;
  *(undefined8 *)(this + 0x17c) = 0x3f8000003f800000;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined8 *)(this + 0x19c) = 0;
  *(undefined8 *)(this + 0x194) = 0;
  *(undefined8 *)(this + 0x18c) = 0;
  *(undefined8 *)(this + 0x184) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  local_34 = *(float *)(param_1 + 0x68);
  local_38 = *(float *)(param_1 + 0x6c);
  pfVar2 = &local_40;
  if (local_34 <= 1.0) {
    pfVar2 = &local_34;
  }
  pfVar1 = &fStack_3c;
  if (0.0 <= local_34) {
    pfVar1 = pfVar2;
  }
  local_40 = 1.0;
  fStack_3c = 0.0;
  pfVar2 = &local_40;
  if (local_38 <= 1.0) {
    pfVar2 = &local_38;
  }
  pfVar3 = &fStack_3c;
  if (0.0 <= local_38) {
    pfVar3 = pfVar2;
  }
  *(float *)(this + 0x1d8) = *pfVar1;
  local_40 = 1.0;
  fStack_3c = 0.0;
  *(float *)(this + 0x1dc) = *pfVar3;
  *(undefined4 *)(this + 500) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x1f8) = *(undefined4 *)(param_1 + 0x80);
  plVar5 = *(long **)(param_1 + 8);
  *(undefined8 *)(this + 0x290) = 0;
  *(long **)(this + 0x200) = plVar5;
  this[0x1e0] = *(btRigidBody *)(param_1 + 0x84);
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0x1ec) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x1e4) = uVar7;
  if (plVar5 == (long *)0x0) {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 8) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x18) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x28) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(this + 0x38) = uVar7;
  }
  else {
    (**(code **)(*plVar5 + 0x10))(plVar5,this + 8);
  }
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x38);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0xfc) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0xf8) = *(undefined4 *)(param_1 + 0x78);
  (**(code **)(*(long *)this + 0x18))(this,*(undefined8 *)(param_1 + 0x50));
  iVar4 = DAT_017939c8 + 1;
  *(int *)(this + 0x22c) = DAT_017939c8;
  DAT_017939c8 = iVar4;
  fVar6 = *(float *)param_1;
  if (fVar6 == 0.0) {
    *(uint *)(this + 0xe0) = *(uint *)(this + 0xe0) | 1;
    fVar9 = 0.0;
  }
  else {
    fVar9 = 1.0 / fVar6;
    *(uint *)(this + 0xe0) = *(uint *)(this + 0xe0) & 0xfffffffe;
  }
  *(float *)(this + 0x174) = fVar9;
  *(undefined4 *)(this + 0x194) = 0;
  fVar25 = *(float *)(this + 0x174);
  *(float *)(this + 0x188) = fVar6 * *(float *)(this + 0x198);
  *(float *)(this + 0x18c) = fVar6 * *(float *)(this + 0x19c);
  *(float *)(this + 400) = fVar6 * *(float *)(this + 0x1a0);
  fVar21 = *(float *)(param_1 + 0x58);
  fVar23 = *(float *)(param_1 + 0x5c);
  fVar24 = *(float *)(param_1 + 0x60);
  *(float *)(this + 0x260) = fVar9 * *(float *)(this + 0x178);
  *(float *)(this + 0x260) = *(float *)(this + 0x178) * fVar25;
  fVar6 = 1.0 / fVar21;
  fVar15 = *(float *)(this + 8);
  fVar14 = *(float *)(this + 0xc);
  fVar17 = *(float *)(this + 0x18);
  fVar16 = *(float *)(this + 0x1c);
  fVar22 = *(float *)(this + 0x28);
  fVar19 = *(float *)(this + 0x2c);
  *(float *)(this + 0x268) = fVar9 * *(float *)(this + 0x180);
  fVar8 = 1.0 / fVar23;
  if (fVar21 == 0.0) {
    fVar6 = 0.0;
  }
  if (fVar23 == 0.0) {
    fVar8 = 0.0;
  }
  *(float *)(this + 0x264) = fVar9 * *(float *)(this + 0x17c);
  *(float *)(this + 0x264) = fVar25 * *(float *)(this + 0x17c);
  *(float *)(this + 0x268) = fVar25 * *(float *)(this + 0x180);
  fVar9 = 1.0 / fVar24;
  fVar23 = fVar15 * fVar6;
  fVar25 = fVar17 * fVar6;
  fVar21 = fVar22 * fVar6;
  fVar12 = fVar14 * fVar8;
  fVar18 = fVar16 * fVar8;
  fVar11 = fVar19 * fVar8;
  fVar10 = *(float *)(this + 0x10);
  fVar13 = *(float *)(this + 0x20);
  fVar20 = *(float *)(this + 0x30);
  *(float *)(this + 0x1ac) = fVar8;
  if (fVar24 == 0.0) {
    fVar9 = 0.0;
  }
  fVar8 = fVar10 * fVar9;
  fVar26 = fVar13 * fVar9;
  fVar24 = fVar20 * fVar9;
  *(float *)(this + 0x1a8) = fVar6;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x28c) = 0;
  *(float *)(this + 0x1b0) = fVar9;
  *(float *)(this + 0x124) = fVar15 * fVar23 + fVar14 * fVar12 + fVar10 * fVar8;
  *(float *)(this + 0x128) = fVar23 * fVar17 + fVar12 * fVar16 + fVar8 * fVar13;
  *(float *)(this + 300) = fVar23 * fVar22 + fVar12 * fVar19 + fVar8 * fVar20;
  *(float *)(this + 0x134) = fVar15 * fVar25 + fVar14 * fVar18 + fVar10 * fVar26;
  *(float *)(this + 0x138) = fVar17 * fVar25 + fVar16 * fVar18 + fVar13 * fVar26;
  *(float *)(this + 0x13c) = fVar25 * fVar22 + fVar18 * fVar19 + fVar26 * fVar20;
  *(float *)(this + 0x144) = fVar15 * fVar21 + fVar14 * fVar11 + fVar10 * fVar24;
  *(float *)(this + 0x148) = fVar17 * fVar21 + fVar16 * fVar11 + fVar13 * fVar24;
  *(float *)(this + 0x14c) = fVar22 * fVar21 + fVar19 * fVar11 + fVar20 * fVar24;
  *(undefined8 *)(this + 0x284) = 0;
  *(undefined8 *)(this + 0x27c) = 0;
  *(undefined8 *)(this + 0x274) = 0;
  *(undefined8 *)(this + 0x26c) = 0;
  return;
}

