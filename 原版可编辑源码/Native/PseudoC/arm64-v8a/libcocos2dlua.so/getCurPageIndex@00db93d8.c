
/* cocos2d::ui::PageView::getCurPageIndex() const */

void __thiscall cocos2d::ui::PageView::getCurPageIndex(PageView *this)

{
  Widget *pWVar1;
  
  pWVar1 = (Widget *)ListView::getCenterItemInCurrentView((ListView *)this);
  ListView::getIndex((ListView *)this,pWVar1);
  return;
}

