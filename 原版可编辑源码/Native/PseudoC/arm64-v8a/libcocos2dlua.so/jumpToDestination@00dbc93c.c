
/* cocos2d::ui::ScrollView::jumpToDestination(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::ScrollView::jumpToDestination(ScrollView *this,Vec2 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this[0x81d] = (ScrollView)0x0;
  puVar2 = (undefined8 *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  local_40 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) -
                      (float)((ulong)*puVar2 >> 0x20),(float)*(undefined8 *)param_1 - (float)*puVar2
                     );
  (**(code **)(*(long *)this + 0x7c0))(this,&local_40,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

