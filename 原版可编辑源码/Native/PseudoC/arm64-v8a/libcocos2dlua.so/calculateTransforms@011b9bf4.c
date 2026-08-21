
/* btGeneric6DofConstraint::calculateTransforms(btTransform const&, btTransform const&) */

void __thiscall
btGeneric6DofConstraint::calculateTransforms
          (btGeneric6DofConstraint *this,btTransform *param_1,btTransform *param_2)

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
  
  fVar4 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(this + 0x68);
  fVar7 = *(float *)(this + 0x6c);
  fVar11 = *(float *)(this + 0x48);
  fVar16 = *(float *)(this + 0x4c);
  fVar18 = *(float *)(this + 0x50);
  fVar24 = *(float *)(param_1 + 0x10);
  fVar25 = *(float *)(param_1 + 0x14);
  fVar26 = *(float *)(param_1 + 0x18);
  fVar30 = *(float *)(param_1 + 0x28);
  fVar32 = *(float *)(this + 0x78);
  fVar34 = *(float *)(this + 0x7c);
  fVar3 = *(float *)param_1;
  fVar9 = *(float *)(param_1 + 4);
  fVar1 = *(float *)(this + 0x58);
  fVar10 = *(float *)(this + 0x5c);
  fVar20 = *(float *)(this + 0x60);
  fVar22 = *(float *)(this + 0x70);
  fVar27 = *(float *)(param_1 + 0x20);
  fVar28 = *(float *)(param_1 + 0x24);
  fVar8 = *(float *)(this + 0x80);
  fVar23 = *(float *)(param_1 + 0x30);
  fVar35 = *(float *)(param_1 + 0x34);
  fVar2 = *(float *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x44c) = 0;
  *(undefined4 *)(this + 0x45c) = 0;
  *(undefined4 *)(this + 0x46c) = 0;
  *(undefined4 *)(this + 0x47c) = 0;
  fVar5 = *(float *)(this + 0x88);
  fVar29 = *(float *)(this + 0x8c);
  fVar19 = *(float *)(this + 0x98);
  fVar21 = *(float *)(this + 0x9c);
  fVar17 = *(float *)(this + 0xa8);
  fVar12 = *(float *)(this + 0xac);
  fVar33 = *(float *)(this + 0x90);
  fVar31 = *(float *)(this + 0xa0);
  fVar13 = *(float *)(this + 0xb0);
  fVar14 = *(float *)(this + 0xb8);
  fVar15 = *(float *)(this + 0xbc);
  *(float *)(this + 0x440) = fVar11 * fVar3 + fVar1 * fVar9 + fVar6 * fVar4;
  *(float *)(this + 0x444) = fVar3 * fVar16 + fVar9 * fVar10 + fVar4 * fVar7;
  *(float *)(this + 0x448) = fVar3 * fVar18 + fVar9 * fVar20 + fVar4 * fVar22;
  *(float *)(this + 0x450) = fVar11 * fVar24 + fVar1 * fVar25 + fVar6 * fVar26;
  *(float *)(this + 0x454) = fVar16 * fVar24 + fVar10 * fVar25 + fVar7 * fVar26;
  *(float *)(this + 0x458) = fVar18 * fVar24 + fVar20 * fVar25 + fVar22 * fVar26;
  *(float *)(this + 0x460) = fVar11 * fVar27 + fVar1 * fVar28 + fVar6 * fVar30;
  *(float *)(this + 0x464) = fVar16 * fVar27 + fVar10 * fVar28 + fVar7 * fVar30;
  *(float *)(this + 0x468) = fVar18 * fVar27 + fVar20 * fVar28 + fVar22 * fVar30;
  *(float *)(this + 0x470) = fVar23 + fVar3 * fVar32 + fVar9 * fVar34 + fVar4 * fVar8;
  *(float *)(this + 0x474) = fVar24 * fVar32 + fVar25 * fVar34 + fVar26 * fVar8 + fVar35;
  *(float *)(this + 0x478) = fVar27 * fVar32 + fVar28 * fVar34 + fVar30 * fVar8 + fVar2;
  fVar1 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_2 + 0x10);
  fVar7 = *(float *)(param_2 + 0x14);
  fVar8 = *(float *)(param_2 + 0x18);
  fVar9 = *(float *)(param_2 + 0x20);
  fVar10 = *(float *)(param_2 + 0x24);
  fVar16 = *(float *)(param_2 + 0x28);
  fVar2 = *(float *)(this + 0xc0);
  fVar11 = *(float *)(param_2 + 0x30);
  fVar18 = *(float *)(param_2 + 0x34);
  fVar20 = *(float *)(param_2 + 0x38);
  *(undefined4 *)(this + 0x48c) = 0;
  *(undefined4 *)(this + 0x49c) = 0;
  *(undefined4 *)(this + 0x4ac) = 0;
  *(float *)(this + 0x480) = fVar5 * fVar1 + fVar19 * fVar3 + fVar17 * fVar4;
  *(float *)(this + 0x484) = fVar1 * fVar29 + fVar3 * fVar21 + fVar4 * fVar12;
  *(float *)(this + 0x488) = fVar1 * fVar33 + fVar3 * fVar31 + fVar4 * fVar13;
  *(float *)(this + 0x490) = fVar5 * fVar6 + fVar19 * fVar7 + fVar17 * fVar8;
  *(float *)(this + 0x494) = fVar29 * fVar6 + fVar21 * fVar7 + fVar12 * fVar8;
  *(float *)(this + 0x498) = fVar33 * fVar6 + fVar31 * fVar7 + fVar13 * fVar8;
  *(float *)(this + 0x4a0) = fVar5 * fVar9 + fVar19 * fVar10 + fVar17 * fVar16;
  *(float *)(this + 0x4a4) = fVar29 * fVar9 + fVar21 * fVar10 + fVar12 * fVar16;
  *(float *)(this + 0x4a8) = fVar33 * fVar9 + fVar31 * fVar10 + fVar13 * fVar16;
  *(float *)(this + 0x4b0) = fVar11 + fVar1 * fVar14 + fVar3 * fVar15 + fVar4 * fVar2;
  *(float *)(this + 0x4b4) = fVar6 * fVar14 + fVar7 * fVar15 + fVar8 * fVar2 + fVar18;
  *(float *)(this + 0x4b8) = fVar9 * fVar14 + fVar10 * fVar15 + fVar16 * fVar2 + fVar20;
  *(undefined4 *)(this + 0x4bc) = 0;
  calculateLinearInfo(this);
  calculateAngleInfo(this);
  if (this[0x52d] != (btGeneric6DofConstraint)0x0) {
    fVar2 = *(float *)(*(long *)(this + 0x28) + 0x174);
    fVar4 = *(float *)(*(long *)(this + 0x30) + 0x174);
    fVar3 = fVar2 + fVar4;
    fVar1 = fVar4 / fVar3;
    if (fVar3 <= 0.0) {
      fVar1 = 0.5;
    }
    *(float *)(this + 0x510) = fVar1;
    this[0x518] = (btGeneric6DofConstraint)(fVar2 < 1.1920929e-07 || fVar4 < 1.1920929e-07);
    *(float *)(this + 0x514) = 1.0 - fVar1;
  }
  return;
}

