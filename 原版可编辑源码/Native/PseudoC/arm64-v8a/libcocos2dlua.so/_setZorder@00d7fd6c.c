
/* dragonBones::Slot::_setZorder(int) */

undefined8 __thiscall dragonBones::Slot::_setZorder(Slot *this,int param_1)

{
  *(int *)(this + 0x98) = param_1;
  this[0xf9] = (Slot)0x1;
  return 1;
}

