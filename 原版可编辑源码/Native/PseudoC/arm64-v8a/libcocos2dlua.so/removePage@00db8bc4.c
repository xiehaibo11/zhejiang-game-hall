
/* cocos2d::ui::PageView::removePage(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::PageView::removePage(PageView *this,Widget *param_1)

{
  long lVar1;
  
  lVar1 = ListView::getIndex((ListView *)this,param_1);
  ListView::removeItem((ListView *)this,lVar1);
  return;
}

