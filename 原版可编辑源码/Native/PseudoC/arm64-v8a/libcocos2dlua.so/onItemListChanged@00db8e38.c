
/* cocos2d::ui::PageView::onItemListChanged() */

void __thiscall cocos2d::ui::PageView::onItemListChanged(PageView *this)

{
  ListView::onItemListChanged((ListView *)this);
  if (*(PageViewIndicator **)(this + 0x950) != (PageViewIndicator *)0x0) {
    PageViewIndicator::reset
              (*(PageViewIndicator **)(this + 0x950),
               *(long *)(this + 0x8c0) - *(long *)(this + 0x8b8) >> 3);
    return;
  }
  return;
}

