
/* cocos2d::ui::PageView::setCurrentPageIndex(long) */

void __thiscall cocos2d::ui::PageView::setCurrentPageIndex(PageView *this,long param_1)

{
                    /* catch() { ... } // from try @ 00db8bec with catch @ 00db8c08 */
  ListView::jumpToItem
            ((ListView *)this,param_1,(Vec2 *)&Vec2::ANCHOR_MIDDLE,(Vec2 *)&Vec2::ANCHOR_MIDDLE);
  return;
}

