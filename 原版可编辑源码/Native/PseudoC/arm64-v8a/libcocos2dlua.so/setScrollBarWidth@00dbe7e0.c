
/* cocos2d::ui::ScrollView::setScrollBarWidth(float) */

void __thiscall cocos2d::ui::ScrollView::setScrollBarWidth(ScrollView *this,float param_1)

{
  if (*(ScrollViewBar **)(this + 0x858) != (ScrollViewBar *)0x0) {
    ScrollViewBar::setWidth(*(ScrollViewBar **)(this + 0x858),param_1);
  }
  if (*(ScrollViewBar **)(this + 0x860) != (ScrollViewBar *)0x0) {
    ScrollViewBar::setWidth(*(ScrollViewBar **)(this + 0x860),param_1);
    return;
  }
  return;
}

