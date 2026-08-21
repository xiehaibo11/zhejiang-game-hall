
/* cocos2d::ui::Button::onPressStateChangedToDisabled() */

void __thiscall cocos2d::ui::Button::onPressStateChangedToDisabled(Button *this)

{
  if (this[0x562] == (Button)0x0) {
    if (this[0x560] != (Button)0x0) {
      Scale9Sprite::setState(*(Scale9Sprite **)(this + 0x4f0),1);
    }
  }
  else {
    (**(code **)(**(long **)(this + 0x4f0) + 0x170))(*(long **)(this + 0x4f0),0);
                    /* try { // try from 00dc15c4 to 00ec15d3 has its CatchHandler @ 00dc17a4 */
    (**(code **)(**(long **)(this + 0x500) + 0x170))(*(long **)(this + 0x500),1);
                    /* try { // try from 00dc15d4 to 00ec17bf has its CatchHandler @ 00dc1530 */
  }
  (**(code **)(**(long **)(this + 0x4f8) + 0x170))(*(long **)(this + 0x4f8),0);
  (**(code **)(**(long **)(this + 0x4f0) + 0x80))(0x3f800000);
                    /* WARNING: Could not recover jumptable at 0x00dc1634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x4f8) + 0x80))(0x3f800000);
  return;
}

