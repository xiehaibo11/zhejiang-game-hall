
/* dragonBones::ConstraintData::~ConstraintData() */

void __thiscall dragonBones::ConstraintData::~ConstraintData(ConstraintData *this)

{
  *(undefined ***)this = &PTR__ConstraintData_01c90e50;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  BaseObject::~BaseObject((BaseObject *)this);
  return;
}

