
/* cocos2d::ui::PageView::addPage(cocos2d::ui::Widget*) */

void __thiscall cocos2d::ui::PageView::addPage(PageView *this,Widget *param_1)

{
  ListView::pushBackCustomItem((ListView *)this,param_1);
  return;
}

