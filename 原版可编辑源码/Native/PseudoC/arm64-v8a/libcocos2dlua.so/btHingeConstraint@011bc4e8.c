
/* btHingeConstraint::btHingeConstraint(btRigidBody&, btRigidBody&, btVector3 const&, btVector3
   const&, btVector3 const&, btVector3 const&, bool) */

void __thiscall
btHingeConstraint::btHingeConstraint
          (btHingeConstraint *this,btRigidBody *param_1,btRigidBody *param_2,btVector3 *param_3,
          btVector3 *param_4,btVector3 *param_5,btVector3 *param_6,bool param_7)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
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
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  
  pfVar2 = &local_a0;
  btTypedConstraint::btTypedConstraint((btTypedConstraint *)this,4,param_1,param_2);
  *(undefined ***)this = &PTR__btTypedConstraint_0172d710;
  *(undefined8 *)(this + 0x2d0) = 0x3e99999a3f666666;
  *(undefined8 *)(this + 0x2c8) = 0xbf80000000000000;
  *(undefined4 *)(this + 0x2d8) = 0x3f800000;
  this[0x2e4] = (btHingeConstraint)0x0;
  *(undefined8 *)(this + 0x2dc) = 0;
  *(undefined4 *)(this + 0x2f8) = 0x1000000;
  this[0x2fc] = (btHingeConstraint)param_7;
  *(undefined4 *)(this + 0x304) = 0;
  uVar6 = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x278) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x270) = uVar6;
  local_90 = *(float *)(param_1 + 8);
  local_8c = *(float *)(param_1 + 0x18);
  local_88 = *(float *)(param_1 + 0x28);
  fVar3 = *(float *)param_5;
  fVar7 = *(float *)(param_5 + 4);
  fVar9 = *(float *)(param_5 + 8);
  fVar15 = fVar3 * local_90 + fVar7 * local_8c + fVar9 * local_88;
  if (0.9999999 <= fVar15) {
    local_90 = -*(float *)(param_1 + 0x10);
    local_8c = -*(float *)(param_1 + 0x20);
    local_88 = -*(float *)(param_1 + 0x30);
  }
  else {
    if (-0.9999999 < fVar15) {
      local_a0 = fVar7 * local_88 - fVar9 * local_8c;
      fStack_9c = fVar9 * local_90 - fVar3 * local_88;
      local_98 = fVar3 * local_8c - fVar7 * local_90;
      fVar15 = fStack_9c * fVar9 - local_98 * fVar7;
      fVar9 = local_98 * fVar3 - fVar9 * local_a0;
      fVar3 = fVar7 * local_a0 - fStack_9c * fVar3;
      pfVar2 = &local_90;
      local_94 = 0;
      goto LAB_011bc698;
    }
    local_90 = *(float *)(param_1 + 0x10);
    local_8c = *(float *)(param_1 + 0x20);
    local_88 = *(float *)(param_1 + 0x30);
  }
  fVar15 = *(float *)(param_1 + 0xc);
  fVar9 = *(float *)(param_1 + 0x1c);
  fVar3 = *(float *)(param_1 + 0x2c);
