
/* cocos2d::ui::ScrollView::setScrollBarAutoHideTime(float) */

void __thiscall cocos2d::ui::ScrollView::setScrollBarAutoHideTime(ScrollView *this,float param_1)

{
  if (*(long *)(this + 0x858) != 0) {
    *(float *)(*(long *)(this + 0x858) + 0x350) = param_1;
  }
  if (*(long *)(this + 0x860) != 0) {
    *(float *)(*(long *)(this + 0x860) + 0x350) = param_1;
  }
  return;
}

