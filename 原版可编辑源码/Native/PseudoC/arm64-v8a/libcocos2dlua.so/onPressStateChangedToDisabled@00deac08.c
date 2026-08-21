
/* cocos2d::ui::EditBox::onPressStateChangedToDisabled() */

void __thiscall cocos2d::ui::EditBox::onPressStateChangedToDisabled(EditBox *this)

{
  if (this[0x55a] == (EditBox)0x0) {
    if (this[0x558] != (EditBox)0x0) {
                    /* try { // try from 00deac5c to 00eeac5f has its CatchHandler @ 00deac94 */
      Scale9Sprite::setState(*(Scale9Sprite **)(this + 0x4f8),1);
    }
  }
  else {
    (**(code **)(**(long **)(this + 0x4f8) + 0x170))(*(long **)(this + 0x4f8),0);
    (**(code **)(**(long **)(this + 0x508) + 0x170))(*(long **)(this + 0x508),1);
  }
                    /* try { // try from 00deac60 to 00eeaca7 has its CatchHandler @ 00dea928 */
                    /* WARNING: Could not recover jumptable at 0x00deac78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x500) + 0x170))(*(long **)(this + 0x500),0);
  return;
}

