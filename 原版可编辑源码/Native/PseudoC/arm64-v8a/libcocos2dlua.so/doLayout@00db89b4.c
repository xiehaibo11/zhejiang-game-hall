
/* cocos2d::ui::PageView::doLayout() */

void __thiscall cocos2d::ui::PageView::doLayout(PageView *this)

{
  Widget *pWVar1;
  long lVar2;
  
  if (this[0x900] != (PageView)0x0) {
    ListView::doLayout((ListView *)this);
    if (*(long *)(this + 0x950) != 0) {
      pWVar1 = (Widget *)ListView::getCenterItemInCurrentView((ListView *)this);
      lVar2 = ListView::getIndex((ListView *)this,pWVar1);
      *(long *)(this + 0x960) = lVar2;
      PageViewIndicator::indicate(*(PageViewIndicator **)(this + 0x950),lVar2);
    }
    this[0x900] = (PageView)0x0;
  }
  return;
}

