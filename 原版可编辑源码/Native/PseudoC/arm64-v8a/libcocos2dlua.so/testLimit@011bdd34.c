
/* btHingeConstraint::testLimit(btTransform const&, btTransform const&) */

void __thiscall
btHingeConstraint::testLimit(btHingeConstraint *this,btTransform *param_1,btTransform *param_2)

{
  float fVar1;
  
  fVar1 = (float)getHingeAngle(this,param_1,param_2);
  *(float *)(this + 0x2f0) = fVar1;
  btAngularLimit::test((btAngularLimit *)(this + 0x2c8),fVar1);
  return;
}

