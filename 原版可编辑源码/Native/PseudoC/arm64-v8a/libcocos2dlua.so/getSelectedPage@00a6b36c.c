
/* fairygui::GController::getSelectedPage() const */

undefined1 * __thiscall fairygui::GController::getSelectedPage(GController *this)

{
  if (*(int *)(this + 0x70) != -1) {
    return (undefined1 *)(*(long *)(this + 0x90) + (long)*(int *)(this + 0x70) * 0x18);
  }
  return &cocos2d::STD_STRING_EMPTY;
}

