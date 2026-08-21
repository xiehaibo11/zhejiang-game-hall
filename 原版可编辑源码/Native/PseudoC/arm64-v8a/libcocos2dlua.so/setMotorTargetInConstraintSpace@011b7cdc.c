
/* btConeTwistConstraint::setMotorTargetInConstraintSpace(btQuaternion const&) */

void __thiscall
btConeTwistConstraint::setMotorTargetInConstraintSpace
          (btConeTwistConstraint *this,btQuaternion *param_1)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s14;
  float fVar11;
  float fVar12;
  float fVar13;
  float extraout_s17;
  float fVar14;
  float local_64;
  
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x24c) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x244) = uVar2;
  fVar4 = *(float *)(this + 0x250);
  fVar6 = *(float *)(this + 0x248);
  fVar7 = *(float *)(this + 0x24c);
  fVar9 = *(float *)(this + 0x244);
  fVar10 = (fVar4 * DAT_01781888 + fVar6 * DAT_01781890) - fVar7 * DAT_0178188c;
  fVar13 = (DAT_01781888 * fVar7 + fVar4 * DAT_0178188c) - DAT_01781890 * fVar9;
  fVar14 = (fVar4 * DAT_01781890 + DAT_0178188c * fVar9) - DAT_01781888 * fVar6;
  fVar12 = (-(DAT_01781888 * fVar9) - fVar6 * DAT_0178188c) - DAT_01781890 * fVar7;
  fVar5 = ((fVar4 * fVar10 - fVar12 * fVar9) - fVar13 * fVar7) + fVar14 * fVar6;
  fVar8 = ((fVar4 * fVar13 - fVar12 * fVar6) - fVar14 * fVar9) + fVar10 * fVar7;
  fVar6 = ((fVar4 * fVar14 - fVar12 * fVar7) - fVar10 * fVar6) + fVar13 * fVar9;
  fVar4 = DAT_01781890 * fVar6 + DAT_0178188c * fVar8 + DAT_01781888 * fVar5;
  if (-0.9999999 <= fVar4) {
    fVar10 = DAT_0178188c * fVar6;
    fVar12 = DAT_01781890 * fVar8;
    fVar6 = DAT_01781888 * fVar6;
    fVar8 = DAT_01781888 * fVar8;
    fVar4 = fVar4 + 1.0;
    fVar9 = DAT_01781890 * fVar5;
    fVar5 = DAT_0178188c * fVar5;
    fVar4 = fVar4 + fVar4;
    fVar7 = SQRT(fVar4);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar4);
    }
    local_64 = 1.0 / fVar7;
    fVar4 = (fVar10 - fVar12) * local_64;
    fVar6 = (fVar9 - fVar6) * local_64;
    local_64 = (fVar8 - fVar5) * local_64;
    fVar7 = fVar7 * 0.5;
  }
  else {
    if (ABS(DAT_01781890) <= 0.70710677) {
      fVar4 = DAT_01781888 * DAT_01781888 + DAT_0178188c * DAT_0178188c;
      fVar5 = SQRT(fVar4);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar4);
      }
      local_64 = 0.0;
      fVar4 = -(DAT_0178188c * (1.0 / fVar5));
      fVar6 = (1.0 / fVar5) * DAT_01781888;
    }
    else {
      fVar4 = DAT_01781890 * DAT_01781890 + DAT_0178188c * DAT_0178188c;
      fVar5 = SQRT(fVar4);
      if (NAN(fVar5)) {
        fVar5 = sqrtf(fVar4);
      }
      fVar4 = 0.0;
      fVar6 = -((1.0 / fVar5) * DAT_01781890);
      local_64 = (1.0 / fVar5) * DAT_0178188c;
    }
    fVar7 = 0.0;
  }
  fVar8 = fVar4 * fVar4 + fVar6 * fVar6 + local_64 * local_64 + fVar7 * fVar7;
  fVar5 = SQRT(fVar8);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(fVar8);
  }
  fVar8 = *(float *)(this + 0x244);
  fVar9 = *(float *)(this + 0x250);
  fVar12 = *(float *)(this + 0x248);
  fVar10 = *(float *)(this + 0x24c);
  fVar5 = 1.0 / fVar5;
  fVar4 = fVar4 * fVar5;
  fVar6 = fVar6 * fVar5;
  fVar7 = fVar7 * fVar5;
  local_64 = local_64 * fVar5;
  fVar14 = fVar12 * local_64;
  fVar11 = ((fVar8 * fVar7 - fVar9 * fVar4) - fVar10 * fVar6) + fVar14;
  fVar13 = ((fVar7 * fVar12 - fVar9 * fVar6) - fVar8 * local_64) + fVar10 * fVar4;
  fVar5 = ((fVar7 * fVar10 - fVar9 * local_64) - fVar12 * fVar4) + fVar8 * fVar6;
  fVar10 = fVar7 * fVar9 + fVar8 * fVar4 + fVar12 * fVar6 + fVar10 * local_64;
  fVar9 = fVar10 * fVar10 + fVar5 * fVar5 + fVar11 * fVar11 + fVar13 * fVar13;
  fVar8 = SQRT(fVar9);
  if (NAN(fVar8)) {
    fVar8 = sqrtf(fVar9);
    unaff_s14 = fVar5;
  }
  fVar8 = 1.0 / fVar8;
  if ((0.05 <= *(float *)(this + 0x1d4)) && (0.05 <= *(float *)(this + 0x1d8))) {
    fVar9 = fVar7;
    if (1.0 < fVar7) {
      fVar9 = 1.0;
    }
    fVar1 = acosf(fVar9);
    fVar12 = fVar1 + fVar1;
    fVar9 = extraout_s17;
    if (1.1920929e-07 < fVar12) {
      fVar14 = local_64 * local_64 + fVar4 * fVar4 + fVar6 * fVar6;
      fVar9 = SQRT(fVar14);
      if (NAN(fVar9)) {
        fVar9 = sqrtf(fVar14);
      }
      fVar9 = 1.0 / fVar9;
      fVar1 = *(float *)(this + 0x1d4);
      unaff_s14 = fVar6 * fVar9;
      fVar14 = fVar4 * fVar9;
      fVar9 = local_64 * fVar9;
      if (1.1920929e-07 < ABS(unaff_s14)) {
        fVar3 = (fVar9 * fVar9) / (unaff_s14 * unaff_s14);
        fVar3 = (fVar3 + 1.0) /
                (1.0 / (*(float *)(this + 0x1d8) * *(float *)(this + 0x1d8)) +
                fVar3 / (fVar1 * fVar1));
        fVar1 = SQRT(fVar3);
        if (NAN(fVar1)) {
          fVar1 = sqrtf(fVar3);
        }
      }
    }
    if (1.1920929e-07 < ABS(fVar12)) {
      if ((fVar1 < fVar12) || (fVar1 = -fVar1, fVar12 < fVar1)) {
        fVar12 = fVar1;
      }
      fVar4 = fVar9 * fVar9 + unaff_s14 * unaff_s14 + fVar14 * fVar14;
      fVar6 = SQRT(fVar4);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar4);
      }
      local_64 = sinf(fVar12 * 0.5);
      local_64 = local_64 / fVar6;
      fVar4 = fVar14 * local_64;
      fVar6 = unaff_s14 * local_64;
      local_64 = fVar9 * local_64;
      fVar7 = cosf(fVar12 * 0.5);
    }
  }
  fVar11 = fVar8 * fVar11;
  fVar13 = fVar8 * fVar13;
  fVar5 = fVar8 * fVar5;
  fVar8 = fVar8 * fVar10;
  if (0.05 <= *(float *)(this + 0x1dc)) {
    fVar9 = fVar8;
    if (1.0 < fVar8) {
      fVar9 = 1.0;
    }
    fVar14 = acosf(fVar9);
    fVar14 = fVar14 + fVar14;
    fVar9 = fVar11;
    fVar10 = fVar13;
    fVar12 = fVar5;
    if (3.1415927 < fVar14) {
      fVar9 = -fVar11;
      fVar10 = -fVar13;
      fVar14 = -fVar8;
      if (fVar14 <= -1.0) {
        fVar14 = -1.0;
      }
      if (1.0 < fVar14) {
        fVar14 = 1.0;
      }
      fVar12 = -fVar5;
      fVar14 = acosf(fVar14);
      fVar14 = fVar14 + fVar14;
    }
    if (1.1920929e-07 < fVar14) {
      fVar3 = fVar9 * fVar9 + fVar10 * fVar10 + fVar12 * fVar12;
      fVar1 = SQRT(fVar3);
      if (NAN(fVar1)) {
        fVar1 = sqrtf(fVar3);
      }
      fVar1 = 1.0 / fVar1;
      fVar9 = fVar9 * fVar1;
      fVar10 = fVar10 * fVar1;
      fVar12 = fVar12 * fVar1;
    }
    if (1.1920929e-07 < ABS(fVar14)) {
      fVar8 = *(float *)(this + 0x1dc);
      fVar5 = fVar8;
      if ((fVar8 < fVar14) || (fVar5 = -fVar8, fVar14 < -fVar8)) {
        fVar14 = fVar5;
      }
      fVar5 = fVar12 * fVar12 + fVar10 * fVar10 + fVar9 * fVar9;
      fVar8 = SQRT(fVar5);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar5);
      }
      fVar5 = sinf(fVar14 * 0.5);
      fVar5 = fVar5 / fVar8;
      fVar11 = fVar9 * fVar5;
      fVar13 = fVar10 * fVar5;
      fVar5 = fVar12 * fVar5;
      fVar8 = cosf(fVar14 * 0.5);
    }
  }
  *(float *)(this + 0x244) = (fVar6 * fVar5 + fVar7 * fVar11 + fVar4 * fVar8) - local_64 * fVar13;
  *(float *)(this + 0x248) = (local_64 * fVar11 + fVar7 * fVar13 + fVar6 * fVar8) - fVar4 * fVar5;
  *(float *)(this + 0x24c) = (fVar4 * fVar13 + fVar7 * fVar5 + local_64 * fVar8) - fVar6 * fVar11;
  *(float *)(this + 0x250) = ((fVar7 * fVar8 - fVar4 * fVar11) - fVar6 * fVar13) - local_64 * fVar5;
  return;
}

