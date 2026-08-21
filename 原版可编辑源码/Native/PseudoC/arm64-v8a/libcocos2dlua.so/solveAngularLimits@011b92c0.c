
/* btRotationalLimitMotor::solveAngularLimits(float, btVector3&, float, btRigidBody*, btRigidBody*)
    */

float __thiscall
btRotationalLimitMotor::solveAngularLimits
          (btRotationalLimitMotor *this,float param_1,btVector3 *param_2,float param_3,
          btRigidBody *param_4,btRigidBody *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  btRotationalLimitMotor *pbVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(int *)(this + 0x38) == 0) {
    if (this[0x2c] == (btRotationalLimitMotor)0x0) {
      return 0.0;
    }
    fVar5 = *(float *)(this + 8);
    pbVar4 = this + 0xc;
  }
  else {
    pbVar4 = this + 0x10;
    fVar5 = -(*(float *)(this + 0x20) * *(float *)(this + 0x30)) / param_1;
  }
  fVar5 = *(float *)(this + 0x18) *
          (fVar5 - *(float *)(this + 0x14) *
                   ((*(float *)(param_4 + 0x164) - *(float *)(param_5 + 0x164)) * *(float *)param_2
                    + ((float)*(undefined8 *)(param_4 + 0x168) -
                      (float)*(undefined8 *)(param_5 + 0x168)) * (float)*(undefined8 *)(param_2 + 4)
                   + ((float)((ulong)*(undefined8 *)(param_4 + 0x168) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(param_5 + 0x168) >> 0x20)) *
                     (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20)));
  if ((fVar5 < 1.1920929e-07) && (-1.1920929e-07 < fVar5)) {
    return 0.0;
  }
  fVar5 = fVar5 * (*(float *)(this + 0x28) + 1.0) * param_3;
  fVar7 = *(float *)pbVar4 * param_1;
  if (fVar5 <= 0.0) {
    fVar6 = -fVar7;
    if (-fVar7 <= fVar5) {
      fVar6 = fVar5;
    }
  }
  else {
    fVar6 = fVar7;
    if (fVar5 <= fVar7) {
      fVar6 = fVar5;
    }
  }
  fVar5 = *(float *)(this + 0x3c);
  fVar6 = fVar6 + fVar5;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (-1e+18 <= fVar6) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar6)) {
      bVar1 = fVar6 < 1e+18;
      bVar2 = fVar6 == 1e+18;
      bVar3 = false;
    }
  }
  fVar7 = 0.0;
  if (bVar2 || bVar1 != bVar3) {
    fVar7 = fVar6;
  }
  *(float *)(this + 0x3c) = fVar7;
  fVar7 = fVar7 - fVar5;
  fVar5 = *(float *)param_2;
  fVar9 = fVar5 * fVar7;
  fVar6 = *(float *)(param_2 + 4) * fVar7;
  fVar8 = *(float *)(param_2 + 8) * fVar7;
  *(float *)(param_4 + 0x164) =
       (*(float *)(param_4 + 0x124) * fVar9 + *(float *)(param_4 + 0x128) * fVar6 +
       fVar8 * *(float *)(param_4 + 300)) * *(float *)(param_4 + 0x250) +
       *(float *)(param_4 + 0x164);
  *(float *)(param_4 + 0x168) =
       (fVar9 * *(float *)(param_4 + 0x134) + fVar6 * *(float *)(param_4 + 0x138) +
       fVar8 * *(float *)(param_4 + 0x13c)) * *(float *)(param_4 + 0x254) +
       *(float *)(param_4 + 0x168);
  *(float *)(param_4 + 0x16c) =
       (fVar9 * *(float *)(param_4 + 0x144) + fVar6 * *(float *)(param_4 + 0x148) +
       fVar8 * *(float *)(param_4 + 0x14c)) * *(float *)(param_4 + 600) +
       *(float *)(param_4 + 0x16c);
  fVar5 = -(fVar5 * fVar7);
  *(float *)(param_5 + 0x164) =
       ((*(float *)(param_5 + 0x124) * fVar5 - *(float *)(param_5 + 0x128) * fVar6) -
       *(float *)(param_5 + 300) * fVar8) * *(float *)(param_5 + 0x250) +
       *(float *)(param_5 + 0x164);
  *(float *)(param_5 + 0x168) =
       ((*(float *)(param_5 + 0x134) * fVar5 - *(float *)(param_5 + 0x138) * fVar6) -
       *(float *)(param_5 + 0x13c) * fVar8) * *(float *)(param_5 + 0x254) +
       *(float *)(param_5 + 0x168);
  *(float *)(param_5 + 0x16c) =
       ((*(float *)(param_5 + 0x144) * fVar5 - *(float *)(param_5 + 0x148) * fVar6) -
       *(float *)(param_5 + 0x14c) * fVar8) * *(float *)(param_5 + 600) +
       *(float *)(param_5 + 0x16c);
  return fVar7;
}

