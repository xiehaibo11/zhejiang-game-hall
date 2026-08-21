
/* btHingeConstraint::getInfo2NonVirtual(btTypedConstraint::btConstraintInfo2*, btTransform const&,
   btTransform const&, btVector3 const&, btVector3 const&) */

void __thiscall
btHingeConstraint::getInfo2NonVirtual
          (btHingeConstraint *this,btConstraintInfo2 *param_1,btTransform *param_2,
          btTransform *param_3,btVector3 *param_4,btVector3 *param_5)

{
  float fVar1;
  
  fVar1 = (float)getHingeAngle(this,param_2,param_3);
  *(float *)(this + 0x2f0) = fVar1;
  btAngularLimit::test((btAngularLimit *)(this + 0x2c8),fVar1);
  getInfo2Internal(this,param_1,param_2,param_3,param_4,param_5);
  return;
}

