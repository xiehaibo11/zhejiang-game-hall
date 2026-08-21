
/* dragonBones::IKConstraint::update() */

void __thiscall dragonBones::IKConstraint::update(IKConstraint *this)

{
  Bone::updateByConstraint(*(Bone **)(this + 0x20));
  if (*(Bone **)(this + 0x30) != (Bone *)0x0) {
    Bone::updateByConstraint(*(Bone **)(this + 0x30));
    _computeB(this);
    return;
  }
  _computeA(this);
  return;
}

