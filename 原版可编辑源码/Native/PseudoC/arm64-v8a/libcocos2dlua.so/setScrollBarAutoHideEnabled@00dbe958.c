
/* cocos2d::ui::ScrollView::setScrollBarAutoHideEnabled(bool) */

void __thiscall cocos2d::ui::ScrollView::setScrollBarAutoHideEnabled(ScrollView *this,bool param_1)

{
  if (*(ScrollViewBar **)(this + 0x858) != (ScrollViewBar *)0x0) {
    ScrollViewBar::setAutoHideEnabled(*(ScrollViewBar **)(this + 0x858),param_1);
  }
  if (*(ScrollViewBar **)(this + 0x860) != (ScrollViewBar *)0x0) {
    ScrollViewBar::setAutoHideEnabled(*(ScrollViewBar **)(this + 0x860),param_1);
    return;
  }
  return;
}

