
/* cocos2d::ui::PageView::setIndicatorIndexNodesColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::ui::PageView::setIndicatorIndexNodesColor(PageView *this,Color3B *param_1)

{
  if (*(PageViewIndicator **)(this + 0x950) != (PageViewIndicator *)0x0) {
    PageViewIndicator::setIndexNodesColor(*(PageViewIndicator **)(this + 0x950),param_1);
    return;
  }
  return;
}

