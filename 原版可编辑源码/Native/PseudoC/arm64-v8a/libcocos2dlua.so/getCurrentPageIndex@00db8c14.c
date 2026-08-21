
/* cocos2d::ui::PageView::getCurrentPageIndex() */

undefined8 __thiscall cocos2d::ui::PageView::getCurrentPageIndex(PageView *this)

{
  Widget *pWVar1;
  undefined8 uVar2;
  
  if (this[0x900] == (PageView)0x0) {
    uVar2 = *(undefined8 *)(this + 0x960);
  }
  else {
    pWVar1 = (Widget *)ListView::getCenterItemInCurrentView((ListView *)this);
    uVar2 = ListView::getIndex((ListView *)this,pWVar1);
    *(undefined8 *)(this + 0x960) = uVar2;
  }
  return uVar2;
}

