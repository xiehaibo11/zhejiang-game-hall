
/* fairygui::GController::getPageCount() const */

int __thiscall fairygui::GController::getPageCount(GController *this)

{
  return (int)((ulong)(*(long *)(this + 0x80) - *(long *)(this + 0x78)) >> 3) * -0x55555555;
}

