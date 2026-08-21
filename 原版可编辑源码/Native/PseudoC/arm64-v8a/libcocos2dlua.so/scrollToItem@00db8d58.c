
/* cocos2d::ui::PageView::scrollToItem(long, float) */

void __thiscall cocos2d::ui::PageView::scrollToItem(PageView *this,long param_1,float param_2)

{
  if (this[0x900] != (PageView)0x0) {
    (**(code **)(*(long *)this + 0x6a0))(this);
  }
  if (param_2 < 0.0) {
    param_2 = *(float *)(this + 0x8f0);
  }
  ListView::scrollToItem
            ((ListView *)this,param_1,(Vec2 *)&Vec2::ANCHOR_MIDDLE,(Vec2 *)&Vec2::ANCHOR_MIDDLE,
             param_2);
  return;
}

