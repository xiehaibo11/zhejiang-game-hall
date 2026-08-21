
/* cocos2d::ui::RadioButton::releaseUpEvent() */

void __thiscall cocos2d::ui::RadioButton::releaseUpEvent(RadioButton *this)

{
  Widget::releaseUpEvent((Widget *)this);
  if (this[0x518] != (RadioButton)0x0) {
    return;
  }
                    /* try { // try from 00dc5ce0 to 00ec5cef has its CatchHandler @ 00dc5ed4 */
  (**(code **)(*(long *)this + 0x680))(this,1);
                    /* WARNING: Could not recover jumptable at 0x00dc5d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6b8))(this,1);
  return;
}

