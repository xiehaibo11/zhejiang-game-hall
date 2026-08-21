
/* fairygui::GearDisplay::addLock() */

undefined4 __thiscall fairygui::GearDisplay::addLock(GearDisplay *this)

{
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
  return *(undefined4 *)(this + 0x3c);
}

