
/* dragonBones::Slot::setDisplayIndex(int) */

void __thiscall dragonBones::Slot::setDisplayIndex(Slot *this,int param_1)

{
  if (*(int *)(this + 0x100) != param_1) {
    *(int *)(this + 0x100) = param_1;
    this[0xf8] = (Slot)0x1;
    _updateDisplayData(this);
    if (this[0xf8] != (Slot)0x0) {
      update(this,-1);
      return;
    }
  }
  return;
}