LAB_011bc698:
  local_84 = 0;
  *pfVar2 = fVar15;
  pfVar2[1] = fVar9;
  pfVar2[2] = fVar3;
  pfVar2[3] = 0.0;
  fVar9 = local_88;
  fVar7 = local_8c;
  fVar3 = local_90;
  *(float *)(this + 0x240) = local_90;
  *(float *)(this + 0x244) = local_a0;
  uVar1 = *(undefined4 *)param_5;
  *(undefined4 *)(this + 0x24c) = 0;
  *(undefined4 *)(this + 0x248) = uVar1;
  *(float *)(this + 0x254) = fStack_9c;
  *(float *)(this + 0x250) = local_8c;
  uVar1 = *(undefined4 *)(param_5 + 4);
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined4 *)(this + 600) = uVar1;
  *(float *)(this + 0x260) = local_88;
  *(float *)(this + 0x264) = local_98;
  uVar1 = *(undefined4 *)(param_5 + 8);
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x268) = uVar1;
  fVar8 = *(float *)param_5;
  fVar15 = *(float *)(param_5 + 4);
  fVar10 = *(float *)param_6;
  fVar14 = *(float *)(param_6 + 4);
  fVar16 = *(float *)(param_6 + 8);
  fVar11 = *(float *)(param_5 + 8);
  fVar13 = fVar16 * fVar11 + fVar15 * fVar14 + fVar10 * fVar8;
  if (-0.9999999 <= fVar13) {
    fVar13 = fVar13 + 1.0;
    fVar13 = fVar13 + fVar13;
    fVar4 = SQRT(fVar13);
    if (NAN(fVar4)) {
      fVar4 = sqrtf(fVar13);
    }
    fVar12 = 1.0 / fVar4;
    fVar13 = (fVar15 * fVar16 - fVar11 * fVar14) * fVar12;
    fVar11 = (fVar11 * fVar10 - fVar16 * fVar8) * fVar12;
    fVar12 = (fVar14 * fVar8 - fVar15 * fVar10) * fVar12;
    fVar4 = fVar4 * 0.5;
  }
  else {
    if (ABS(fVar11) <= 0.70710677) {
      fVar13 = fVar15 * fVar15 + fVar8 * fVar8;
      fVar15 = SQRT(fVar13);
      if (NAN(fVar15)) {
        fVar15 = sqrtf(fVar13);
      }
      fVar12 = 0.0;
      fVar13 = -(*(float *)(param_5 + 4) * (1.0 / fVar15));
      fVar11 = (1.0 / fVar15) * *(float *)param_5;
    }
    else {
      fVar13 = fVar15 * fVar15 + fVar11 * fVar11;
      fVar15 = SQRT(fVar13);
      if (NAN(fVar15)) {
        fVar15 = sqrtf(fVar13);
      }
      fVar13 = 0.0;
      fVar11 = -((1.0 / fVar15) * *(float *)(param_5 + 8));
      fVar12 = (1.0 / fVar15) * *(float *)(param_5 + 4);
    }
    fVar4 = 0.0;
  }
  fVar15 = (fVar4 * fVar3 + fVar11 * fVar9) - fVar12 * fVar7;
  fVar10 = (fVar12 * fVar3 + fVar4 * fVar7) - fVar13 * fVar9;
  fVar8 = (fVar4 * fVar9 + fVar13 * fVar7) - fVar11 * fVar3;
  fVar7 = (-(fVar13 * fVar3) - fVar11 * fVar7) - fVar12 * fVar9;
  uVar6 = *(undefined8 *)param_4;
  fVar16 = *(float *)param_6;
  fVar17 = *(float *)(param_6 + 4);
  fVar14 = *(float *)(param_6 + 8);
  fVar9 = ((fVar4 * fVar10 - fVar7 * fVar11) - fVar8 * fVar13) + fVar15 * fVar12;
  fVar3 = ((fVar4 * fVar8 - fVar7 * fVar12) - fVar15 * fVar11) + fVar10 * fVar13;
  *(undefined8 *)(this + 0x2b8) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x2b0) = uVar6;
  fVar7 = ((fVar4 * fVar15 - fVar7 * fVar13) - fVar10 * fVar12) + fVar8 * fVar11;
  *(float *)(this + 0x280) = fVar7;
  *(float *)(this + 0x284) = fVar17 * fVar3 - fVar14 * fVar9;
  uVar1 = *(undefined4 *)param_6;
  *(undefined4 *)(this + 0x28c) = 0;
  *(float *)(this + 0x290) = fVar9;
  *(float *)(this + 0x294) = fVar14 * fVar7 - fVar16 * fVar3;
  *(undefined4 *)(this + 0x288) = uVar1;
  *(undefined4 *)(this + 0x298) = *(undefined4 *)(param_6 + 4);
  *(undefined4 *)(this + 0x29c) = 0;
  *(float *)(this + 0x2a0) = fVar3;
  *(float *)(this + 0x2a4) = fVar16 * fVar9 - fVar17 * fVar7;
  uVar1 = *(undefined4 *)(param_6 + 8);
  uVar5 = 0xbf800000;
  if (this[0x2fc] == (btHingeConstraint)0x0) {
    uVar5 = 0x3f800000;
  }
  *(undefined4 *)(this + 0x2ac) = 0;
  *(undefined4 *)(this + 0x2a8) = uVar1;
  *(undefined4 *)(this + 0x2f4) = uVar5;
  return;
}

