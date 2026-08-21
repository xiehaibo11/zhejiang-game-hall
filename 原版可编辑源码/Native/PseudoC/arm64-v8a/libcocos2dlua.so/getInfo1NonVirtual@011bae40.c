
/* btGeneric6DofConstraint::getInfo1NonVirtual(btTypedConstraint::btConstraintInfo1*) */

void __thiscall
btGeneric6DofConstraint::getInfo1NonVirtual
          (btGeneric6DofConstraint *this,btConstraintInfo1 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 6;
  if (this[0x534] != (btGeneric6DofConstraint)0x0) {
    uVar1 = 0;
  }
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

