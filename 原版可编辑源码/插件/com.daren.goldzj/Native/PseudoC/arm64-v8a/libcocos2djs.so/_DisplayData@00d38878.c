
/* dragonBones::DisplayData::~DisplayData() */

void __thiscall dragonBones::DisplayData::~DisplayData(DisplayData *this)

{
  *(undefined ***)this = &PTR__DisplayData_01c90ee0;
  if (((byte)this[0x30] & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  BaseObject::~BaseObject((BaseObject *)this);
  return;
}

