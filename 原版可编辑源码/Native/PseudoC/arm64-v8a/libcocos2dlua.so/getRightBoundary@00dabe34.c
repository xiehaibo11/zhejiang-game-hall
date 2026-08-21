
/* cocos2d::ui::Widget::getRightBoundary() const */

float __thiscall cocos2d::ui::Widget::getRightBoundary(Widget *this)

{
  long lVar1;
  float local_48 [2];
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x370))(local_48);
  (**(code **)(*(long *)this + 0x370))(local_48,this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return local_48[0] + local_40;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

