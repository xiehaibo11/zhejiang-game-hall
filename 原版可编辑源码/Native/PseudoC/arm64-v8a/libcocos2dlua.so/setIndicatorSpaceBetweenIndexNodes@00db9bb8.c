
/* cocos2d::ui::PageView::setIndicatorSpaceBetweenIndexNodes(float) */

void __thiscall
cocos2d::ui::PageView::setIndicatorSpaceBetweenIndexNodes(PageView *this,float param_1)

{
  if (*(PageViewIndicator **)(this + 0x950) != (PageViewIndicator *)0x0) {
    PageViewIndicator::setSpaceBetweenIndexNodes(*(PageViewIndicator **)(this + 0x950),param_1);
    return;
  }
  return;
}

