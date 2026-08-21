
/* cocos2d::ui::PageView::setIndicatorIndexNodesOpacity(unsigned char) */

void __thiscall cocos2d::ui::PageView::setIndicatorIndexNodesOpacity(PageView *this,uchar param_1)

{
  if (*(PageViewIndicator **)(this + 0x950) != (PageViewIndicator *)0x0) {
    PageViewIndicator::setIndexNodesOpacity(*(PageViewIndicator **)(this + 0x950),param_1);
    return;
  }
  return;
}

