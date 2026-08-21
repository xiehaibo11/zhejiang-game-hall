
/* cocos2d::ui::ScrollView::scrollToBottomLeft(float, bool) */

void __thiscall
cocos2d::ui::ScrollView::scrollToBottomLeft(ScrollView *this,float param_1,bool param_2)

{
  if (*(int *)(this + 0x7c0) == 3) {
    startAutoScrollToDestination(this,(Vec2 *)&Vec2::ZERO,param_1,param_2);
    return;
  }
  return;
}

