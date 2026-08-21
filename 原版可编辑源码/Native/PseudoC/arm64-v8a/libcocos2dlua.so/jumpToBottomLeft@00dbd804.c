
/* cocos2d::ui::ScrollView::jumpToBottomLeft() */

void __thiscall cocos2d::ui::ScrollView::jumpToBottomLeft(ScrollView *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(int *)(this + 0x7c0) == 3) {
    this[0x81d] = (ScrollView)0x0;
    puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
    local_30 = CONCAT44(0.0 - (float)((ulong)*puVar2 >> 0x20),0.0 - (float)*puVar2);
    (**(code **)(*(long *)this + 0x7c0))(this,&local_30,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

