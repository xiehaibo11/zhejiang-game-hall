
/* dragonBones::IKConstraint::~IKConstraint() */

void __thiscall dragonBones::IKConstraint::~IKConstraint(IKConstraint *this)

{
  this[0x40] = (IKConstraint)0x0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x31) = 0;
  *(undefined8 *)(this + 0x29) = 0;
  *(undefined ***)this = &PTR__IKConstraint_016d8078;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  return;
}

