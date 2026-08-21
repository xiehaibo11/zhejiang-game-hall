
/* btPoint2PointConstraint::getInfo2(btTypedConstraint::btConstraintInfo2*) */

void __thiscall
btPoint2PointConstraint::getInfo2(btPoint2PointConstraint *this,btConstraintInfo2 *param_1)

{
  getInfo2NonVirtual(this,param_1,(btTransform *)(*(long *)(this + 0x28) + 8),
                     (btTransform *)(*(long *)(this + 0x30) + 8));
  return;
}

