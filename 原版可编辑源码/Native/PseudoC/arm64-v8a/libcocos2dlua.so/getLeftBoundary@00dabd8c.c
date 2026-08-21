
/* cocos2d::ui::Widget::getLeftBoundary() const */

void __thiscall cocos2d::ui::Widget::getLeftBoundary(Widget *this)

{
  long lVar1;
  undefined4 local_38 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00dabdb4 to 00eabdb7 has its CatchHandler @ 00dabe00 */
  (**(code **)(*(long *)this + 0x370))(local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_38[0]);
}

