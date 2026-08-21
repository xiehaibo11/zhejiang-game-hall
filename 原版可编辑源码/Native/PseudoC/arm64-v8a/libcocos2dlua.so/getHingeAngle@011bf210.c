
/* btHingeConstraint::getHingeAngle() */

void __thiscall btHingeConstraint::getHingeAngle(btHingeConstraint *this)

{
  getHingeAngle(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                (btTransform *)(*(long *)(this + 0x30) + 8));
  return;
}

