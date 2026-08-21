
/* cocos2d::ui::PageView::scrollToPage(long) */

void __thiscall cocos2d::ui::PageView::scrollToPage(PageView *this,long param_1)

{
  if (this[0x900] != (PageView)0x0) {
    (**(code **)(*(long *)this + 0x6a0))(this);
  }
  ListView::scrollToItem
            ((ListView *)this,param_1,(Vec2 *)&Vec2::ANCHOR_MIDDLE,(Vec2 *)&Vec2::ANCHOR_MIDDLE);
  return;
}

