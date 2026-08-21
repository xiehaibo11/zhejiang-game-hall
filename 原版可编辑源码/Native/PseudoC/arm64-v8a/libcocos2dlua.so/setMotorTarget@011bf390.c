
/* btHingeConstraint::setMotorTarget(btQuaternion const&, float) */

void __thiscall
btHingeConstraint::setMotorTarget(btHingeConstraint *this,btQuaternion *param_1,float param_2)

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
  float local_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  
  btMatrix3x3::getRotation((btMatrix3x3 *)(this + 0x280),(btQuaternion *)&local_70);
  fVar1 = *(float *)param_1;
  fVar5 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(param_1 + 0xc);
  fVar6 = ((fStack_64 * fVar1 - fVar4 * local_70) - fVar3 * fStack_6c) + fVar5 * local_68;
  fVar7 = ((fStack_64 * fVar5 - fVar4 * fStack_6c) - fVar1 * local_68) + fVar3 * local_70;
  fVar8 = ((fStack_64 * fVar3 - fVar4 * local_68) - fVar5 * local_70) + fVar1 * fStack_6c;
  fVar1 = fStack_64 * fVar4 + fVar1 * local_70 + fVar5 * fStack_6c + fVar3 * local_68;
  btMatrix3x3::getRotation((btMatrix3x3 *)(this + 0x240),(btQuaternion *)&local_70);
  fVar4 = (fVar7 * local_68 + fVar1 * local_70 + fVar6 * fStack_64) - fVar8 * fStack_6c;
  fVar5 = (local_70 * fVar8 + fVar1 * fStack_6c + fVar7 * fStack_64) - fVar6 * local_68;
  fVar9 = (fVar6 * fStack_6c + fVar1 * local_68 + fVar8 * fStack_64) - local_70 * fVar7;
  fVar6 = ((fVar1 * fStack_64 - fVar6 * local_70) - fVar7 * fStack_6c) - fVar8 * local_68;
  fVar3 = fVar6 * fVar6 + fVar9 * fVar9 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar1 = SQRT(fVar3);
  if (NAN(fVar1)) {
    fVar1 = sqrtf(fVar3);
  }
  fVar1 = 1.0 / fVar1;
  fVar5 = fVar1 * fVar5;
  fVar9 = fVar1 * fVar9;
  fVar6 = fVar1 * fVar6;
  fVar1 = fVar1 * fVar4;
  fVar3 = (DAT_01781898 * fVar6 + DAT_017818a0 * fVar5) - fVar9 * DAT_0178189c;
  fVar4 = (-(DAT_01781898 * fVar1) - fVar5 * DAT_0178189c) - DAT_017818a0 * fVar9;
  fVar8 = (DAT_01781898 * fVar9 + fVar6 * DAT_0178189c) - DAT_017818a0 * fVar1;
  fVar7 = (DAT_017818a0 * fVar6 + DAT_0178189c * fVar1) - DAT_01781898 * fVar5;
  fVar10 = ((fVar6 * fVar3 - fVar4 * fVar1) - fVar8 * fVar9) + fVar7 * fVar5;
  fVar11 = ((fVar6 * fVar8 - fVar4 * fVar5) - fVar7 * fVar1) + fVar3 * fVar9;
  fVar7 = ((fVar6 * fVar7 - fVar4 * fVar9) - fVar3 * fVar5) + fVar8 * fVar1;
  fVar4 = fVar7 * fVar7 + fVar10 * fVar10 + fVar11 * fVar11;
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar3 = 1.0 / fVar3;
  fVar10 = fVar3 * fVar10;
  fVar11 = fVar3 * fVar11;
  fVar3 = fVar3 * fVar7;
  fVar4 = DAT_017818a0 * fVar3 + DAT_0178189c * fVar11 + DAT_01781898 * fVar10;
  if (-0.9999999 <= fVar4) {
    fVar2 = DAT_0178189c * fVar3;
    fVar12 = DAT_017818a0 * fVar11;
    fVar8 = DAT_017818a0 * fVar10;
    fVar10 = DAT_0178189c * fVar10;
    fVar4 = fVar4 + 1.0;
    fVar3 = DAT_01781898 * fVar3;
    fVar11 = DAT_01781898 * fVar11;
    fVar4 = fVar4 + fVar4;
    fVar7 = SQRT(fVar4);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar4);
    }
    fVar4 = 1.0 / fVar7;
    fVar2 = (fVar2 - fVar12) * fVar4;
    fVar3 = (fVar8 - fVar3) * fVar4;
    fVar4 = (fVar11 - fVar10) * fVar4;
    fVar7 = fVar7 * 0.5;
  }
  else {
    if (ABS(DAT_017818a0) <= 0.70710677) {
      fVar4 = DAT_0178189c * DAT_0178189c + DAT_01781898 * DAT_01781898;
      fVar3 = SQRT(fVar4);
      if (NAN(fVar3)) {
        fVar3 = sqrtf(fVar4);
      }
      fVar4 = 0.0;
      fVar2 = -(DAT_0178189c * (1.0 / fVar3));
      fVar3 = (1.0 / fVar3) * DAT_01781898;
    }
    else {
      fVar3 = DAT_0178189c * DAT_0178189c + DAT_017818a0 * DAT_017818a0;
      fVar4 = SQRT(fVar3);
      if (NAN(fVar4)) {
        fVar4 = sqrtf(fVar3);
      }
      fVar2 = 0.0;
      fVar3 = -((1.0 / fVar4) * DAT_017818a0);
      fVar4 = (1.0 / fVar4) * DAT_0178189c;
    }
    fVar7 = 0.0;
  }
  fVar8 = ((fVar1 * fVar7 - fVar6 * fVar2) - fVar9 * fVar3) + fVar5 * fVar4;
  fVar10 = ((fVar5 * fVar7 - fVar6 * fVar3) - fVar1 * fVar4) + fVar9 * fVar2;
  fVar11 = ((fVar9 * fVar7 - fVar6 * fVar4) - fVar5 * fVar2) + fVar1 * fVar3;
  fVar1 = fVar6 * fVar7 + fVar1 * fVar2 + fVar5 * fVar3 + fVar9 * fVar4;
  fVar4 = fVar1 * fVar1 + fVar11 * fVar11 + fVar8 * fVar8 + fVar10 * fVar10;
  fVar3 = SQRT(fVar4);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar4);
  }
  fVar1 = (1.0 / fVar3) * fVar1;
  fVar11 = (1.0 / fVar3) * fVar11;
  fVar3 = fVar1;
  if (fVar1 <= -1.0) {
    fVar3 = -1.0;
  }
  if (1.0 < fVar3) {
    fVar3 = 1.0;
  }
  fVar3 = acosf(fVar3);
  fVar3 = fVar3 + fVar3;
  if (3.1415927 < fVar3) {
    fVar1 = -fVar1;
    if (fVar1 <= -1.0) {
      fVar1 = -1.0;
    }
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    fVar11 = -fVar11;
    fVar3 = acosf(fVar1);
    fVar3 = fVar3 + fVar3;
  }
  local_70 = -fVar3;
  if (0.0 <= fVar11) {
    local_70 = fVar3;
  }
  btAngularLimit::fit((btAngularLimit *)(this + 0x2c8),&local_70);
  fVar1 = (float)getHingeAngle(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                               (btTransform *)(*(long *)(this + 0x30) + 8));
  *(float *)(this + 0x2c0) = (local_70 - fVar1) / param_2;
  return;
}

