
/* cocos2d::ui::ScrollView::startInertiaScroll(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::ScrollView::startInertiaScroll(ScrollView *this,Vec2 *param_1)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * 0.7,
                      (float)*(undefined8 *)param_1 * 0.7);
  (**(code **)(*(long *)this + 0x7c8))(this,&local_30,param_1);
                    /* catch() { ... } // from try @ 00dbbda4 with catch @ 00dbbe1c */
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00dbbd74 with catch @ 00dbbe2c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

