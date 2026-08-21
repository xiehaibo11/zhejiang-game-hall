
/* cocos2d::ui::TabControl::getTabCount() const */

long __thiscall cocos2d::ui::TabControl::getTabCount(TabControl *this)

{
  return *(long *)(this + 0x558) - *(long *)(this + 0x550) >> 3;
}

