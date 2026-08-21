
/* btHingeConstraint::setMotorTarget(float, float) */

void __thiscall
btHingeConstraint::setMotorTarget(btHingeConstraint *this,float param_1,float param_2)

{
  float fVar1;
  float local_24;
  
  local_24 = param_1;
  btAngularLimit::fit((btAngularLimit *)(this + 0x2c8),&local_24);
  fVar1 = (float)getHingeAngle(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                               (btTransform *)(*(long *)(this + 0x30) + 8));
  *(float *)(this + 0x2c0) = (local_24 - fVar1) / param_2;
  return;
}

