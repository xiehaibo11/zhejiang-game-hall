
/* dragonBones::Slot::_setDisplayIndex(int, bool) */

bool __thiscall dragonBones::Slot::_setDisplayIndex(Slot *this,int param_1,bool param_2)

{
  if (param_2) {
    if (*(int *)(this + 0x104) == param_1) {
      return false;
    }
    *(int *)(this + 0x104) = param_1;
  }
  if (*(int *)(this + 0x100) == param_1) {
    return false;
  }
  *(int *)(this + 0x100) = param_1;
  this[0xf8] = (Slot)0x1;
  _updateDisplayData(this);
  return this[0xf8] != (Slot)0x0;
}

