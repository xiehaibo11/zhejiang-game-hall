
/* cocos2d::ui::Widget::getWorldPosition() const */

void __thiscall cocos2d::ui::Widget::getWorldPosition(Widget *this)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x78) >> 0x20) *
                      (float)((ulong)*(undefined8 *)(this + 0x80) >> 0x20),
                      (float)*(undefined8 *)(this + 0x78) * (float)*(undefined8 *)(this + 0x80));
  Node::convertToWorldSpace((Node *)this,(Vec2 *)&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

