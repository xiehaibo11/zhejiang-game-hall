
/* btSliderConstraint::getInfo2(btTypedConstraint::btConstraintInfo2*) */

void __thiscall btSliderConstraint::getInfo2(btSliderConstraint *this,btConstraintInfo2 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(this + 0x28);
  lVar2 = *(long *)(this + 0x30);
  getInfo2NonVirtual(this,param_1,(btTransform *)(lVar1 + 8),(btTransform *)(lVar2 + 8),
                     (btVector3 *)(lVar1 + 0x154),(btVector3 *)(lVar2 + 0x154),
                     *(float *)(lVar1 + 0x174),*(float *)(lVar2 + 0x174));
  return;
}

