
/* fairygui::GController::getSelectedPageId() const */

undefined1 * __thiscall fairygui::GController::getSelectedPageId(GController *this)

{
  if (*(int *)(this + 0x70) != -1) {
    return (undefined1 *)(*(long *)(this + 0x78) + (long)*(int *)(this + 0x70) * 0x18);
  }
  return &cocos2d::STD_STRING_EMPTY;
}

