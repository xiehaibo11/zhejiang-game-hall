
/* cocos2d::ui::TabHeader::releaseUpEvent() */

void __thiscall cocos2d::ui::TabHeader::releaseUpEvent(TabHeader *this)

{
  Widget::releaseUpEvent((Widget *)this);
  if (this[0x518] != (TabHeader)0x0) {
    return;
  }
  (**(code **)(*(long *)this + 0x680))(this,1);
                    /* WARNING: Could not recover jumptable at 0x00df3a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6b8))(this,1);
  return;
}

