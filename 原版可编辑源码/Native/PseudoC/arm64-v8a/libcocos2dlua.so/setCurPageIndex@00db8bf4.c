
/* cocos2d::ui::PageView::setCurPageIndex(long) */

void __thiscall cocos2d::ui::PageView::setCurPageIndex(PageView *this,long param_1)

{
  ListView::jumpToItem
            ((ListView *)this,param_1,(Vec2 *)&Vec2::ANCHOR_MIDDLE,(Vec2 *)&Vec2::ANCHOR_MIDDLE);
  return;
}

