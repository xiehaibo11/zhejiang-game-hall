
/* cocos2d::ui::ScrollViewBar::onTouchEnded() */

void __thiscall cocos2d::ui::ScrollViewBar::onTouchEnded(ScrollViewBar *this)

{
  if ((this[0x34d] != (ScrollViewBar)0x0) &&
     (this[0x34c] = (ScrollViewBar)0x0, 0.0 < *(float *)(this + 0x354))) {
    *(undefined4 *)(this + 0x354) = *(undefined4 *)(this + 0x350);
  }
  return;
}

