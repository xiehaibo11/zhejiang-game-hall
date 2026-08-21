
/* fairygui::GearDisplay::isConnected() */

bool __thiscall fairygui::GearDisplay::isConnected(GearDisplay *this)

{
  if (*(long *)(this + 0x10) != 0) {
    return 0 < *(int *)(this + 0x38);
  }
  return true;
}

