
/* fairygui::GRoot::hasModalWindow() */

bool __thiscall fairygui::GRoot::hasModalWindow(GRoot *this)

{
  if (*(long *)(this + 0x290) != 0) {
    return *(long *)(*(long *)(this + 0x290) + 0xa0) != 0;
  }
  return false;
}

