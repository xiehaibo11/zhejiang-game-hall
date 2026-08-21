
/* cocos2d::ui::PageView::scrollToPage(long, float) */

void __thiscall cocos2d::ui::PageView::scrollToPage(PageView *this,long param_1,float param_2)

{
                    /* try { // try from 00db8cf0 to 00eb8def has its CatchHandler @ 00db8cf0
                       catch() { ... } // from try @ 00db8cf0 with catch @ 00db8cf0
                       catch() { ... } // from try @ 00db8e2c with catch @ 00db8cf0 */
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

