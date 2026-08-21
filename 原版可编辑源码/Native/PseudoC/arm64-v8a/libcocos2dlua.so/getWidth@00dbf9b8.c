
/* cocos2d::ui::ScrollViewBar::getWidth() const */

void __thiscall cocos2d::ui::ScrollViewBar::getWidth(ScrollViewBar *this)

{
  long lVar1;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (**(code **)(**(long **)(this + 0x338) + 0x370))(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_30);
}

