
/* dragonBones::Bone::updateByConstraint() */

void __thiscall dragonBones::Bone::updateByConstraint(Bone *this)

{
  if (this[0xb8] != (Bone)0x0) {
    this[0xb8] = (Bone)0x0;
    if ((this[0x90] != (Bone)0x0) ||
       ((*(long *)(this + 0xc0) != 0 && (*(char *)(*(long *)(this + 0xc0) + 0x91) != '\0')))) {
      _updateGlobalTransformMatrix(this,true);
    }
    this[0x90] = (Bone)0x1;
  }
  return;
}

