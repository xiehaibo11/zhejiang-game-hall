
/* dragonBones::CCSlot::_onUpdateDisplay() */

void __thiscall dragonBones::CCSlot::_onUpdateDisplay(CCSlot *this)

{
  if (*(long *)(this + 0x170) != 0) {
    *(long *)(this + 400) = *(long *)(this + 0x170);
    return;
  }
  *(undefined8 *)(this + 400) = *(undefined8 *)(this + 0xe0);
  return;
}

