
/* btHingeConstraint::btHingeConstraint(btRigidBody&, btVector3 const&, btVector3 const&, bool) */

void __thiscall
btHingeConstraint::btHingeConstraint
          (btHingeConstraint *this,btRigidBody *param_1,btVector3 *param_2,btVector3 *param_3,
          bool param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
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
  
  btTypedConstraint::btTypedConstraint((btTypedConstraint *)this,4,param_1);
  *(undefined ***)this = &PTR__btTypedConstraint_0172d710;
  *(undefined8 *)(this + 0x2d0) = 0x3e99999a3f666666;
  *(undefined8 *)(this + 0x2c8) = 0xbf80000000000000;
  *(undefined4 *)(this + 0x2d8) = 0x3f800000;
  this[0x2e4] = (btHingeConstraint)0x0;
  *(undefined8 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x2f8) = 0x1000000;
  this[0x2fc] = (btHingeConstraint)param_4;
  *(undefined4 *)(this + 0x304) = 0;
  fVar1 = *(float *)(param_3 + 8);
  if (ABS(fVar1) <= 0.70710677) {
    fVar2 = *(float *)param_3 * *(float *)param_3 +
            *(float *)(param_3 + 4) * *(float *)(param_3 + 4);
    fVar1 = SQRT(fVar2);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar2);
    }
    fVar1 = 1.0 / fVar1;
    fVar9 = -(*(float *)(param_3 + 4) * fVar1);
    fVar19 = fVar1 * *(float *)param_3;
    fVar2 = fVar2 * fVar1;
    fVar15 = -(fVar19 * *(float *)(param_3 + 8));
    fVar1 = *(float *)(param_3 + 8) * fVar9;
    fVar20 = 0.0;
  }
  else {
    fVar15 = fVar1 * fVar1 + *(float *)(param_3 + 4) * *(float *)(param_3 + 4);
    fVar1 = SQRT(fVar15);
    if (NAN(fVar1)) {
      fVar1 = sqrtf(fVar15);
    }
    fVar1 = 1.0 / fVar1;
    fVar19 = -(fVar1 * *(float *)(param_3 + 8));
    fVar20 = fVar1 * *(float *)(param_3 + 4);
    fVar15 = fVar15 * fVar1;
    fVar1 = -(*(float *)param_3 * fVar20);
    fVar2 = *(float *)param_3 * fVar19;
    fVar9 = 0.0;
  }
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar6 = *(undefined8 *)param_2;
  *(float *)(this + 0x240) = fVar9;
  *(float *)(this + 0x244) = fVar15;
  *(undefined8 *)(this + 0x278) = uVar7;
  *(undefined8 *)(this + 0x270) = uVar6;
  uVar12 = *(undefined4 *)param_3;
  *(undefined4 *)(this + 0x24c) = 0;
  *(float *)(this + 0x250) = fVar19;
  *(float *)(this + 0x254) = fVar1;
  *(undefined4 *)(this + 0x248) = uVar12;
  uVar12 = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(this + 0x25c) = 0;
  *(float *)(this + 0x260) = fVar20;
  *(float *)(this + 0x264) = fVar2;
  *(undefined4 *)(this + 600) = uVar12;
  uVar12 = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x268) = uVar12;
  fVar15 = *(float *)param_3;
  fVar1 = *(float *)(param_3 + 4);
  fVar4 = *(float *)(param_3 + 8);
  fVar16 = *(float *)(param_1 + 8) * fVar15 + *(float *)(param_1 + 0xc) * fVar1 +
           *(float *)(param_1 + 0x10) * fVar4;
  fVar17 = fVar15 * *(float *)(param_1 + 0x18) + fVar1 * *(float *)(param_1 + 0x1c) +
           fVar4 * *(float *)(param_1 + 0x20);
  fVar18 = fVar15 * *(float *)(param_1 + 0x28) + fVar1 * *(float *)(param_1 + 0x2c) +
           fVar4 * *(float *)(param_1 + 0x30);
  fVar2 = fVar15 * fVar16 + fVar1 * fVar17 + fVar4 * fVar18;
  if (-0.9999999 <= fVar2) {
    fVar2 = fVar2 + 1.0;
    fVar2 = fVar2 + fVar2;
    fVar3 = SQRT(fVar2);
    if (NAN(fVar3)) {
      fVar3 = sqrtf(fVar2);
    }
    fVar5 = 1.0 / fVar3;
    fVar2 = (fVar1 * fVar18 - fVar4 * fVar17) * fVar5;
    fVar4 = (fVar4 * fVar16 - fVar15 * fVar18) * fVar5;
    fVar5 = (fVar15 * fVar17 - fVar1 * fVar16) * fVar5;
    fVar3 = fVar3 * 0.5;
  }
  else {
    if (ABS(fVar4) <= 0.70710677) {
      fVar2 = fVar15 * fVar15 + fVar1 * fVar1;
      fVar1 = SQRT(fVar2);
      if (NAN(fVar1)) {
        fVar1 = sqrtf(fVar2);
      }
      fVar5 = 0.0;
      fVar2 = -(*(float *)(param_3 + 4) * (1.0 / fVar1));
      fVar4 = (1.0 / fVar1) * *(float *)param_3;
    }
    else {
      fVar2 = fVar1 * fVar1 + fVar4 * fVar4;
      fVar1 = SQRT(fVar2);
      if (NAN(fVar1)) {
        fVar1 = sqrtf(fVar2);
      }
      fVar2 = 0.0;
      fVar4 = -((1.0 / fVar1) * *(float *)(param_3 + 8));
      fVar5 = (1.0 / fVar1) * *(float *)(param_3 + 4);
    }
    fVar3 = 0.0;
  }
  fVar8 = (fVar20 * fVar4 + fVar9 * fVar3) - fVar19 * fVar5;
  fVar10 = (fVar9 * fVar5 + fVar19 * fVar3) - fVar20 * fVar2;
  fVar13 = (fVar19 * fVar2 + fVar20 * fVar3) - fVar9 * fVar4;
  fVar23 = (-(fVar9 * fVar2) - fVar19 * fVar4) - fVar20 * fVar5;
  fVar27 = *(float *)param_2;
  fVar29 = *(float *)(param_2 + 4);
  fVar30 = *(float *)(param_1 + 8);
  fVar31 = *(float *)(param_1 + 0xc);
  fVar20 = *(float *)(param_1 + 0x18);
  fVar11 = *(float *)(param_1 + 0x1c);
  fVar24 = *(float *)(param_1 + 0x28);
  fVar26 = *(float *)(param_1 + 0x2c);
  fVar9 = *(float *)(param_2 + 8);
  fVar21 = *(float *)(param_1 + 0x10);
  fVar25 = *(float *)(param_1 + 0x20);
  fVar28 = *(float *)(param_1 + 0x30);
  fVar19 = ((fVar3 * fVar10 - fVar23 * fVar4) - fVar13 * fVar2) + fVar8 * fVar5;
  fVar1 = ((fVar3 * fVar13 - fVar23 * fVar5) - fVar8 * fVar4) + fVar10 * fVar2;
  fVar15 = *(float *)(param_1 + 0x38);
  fVar14 = *(float *)(param_1 + 0x3c);
  fVar22 = *(float *)(param_1 + 0x40);
  fVar2 = ((fVar3 * fVar8 - fVar23 * fVar2) - fVar10 * fVar5) + fVar13 * fVar4;
  uVar12 = 0xbf800000;
  if (this[0x2fc] == (btHingeConstraint)0x0) {
    uVar12 = 0x3f800000;
  }
  *(float *)(this + 0x290) = fVar19;
  *(float *)(this + 0x2a0) = fVar1;
  *(undefined4 *)(this + 700) = 0;
  *(float *)(this + 0x288) = fVar16;
  *(undefined4 *)(this + 0x28c) = 0;
  *(float *)(this + 0x298) = fVar17;
  *(undefined4 *)(this + 0x29c) = 0;
  *(float *)(this + 0x2a8) = fVar18;
  *(undefined4 *)(this + 0x2ac) = 0;
  *(float *)(this + 0x280) = fVar2;
  *(float *)(this + 0x2b0) = fVar27 * fVar30 + fVar29 * fVar31 + fVar9 * fVar21 + fVar15;
  *(float *)(this + 0x2b4) = fVar27 * fVar20 + fVar29 * fVar11 + fVar9 * fVar25 + fVar14;
  *(float *)(this + 0x2b8) = fVar27 * fVar24 + fVar29 * fVar26 + fVar9 * fVar28 + fVar22;
  *(float *)(this + 0x284) = fVar17 * fVar1 - fVar18 * fVar19;
  *(float *)(this + 0x294) = fVar18 * fVar2 - fVar16 * fVar1;
  *(float *)(this + 0x2a4) = fVar16 * fVar19 - fVar17 * fVar2;
  *(undefined4 *)(this + 0x2f4) = uVar12;
  return;
}

