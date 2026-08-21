
/* btTranslationalLimitMotor::solveLinearAxis(float, float, btRigidBody&, btVector3 const&,
   btRigidBody&, btVector3 const&, int, btVector3 const&, btVector3 const&) */

float __thiscall
btTranslationalLimitMotor::solveLinearAxis
          (btTranslationalLimitMotor *this,float param_1,float param_2,btRigidBody *param_3,
          btVector3 *param_4,btRigidBody *param_5,btVector3 *param_6,int param_7,btVector3 *param_8,
          btVector3 *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined4 local_54;
  
  local_60 = *(float *)param_9 - *(float *)(param_3 + 0x38);
  fStack_5c = *(float *)(param_9 + 4) - *(float *)(param_3 + 0x3c);
  local_58 = *(float *)(param_9 + 8) - *(float *)(param_3 + 0x40);
  local_54 = 0;
  local_64 = 0;
  local_70 = *(float *)param_9 - *(float *)(param_5 + 0x38);
  fStack_6c = *(float *)(param_9 + 4) - *(float *)(param_5 + 0x3c);
  local_68 = *(float *)(param_9 + 8) - *(float *)(param_5 + 0x40);
  fVar4 = -1e+18;
  fVar5 = 1e+18;
  fVar7 = *(float *)(this + (long)param_7 * 4);
  fVar6 = *(float *)(this + (long)param_7 * 4 + 0x10);
  fVar8 = -(*(float *)param_8 * (*(float *)param_4 - *(float *)param_6) +
            *(float *)(param_8 + 4) * (*(float *)(param_4 + 4) - *(float *)(param_6 + 4)) +
           *(float *)(param_8 + 8) * (*(float *)(param_4 + 8) - *(float *)(param_6 + 8)));
  if (fVar7 < fVar6) {
    if (fVar8 <= fVar6) {
      if (fVar7 <= fVar8) {
        return 0.0;
      }
      fVar8 = fVar8 - fVar7;
      fVar5 = 0.0;
    }
    else {
      fVar8 = fVar8 - fVar6;
      fVar4 = 0.0;
    }
  }
  fVar7 = *(float *)(this + (long)param_7 * 4 + 0x20);
  fVar6 = fVar7 + *(float *)(this + 0x30) *
                  ((fVar8 * *(float *)(this + 0x38)) / param_1 -
                  ((((*(float *)(param_3 + 0x168) * local_58 -
                     *(float *)(param_3 + 0x16c) * fStack_5c) + *(float *)(param_3 + 0x154)) -
                   ((*(float *)(param_5 + 0x168) * local_68 -
                    *(float *)(param_5 + 0x16c) * fStack_6c) + *(float *)(param_5 + 0x154))) *
                   *(float *)param_8 +
                   ((*(float *)(param_3 + 0x158) +
                    (*(float *)(param_3 + 0x16c) * local_60 - local_58 * *(float *)(param_3 + 0x164)
                    )) - (*(float *)(param_5 + 0x158) +
                         (*(float *)(param_5 + 0x16c) * local_70 -
                         local_68 * *(float *)(param_5 + 0x164)))) * *(float *)(param_8 + 4) +
                  (((fStack_5c * *(float *)(param_3 + 0x164) -
                    *(float *)(param_3 + 0x168) * local_60) + *(float *)(param_3 + 0x15c)) -
                  ((fStack_6c * *(float *)(param_5 + 0x164) - *(float *)(param_5 + 0x168) * local_70
                   ) + *(float *)(param_5 + 0x15c))) * *(float *)(param_8 + 8)) *
                  *(float *)(this + 0x34)) * param_2;
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (fVar4 <= fVar6) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar6) && !NAN(fVar5)) {
      bVar1 = fVar6 < fVar5;
      bVar2 = fVar6 == fVar5;
      bVar3 = false;
    }
  }
  fVar4 = 0.0;
  if (bVar2 || bVar1 != bVar3) {
    fVar4 = fVar6;
  }
  *(float *)(this + (long)param_7 * 4 + 0x20) = fVar4;
  fVar4 = fVar4 - fVar7;
  local_80 = *(float *)param_8 * fVar4;
  fStack_7c = *(float *)(param_8 + 4) * fVar4;
  local_78 = *(float *)(param_8 + 8) * fVar4;
  local_74 = 0;
  btRigidBody::applyImpulse(param_3,(btVector3 *)&local_80,(btVector3 *)&local_60);
  local_90 = -local_80;
  fStack_8c = -fStack_7c;
  local_88 = -local_78;
  local_84 = 0;
  btRigidBody::applyImpulse(param_5,(btVector3 *)&local_90,(btVector3 *)&local_70);
  return fVar4;
}

