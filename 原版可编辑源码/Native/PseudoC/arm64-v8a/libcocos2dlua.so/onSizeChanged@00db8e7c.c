
/* cocos2d::ui::PageView::onSizeChanged() */

void __thiscall cocos2d::ui::PageView::onSizeChanged(PageView *this)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  ListView::onSizeChanged((ListView *)this);
  if (*(long *)(this + 0x950) != 0) {
                    /* catch() { ... } // from try @ 00db8e00 with catch @ 00db8ea8 */
    puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x168))(this);
                    /* catch() { ... } // from try @ 00db8df0 with catch @ 00db8eb8 */
                    /* catch() { ... } // from try @ 00db8e20 with catch @ 00db8ebc */
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

