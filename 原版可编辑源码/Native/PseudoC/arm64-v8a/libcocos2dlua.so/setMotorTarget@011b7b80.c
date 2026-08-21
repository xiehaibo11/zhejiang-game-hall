
/* btConeTwistConstraint::setMotorTarget(btQuaternion const&) */

void __thiscall
btConeTwistConstraint::setMotorTarget(btConeTwistConstraint *this,btQuaternion *param_1)

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
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  btMatrix3x3::getRotation((btMatrix3x3 *)(this + 0x184),(btQuaternion *)&local_50);
  fVar1 = *(float *)param_1;
  fVar4 = *(float *)(param_1 + 4);
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0xc);
  fVar5 = ((fStack_44 * fVar1 - fVar3 * local_50) - fVar2 * fStack_4c) + fVar4 * local_48;
  fVar6 = ((fStack_44 * fVar4 - fVar3 * fStack_4c) - fVar1 * local_48) + fVar2 * local_50;
  fVar7 = ((fStack_44 * fVar2 - fVar3 * local_48) - fVar4 * local_50) + fVar1 * fStack_4c;
  fVar4 = fStack_44 * fVar3 + fVar1 * local_50 + fVar4 * fStack_4c + fVar2 * local_48;
  btMatrix3x3::getRotation((btMatrix3x3 *)(this + 0x144),(btQuaternion *)&local_50);
  fVar10 = fVar5 * local_50;
  fVar8 = local_50 * fVar7;
  fVar9 = fVar5 * fStack_4c;
  fVar3 = fVar6 * fStack_4c;
  fVar1 = local_50 * fVar6;
  fVar2 = fVar7 * local_48;
  local_50 = (fVar6 * local_48 + fVar4 * local_50 + fVar5 * fStack_44) - fVar7 * fStack_4c;
  fStack_4c = (fVar8 + fVar4 * fStack_4c + fVar6 * fStack_44) - fVar5 * local_48;
  local_48 = (fVar9 + fVar4 * local_48 + fVar7 * fStack_44) - fVar1;
  fStack_44 = ((fVar4 * fStack_44 - fVar10) - fVar3) - fVar2;
  setMotorTargetInConstraintSpace(this,(btQuaternion *)&local_50);
  return;
}

