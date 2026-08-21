
/* cocos2d::ui::Button::getVirtualRenderer() */

undefined8 __thiscall cocos2d::ui::Button::getVirtualRenderer(Button *this)

{
  if (this[899] == (Button)0x0) {
    return *(undefined8 *)(this + 0x500);
  }
  if (*(int *)(this + 0x38c) != 1) {
    if (*(int *)(this + 0x38c) == 0) {
      return *(undefined8 *)(this + 0x4f0);
    }
    return 0;
  }
  return *(undefined8 *)(this + 0x4f8);
}

