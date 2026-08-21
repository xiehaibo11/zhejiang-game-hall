
/* cocos2d::ui::PageView::setIndicatorIndexNodesTexture(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   cocos2d::ui::Widget::TextureResType) */

void cocos2d::ui::PageView::setIndicatorIndexNodesTexture(long param_1)

{
  if (*(long *)(param_1 + 0x950) != 0) {
    PageViewIndicator::setIndexNodesTexture();
    PageViewIndicator::indicate(*(PageViewIndicator **)(param_1 + 0x950),*(long *)(param_1 + 0x960))
    ;
    return;
  }
  return;
}

