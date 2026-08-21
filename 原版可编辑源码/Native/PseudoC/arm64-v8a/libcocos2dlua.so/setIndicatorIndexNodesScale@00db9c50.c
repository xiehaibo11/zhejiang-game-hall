
/* cocos2d::ui::PageView::setIndicatorIndexNodesScale(float) */

void __thiscall cocos2d::ui::PageView::setIndicatorIndexNodesScale(PageView *this,float param_1)

{
  if (*(PageViewIndicator **)(this + 0x950) != (PageViewIndicator *)0x0) {
    PageViewIndicator::setIndexNodesScale(*(PageViewIndicator **)(this + 0x950),param_1);
    PageViewIndicator::indicate(*(PageViewIndicator **)(this + 0x950),*(long *)(this + 0x960));
    return;
  }
  return;
}

