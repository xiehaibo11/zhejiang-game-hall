
/* fairygui::GController::getPreviousPage() const */

undefined1 * __thiscall fairygui::GController::getPreviousPage(GController *this)

{
  if (*(int *)(this + 0x74) != -1) {
    return (undefined1 *)(*(long *)(this + 0x90) + (long)*(int *)(this + 0x74) * 0x18);
  }
  return &cocos2d::STD_STRING_EMPTY;
}

