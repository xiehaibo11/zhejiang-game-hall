
/* cocos2d::ui::PageView::refreshIndicatorPosition() */

void __thiscall cocos2d::ui::PageView::refreshIndicatorPosition(PageView *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x950) != 0) {
    puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x168))();
    local_30 = CONCAT44((float)((ulong)*puVar2 >> 0x20) *
                        (float)((ulong)*(undefined8 *)(this + 0x958) >> 0x20),
                        (float)*puVar2 * (float)*(undefined8 *)(this + 0x958));
    (**(code **)(**(long **)(this + 0x950) + 0x98))(*(long **)(this + 0x950),&local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00db8ba8 to 00eb8beb has its CatchHandler @ 00db8ba8
                       catch() { ... } // from try @ 00db8ba8 with catch @ 00db8ba8
                       catch() { ... } // from try @ 00db8bf0 with catch @ 00db8ba8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

