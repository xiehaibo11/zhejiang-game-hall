
/* dragonBones::IKConstraint::invalidUpdate() */

void __thiscall dragonBones::IKConstraint::invalidUpdate(IKConstraint *this)

{
  *(undefined1 *)(*(long *)(this + 0x20) + 0x90) = 1;
  if (*(long *)(this + 0x30) != 0) {
    *(undefined1 *)(*(long *)(this + 0x30) + 0x90) = 1;
  }
  return;
}

