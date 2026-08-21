
/* cocos2d::ui::PageView::addWidgetToPage(cocos2d::ui::Widget*, long, bool) */

void cocos2d::ui::PageView::addWidgetToPage(Widget *param_1,long param_2,bool param_3)

{
  ListView::insertCustomItem((ListView *)param_1,(Widget *)param_2,SUB18(param_3,0));
  return;
}

