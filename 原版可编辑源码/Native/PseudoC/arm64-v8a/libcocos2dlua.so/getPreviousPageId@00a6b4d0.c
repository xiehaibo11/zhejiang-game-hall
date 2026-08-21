
/* fairygui::GController::getPreviousPageId() const */

undefined1 * __thiscall fairygui::GController::getPreviousPageId(GController *this)

{
  if (*(int *)(this + 0x74) != -1) {
    return (undefined1 *)(*(long *)(this + 0x78) + (long)*(int *)(this + 0x74) * 0x18);
  }
  return &cocos2d::STD_STRING_EMPTY;
}

