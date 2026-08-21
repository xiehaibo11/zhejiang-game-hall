
/* spine::TransformConstraint::update() */

void __thiscall spine::TransformConstraint::update(TransformConstraint *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = TransformConstraintData::isLocal(*(TransformConstraintData **)(this + 8));
  uVar2 = TransformConstraintData::isRelative(*(TransformConstraintData **)(this + 8));
  if ((uVar1 & 1) == 0) {
    if ((uVar2 & 1) != 0) {
      applyRelativeWorld(this);
      return;
    }
    applyAbsoluteWorld(this);
    return;
  }
  if ((uVar2 & 1) != 0) {
    applyRelativeLocal(this);
    return;
  }
  applyAbsoluteLocal(this);
  return;
}

