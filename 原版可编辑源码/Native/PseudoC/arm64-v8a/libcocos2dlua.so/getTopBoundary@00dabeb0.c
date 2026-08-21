
/* cocos2d::ui::Widget::getTopBoundary() const */

float __thiscall cocos2d::ui::Widget::getTopBoundary(Widget *this)

{
  long lVar1;
  undefined1 auStack_48 [4];
  float local_44;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*(long *)this + 0x370))(auStack_48);
  (**(code **)(*(long *)this + 0x370))(auStack_48,this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return local_44 + local_3c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

