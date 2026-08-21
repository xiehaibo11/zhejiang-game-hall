
/* cocos2d::ui::Widget::getBottomBoundary() const */

void __thiscall cocos2d::ui::Widget::getBottomBoundary(Widget *this)

{
  long lVar1;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dabdb4 with catch @ 00dabe00
                        */
  (**(code **)(*(long *)this + 0x370))(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_34);
}

