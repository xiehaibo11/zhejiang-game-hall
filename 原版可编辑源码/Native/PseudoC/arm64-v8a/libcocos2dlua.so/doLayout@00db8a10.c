
/* non-virtual thunk to cocos2d::ui::PageView::doLayout() */

void __thiscall cocos2d::ui::PageView::doLayout(PageView *this)

{
  Widget *pWVar1;
  long lVar2;
  ListView *this_00;
  
  if (this[0x410] != (PageView)0x0) {
    this_00 = (ListView *)(this + -0x4f0);
    ListView::doLayout(this_00);
    if (*(long *)(this + 0x460) != 0) {
      pWVar1 = (Widget *)ListView::getCenterItemInCurrentView(this_00);
      lVar2 = ListView::getIndex(this_00,pWVar1);
      *(long *)(this + 0x470) = lVar2;
      PageViewIndicator::indicate(*(PageViewIndicator **)(this + 0x460),lVar2);
    }
    this[0x410] = (PageView)0x0;
  }
  return;
}

