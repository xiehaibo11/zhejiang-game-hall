
/* dragonBones::ConstraintData::~ConstraintData() */

void __thiscall dragonBones::ConstraintData::~ConstraintData(ConstraintData *this)

{
  *(undefined ***)this = &PTR__ConstraintData_016d8358;
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x28));
  return;
}

