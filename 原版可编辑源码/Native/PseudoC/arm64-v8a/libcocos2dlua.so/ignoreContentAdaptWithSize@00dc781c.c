
/* cocos2d::ui::ImageView::ignoreContentAdaptWithSize(bool) */

void __thiscall cocos2d::ui::ImageView::ignoreContentAdaptWithSize(ImageView *this,bool param_1)

{
  if ((this[0x4f8] == (ImageView)0x0) || (!param_1)) {
    Widget::ignoreContentAdaptWithSize((Widget *)this,param_1);
    this[0x4f9] = (ImageView)param_1;
  }
  return;
}

