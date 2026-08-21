
/* btHingeConstraint::getInfo2(btTypedConstraint::btConstraintInfo2*) */

void __thiscall btHingeConstraint::getInfo2(btHingeConstraint *this,btConstraintInfo2 *param_1)

{
  btTransform *pbVar1;
  btTransform *pbVar2;
  btVector3 *pbVar3;
  btVector3 *pbVar4;
  
  pbVar1 = (btTransform *)(*(long *)(this + 0x28) + 8);
  pbVar2 = (btTransform *)(*(long *)(this + 0x30) + 8);
  pbVar3 = (btVector3 *)(*(long *)(this + 0x28) + 0x164);
  pbVar4 = (btVector3 *)(*(long *)(this + 0x30) + 0x164);
  if (this[0x2fb] != (btHingeConstraint)0x0) {
    getInfo2InternalUsingFrameOffset(this,param_1,pbVar1,pbVar2,pbVar3,pbVar4);
    return;
  }
  getInfo2Internal(this,param_1,pbVar1,pbVar2,pbVar3,pbVar4);
  return;
}

