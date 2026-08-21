
/* cocos2d::ui::ScrollView::scrollToLeft(float, bool) */

void __thiscall cocos2d::ui::ScrollView::scrollToLeft(ScrollView *this,float param_1,bool param_2)

{
  long lVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  
  lVar1 = (**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  uStack_24 = *(undefined4 *)(lVar1 + 4);
  local_28 = 0;
  startAutoScrollToDestination(this,(Vec2 *)&local_28,param_1,param_2);
  return;
}

