
void spTransformConstraint_apply(long *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x48);
  if (*(int *)(*param_1 + 0x4c) == 0) {
    if (iVar1 != 0) {
      _spTransformConstraint_applyRelativeWorld();
      return;
    }
    _spTransformConstraint_applyAbsoluteWorld();
    return;
  }
  if (iVar1 != 0) {
    _spTransformConstraint_applyRelativeLocal();
    return;
  }
  _spTransformConstraint_applyAbsoluteLocal();
  return;
}

