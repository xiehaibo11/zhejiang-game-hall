
/* cocos2d::ui::PageView::setIndicatorPositionAsAnchorPoint(cocos2d::Vec2 const&) */

void __thiscall
cocos2d::ui::PageView::setIndicatorPositionAsAnchorPoint(PageView *this,Vec2 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 0x958) = *(undefined8 *)param_1;
  if (*(long *)(this + 0x950) != 0) {
    puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x168))();
    local_30 = CONCAT44((float)((ulong)*puVar2 >> 0x20) *
                        (float)((ulong)*(undefined8 *)(this + 0x958) >> 0x20),
                        (float)*puVar2 * (float)*(undefined8 *)(this + 0x958));
    (**(code **)(**(long **)(this + 0x950) + 0x98))(*(long **)(this + 0x950),&local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

